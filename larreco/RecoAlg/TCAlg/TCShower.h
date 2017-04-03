////////////////////////////////////////////////////////////////////////
//
//
// TCAlg shower code
//
// Bruce Baller
//
///////////////////////////////////////////////////////////////////////
#ifndef TRAJCLUSTERALGSHOWERS_H
#define TRAJCLUSTERALGSHOWERS_H


// C/C++ standard libraries
#include <array>
#include <vector>
#include <bitset>
#include <utility> // std::pair<>
#include <cmath>
#include <iostream>
#include <iomanip>
#include <algorithm>

#include "messagefacility/MessageLogger/MessageLogger.h"

// LArSoft libraries
#include "larcoreobj/SimpleTypesAndConstants/geo_types.h"
#include "larreco/RecoAlg/TCAlg/DataStructs.h"
#include "larreco/RecoAlg/TCAlg/DebugStruct.h"
#include "larreco/RecoAlg/TCAlg/Utils.h"
#include "larreco/Calorimetry/CalorimetryAlg.h"

namespace tca {
  void MakeShowers(TjStuff& tjs, const calo::CalorimetryAlg& fCaloAlg);
  void FindShowers(TjStuff& tjs, const CTP_t& inCTP);
  void AddMissedTjs(TjStuff& tjs, const CTP_t& inCTP, std::vector<unsigned short>& tjl);
  void TagShowerTjs(TjStuff& tjs, const CTP_t& inCTP, std::vector<std::vector<unsigned short>>& tjList);
  void FindShowerCenter(TjStuff& tjs, const unsigned short& cotIndex, bool prt);
  void FindShowerAxis(TjStuff& tjs, const unsigned short& cotIndex, bool prt);
  void FindParent(TjStuff& tjs, const unsigned short& showerIndex, bool prt);
  float ParentFOM(TjStuff& tjs, Trajectory& tj, const unsigned short& tjPt, ShowerStruct& ss, bool prt);
  void FindFirstTPAng(TjStuff& tjs, const unsigned short& cotIndex, bool prt);
  void DefineShowerTj(TjStuff& tjs, const unsigned short& cotIndex, bool prt);
  void DefineEnvelope(TjStuff& tjs, const unsigned short& cotIndex, bool prt);
  bool AddTjsInsideEnvelope(TjStuff& tjs, const unsigned short& cotIndex, bool prt);
  void MergeShowers(TjStuff& tjs, const CTP_t& inCTP, bool prt);
  void TransferTjHits(TjStuff& tjs, const CTP_t& inCTP, bool prt);
  void CollectLooseHits(TjStuff& tjs, const CTP_t& inCTP, bool prt);
  float ShowerEnergy(const TjStuff& tjs, const ShowerStruct& ss);
  void SpacePtDir(TjStuff& tjs, TrajPoint itp, TrajPoint jtp, TVector3& dir, TVector3& dirErr);
}


#endif // ifndef TRAJCLUSTERALGSHOWERS_H