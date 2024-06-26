#ifndef ALIKFCONVERSIONPHOTON_H
#define ALIKFCONVERSIONPHOTON_H
/* Copyright(c) 1998-1999, ALICE Experiment at CERN, All rights reserved. *
 * See cxx source for full Copyright notice     */

////////////////////////////////////////////////
//--------------------------------------------- 
// Class containing the aod information from conversions
//---------------------------------------------
////////////////////////////////////////////////

// --- ROOT system ---

#include "TMath.h"
#include "AliConversionPhotonBase.h"
#include "AliGAKFParticle.h"
// #include "AliV0Reader.h"
#include "AliESDEvent.h"
#include "AliPID.h"
// #include "TParticle.h"
#include "TF1.h"
#include "TRandom3.h"

class AliConversionPhotonBase;

class AliKFConversionPhoton : public AliGAKFParticle, public AliConversionPhotonBase {

 public: 

  //Constructors
  AliKFConversionPhoton();    
  AliKFConversionPhoton(AliGAKFParticle &kfparticle);
//   AliKFConversionPhoton(AliV0Reader *fV0Reader);
  AliKFConversionPhoton(const AliGAKFParticle &fCurrentNegativeKFParticle,const AliGAKFParticle &fCurrentPositiveKFParticle);

  //Copy Constructor
  AliKFConversionPhoton(const AliKFConversionPhoton & g);           
  //assignment operator
  AliKFConversionPhoton & operator = (const AliKFConversionPhoton & g);

  //Destructor
  virtual ~AliKFConversionPhoton() {;}

  //
 void SetArmenterosQtAlpha(Double_t armenteros[2],const AliGAKFParticle &fCurrentNegativeKFParticle,const AliGAKFParticle &fCurrentPositiveKFParticle);
  void ConstructGamma(const AliGAKFParticle &fCurrentNegativeKFParticle,const AliGAKFParticle &fCurrentPositiveKFParticle);


  Double_t Phi() const;

  // GetInvariantMass

  Double_t M() const {return AliGAKFParticle::GetMass();}
  Double_t Pt() const {return AliGAKFParticle::GetPt();}
  Double_t P() const {return AliGAKFParticle::GetP();}
  Double_t Eta() const {return AliGAKFParticle::GetEta();}

  virtual Double_t GetPhotonMass() const {return M();}
  virtual Double_t GetPhotonPt() const {return Pt();}
  virtual Double_t GetPhotonP() const {return P();}
  virtual Double_t GetPhotonEta() const {return Eta();}
  virtual Double_t GetPhotonPhi() const {return Phi();} 
  virtual Double_t GetPx() const { return AliGAKFParticle::GetPx();}
  virtual Double_t GetPy() const { return AliGAKFParticle::GetPy();}
  virtual Double_t GetPz() const { return AliGAKFParticle::GetPz();}

  ClassDef(AliKFConversionPhoton,1)
};

#endif
