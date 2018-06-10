#ifndef FakeBackgroundEstimator_h
#define FakeBackgroundEstimator_h

#include "TString.h"
#include "Lepton.h"
#include "Muon.h"
#include "Electron.h"
#include "AnalyzerParameter.h"

class FakeBackgroundEstimator{

public:

  FakeBackgroundEstimator();
  ~FakeBackgroundEstimator();

  bool IgnoreNoHist;

  std::map< TString, TH2D* > map_hist_Electron;
  std::map< TString, TH2D* > map_hist_Muon;

  double GetElectronFakeRate(TString ID, TString key, double eta, double pt, int sys=0);
  double GetMuonFakeRate(TString ID, TString key, double eta, double pt, int sys=0);

  bool HasLooseLepton;
  double GetWeight(vector<Lepton *> lepptrs, AnalyzerParameter param, int sys=0);

};

#endif
