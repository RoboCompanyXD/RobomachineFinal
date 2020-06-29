/*********************************************************************
	Rhapsody	: 8.4 
	Login		: chris
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: UC
//!	Generated Date	: Mon, 29, Jun 2020  
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
    ~UC();
    
    ////    Additional operations    ////
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cancelTimeouts();
    
    //## auto_generated
    bool cancelTimeout(const IOxfTimeout* arg);
    
    ////    Framework operations    ////

public :

    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // UndoPark:
    //## statechart_method
    inline bool UndoPark_IN() const;
    
    //## statechart_method
    void UndoPark_entDef();
    
    // UndoPark_Rotate180:
    //## statechart_method
    inline bool UndoPark_Rotate180_IN() const;
    
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
    
    // PathBlocked:
    //## statechart_method
    inline bool PathBlocked_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus PathBlocked_handleEvent();
    
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
    
    // ApproachUser:
    //## statechart_method
    inline bool ApproachUser_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus ApproachUser_handleEvent();
    
    // SurroundObstacle:
    //## statechart_method
    inline bool SurroundObstacle_IN() const;
    
    //## statechart_method
    void SurroundObstacle_entDef();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus SurroundObstacle_handleEvent();
    
    // MoveBack:
    //## statechart_method
    inline bool MoveBack_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus MoveBack_handleEvent();
    
    // CrashAlgorithm:
    //## statechart_method
    inline bool CrashAlgorithm_IN() const;
    
    //## statechart_method
    void CrashAlgorithm_entDef();
    
    //## statechart_method
    void CrashAlgorithm_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus CrashAlgorithm_handleEvent();
    
    // UndoRotate:
    //## statechart_method
    inline bool UndoRotate_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus UndoRotate_handleEvent();
    
    // RotateExtended:
    //## statechart_method
    inline bool RotateExtended_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus RotateExtended_handleEvent();
    
    // Rotate:
    //## statechart_method
    inline bool Rotate_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus Rotate_handleEvent();
    
    // GoForwardExtended:
    //## statechart_method
    inline bool GoForwardExtended_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus GoForwardExtended_handleEvent();
    
    // CrashAlgorithm_GoForward:
    //## statechart_method
    inline bool CrashAlgorithm_GoForward_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus CrashAlgorithm_GoForward_handleEvent();
    
    // CrashAlorithmEndHelperState:
    //## statechart_method
    inline bool CrashAlorithmEndHelperState_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus CrashAlorithmEndHelperStateTakeNull();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus CrashAlorithmEndHelperState_handleEvent();
    
    // CliffAhead:
    //## statechart_method
    inline bool CliffAhead_IN() const;
    
    //## statechart_method
    void CliffAhead_entDef();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus CliffAhead_handleEvent();
    
    // Rotate180:
    //## statechart_method
    inline bool Rotate180_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus Rotate180_handleEvent();
    
    // GoForward:
    //## statechart_method
    inline bool GoForward_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus GoForwardTakeNull();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus GoForward_handleEvent();
    
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
    
    // GoingDock:
    //## statechart_method
    inline bool GoingDock_IN() const;
    
    // EndOperation:
    //## statechart_method
    inline bool EndOperation_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum UC_Enum {
        OMNonState = 0,
        UndoPark = 1,
        UndoPark_Rotate180 = 2,
        ExitDock = 3,
        EndUndoParkHelperState = 4,
        NormalOperate = 5,
        TrackingByCamera = 6,
        PersonOutView = 7,
        PersonOutView_RotateToMove = 8,
        PersonOutView_Rotate360 = 9,
        PersonOutView_GoForward = 10,
        PersonOutView_ComputePosition = 11,
        PersonInView = 12,
        PathBlocked = 13,
        ComputeStepBlocked = 14,
        ComputeStepApproach = 15,
        ApproachUser = 16,
        SurroundObstacle = 17,
        MoveBack = 18,
        CrashAlgorithm = 19,
        UndoRotate = 20,
        RotateExtended = 21,
        Rotate = 22,
        GoForwardExtended = 23,
        CrashAlgorithm_GoForward = 24,
        CrashAlorithmEndHelperState = 25,
        CliffAhead = 26,
        Rotate180 = 27,
        GoForward = 28,
        Initializing = 29,
        InitFailed = 30,
        Idle = 31,
        GoingDock = 32,
        EndOperation = 33
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    int UndoPark_subState;
    
    int NormalOperate_subState;
    
    int TrackingByCamera_subState;
    
    int PersonOutView_subState;
    
    int PersonInView_subState;
    
    IOxfTimeout* PersonInView_timeout;
    
    int SurroundObstacle_subState;
    
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

    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void UndoPark_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void UndoPark_Rotate180_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void ExitDock_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void EndUndoParkHelperState_serializeStates(AOMSState* aomsState) const;
    
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
    void PathBlocked_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void ComputeStepBlocked_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void ComputeStepApproach_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void ApproachUser_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void SurroundObstacle_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void MoveBack_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void CrashAlgorithm_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void UndoRotate_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void RotateExtended_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Rotate_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void GoForwardExtended_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void CrashAlgorithm_GoForward_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void CrashAlorithmEndHelperState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void CliffAhead_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Rotate180_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void GoForward_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Initializing_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void InitFailed_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Idle_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void GoingDock_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void EndOperation_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool UC::rootState_IN() const {
    return true;
}

inline bool UC::UndoPark_IN() const {
    return rootState_subState == UndoPark;
}

inline bool UC::UndoPark_Rotate180_IN() const {
    return UndoPark_subState == UndoPark_Rotate180;
}

inline bool UC::ExitDock_IN() const {
    return UndoPark_subState == ExitDock;
}

inline bool UC::EndUndoParkHelperState_IN() const {
    return UndoPark_subState == EndUndoParkHelperState;
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

inline bool UC::PathBlocked_IN() const {
    return PersonInView_subState == PathBlocked;
}

inline bool UC::ComputeStepBlocked_IN() const {
    return PersonInView_subState == ComputeStepBlocked;
}

inline bool UC::ComputeStepApproach_IN() const {
    return PersonInView_subState == ComputeStepApproach;
}

inline bool UC::ApproachUser_IN() const {
    return PersonInView_subState == ApproachUser;
}

inline bool UC::SurroundObstacle_IN() const {
    return NormalOperate_subState == SurroundObstacle;
}

inline bool UC::MoveBack_IN() const {
    return SurroundObstacle_subState == MoveBack;
}

inline bool UC::CrashAlgorithm_IN() const {
    return SurroundObstacle_subState == CrashAlgorithm;
}

inline bool UC::UndoRotate_IN() const {
    return CrashAlgorithm_subState == UndoRotate;
}

inline bool UC::RotateExtended_IN() const {
    return CrashAlgorithm_subState == RotateExtended;
}

inline bool UC::Rotate_IN() const {
    return CrashAlgorithm_subState == Rotate;
}

inline bool UC::GoForwardExtended_IN() const {
    return CrashAlgorithm_subState == GoForwardExtended;
}

inline bool UC::CrashAlgorithm_GoForward_IN() const {
    return CrashAlgorithm_subState == CrashAlgorithm_GoForward;
}

inline bool UC::CrashAlorithmEndHelperState_IN() const {
    return CrashAlgorithm_subState == CrashAlorithmEndHelperState;
}

inline bool UC::CliffAhead_IN() const {
    return NormalOperate_subState == CliffAhead;
}

inline bool UC::Rotate180_IN() const {
    return CliffAhead_subState == Rotate180;
}

inline bool UC::GoForward_IN() const {
    return CliffAhead_subState == GoForward;
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

inline bool UC::GoingDock_IN() const {
    return rootState_subState == GoingDock;
}

inline bool UC::EndOperation_IN() const {
    return rootState_subState == EndOperation;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/UC.h
*********************************************************************/
