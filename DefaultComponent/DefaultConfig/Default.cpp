/********************************************************************
	Rhapsody	: 8.4 
	Login		: chris
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Default
//!	Generated Date	: Mon, 29, Jun 2020  
	File Path	: DefaultComponent/DefaultConfig/Default.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Default.h"
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

//## package Default


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(Default, Default)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event btnClean()
btnClean::btnClean() {
    NOTIFY_EVENT_CONSTRUCTOR(btnClean)
    setId(btnClean_Default_id);
}

bool btnClean::isTypeOf(const short id) const {
    return (btnClean_Default_id==id);
}

IMPLEMENT_META_EVENT_P(btnClean, Default, Default, btnClean())

//## event btnDock()
btnDock::btnDock() {
    NOTIFY_EVENT_CONSTRUCTOR(btnDock)
    setId(btnDock_Default_id);
}

bool btnDock::isTypeOf(const short id) const {
    return (btnDock_Default_id==id);
}

IMPLEMENT_META_EVENT_P(btnDock, Default, Default, btnDock())

//## event btnSpot()
btnSpot::btnSpot() {
    NOTIFY_EVENT_CONSTRUCTOR(btnSpot)
    setId(btnSpot_Default_id);
}

bool btnSpot::isTypeOf(const short id) const {
    return (btnSpot_Default_id==id);
}

IMPLEMENT_META_EVENT_P(btnSpot, Default, Default, btnSpot())

//## event bumpCrash()
bumpCrash::bumpCrash() {
    NOTIFY_EVENT_CONSTRUCTOR(bumpCrash)
    setId(bumpCrash_Default_id);
}

bool bumpCrash::isTypeOf(const short id) const {
    return (bumpCrash_Default_id==id);
}

IMPLEMENT_META_EVENT_P(bumpCrash, Default, Default, bumpCrash())

//## event cliffDetect()
cliffDetect::cliffDetect() {
    NOTIFY_EVENT_CONSTRUCTOR(cliffDetect)
    setId(cliffDetect_Default_id);
}

bool cliffDetect::isTypeOf(const short id) const {
    return (cliffDetect_Default_id==id);
}

IMPLEMENT_META_EVENT_P(cliffDetect, Default, Default, cliffDetect())

//## event evActuatorFinish()
evActuatorFinish::evActuatorFinish() {
    NOTIFY_EVENT_CONSTRUCTOR(evActuatorFinish)
    setId(evActuatorFinish_Default_id);
}

bool evActuatorFinish::isTypeOf(const short id) const {
    return (evActuatorFinish_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evActuatorFinish, Default, Default, evActuatorFinish())

//## event evClearPath()
evClearPath::evClearPath() {
    NOTIFY_EVENT_CONSTRUCTOR(evClearPath)
    setId(evClearPath_Default_id);
}

bool evClearPath::isTypeOf(const short id) const {
    return (evClearPath_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evClearPath, Default, Default, evClearPath())

//## event evCliff()
evCliff::evCliff() {
    NOTIFY_EVENT_CONSTRUCTOR(evCliff)
    setId(evCliff_Default_id);
}

bool evCliff::isTypeOf(const short id) const {
    return (evCliff_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evCliff, Default, Default, evCliff())

//## event evComputeFinish()
evComputeFinish::evComputeFinish() {
    NOTIFY_EVENT_CONSTRUCTOR(evComputeFinish)
    setId(evComputeFinish_Default_id);
}

bool evComputeFinish::isTypeOf(const short id) const {
    return (evComputeFinish_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evComputeFinish, Default, Default, evComputeFinish())

//## event evDist30()
evDist30::evDist30() {
    NOTIFY_EVENT_CONSTRUCTOR(evDist30)
    setId(evDist30_Default_id);
}

bool evDist30::isTypeOf(const short id) const {
    return (evDist30_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evDist30, Default, Default, evDist30())

//## event evFindObstacle()
evFindObstacle::evFindObstacle() {
    NOTIFY_EVENT_CONSTRUCTOR(evFindObstacle)
    setId(evFindObstacle_Default_id);
}

bool evFindObstacle::isTypeOf(const short id) const {
    return (evFindObstacle_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evFindObstacle, Default, Default, evFindObstacle())

//## event evFrontObstacle()
evFrontObstacle::evFrontObstacle() {
    NOTIFY_EVENT_CONSTRUCTOR(evFrontObstacle)
    setId(evFrontObstacle_Default_id);
}

bool evFrontObstacle::isTypeOf(const short id) const {
    return (evFrontObstacle_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evFrontObstacle, Default, Default, evFrontObstacle())

//## event evGoesAway()
evGoesAway::evGoesAway() {
    NOTIFY_EVENT_CONSTRUCTOR(evGoesAway)
    setId(evGoesAway_Default_id);
}

bool evGoesAway::isTypeOf(const short id) const {
    return (evGoesAway_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evGoesAway, Default, Default, evGoesAway())

//## event evIsGoodPos()
evIsGoodPos::evIsGoodPos() {
    NOTIFY_EVENT_CONSTRUCTOR(evIsGoodPos)
    setId(evIsGoodPos_Default_id);
}

bool evIsGoodPos::isTypeOf(const short id) const {
    return (evIsGoodPos_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evIsGoodPos, Default, Default, evIsGoodPos())

//## event evLBumpFront()
evLBumpFront::evLBumpFront() {
    NOTIFY_EVENT_CONSTRUCTOR(evLBumpFront)
    setId(evLBumpFront_Default_id);
}

bool evLBumpFront::isTypeOf(const short id) const {
    return (evLBumpFront_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evLBumpFront, Default, Default, evLBumpFront())

//## event evLBumpFrontClear()
evLBumpFrontClear::evLBumpFrontClear() {
    NOTIFY_EVENT_CONSTRUCTOR(evLBumpFrontClear)
    setId(evLBumpFrontClear_Default_id);
}

bool evLBumpFrontClear::isTypeOf(const short id) const {
    return (evLBumpFrontClear_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evLBumpFrontClear, Default, Default, evLBumpFrontClear())

//## event evLBumpFrontEnable()
evLBumpFrontEnable::evLBumpFrontEnable() {
    NOTIFY_EVENT_CONSTRUCTOR(evLBumpFrontEnable)
    setId(evLBumpFrontEnable_Default_id);
}

bool evLBumpFrontEnable::isTypeOf(const short id) const {
    return (evLBumpFrontEnable_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evLBumpFrontEnable, Default, Default, evLBumpFrontEnable())

//## event evLostObstacle()
evLostObstacle::evLostObstacle() {
    NOTIFY_EVENT_CONSTRUCTOR(evLostObstacle)
    setId(evLostObstacle_Default_id);
}

bool evLostObstacle::isTypeOf(const short id) const {
    return (evLostObstacle_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evLostObstacle, Default, Default, evLostObstacle())

//## event evObstaculoEnFrente()
evObstaculoEnFrente::evObstaculoEnFrente() {
    NOTIFY_EVENT_CONSTRUCTOR(evObstaculoEnFrente)
    setId(evObstaculoEnFrente_Default_id);
}

bool evObstaculoEnFrente::isTypeOf(const short id) const {
    return (evObstaculoEnFrente_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evObstaculoEnFrente, Default, Default, evObstaculoEnFrente())

//## event evPersonApproach()
evPersonApproach::evPersonApproach() {
    NOTIFY_EVENT_CONSTRUCTOR(evPersonApproach)
    setId(evPersonApproach_Default_id);
}

bool evPersonApproach::isTypeOf(const short id) const {
    return (evPersonApproach_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evPersonApproach, Default, Default, evPersonApproach())

//## event evPersonFind()
evPersonFind::evPersonFind() {
    NOTIFY_EVENT_CONSTRUCTOR(evPersonFind)
    setId(evPersonFind_Default_id);
}

bool evPersonFind::isTypeOf(const short id) const {
    return (evPersonFind_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evPersonFind, Default, Default, evPersonFind())

//## event evPersonInView()
evPersonInView::evPersonInView() {
    NOTIFY_EVENT_CONSTRUCTOR(evPersonInView)
    setId(evPersonInView_Default_id);
}

bool evPersonInView::isTypeOf(const short id) const {
    return (evPersonInView_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evPersonInView, Default, Default, evPersonInView())

//## event evPersonLost()
evPersonLost::evPersonLost() {
    NOTIFY_EVENT_CONSTRUCTOR(evPersonLost)
    setId(evPersonLost_Default_id);
}

bool evPersonLost::isTypeOf(const short id) const {
    return (evPersonLost_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evPersonLost, Default, Default, evPersonLost())

//## event evRobotInDock()
evRobotInDock::evRobotInDock() {
    NOTIFY_EVENT_CONSTRUCTOR(evRobotInDock)
    setId(evRobotInDock_Default_id);
}

bool evRobotInDock::isTypeOf(const short id) const {
    return (evRobotInDock_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evRobotInDock, Default, Default, evRobotInDock())

//## event evRotate25()
evRotate25::evRotate25() {
    NOTIFY_EVENT_CONSTRUCTOR(evRotate25)
    setId(evRotate25_Default_id);
}

bool evRotate25::isTypeOf(const short id) const {
    return (evRotate25_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evRotate25, Default, Default, evRotate25())

//## event goesAway()
goesAway::goesAway() {
    NOTIFY_EVENT_CONSTRUCTOR(goesAway)
    setId(goesAway_Default_id);
}

bool goesAway::isTypeOf(const short id) const {
    return (goesAway_Default_id==id);
}

IMPLEMENT_META_EVENT_P(goesAway, Default, Default, goesAway())

//## event isRightThere()
isRightThere::isRightThere() {
    NOTIFY_EVENT_CONSTRUCTOR(isRightThere)
    setId(isRightThere_Default_id);
}

bool isRightThere::isTypeOf(const short id) const {
    return (isRightThere_Default_id==id);
}

IMPLEMENT_META_EVENT_P(isRightThere, Default, Default, isRightThere())

//## event LigthBumpFrontTrig()
LigthBumpFrontTrig::LigthBumpFrontTrig() {
    NOTIFY_EVENT_CONSTRUCTOR(LigthBumpFrontTrig)
    setId(LigthBumpFrontTrig_Default_id);
}

bool LigthBumpFrontTrig::isTypeOf(const short id) const {
    return (LigthBumpFrontTrig_Default_id==id);
}

IMPLEMENT_META_EVENT_P(LigthBumpFrontTrig, Default, Default, LigthBumpFrontTrig())

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Default.cpp
*********************************************************************/
