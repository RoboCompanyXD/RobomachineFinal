/*********************************************************************
	Rhapsody	: 8.4 
	Login		: chris
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: UC
//!	Generated Date	: Wed, 1, Jul 2020  
	File Path	: DefaultComponent/DefaultConfig/UC.h
*********************************************************************/

#ifndef UC_H
#define UC_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <../Profiles/SysML/SIDefinitions.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include "Roboconfirmo.h"
//## auto_generated
#include <oxf/omthread.h>
//## auto_generated
#include <oxf/omreactive.h>
//## auto_generated
#include <oxf/state.h>
//## auto_generated
#include <oxf/event.h>
//## package Roboconfirmo

//## class UC
class UC : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedUC;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    UC(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    virtual ~UC();
    
    ////    Operations    ////
    
    //## operation computeCameraApproach()
    virtual void computeCameraApproach();
    
    //## operation computeCameraWithObstacle()
    virtual void computeCameraWithObstacle();
    
    //## operation establecerActuadores()
    virtual void establecerActuadores();
    
    //## operation gotoDock()
    virtual void gotoDock();
    
    //## operation init()
    virtual void init();
    
    //## operation reproducirSonidoPerdida()
    virtual bool reproducirSonidoPerdida();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getBumpObstacle() const;
    
    //## auto_generated
    void setBumpObstacle(int p_BumpObstacle);
    
    //## auto_generated
    int getComputeStepTime() const;
    
    //## auto_generated
    void setComputeStepTime(int p_ComputeStepTime);
    
    //## auto_generated
    bool getCameraIsPersonInView() const;
    
    //## auto_generated
    void setCameraIsPersonInView(bool p_cameraIsPersonInView);
    
    //## auto_generated
    int getInitStatus() const;
    
    //## auto_generated
    void setInitStatus(int p_initStatus);
    
    //## auto_generated
    int getLidarIsObstable() const;
    
    //## auto_generated
    void setLidarIsObstable(int p_lidarIsObstable);
    
    //## auto_generated
    int getSensoresBateria() const;
    
    //## auto_generated
    void setSensoresBateria(int p_sensoresBateria);
    
    //## auto_generated
    bool getSensoresBl() const;
    
    //## auto_generated
    void setSensoresBl(bool p_sensoresBl);
    
    //## auto_generated
    bool getSensoresBr() const;
    
    //## auto_generated
    void setSensoresBr(bool p_sensoresBr);
    
    //## auto_generated
    bool getSensoresCliff() const;
    
    //## auto_generated
    void setSensoresCliff(bool p_sensoresCliff);
    
    //## auto_generated
    int getSensoresInDock() const;
    
    //## auto_generated
    void setSensoresInDock(int p_sensoresInDock);
    
    //## auto_generated
    bool getSensoresLBumpFront() const;
    
    //## auto_generated
    void setSensoresLBumpFront(bool p_sensoresLBumpFront);
    
    //## auto_generated
    bool getSensoresLBumpSide() const;
    
    //## auto_generated
    void setSensoresLBumpSide(bool p_sensoresLBumpSide);
    
    //## auto_generated
    int getSensoresSumAngulo() const;
    
    //## auto_generated
    void setSensoresSumAngulo(int p_sensoresSumAngulo);
    
    //## auto_generated
    int getSensoresSumDistancia() const;
    
    //## auto_generated
    void setSensoresSumDistancia(int p_sensoresSumDistancia);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cancelTimeouts();
    
    //## auto_generated
    bool cancelTimeout(const IOxfTimeout* arg);
    
    ////    Attributes    ////
    
    int BumpObstacle;		//## attribute BumpObstacle
    
    int ComputeStepTime;		//## attribute ComputeStepTime
    
    bool cameraIsPersonInView;		//## attribute cameraIsPersonInView
    
    int initStatus;		//## attribute initStatus
    
    int lidarIsObstable;		//## attribute lidarIsObstable
    
    int sensoresBateria;		//## attribute sensoresBateria
    
    bool sensoresBl;		//## attribute sensoresBl
    
    bool sensoresBr;		//## attribute sensoresBr
    
    bool sensoresCliff;		//## attribute sensoresCliff
    
    int sensoresInDock;		//## attribute sensoresInDock
    
    bool sensoresLBumpFront;		//## attribute sensoresLBumpFront
    
    bool sensoresLBumpSide;		//## attribute sensoresLBumpSide
    
    int sensoresSumAngulo;		//## attribute sensoresSumAngulo
    
    int sensoresSumDistancia;		//## attribute sensoresSumDistancia
    
    ////    Framework operations    ////

public :

    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // UnDock:
    //## statechart_method
    inline bool UnDock_IN() const;
    
    //## statechart_method
    void UnDock_entDef();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus UnDock_handleEvent();
    
    // UnDock_Rotate180:
    //## statechart_method
    inline bool UnDock_Rotate180_IN() const;
    
    // ExitDock:
    //## statechart_method
    inline bool ExitDock_IN() const;
    
    // EndUndoParkHelperState:
    //## statechart_method
    inline bool EndUndoParkHelperState_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus EndUndoParkHelperStateTakeNull();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus EndUndoParkHelperState_handleEvent();
    
    // Shutdown:
    //## statechart_method
    inline bool Shutdown_IN() const;
    
    // NormalOperate:
    //## statechart_method
    inline bool NormalOperate_IN() const;
    
    //## statechart_method
    void NormalOperate_entDef();
    
    //## statechart_method
    void NormalOperateEntDef();
    
    //## statechart_method
    void NormalOperate_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus NormalOperate_handleEvent();
    
    // TrackingByCamera:
    //## statechart_method
    inline bool TrackingByCamera_IN() const;
    
    //## statechart_method
    void TrackingByCamera_entDef();
    
    //## statechart_method
    void TrackingByCameraEntDef();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus TrackingByCamera_handleEvent();
    
    // PersonOutView:
    //## statechart_method
    inline bool PersonOutView_IN() const;
    
    //## statechart_method
    void PersonOutView_entDef();
    
    //## statechart_method
    void PersonOutView_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus PersonOutView_handleEvent();
    
    // PersonOutView_RotateToMove:
    //## statechart_method
    inline bool PersonOutView_RotateToMove_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus PersonOutView_RotateToMove_handleEvent();
    
    // PersonOutView_Rotate360:
    //## statechart_method
    inline bool PersonOutView_Rotate360_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus PersonOutView_Rotate360_handleEvent();
    
    // PersonOutView_GoForward:
    //## statechart_method
    inline bool PersonOutView_GoForward_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus PersonOutView_GoForward_handleEvent();
    
    // PersonOutView_ComputePosition:
    //## statechart_method
    inline bool PersonOutView_ComputePosition_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus PersonOutView_ComputePosition_handleEvent();
    
    // PersonInView:
    //## statechart_method
    inline bool PersonInView_IN() const;
    
    //## statechart_method
    void PersonInView_entDef();
    
    //## statechart_method
    void PersonInView_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus PersonInView_handleEvent();
    
    // PersonInView_PathBlocked:
    //## statechart_method
    inline bool PersonInView_PathBlocked_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus PersonInView_PathBlocked_handleEvent();
    
    // PersonInView_ApproachUser:
    //## statechart_method
    inline bool PersonInView_ApproachUser_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus PersonInView_ApproachUser_handleEvent();
    
    // ComputeStepBlocked:
    //## statechart_method
    inline bool ComputeStepBlocked_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus ComputeStepBlocked_handleEvent();
    
    // ComputeStepApproach:
    //## statechart_method
    inline bool ComputeStepApproach_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus ComputeStepApproach_handleEvent();
    
    // DodgeObstacle:
    //## statechart_method
    inline bool DodgeObstacle_IN() const;
    
    //## statechart_method
    void DodgeObstacle_entDef();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus DodgeObstacle_handleEvent();
    
    // Dodge_MoveBack:
    //## statechart_method
    inline bool Dodge_MoveBack_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus Dodge_MoveBack_handleEvent();
    
    // CrashAlgorithm:
    //## statechart_method
    inline bool CrashAlgorithm_IN() const;
    
    //## statechart_method
    void CrashAlgorithm_entDef();
    
    //## statechart_method
    void CrashAlgorithm_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus CrashAlgorithm_handleEvent();
    
    // CrashAlorithmEndHelperState:
    //## statechart_method
    inline bool CrashAlorithmEndHelperState_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus CrashAlorithmEndHelperStateTakeNull();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus CrashAlorithmEndHelperState_handleEvent();
    
    // CrashAlgorithm_RecoverTrajectory:
    //## statechart_method
    inline bool CrashAlgorithm_RecoverTrajectory_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus CrashAlgorithm_RecoverTrajectory_handleEvent();
    
    // CrashAlgorithm_GoForwardExtended:
    //## statechart_method
    inline bool CrashAlgorithm_GoForwardExtended_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus CrashAlgorithm_GoForwardExtended_handleEvent();
    
    // CrashAlgorithm_GoForward:
    //## statechart_method
    inline bool CrashAlgorithm_GoForward_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus CrashAlgorithm_GoForward_handleEvent();
    
    // CrashAlgorithm_DodgeParallel:
    //## statechart_method
    inline bool CrashAlgorithm_DodgeParallel_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus CrashAlgorithm_DodgeParallel_handleEvent();
    
    // CrashAlgorithm_Dodge:
    //## statechart_method
    inline bool CrashAlgorithm_Dodge_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus CrashAlgorithm_Dodge_handleEvent();
    
    // CliffAhead:
    //## statechart_method
    inline bool CliffAhead_IN() const;
    
    //## statechart_method
    void CliffAhead_entDef();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus CliffAhead_handleEvent();
    
    // CliffAhead_Rotate180:
    //## statechart_method
    inline bool CliffAhead_Rotate180_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus CliffAhead_Rotate180_handleEvent();
    
    // CliffAhead_GoForward:
    //## statechart_method
    inline bool CliffAhead_GoForward_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus CliffAhead_GoForwardTakeNull();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus CliffAhead_GoForward_handleEvent();
    
    // Initializing:
    //## statechart_method
    inline bool Initializing_IN() const;
    
    // InitFailed:
    //## statechart_method
    inline bool InitFailed_IN() const;
    
    // Idle:
    //## statechart_method
    inline bool Idle_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus IdleTakebtnClean();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus Idle_handleEvent();
    
    // Dock:
    //## statechart_method
    inline bool Dock_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum UC_Enum {
        OMNonState = 0,
        UnDock = 1,
        UnDock_Rotate180 = 2,
        ExitDock = 3,
        EndUndoParkHelperState = 4,
        Shutdown = 5,
        NormalOperate = 6,
        TrackingByCamera = 7,
        PersonOutView = 8,
        PersonOutView_RotateToMove = 9,
        PersonOutView_Rotate360 = 10,
        PersonOutView_GoForward = 11,
        PersonOutView_ComputePosition = 12,
        PersonInView = 13,
        PersonInView_PathBlocked = 14,
        PersonInView_ApproachUser = 15,
        ComputeStepBlocked = 16,
        ComputeStepApproach = 17,
        DodgeObstacle = 18,
        Dodge_MoveBack = 19,
        CrashAlgorithm = 20,
        CrashAlorithmEndHelperState = 21,
        CrashAlgorithm_RecoverTrajectory = 22,
        CrashAlgorithm_GoForwardExtended = 23,
        CrashAlgorithm_GoForward = 24,
        CrashAlgorithm_DodgeParallel = 25,
        CrashAlgorithm_Dodge = 26,
        CliffAhead = 27,
        CliffAhead_Rotate180 = 28,
        CliffAhead_GoForward = 29,
        Initializing = 30,
        InitFailed = 31,
        Idle = 32,
        Dock = 33
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    int UnDock_subState;
    
    int NormalOperate_subState;
    
    int TrackingByCamera_subState;
    
    int PersonOutView_subState;
    
    int PersonInView_subState;
    
    IOxfTimeout* PersonInView_timeout;
    
    int DodgeObstacle_subState;
    
    int CrashAlgorithm_subState;
    
    int CliffAhead_subState;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedUC : virtual public AOMInstance {
    DECLARE_REACTIVE_META(UC, OMAnimatedUC)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void UnDock_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void UnDock_Rotate180_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void ExitDock_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void EndUndoParkHelperState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Shutdown_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void NormalOperate_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void TrackingByCamera_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void PersonOutView_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void PersonOutView_RotateToMove_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void PersonOutView_Rotate360_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void PersonOutView_GoForward_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void PersonOutView_ComputePosition_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void PersonInView_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void PersonInView_PathBlocked_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void PersonInView_ApproachUser_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void ComputeStepBlocked_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void ComputeStepApproach_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void DodgeObstacle_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Dodge_MoveBack_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void CrashAlgorithm_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void CrashAlorithmEndHelperState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void CrashAlgorithm_RecoverTrajectory_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void CrashAlgorithm_GoForwardExtended_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void CrashAlgorithm_GoForward_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void CrashAlgorithm_DodgeParallel_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void CrashAlgorithm_Dodge_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void CliffAhead_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void CliffAhead_Rotate180_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void CliffAhead_GoForward_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Initializing_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void InitFailed_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Idle_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Dock_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool UC::rootState_IN() const {
    return true;
}

inline bool UC::UnDock_IN() const {
    return rootState_subState == UnDock;
}

inline bool UC::UnDock_Rotate180_IN() const {
    return UnDock_subState == UnDock_Rotate180;
}

inline bool UC::ExitDock_IN() const {
    return UnDock_subState == ExitDock;
}

inline bool UC::EndUndoParkHelperState_IN() const {
    return UnDock_subState == EndUndoParkHelperState;
}

inline bool UC::Shutdown_IN() const {
    return rootState_subState == Shutdown;
}

inline bool UC::NormalOperate_IN() const {
    return rootState_subState == NormalOperate;
}

inline bool UC::TrackingByCamera_IN() const {
    return NormalOperate_subState == TrackingByCamera;
}

inline bool UC::PersonOutView_IN() const {
    return TrackingByCamera_subState == PersonOutView;
}

inline bool UC::PersonOutView_RotateToMove_IN() const {
    return PersonOutView_subState == PersonOutView_RotateToMove;
}

inline bool UC::PersonOutView_Rotate360_IN() const {
    return PersonOutView_subState == PersonOutView_Rotate360;
}

inline bool UC::PersonOutView_GoForward_IN() const {
    return PersonOutView_subState == PersonOutView_GoForward;
}

inline bool UC::PersonOutView_ComputePosition_IN() const {
    return PersonOutView_subState == PersonOutView_ComputePosition;
}

inline bool UC::PersonInView_IN() const {
    return TrackingByCamera_subState == PersonInView;
}

inline bool UC::PersonInView_PathBlocked_IN() const {
    return PersonInView_subState == PersonInView_PathBlocked;
}

inline bool UC::PersonInView_ApproachUser_IN() const {
    return PersonInView_subState == PersonInView_ApproachUser;
}

inline bool UC::ComputeStepBlocked_IN() const {
    return PersonInView_subState == ComputeStepBlocked;
}

inline bool UC::ComputeStepApproach_IN() const {
    return PersonInView_subState == ComputeStepApproach;
}

inline bool UC::DodgeObstacle_IN() const {
    return NormalOperate_subState == DodgeObstacle;
}

inline bool UC::Dodge_MoveBack_IN() const {
    return DodgeObstacle_subState == Dodge_MoveBack;
}

inline bool UC::CrashAlgorithm_IN() const {
    return DodgeObstacle_subState == CrashAlgorithm;
}

inline bool UC::CrashAlorithmEndHelperState_IN() const {
    return CrashAlgorithm_subState == CrashAlorithmEndHelperState;
}

inline bool UC::CrashAlgorithm_RecoverTrajectory_IN() const {
    return CrashAlgorithm_subState == CrashAlgorithm_RecoverTrajectory;
}

inline bool UC::CrashAlgorithm_GoForwardExtended_IN() const {
    return CrashAlgorithm_subState == CrashAlgorithm_GoForwardExtended;
}

inline bool UC::CrashAlgorithm_GoForward_IN() const {
    return CrashAlgorithm_subState == CrashAlgorithm_GoForward;
}

inline bool UC::CrashAlgorithm_DodgeParallel_IN() const {
    return CrashAlgorithm_subState == CrashAlgorithm_DodgeParallel;
}

inline bool UC::CrashAlgorithm_Dodge_IN() const {
    return CrashAlgorithm_subState == CrashAlgorithm_Dodge;
}

inline bool UC::CliffAhead_IN() const {
    return NormalOperate_subState == CliffAhead;
}

inline bool UC::CliffAhead_Rotate180_IN() const {
    return CliffAhead_subState == CliffAhead_Rotate180;
}

inline bool UC::CliffAhead_GoForward_IN() const {
    return CliffAhead_subState == CliffAhead_GoForward;
}

inline bool UC::Initializing_IN() const {
    return rootState_subState == Initializing;
}

inline bool UC::InitFailed_IN() const {
    return rootState_subState == InitFailed;
}

inline bool UC::Idle_IN() const {
    return rootState_subState == Idle;
}

inline bool UC::Dock_IN() const {
    return rootState_subState == Dock;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/UC.h
*********************************************************************/
