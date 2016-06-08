//
// ********************************************************************
// * DISCLAIMER                                                       *
// *                                                                  *
// * The following disclaimer summarizes all the specific disclaimers *
// * of contributors to this software. The specific disclaimers,which *
// * govern, are listed with their locations in:                      *
// *   http://cern.ch/geant4/license                                  *
// *                                                                  *
// * Neither the authors of this software system, nor their employing *
// * institutes,nor the agencies providing financial support for this *
// * work  make  any representation or  warranty, express or implied, *
// * regarding  this  software system or assume any liability for its *
// * use.                                                             *
// *                                                                  *
// * This  code  implementation is the  intellectual property  of the *
// * GEANT4 collaboration.                                            *
// * By copying,  distributing  or modifying the Program (or any work *
// * based  on  the Program)  you indicate  your  acceptance of  this *
// * statement, and all its terms.                                    *
// ********************************************************************
//
//
// $Id: G4MassImportanceScoreSampler.cc,v 1.1 2002/05/31 10:16:02 dressel Exp $
// GEANT4 tag $Name: geant4-04-01-patch-01 $
//
// ----------------------------------------------------------------------
// GEANT 4 class source file
//
// G4MassImportanceScoreSampler.cc
//
// ----------------------------------------------------------------------

#include "G4MassImportanceScoreSampler.hh"
#include "G4MassImportanceSampler.hh"
#include "G4MassScoreSampler.hh"


G4MassImportanceScoreSampler::
G4MassImportanceScoreSampler(G4VIStore &aIstore,
			     G4VPScorer &ascorer,
			     const G4String &particlename,
			     const G4VImportanceAlgorithm *algorithm)
 : fMassImportanceSampler(new G4MassImportanceSampler(aIstore, 
                                                      particlename,
                                                      algorithm)),
   fMassScoreSampler(new G4MassScoreSampler(ascorer, particlename))
{}

G4MassImportanceScoreSampler::~G4MassImportanceScoreSampler()
{
  delete fMassScoreSampler;
  delete fMassImportanceSampler;
}

void G4MassImportanceScoreSampler::Initialize()
{
  fMassScoreSampler->Initialize();
  fMassImportanceSampler->Initialize();
}