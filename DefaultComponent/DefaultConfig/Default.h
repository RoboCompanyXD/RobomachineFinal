/*********************************************************************
	Rhapsody	: 8.4 
	Login		: chris
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Default
//!	Generated Date	: Mon, 29, Jun 2020  
	File Path	: DefaultComponent/DefaultConfig/Default.h
*********************************************************************/

#ifndef Default_H
#define Default_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <../Profiles/SysML/SIDefinitions.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include <oxf/event.h>
//#[ ignore
#define btnClean_Default_id 18601

#define btnDock_Default_id 18602

#define btnSpot_Default_id 18603

#define bumpCrash_Default_id 18604

#define cliffDetect_Default_id 18605

#define evActuatorFinish_Default_id 18606

#define evClearPath_Default_id 18607

#define evCliff_Default_id 18608

#define evComputeFinish_Default_id 18609

#define evDist30_Default_id 18610

#define evFindObstacle_Default_id 18611

#define evFrontObstacle_Default_id 18612

#define evGoesAway_Default_id 18613

#define evIsGoodPos_Default_id 18614

#define evLBumpFront_Default_id 18615

#define evLBumpFrontClear_Default_id 18616

#define evLBumpFrontEnable_Default_id 18617

#define evLostObstacle_Default_id 18618

#define evObstaculoEnFrente_Default_id 18619

#define evPersonApproach_Default_id 18620

#define evPersonFind_Default_id 18621

#define evPersonInView_Default_id 18622

#define evPersonLost_Default_id 18623

#define evRobotInDock_Default_id 18624

#define evRotate25_Default_id 18625

#define goesAway_Default_id 18626

#define isRightThere_Default_id 18627

#define LigthBumpFrontTrig_Default_id 18628
//#]

//## package Default



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
	File Path	: DefaultComponent/DefaultConfig/Default.h
*********************************************************************/
