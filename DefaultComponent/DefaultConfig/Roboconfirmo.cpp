/********************************************************************
	Rhapsody	: 8.4 
	Login		: chris
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Roboconfirmo
//!	Generated Date	: Thu, 2, Jul 2020  
	File Path	: DefaultComponent/DefaultConfig/Roboconfirmo.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Roboconfirmo.h"
//## auto_generated
#include "UC.h"
//#[ ignore
#define btnClean_SERIALIZE OM_NO_OP

#define btnClean_UNSERIALIZE OM_NO_OP

#define btnClean_CONSTRUCTOR btnClean()

#define btnDock_SERIALIZE OM_NO_OP

#define btnDock_UNSERIALIZE OM_NO_OP

#define btnDock_CONSTRUCTOR btnDock()

#define btnSpot_SERIALIZE OM_NO_OP

#define btnSpot_UNSERIALIZE OM_NO_OP

#define btnSpot_CONSTRUCTOR btnSpot()

#define bumpCrash_SERIALIZE OM_NO_OP

#define bumpCrash_UNSERIALIZE OM_NO_OP

#define bumpCrash_CONSTRUCTOR bumpCrash()

#define cliffDetect_SERIALIZE OM_NO_OP

#define cliffDetect_UNSERIALIZE OM_NO_OP

#define cliffDetect_CONSTRUCTOR cliffDetect()

#define evActuatorFinish_SERIALIZE OM_NO_OP

#define evActuatorFinish_UNSERIALIZE OM_NO_OP

#define evActuatorFinish_CONSTRUCTOR evActuatorFinish()

#define evClearPath_SERIALIZE OM_NO_OP

#define evClearPath_UNSERIALIZE OM_NO_OP

#define evClearPath_CONSTRUCTOR evClearPath()

#define evCliff_SERIALIZE OM_NO_OP

#define evCliff_UNSERIALIZE OM_NO_OP

#define evCliff_CONSTRUCTOR evCliff()

#define evComputeFinish_SERIALIZE OM_NO_OP

#define evComputeFinish_UNSERIALIZE OM_NO_OP

#define evComputeFinish_CONSTRUCTOR evComputeFinish()

#define evDist30_SERIALIZE OM_NO_OP

#define evDist30_UNSERIALIZE OM_NO_OP

#define evDist30_CONSTRUCTOR evDist30()

#define evFindObstacle_SERIALIZE OM_NO_OP

#define evFindObstacle_UNSERIALIZE OM_NO_OP

#define evFindObstacle_CONSTRUCTOR evFindObstacle()

#define evFrontObstacle_SERIALIZE OM_NO_OP

#define evFrontObstacle_UNSERIALIZE OM_NO_OP

#define evFrontObstacle_CONSTRUCTOR evFrontObstacle()

#define evGoesAway_SERIALIZE OM_NO_OP

#define evGoesAway_UNSERIALIZE OM_NO_OP

#define evGoesAway_CONSTRUCTOR evGoesAway()

#define evIsGoodPos_SERIALIZE OM_NO_OP

#define evIsGoodPos_UNSERIALIZE OM_NO_OP

#define evIsGoodPos_CONSTRUCTOR evIsGoodPos()

#define evLBumpFront_SERIALIZE OM_NO_OP

#define evLBumpFront_UNSERIALIZE OM_NO_OP

#define evLBumpFront_CONSTRUCTOR evLBumpFront()

#define evLBumpFrontClear_SERIALIZE OM_NO_OP

#define evLBumpFrontClear_UNSERIALIZE OM_NO_OP

#define evLBumpFrontClear_CONSTRUCTOR evLBumpFrontClear()

#define evLBumpFrontEnable_SERIALIZE OM_NO_OP

#define evLBumpFrontEnable_UNSERIALIZE OM_NO_OP

#define evLBumpFrontEnable_CONSTRUCTOR evLBumpFrontEnable()

#define evLostObstacle_SERIALIZE OM_NO_OP

#define evLostObstacle_UNSERIALIZE OM_NO_OP

#define evLostObstacle_CONSTRUCTOR evLostObstacle()

#define evObstaculoEnFrente_SERIALIZE OM_NO_OP

#define evObstaculoEnFrente_UNSERIALIZE OM_NO_OP

#define evObstaculoEnFrente_CONSTRUCTOR evObstaculoEnFrente()

#define evPersonApproach_SERIALIZE OM_NO_OP

#define evPersonApproach_UNSERIALIZE OM_NO_OP

#define evPersonApproach_CONSTRUCTOR evPersonApproach()

#define evPersonFind_SERIALIZE OM_NO_OP

#define evPersonFind_UNSERIALIZE OM_NO_OP

#define evPersonFind_CONSTRUCTOR evPersonFind()

#define evPersonInView_SERIALIZE OM_NO_OP

#define evPersonInView_UNSERIALIZE OM_NO_OP

#define evPersonInView_CONSTRUCTOR evPersonInView()

#define evPersonLost_SERIALIZE OM_NO_OP

#define evPersonLost_UNSERIALIZE OM_NO_OP

#define evPersonLost_CONSTRUCTOR evPersonLost()

#define evRobotInDock_SERIALIZE OM_NO_OP

#define evRobotInDock_UNSERIALIZE OM_NO_OP

#define evRobotInDock_CONSTRUCTOR evRobotInDock()

#define evRotate25_SERIALIZE OM_NO_OP

#define evRotate25_UNSERIALIZE OM_NO_OP

#define evRotate25_CONSTRUCTOR evRotate25()

#define goesAway_SERIALIZE OM_NO_OP

#define goesAway_UNSERIALIZE OM_NO_OP

#define goesAway_CONSTRUCTOR goesAway()

#define isRightThere_SERIALIZE OM_NO_OP

#define isRightThere_UNSERIALIZE OM_NO_OP

#define isRightThere_CONSTRUCTOR isRightThere()

#define LigthBumpFrontTrig_SERIALIZE OM_NO_OP

#define LigthBumpFrontTrig_UNSERIALIZE OM_NO_OP

#define LigthBumpFrontTrig_CONSTRUCTOR LigthBumpFrontTrig()
//#]

//## package Roboconfirmo


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(Roboconfirmo, Roboconfirmo)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event btnClean()
btnClean::btnClean() {
    NOTIFY_EVENT_CONSTRUCTOR(btnClean)
    setId(btnClean_Roboconfirmo_id);
}

bool btnClean::isTypeOf(const short id) const {
    return (btnClean_Roboconfirmo_id==id);
}

IMPLEMENT_META_EVENT_P(btnClean, Roboconfirmo, Roboconfirmo, btnClean())

//## event btnDock()
btnDock::btnDock() {
    NOTIFY_EVENT_CONSTRUCTOR(btnDock)
    setId(btnDock_Roboconfirmo_id);
}

bool btnDock::isTypeOf(const short id) const {
    return (btnDock_Roboconfirmo_id==id);
}

IMPLEMENT_META_EVENT_P(btnDock, Roboconfirmo, Roboconfirmo, btnDock())

//## event btnSpot()
btnSpot::btnSpot() {
    NOTIFY_EVENT_CONSTRUCTOR(btnSpot)
    setId(btnSpot_Roboconfirmo_id);
}

bool btnSpot::isTypeOf(const short id) const {
    return (btnSpot_Roboconfirmo_id==id);
}

IMPLEMENT_META_EVENT_P(btnSpot, Roboconfirmo, Roboconfirmo, btnSpot())

//## event bumpCrash()
bumpCrash::bumpCrash() {
    NOTIFY_EVENT_CONSTRUCTOR(bumpCrash)
    setId(bumpCrash_Roboconfirmo_id);
}

bool bumpCrash::isTypeOf(const short id) const {
    return (bumpCrash_Roboconfirmo_id==id);
}

IMPLEMENT_META_EVENT_P(bumpCrash, Roboconfirmo, Roboconfirmo, bumpCrash())

//## event cliffDetect()
cliffDetect::cliffDetect() {
    NOTIFY_EVENT_CONSTRUCTOR(cliffDetect)
    setId(cliffDetect_Roboconfirmo_id);
}

bool cliffDetect::isTypeOf(const short id) const {
    return (cliffDetect_Roboconfirmo_id==id);
}

IMPLEMENT_META_EVENT_P(cliffDetect, Roboconfirmo, Roboconfirmo, cliffDetect())

//## event evActuatorFinish()
evActuatorFinish::evActuatorFinish() {
    NOTIFY_EVENT_CONSTRUCTOR(evActuatorFinish)
    setId(evActuatorFinish_Roboconfirmo_id);
}

bool evActuatorFinish::isTypeOf(const short id) const {
    return (evActuatorFinish_Roboconfirmo_id==id);
}

IMPLEMENT_META_EVENT_P(evActuatorFinish, Roboconfirmo, Roboconfirmo, evActuatorFinish())

//## event evClearPath()
evClearPath::evClearPath() {
    NOTIFY_EVENT_CONSTRUCTOR(evClearPath)
    setId(evClearPath_Roboconfirmo_id);
}

bool evClearPath::isTypeOf(const short id) const {
    return (evClearPath_Roboconfirmo_id==id);
}

IMPLEMENT_META_EVENT_P(evClearPath, Roboconfirmo, Roboconfirmo, evClearPath())

//## event evCliff()
evCliff::evCliff() {
    NOTIFY_EVENT_CONSTRUCTOR(evCliff)
    setId(evCliff_Roboconfirmo_id);
}

bool evCliff::isTypeOf(const short id) const {
    return (evCliff_Roboconfirmo_id==id);
}

IMPLEMENT_META_EVENT_P(evCliff, Roboconfirmo, Roboconfirmo, evCliff())

//## event evComputeFinish()
evComputeFinish::evComputeFinish() {
    NOTIFY_EVENT_CONSTRUCTOR(evComputeFinish)
    setId(evComputeFinish_Roboconfirmo_id);
}

bool evComputeFinish::isTypeOf(const short id) const {
    return (evComputeFinish_Roboconfirmo_id==id);
}

IMPLEMENT_META_EVENT_P(evComputeFinish, Roboconfirmo, Roboconfirmo, evComputeFinish())

//## event evDist30()
evDist30::evDist30() {
    NOTIFY_EVENT_CONSTRUCTOR(evDist30)
    setId(evDist30_Roboconfirmo_id);
}

bool evDist30::isTypeOf(const short id) const {
    return (evDist30_Roboconfirmo_id==id);
}

IMPLEMENT_META_EVENT_P(evDist30, Roboconfirmo, Roboconfirmo, evDist30())

//## event evFindObstacle()
evFindObstacle::evFindObstacle() {
    NOTIFY_EVENT_CONSTRUCTOR(evFindObstacle)
    setId(evFindObstacle_Roboconfirmo_id);
}

bool evFindObstacle::isTypeOf(const short id) const {
    return (evFindObstacle_Roboconfirmo_id==id);
}

IMPLEMENT_META_EVENT_P(evFindObstacle, Roboconfirmo, Roboconfirmo, evFindObstacle())

//## event evFrontObstacle()
evFrontObstacle::evFrontObstacle() {
    NOTIFY_EVENT_CONSTRUCTOR(evFrontObstacle)
    setId(evFrontObstacle_Roboconfirmo_id);
}

bool evFrontObstacle::isTypeOf(const short id) const {
    return (evFrontObstacle_Roboconfirmo_id==id);
}

IMPLEMENT_META_EVENT_P(evFrontObstacle, Roboconfirmo, Roboconfirmo, evFrontObstacle())

//## event evGoesAway()
evGoesAway::evGoesAway() {
    NOTIFY_EVENT_CONSTRUCTOR(evGoesAway)
    setId(evGoesAway_Roboconfirmo_id);
}

bool evGoesAway::isTypeOf(const short id) const {
    return (evGoesAway_Roboconfirmo_id==id);
}

IMPLEMENT_META_EVENT_P(evGoesAway, Roboconfirmo, Roboconfirmo, evGoesAway())

//## event evIsGoodPos()
evIsGoodPos::evIsGoodPos() {
    NOTIFY_EVENT_CONSTRUCTOR(evIsGoodPos)
    setId(evIsGoodPos_Roboconfirmo_id);
}

bool evIsGoodPos::isTypeOf(const short id) const {
    return (evIsGoodPos_Roboconfirmo_id==id);
}

IMPLEMENT_META_EVENT_P(evIsGoodPos, Roboconfirmo, Roboconfirmo, evIsGoodPos())

//## event evLBumpFront()
evLBumpFront::evLBumpFront() {
    NOTIFY_EVENT_CONSTRUCTOR(evLBumpFront)
    setId(evLBumpFront_Roboconfirmo_id);
}

bool evLBumpFront::isTypeOf(const short id) const {
    return (evLBumpFront_Roboconfirmo_id==id);
}

IMPLEMENT_META_EVENT_P(evLBumpFront, Roboconfirmo, Roboconfirmo, evLBumpFront())

//## event evLBumpFrontClear()
evLBumpFrontClear::evLBumpFrontClear() {
    NOTIFY_EVENT_CONSTRUCTOR(evLBumpFrontClear)
    setId(evLBumpFrontClear_Roboconfirmo_id);
}

bool evLBumpFrontClear::isTypeOf(const short id) const {
    return (evLBumpFrontClear_Roboconfirmo_id==id);
}

IMPLEMENT_META_EVENT_P(evLBumpFrontClear, Roboconfirmo, Roboconfirmo, evLBumpFrontClear())

//## event evLBumpFrontEnable()
evLBumpFrontEnable::evLBumpFrontEnable() {
    NOTIFY_EVENT_CONSTRUCTOR(evLBumpFrontEnable)
    setId(evLBumpFrontEnable_Roboconfirmo_id);
}

bool evLBumpFrontEnable::isTypeOf(const short id) const {
    return (evLBumpFrontEnable_Roboconfirmo_id==id);
}

IMPLEMENT_META_EVENT_P(evLBumpFrontEnable, Roboconfirmo, Roboconfirmo, evLBumpFrontEnable())

//## event evLostObstacle()
evLostObstacle::evLostObstacle() {
    NOTIFY_EVENT_CONSTRUCTOR(evLostObstacle)
    setId(evLostObstacle_Roboconfirmo_id);
}

bool evLostObstacle::isTypeOf(const short id) const {
    return (evLostObstacle_Roboconfirmo_id==id);
}

IMPLEMENT_META_EVENT_P(evLostObstacle, Roboconfirmo, Roboconfirmo, evLostObstacle())

//## event evObstaculoEnFrente()
evObstaculoEnFrente::evObstaculoEnFrente() {
    NOTIFY_EVENT_CONSTRUCTOR(evObstaculoEnFrente)
    setId(evObstaculoEnFrente_Roboconfirmo_id);
}

bool evObstaculoEnFrente::isTypeOf(const short id) const {
    return (evObstaculoEnFrente_Roboconfirmo_id==id);
}

IMPLEMENT_META_EVENT_P(evObstaculoEnFrente, Roboconfirmo, Roboconfirmo, evObstaculoEnFrente())

//## event evPersonApproach()
evPersonApproach::evPersonApproach() {
    NOTIFY_EVENT_CONSTRUCTOR(evPersonApproach)
    setId(evPersonApproach_Roboconfirmo_id);
}

bool evPersonApproach::isTypeOf(const short id) const {
    return (evPersonApproach_Roboconfirmo_id==id);
}

IMPLEMENT_META_EVENT_P(evPersonApproach, Roboconfirmo, Roboconfirmo, evPersonApproach())

//## event evPersonFind()
evPersonFind::evPersonFind() {
    NOTIFY_EVENT_CONSTRUCTOR(evPersonFind)
    setId(evPersonFind_Roboconfirmo_id);
}

bool evPersonFind::isTypeOf(const short id) const {
    return (evPersonFind_Roboconfirmo_id==id);
}

IMPLEMENT_META_EVENT_P(evPersonFind, Roboconfirmo, Roboconfirmo, evPersonFind())

//## event evPersonInView()
evPersonInView::evPersonInView() {
    NOTIFY_EVENT_CONSTRUCTOR(evPersonInView)
    setId(evPersonInView_Roboconfirmo_id);
}

bool evPersonInView::isTypeOf(const short id) const {
    return (evPersonInView_Roboconfirmo_id==id);
}

IMPLEMENT_META_EVENT_P(evPersonInView, Roboconfirmo, Roboconfirmo, evPersonInView())

//## event evPersonLost()
evPersonLost::evPersonLost() {
    NOTIFY_EVENT_CONSTRUCTOR(evPersonLost)
    setId(evPersonLost_Roboconfirmo_id);
}

bool evPersonLost::isTypeOf(const short id) const {
    return (evPersonLost_Roboconfirmo_id==id);
}

IMPLEMENT_META_EVENT_P(evPersonLost, Roboconfirmo, Roboconfirmo, evPersonLost())

//## event evRobotInDock()
evRobotInDock::evRobotInDock() {
    NOTIFY_EVENT_CONSTRUCTOR(evRobotInDock)
    setId(evRobotInDock_Roboconfirmo_id);
}

bool evRobotInDock::isTypeOf(const short id) const {
    return (evRobotInDock_Roboconfirmo_id==id);
}

IMPLEMENT_META_EVENT_P(evRobotInDock, Roboconfirmo, Roboconfirmo, evRobotInDock())

//## event evRotate25()
evRotate25::evRotate25() {
    NOTIFY_EVENT_CONSTRUCTOR(evRotate25)
    setId(evRotate25_Roboconfirmo_id);
}

bool evRotate25::isTypeOf(const short id) const {
    return (evRotate25_Roboconfirmo_id==id);
}

IMPLEMENT_META_EVENT_P(evRotate25, Roboconfirmo, Roboconfirmo, evRotate25())

//## event goesAway()
goesAway::goesAway() {
    NOTIFY_EVENT_CONSTRUCTOR(goesAway)
    setId(goesAway_Roboconfirmo_id);
}

bool goesAway::isTypeOf(const short id) const {
    return (goesAway_Roboconfirmo_id==id);
}

IMPLEMENT_META_EVENT_P(goesAway, Roboconfirmo, Roboconfirmo, goesAway())

//## event isRightThere()
isRightThere::isRightThere() {
    NOTIFY_EVENT_CONSTRUCTOR(isRightThere)
    setId(isRightThere_Roboconfirmo_id);
}

bool isRightThere::isTypeOf(const short id) const {
    return (isRightThere_Roboconfirmo_id==id);
}

IMPLEMENT_META_EVENT_P(isRightThere, Roboconfirmo, Roboconfirmo, isRightThere())

//## event LigthBumpFrontTrig()
LigthBumpFrontTrig::LigthBumpFrontTrig() {
    NOTIFY_EVENT_CONSTRUCTOR(LigthBumpFrontTrig)
    setId(LigthBumpFrontTrig_Roboconfirmo_id);
}

bool LigthBumpFrontTrig::isTypeOf(const short id) const {
    return (LigthBumpFrontTrig_Roboconfirmo_id==id);
}

IMPLEMENT_META_EVENT_P(LigthBumpFrontTrig, Roboconfirmo, Roboconfirmo, LigthBumpFrontTrig())

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Roboconfirmo.cpp
*********************************************************************/
