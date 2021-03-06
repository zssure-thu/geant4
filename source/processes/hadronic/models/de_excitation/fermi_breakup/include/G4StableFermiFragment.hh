//
// ********************************************************************
// * License and Disclaimer                                           *
// *                                                                  *
// * The  Geant4 software  is  copyright of the Copyright Holders  of *
// * the Geant4 Collaboration.  It is provided  under  the terms  and *
// * conditions of the Geant4 Software License,  included in the file *
// * LICENSE and available at  http://cern.ch/geant4/license .  These *
// * include a list of copyright holders.                             *
// *                                                                  *
// * Neither the authors of this software system, nor their employing *
// * institutes,nor the agencies providing financial support for this *
// * work  make  any representation or  warranty, express or implied, *
// * regarding  this  software system or assume any liability for its *
// * use.  Please see the license in the file  LICENSE  and URL above *
// * for the full disclaimer and the limitation of liability.         *
// *                                                                  *
// * This  code  implementation is the result of  the  scientific and *
// * technical work of the GEANT4 collaboration.                      *
// * By using,  copying,  modifying or  distributing the software (or *
// * any work based  on the software)  you  agree  to acknowledge its *
// * use  in  resulting  scientific  publications,  and indicate your *
// * acceptance of all terms of the Geant4 Software license.          *
// ********************************************************************
//
// $Id: G4StableFermiFragment.hh 97097 2016-05-25 07:50:31Z gcosmo $
//
// Hadronic Process: Nuclear De-excitations
// by V. Lara (Nov 1998)
//
// Modifications:
// 01.04.2011 General cleanup by V.Ivanchenko

#ifndef G4StableFermiFragment_h
#define G4StableFermiFragment_h 1

#include "G4VFermiFragment.hh"

class G4StableFermiFragment : public G4VFermiFragment 
{
public:

  explicit G4StableFermiFragment(G4int anA, G4int aZ, G4int Pol, G4double ExE);

  virtual ~G4StableFermiFragment();

  virtual void FillFragment(G4FragmentVector*, const G4LorentzVector & aMomentum) const final;
  
private:

  G4StableFermiFragment(const G4StableFermiFragment &right) = delete;
  const G4StableFermiFragment & operator=(const G4StableFermiFragment &right) = delete;
  G4bool operator==(const G4StableFermiFragment &right) const = delete;
  G4bool operator!=(const G4StableFermiFragment &right) const = delete;

};


#endif


