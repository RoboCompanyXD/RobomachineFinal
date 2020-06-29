/*********************************************************************
	Rhapsody	: 8.4 
	Login		: chris
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Roboconfirmo
//!	Generated Date	: Mon, 29, Jun 2020  
	File Path	: DefaultComponent/DefaultConfig/Roboconfirmo.h
*********************************************************************/

#ifndef Roboconfirmo_H
#define Roboconfirmo_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <../Profiles/SysML/SIDefinitions.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include <oxf/event.h>
//## auto_generated
class UC;

//#[ ignore
#define btnClean_Roboconfirmo_id 13601

#define btnDock_Roboconfirmo_id 13602

#define btnSpot_Roboconfirmo_id 13603

#define bumpCrash_Roboconfirmo_id 13604

#define cliffDetect_Roboconfirmo_id 13605

#define evActuatorFinish_Roboconfirmo_id 13606

#define evClearPath_Roboconfirmo_id 13607

#define evCliff_Roboconfirmo_id 13608

#define evComputeFinish_Roboconfirmo_id 13609

#define evDist30_Roboconfirmo_id 13610

#define evFindObstacle_Roboconfirmo_id 13611

#define evFrontObstacle_Roboconfirmo_id 13612

#define evGoesAway_Roboconfirmo_id 13613

#define evIsGoodPos_Roboconfirmo_id 13614

#define evLBumpFront_Roboconfirmo_id 13615

#define evLBumpFrontClear_Roboconfirmo_id 13616

#define evLBumpFrontEnable_Roboconfirmo_id 13617

#define evLostObstacle_Roboconfirmo_id 13618

#define evObstaculoEnFrente_Roboconfirmo_id 13619

#define evPersonApproach_Roboconfirmo_id 13620

#define evPersonFind_Roboconfirmo_id 13621

#define evPersonInView_Roboconfirmo_id 13622

#define evPersonLost_Roboconfirmo_id 13623

#define evRobotInDock_Roboconfirmo_id 13624

#define evRotate25_Roboconfirmo_id 13625

#define goesAway_Roboconfirmo_id 13626

#define isRightThere_Roboconfirmo_id 13627

#define LigthBumpFrontTrig_Roboconfirmo_id 13628
//#]

//## package Roboconfirmo


//## attribute BumpObstacle
extern int BumpObstacle;

//## attribute ComputeStepTime
extern int ComputeStepTime;

//## attribute cameraIsPersonInView
extern bool cameraIsPersonInView;

//## attribute initStatus
extern int initStatus;

//## attribute lidarIsObstable
extern int lidarIsObstable;

//## attribute sensoresBateria
extern int sensoresBateria;

//## attribute sensoresInDock
extern int sensoresInDock;

//## attribute sensoresLBumpFront
extern bool sensoresLBumpFront;

//## attribute sensoresLBumpSide
extern bool sensoresLBumpSide;

//## attribute sensoresSumAngulo
extern int sensoresSumAngulo;

//## attribute sensoresSumDistancia
extern int sensoresSumDistancia;

//## operation computeCameraApproach()
void computeCameraApproach();

//## operation computeCameraWithObstacle()
void computeCameraWithObstacle();

//## operation establecerActuadores()
void establecerActuadores();

//## operation gotoDock()
void gotoDock();

//## operation init()
void init();

//## operation reproducirSonidoPerdida()
bool reproducirSonidoPerdida();

//## event btnClean()
class btnClean : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedbtnClean;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    btnClean();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedbtnClean : virtual public AOMEvent {
    DECLARE_META_EVENT(btnClean)
};
//#]
#endif // _OMINSTRUMENT

//## event btnDock()
class btnDock : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedbtnDock;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    btnDock();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedbtnDock : virtual public AOMEvent {
    DECLARE_META_EVENT(btnDock)
};
//#]
#endif // _OMINSTRUMENT

//## event btnSpot()
class btnSpot : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedbtnSpot;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    btnSpot();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedbtnSpot : virtual public AOMEvent {
    DECLARE_META_EVENT(btnSpot)
};
//#]
#endif // _OMINSTRUMENT

//## event bumpCrash()
class bumpCrash : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedbumpCrash;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    bumpCrash();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedbumpCrash : virtual public AOMEvent {
    DECLARE_META_EVENT(bumpCrash)
};
//#]
#endif // _OMINSTRUMENT

//## event cliffDetect()
class cliffDetect : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedcliffDetect;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    cliffDetect();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedcliffDetect : virtual public AOMEvent {
    DECLARE_META_EVENT(cliffDetect)
};
//#]
#endif // _OMINSTRUMENT

//## event evActuatorFinish()
class evActuatorFinish : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevActuatorFinish;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evActuatorFinish();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevActuatorFinish : virtual public AOMEvent {
    DECLARE_META_EVENT(evActuatorFinish)
};
//#]
#endif // _OMINSTRUMENT

//## event evClearPath()
class evClearPath : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevClearPath;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evClearPath();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevClearPath : virtual public AOMEvent {
    DECLARE_META_EVENT(evClearPath)
};
//#]
#endif // _OMINSTRUMENT

//## event evCliff()
class evCliff : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevCliff;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evCliff();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevCliff : virtual public AOMEvent {
    DECLARE_META_EVENT(evCliff)
};
//#]
#endif // _OMINSTRUMENT

//## event evComputeFinish()
class evComputeFinish : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevComputeFinish;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evComputeFinish();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevComputeFinish : virtual public AOMEvent {
    DECLARE_META_EVENT(evComputeFinish)
};
//#]
#endif // _OMINSTRUMENT

//## event evDist30()
class evDist30 : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevDist30;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evDist30();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevDist30 : virtual public AOMEvent {
    DECLARE_META_EVENT(evDist30)
};
//#]
#endif // _OMINSTRUMENT

//## event evFindObstacle()
class evFindObstacle : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevFindObstacle;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evFindObstacle();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevFindObstacle : virtual public AOMEvent {
    DECLARE_META_EVENT(evFindObstacle)
};
//#]
#endif // _OMINSTRUMENT

//## event evFrontObstacle()
class evFrontObstacle : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevFrontObstacle;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evFrontObstacle();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevFrontObstacle : virtual public AOMEvent {
    DECLARE_META_EVENT(evFrontObstacle)
};
//#]
#endif // _OMINSTRUMENT

//## event evGoesAway()
class evGoesAway : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevGoesAway;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evGoesAway();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevGoesAway : virtual public AOMEvent {
    DECLARE_META_EVENT(evGoesAway)
};
//#]
#endif // _OMINSTRUMENT

//## event evIsGoodPos()
class evIsGoodPos : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevIsGoodPos;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evIsGoodPos();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevIsGoodPos : virtual public AOMEvent {
    DECLARE_META_EVENT(evIsGoodPos)
};
//#]
#endif // _OMINSTRUMENT

//## event evLBumpFront()
class evLBumpFront : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevLBumpFront;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evLBumpFront();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevLBumpFront : virtual public AOMEvent {
    DECLARE_META_EVENT(evLBumpFront)
};
//#]
#endif // _OMINSTRUMENT

//## event evLBumpFrontClear()
class evLBumpFrontClear : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevLBumpFrontClear;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evLBumpFrontClear();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevLBumpFrontClear : virtual public AOMEvent {
    DECLARE_META_EVENT(evLBumpFrontClear)
};
//#]
#endif // _OMINSTRUMENT

//## event evLBumpFrontEnable()
class evLBumpFrontEnable : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevLBumpFrontEnable;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evLBumpFrontEnable();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevLBumpFrontEnable : virtual public AOMEvent {
    DECLARE_META_EVENT(evLBumpFrontEnable)
};
//#]
#endif // _OMINSTRUMENT

//## event evLostObstacle()
class evLostObstacle : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevLostObstacle;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evLostObstacle();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevLostObstacle : virtual public AOMEvent {
    DECLARE_META_EVENT(evLostObstacle)
};
//#]
#endif // _OMINSTRUMENT

//## event evObstaculoEnFrente()
class evObstaculoEnFrente : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevObstaculoEnFrente;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evObstaculoEnFrente();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevObstaculoEnFrente : virtual public AOMEvent {
    DECLARE_META_EVENT(evObstaculoEnFrente)
};
//#]
#endif // _OMINSTRUMENT

//## event evPersonApproach()
class evPersonApproach : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevPersonApproach;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evPersonApproach();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevPersonApproach : virtual public AOMEvent {
    DECLARE_META_EVENT(evPersonApproach)
};
//#]
#endif // _OMINSTRUMENT

//## event evPersonFind()
class evPersonFind : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevPersonFind;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evPersonFind();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevPersonFind : virtual public AOMEvent {
    DECLARE_META_EVENT(evPersonFind)
};
//#]
#endif // _OMINSTRUMENT

//## event evPersonInView()
class evPersonInView : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevPersonInView;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evPersonInView();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevPersonInView : virtual public AOMEvent {
    DECLARE_META_EVENT(evPersonInView)
};
//#]
#endif // _OMINSTRUMENT

//## event evPersonLost()
class evPersonLost : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevPersonLost;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evPersonLost();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevPersonLost : virtual public AOMEvent {
    DECLARE_META_EVENT(evPersonLost)
};
//#]
#endif // _OMINSTRUMENT

//## event evRobotInDock()
class evRobotInDock : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevRobotInDock;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evRobotInDock();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevRobotInDock : virtual public AOMEvent {
    DECLARE_META_EVENT(evRobotInDock)
};
//#]
#endif // _OMINSTRUMENT

//## event evRotate25()
class evRotate25 : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevRotate25;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evRotate25();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevRotate25 : virtual public AOMEvent {
    DECLARE_META_EVENT(evRotate25)
};
//#]
#endif // _OMINSTRUMENT

//## event goesAway()
class goesAway : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedgoesAway;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    goesAway();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedgoesAway : virtual public AOMEvent {
    DECLARE_META_EVENT(goesAway)
};
//#]
#endif // _OMINSTRUMENT

//## event isRightThere()
class isRightThere : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedisRightThere;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    isRightThere();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedisRightThere : virtual public AOMEvent {
    DECLARE_META_EVENT(isRightThere)
};
//#]
#endif // _OMINSTRUMENT

//## event LigthBumpFrontTrig()
class LigthBumpFrontTrig : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedLigthBumpFrontTrig;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    LigthBumpFrontTrig();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedLigthBumpFrontTrig : virtual public AOMEvent {
    DECLARE_META_EVENT(LigthBumpFrontTrig)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Roboconfirmo.h
*********************************************************************/
