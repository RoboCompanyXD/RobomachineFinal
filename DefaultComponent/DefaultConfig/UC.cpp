/********************************************************************
	Rhapsody	: 8.4 
	Login		: chris
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: UC
//!	Generated Date	: Mon, 29, Jun 2020  
	File Path	: DefaultComponent/DefaultConfig/UC.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "UC.h"
//#[ ignore
#define Roboconfirmo_UC_UC_SERIALIZE OM_NO_OP
//#]

//## package Roboconfirmo

//## class UC
UC::UC(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(UC, UC(), 0, Roboconfirmo_UC_UC_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initStatechart();
}

UC::~UC() {
    NOTIFY_DESTRUCTOR(~UC, true);
    cancelTimeouts();
}

bool UC::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void UC::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    UndoPark_subState = OMNonState;
    NormalOperate_subState = OMNonState;
    TrackingByCamera_subState = OMNonState;
    PersonOutView_subState = OMNonState;
    PersonInView_subState = OMNonState;
    PersonInView_timeout = NULL;
    SurroundObstacle_subState = OMNonState;
    CrashAlgorithm_subState = OMNonState;
    CliffAhead_subState = OMNonState;
}

void UC::cancelTimeouts() {
    cancel(PersonInView_timeout);
}

bool UC::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(PersonInView_timeout == arg)
        {
            PersonInView_timeout = NULL;
            res = true;
        }
    return res;
}

void UC::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.Initializing");
        pushNullTransition();
        rootState_subState = Initializing;
        rootState_active = Initializing;
        //#[ state Initializing.(Entry) 
        init();
        //#]
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus UC::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Initializing
        // Description: Estado de iniciacilación.
        // Mediante la funcion Init se prepara todo el sistema.
        case Initializing:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 1 
                    if(initStatus==1)
                        {
                            NOTIFY_TRANSITION_STARTED("1");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.Initializing");
                            NOTIFY_STATE_ENTERED("ROOT.Idle");
                            pushNullTransition();
                            rootState_subState = Idle;
                            rootState_active = Idle;
                            NOTIFY_TRANSITION_TERMINATED("1");
                            res = eventConsumed;
                        }
                    else
                        {
                            //## transition 31 
                            if(initStatus>1)
                                {
                                    NOTIFY_TRANSITION_STARTED("31");
                                    popNullTransition();
                                    NOTIFY_STATE_EXITED("ROOT.Initializing");
                                    NOTIFY_STATE_ENTERED("ROOT.InitFailed");
                                    pushNullTransition();
                                    rootState_subState = InitFailed;
                                    rootState_active = InitFailed;
                                    NOTIFY_TRANSITION_TERMINATED("31");
                                    res = eventConsumed;
                                }
                        }
                }
            
        }
        break;
        // State Idle
        // Description: Modo de espera.
        // Se pulsa el boton "Clean" para empezar con el modo normal de operación.
        // El boton "Dock" o un nivel de batería inferior al 15% enviarán el robot a la base de carga.
        // Una vez el robot está en la base de carga se retorna a este estado.
        // En el modo de espera se puede estar cargando o sin cargar
        case Idle:
        {
            res = Idle_handleEvent();
        }
        break;
        // State GoingDock
        // Description: Dirigirse a la base.
        case GoingDock:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 29 
                    if(sensoresInDock==true)
                        {
                            NOTIFY_TRANSITION_STARTED("29");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.GoingDock");
                            NOTIFY_STATE_ENTERED("ROOT.Idle");
                            pushNullTransition();
                            rootState_subState = Idle;
                            rootState_active = Idle;
                            NOTIFY_TRANSITION_TERMINATED("29");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State ApproachUser
        // Description: Acercarse a la persona
        // El frente está libre, el robot se acerca a la persona.
        // //
        case ApproachUser:
        {
            res = ApproachUser_handleEvent();
        }
        break;
        // State PathBlocked
        // Description: Obstaculo en el camino
        // El obstaculo puede ser una persona o un onstaculo real
        // Puedo rotar si la persona se mueve y retroceder
        case PathBlocked:
        {
            res = PathBlocked_handleEvent();
        }
        break;
        case ComputeStepBlocked:
        {
            res = ComputeStepBlocked_handleEvent();
        }
        break;
        case ComputeStepApproach:
        {
            res = ComputeStepApproach_handleEvent();
        }
        break;
        // State PersonOutView_RotateToMove
        case PersonOutView_RotateToMove:
        {
            res = PersonOutView_RotateToMove_handleEvent();
        }
        break;
        // State PersonOutView_ComputePosition
        // Description: Computar posicion a la que dirigirse.
        // Encontrar sector con mayor media de distancia.
        case PersonOutView_ComputePosition:
        {
            res = PersonOutView_ComputePosition_handleEvent();
        }
        break;
        // State PersonOutView_GoForward
        case PersonOutView_GoForward:
        {
            res = PersonOutView_GoForward_handleEvent();
        }
        break;
        // State PersonOutView_Rotate360
        case PersonOutView_Rotate360:
        {
            res = PersonOutView_Rotate360_handleEvent();
        }
        break;
        // State Rotate180
        case Rotate180:
        {
            res = Rotate180_handleEvent();
        }
        break;
        // State GoForward
        case GoForward:
        {
            res = GoForward_handleEvent();
        }
        break;
        // State MoveBack
        case MoveBack:
        {
            res = MoveBack_handleEvent();
        }
        break;
        // State UndoRotate
        case UndoRotate:
        {
            res = UndoRotate_handleEvent();
        }
        break;
        // State GoForwardExtended
        case GoForwardExtended:
        {
            res = GoForwardExtended_handleEvent();
        }
        break;
        // State GoForward
        case CrashAlgorithm_GoForward:
        {
            res = CrashAlgorithm_GoForward_handleEvent();
        }
        break;
        // State RotateExtended
        case RotateExtended:
        {
            res = RotateExtended_handleEvent();
        }
        break;
        // State Rotate
        case Rotate:
        {
            res = Rotate_handleEvent();
        }
        break;
        // State CrashAlorithmEndHelperState
        case CrashAlorithmEndHelperState:
        {
            res = CrashAlorithmEndHelperState_handleEvent();
        }
        break;
        // State InitFailed
        // Description: Fallo de Inicializacion.
        // Si es necesario ejecutar algo antes de abortar la ejecucion.
        case InitFailed:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("23");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.InitFailed");
                    endBehavior();
                    NOTIFY_TRANSITION_TERMINATED("23");
                    res = eventConsumed;
                }
            
        }
        break;
        // State EndOperation
        // Description: Fin de operacion
        // Terminar la ejecucion del algoritmo proncipal, liberar recursos y salir.
        case EndOperation:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("24");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.EndOperation");
                    endBehavior();
                    NOTIFY_TRANSITION_TERMINATED("24");
                    res = eventConsumed;
                }
            
        }
        break;
        // State Rotate180
        case UndoPark_Rotate180:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition UndoPark.2 
                    if(sensoresSumAngulo>180;)
                        {
                            NOTIFY_TRANSITION_STARTED("ROOT.UndoPark.2");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.UndoPark.ROOT.UndoPark.Rotate180");
                            pushNullTransition();
                            UndoPark_subState = EndUndoParkHelperState;
                            rootState_active = EndUndoParkHelperState;
                            NOTIFY_TRANSITION_TERMINATED("ROOT.UndoPark.2");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        // State ExitDock
        case ExitDock:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition UndoPark.1 
                    if(sensoresSumDistancia<-300)
                        {
                            NOTIFY_TRANSITION_STARTED("ROOT.UndoPark.1");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.UndoPark.ROOT.UndoPark.ExitDock");
                            //#[ transition UndoPark.1 
                            sensoresSumAngulo=0;
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.UndoPark.ROOT.UndoPark.Rotate180");
                            pushNullTransition();
                            UndoPark_subState = UndoPark_Rotate180;
                            rootState_active = UndoPark_Rotate180;
                            NOTIFY_TRANSITION_TERMINATED("ROOT.UndoPark.1");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        // State EndUndoParkHelperState
        case EndUndoParkHelperState:
        {
            res = EndUndoParkHelperState_handleEvent();
        }
        break;
        default:
            break;
    }
    return res;
}

void UC::UndoPark_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.UndoPark");
    rootState_subState = UndoPark;
    NOTIFY_TRANSITION_STARTED("ROOT.UndoPark.0");
    //#[ transition UndoPark.0 
    sensoresSumDistancia=0;
    //#]
    NOTIFY_STATE_ENTERED("ROOT.UndoPark.ROOT.UndoPark.ExitDock");
    pushNullTransition();
    UndoPark_subState = ExitDock;
    rootState_active = ExitDock;
    NOTIFY_TRANSITION_TERMINATED("ROOT.UndoPark.0");
}

IOxfReactive::TakeEventStatus UC::EndUndoParkHelperStateTakeNull() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    NOTIFY_TRANSITION_STARTED("ROOT.UndoPark.3");
    switch (UndoPark_subState) {
        // State Rotate180
        case UndoPark_Rotate180:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.UndoPark.ROOT.UndoPark.Rotate180");
        }
        break;
        // State ExitDock
        case ExitDock:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.UndoPark.ROOT.UndoPark.ExitDock");
        }
        break;
        // State EndUndoParkHelperState
        case EndUndoParkHelperState:
        {
            popNullTransition();
        }
        break;
        default:
            break;
    }
    UndoPark_subState = OMNonState;
    NOTIFY_STATE_EXITED("ROOT.UndoPark");
    NormalOperate_entDef();
    NOTIFY_TRANSITION_TERMINATED("ROOT.UndoPark.3");
    res = eventConsumed;
    return res;
}

IOxfReactive::TakeEventStatus UC::EndUndoParkHelperState_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            res = EndUndoParkHelperStateTakeNull();
        }
    
    
    return res;
}

void UC::NormalOperate_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.NormalOperate");
    pushNullTransition();
    rootState_subState = NormalOperate;
    NormalOperateEntDef();
}

void UC::NormalOperateEntDef() {
    NOTIFY_TRANSITION_STARTED("22");
    TrackingByCamera_entDef();
    NOTIFY_TRANSITION_TERMINATED("22");
}

void UC::NormalOperate_exit() {
    popNullTransition();
    switch (NormalOperate_subState) {
        // State TrackingByCamera
        // Description: Seguimiento mediante la camara.
        case TrackingByCamera:
        {
            popNullTransition();
            switch (TrackingByCamera_subState) {
                // State PersonInView
                // Description: La persona está a la vista.
                // Acercarse todo lo que se pueda sin invadir su espacio.
                case PersonInView:
                {
                    PersonInView_exit();
                }
                break;
                // State PersonOutView
                // Description: La persona no está a la vista.
                // Ejecutar algoritmo de búsqueda.
                case PersonOutView:
                {
                    PersonOutView_exit();
                }
                break;
                default:
                    break;
            }
            TrackingByCamera_subState = OMNonState;
            NOTIFY_STATE_EXITED("ROOT.NormalOperate.TrackingByCamera");
        }
        break;
        // State CliffAhead
        // Description: Barranco detectado.
        // Devolver el robot a un estado seguro.
        case CliffAhead:
        {
            switch (CliffAhead_subState) {
                // State Rotate180
                case Rotate180:
                {
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.NormalOperate.CliffAhead.Rotate180");
                }
                break;
                // State GoForward
                case GoForward:
                {
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.NormalOperate.CliffAhead.GoForward");
                }
                break;
                default:
                    break;
            }
            CliffAhead_subState = OMNonState;
            NOTIFY_STATE_EXITED("ROOT.NormalOperate.CliffAhead");
        }
        break;
        // State SurroundObstacle
        // Description: Se ha colisionado con un obstaculo.
        // Rodear el obstaculo y volver a encontrar a la persona.
        case SurroundObstacle:
        {
            popNullTransition();
            switch (SurroundObstacle_subState) {
                // State MoveBack
                case MoveBack:
                {
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.NormalOperate.SurroundObstacle.MoveBack");
                }
                break;
                // State CrashAlgorithm
                // Description: Algoritmo de rodeo.
                // (El del TFG)
                case CrashAlgorithm:
                {
                    CrashAlgorithm_exit();
                }
                break;
                default:
                    break;
            }
            SurroundObstacle_subState = OMNonState;
            NOTIFY_STATE_EXITED("ROOT.NormalOperate.SurroundObstacle");
        }
        break;
        default:
            break;
    }
    NormalOperate_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.NormalOperate");
}

IOxfReactive::TakeEventStatus UC::NormalOperate_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 20 
            if(sensoresBateria<15)
                {
                    NOTIFY_TRANSITION_STARTED("20");
                    NormalOperate_exit();
                    NOTIFY_STATE_ENTERED("ROOT.GoingDock");
                    pushNullTransition();
                    rootState_subState = GoingDock;
                    rootState_active = GoingDock;
                    //#[ state GoingDock.(Entry) 
                    gotoDock();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("20");
                    res = eventConsumed;
                }
        }
    else if(IS_EVENT_TYPE_OF(btnDock_Roboconfirmo_id))
        {
            NOTIFY_TRANSITION_STARTED("6");
            NormalOperate_exit();
            NOTIFY_STATE_ENTERED("ROOT.GoingDock");
            pushNullTransition();
            rootState_subState = GoingDock;
            rootState_active = GoingDock;
            //#[ state GoingDock.(Entry) 
            gotoDock();
            //#]
            NOTIFY_TRANSITION_TERMINATED("6");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(btnSpot_Roboconfirmo_id))
        {
            NOTIFY_TRANSITION_STARTED("5");
            NormalOperate_exit();
            NOTIFY_STATE_ENTERED("ROOT.Idle");
            pushNullTransition();
            rootState_subState = Idle;
            rootState_active = Idle;
            NOTIFY_TRANSITION_TERMINATED("5");
            res = eventConsumed;
        }
    
    return res;
}

void UC::TrackingByCamera_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.NormalOperate.TrackingByCamera");
    pushNullTransition();
    NormalOperate_subState = TrackingByCamera;
    TrackingByCameraEntDef();
}

void UC::TrackingByCameraEntDef() {
    //## transition 14 
    if(cameraIsPersonInView==true)
        {
            NOTIFY_TRANSITION_STARTED("30");
            NOTIFY_TRANSITION_STARTED("14");
            PersonInView_entDef();
            NOTIFY_TRANSITION_TERMINATED("14");
            NOTIFY_TRANSITION_TERMINATED("30");
        }
    else
        {
            NOTIFY_TRANSITION_STARTED("30");
            NOTIFY_TRANSITION_STARTED("15");
            PersonOutView_entDef();
            NOTIFY_TRANSITION_TERMINATED("15");
            NOTIFY_TRANSITION_TERMINATED("30");
        }
}

IOxfReactive::TakeEventStatus UC::TrackingByCamera_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 8 
            if(sensoresBl==true || sensoresBr==true)
                {
                    NOTIFY_TRANSITION_STARTED("8");
                    popNullTransition();
                    switch (TrackingByCamera_subState) {
                        // State PersonInView
                        // Description: La persona está a la vista.
                        // Acercarse todo lo que se pueda sin invadir su espacio.
                        case PersonInView:
                        {
                            PersonInView_exit();
                        }
                        break;
                        // State PersonOutView
                        // Description: La persona no está a la vista.
                        // Ejecutar algoritmo de búsqueda.
                        case PersonOutView:
                        {
                            PersonOutView_exit();
                        }
                        break;
                        default:
                            break;
                    }
                    TrackingByCamera_subState = OMNonState;
                    NOTIFY_STATE_EXITED("ROOT.NormalOperate.TrackingByCamera");
                    SurroundObstacle_entDef();
                    NOTIFY_TRANSITION_TERMINATED("8");
                    res = eventConsumed;
                }
            else
                {
                    //## transition 18 
                    if(sensoresCliff==true)
                        {
                            NOTIFY_TRANSITION_STARTED("18");
                            popNullTransition();
                            switch (TrackingByCamera_subState) {
                                // State PersonInView
                                // Description: La persona está a la vista.
                                // Acercarse todo lo que se pueda sin invadir su espacio.
                                case PersonInView:
                                {
                                    PersonInView_exit();
                                }
                                break;
                                // State PersonOutView
                                // Description: La persona no está a la vista.
                                // Ejecutar algoritmo de búsqueda.
                                case PersonOutView:
                                {
                                    PersonOutView_exit();
                                }
                                break;
                                default:
                                    break;
                            }
                            TrackingByCamera_subState = OMNonState;
                            NOTIFY_STATE_EXITED("ROOT.NormalOperate.TrackingByCamera");
                            CliffAhead_entDef();
                            NOTIFY_TRANSITION_TERMINATED("18");
                            res = eventConsumed;
                        }
                }
        }
    
    if(res == eventNotConsumed)
        {
            res = NormalOperate_handleEvent();
        }
    return res;
}

void UC::PersonOutView_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.NormalOperate.TrackingByCamera.PersonOutView");
    pushNullTransition();
    TrackingByCamera_subState = PersonOutView;
    NOTIFY_TRANSITION_STARTED("ROOT.NormalOperate.TrackingByCamera.PersonOutView.4");
    //#[ transition NormalOperate.TrackingByCamera.PersonOutView.4 
    sensoresSumAngulo = 0;
    sensoresSumDistancia = 0;
    //#]
    NOTIFY_STATE_ENTERED("ROOT.NormalOperate.TrackingByCamera.PersonOutView.ROOT.PersonOutView.PersonOutView_Rotate360");
    pushNullTransition();
    PersonOutView_subState = PersonOutView_Rotate360;
    rootState_active = PersonOutView_Rotate360;
    NOTIFY_TRANSITION_TERMINATED("ROOT.NormalOperate.TrackingByCamera.PersonOutView.4");
}

void UC::PersonOutView_exit() {
    popNullTransition();
    switch (PersonOutView_subState) {
        // State PersonOutView_RotateToMove
        case PersonOutView_RotateToMove:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.NormalOperate.TrackingByCamera.PersonOutView.ROOT.PersonOutView.PersonOutView_RotateToMove");
        }
        break;
        // State PersonOutView_ComputePosition
        // Description: Computar posicion a la que dirigirse.
        // Encontrar sector con mayor media de distancia.
        case PersonOutView_ComputePosition:
        {
            NOTIFY_STATE_EXITED("ROOT.NormalOperate.TrackingByCamera.PersonOutView.ROOT.PersonOutView.PersonOutView_ComputePosition");
        }
        break;
        // State PersonOutView_GoForward
        case PersonOutView_GoForward:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.NormalOperate.TrackingByCamera.PersonOutView.ROOT.PersonOutView.PersonOutView_GoForward");
        }
        break;
        // State PersonOutView_Rotate360
        case PersonOutView_Rotate360:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.NormalOperate.TrackingByCamera.PersonOutView.ROOT.PersonOutView.PersonOutView_Rotate360");
        }
        break;
        default:
            break;
    }
    PersonOutView_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.NormalOperate.TrackingByCamera.PersonOutView");
}

IOxfReactive::TakeEventStatus UC::PersonOutView_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 3 
            if(cameraIsPersonInView==true)
                {
                    NOTIFY_TRANSITION_STARTED("3");
                    PersonOutView_exit();
                    PersonInView_entDef();
                    NOTIFY_TRANSITION_TERMINATED("3");
                    res = eventConsumed;
                }
        }
    
    if(res == eventNotConsumed)
        {
            res = TrackingByCamera_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus UC::PersonOutView_RotateToMove_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition NormalOperate.TrackingByCamera.PersonOutView.1 
            if(sensoresSumAngulo>computedAngle)
                {
                    NOTIFY_TRANSITION_STARTED("ROOT.NormalOperate.TrackingByCamera.PersonOutView.1");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.NormalOperate.TrackingByCamera.PersonOutView.ROOT.PersonOutView.PersonOutView_RotateToMove");
                    NOTIFY_STATE_ENTERED("ROOT.NormalOperate.TrackingByCamera.PersonOutView.ROOT.PersonOutView.PersonOutView_GoForward");
                    pushNullTransition();
                    PersonOutView_subState = PersonOutView_GoForward;
                    rootState_active = PersonOutView_GoForward;
                    NOTIFY_TRANSITION_TERMINATED("ROOT.NormalOperate.TrackingByCamera.PersonOutView.1");
                    res = eventConsumed;
                }
        }
    
    if(res == eventNotConsumed)
        {
            res = PersonOutView_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus UC::PersonOutView_Rotate360_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition NormalOperate.TrackingByCamera.PersonOutView.3 
            if(sensoresSumAngulo>360)
                {
                    NOTIFY_TRANSITION_STARTED("ROOT.NormalOperate.TrackingByCamera.PersonOutView.3");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.NormalOperate.TrackingByCamera.PersonOutView.ROOT.PersonOutView.PersonOutView_Rotate360");
                    NOTIFY_STATE_ENTERED("ROOT.NormalOperate.TrackingByCamera.PersonOutView.ROOT.PersonOutView.PersonOutView_ComputePosition");
                    PersonOutView_subState = PersonOutView_ComputePosition;
                    rootState_active = PersonOutView_ComputePosition;
                    NOTIFY_TRANSITION_TERMINATED("ROOT.NormalOperate.TrackingByCamera.PersonOutView.3");
                    res = eventConsumed;
                }
        }
    
    if(res == eventNotConsumed)
        {
            res = PersonOutView_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus UC::PersonOutView_GoForward_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition NormalOperate.TrackingByCamera.PersonOutView.2 
            if(sensoresSumDistancia>computedDistance)
                {
                    NOTIFY_TRANSITION_STARTED("ROOT.NormalOperate.TrackingByCamera.PersonOutView.2");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.NormalOperate.TrackingByCamera.PersonOutView.ROOT.PersonOutView.PersonOutView_GoForward");
                    //#[ transition NormalOperate.TrackingByCamera.PersonOutView.2 
                    
                    sensoresSumAngulo=0;
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.NormalOperate.TrackingByCamera.PersonOutView.ROOT.PersonOutView.PersonOutView_Rotate360");
                    pushNullTransition();
                    PersonOutView_subState = PersonOutView_Rotate360;
                    rootState_active = PersonOutView_Rotate360;
                    NOTIFY_TRANSITION_TERMINATED("ROOT.NormalOperate.TrackingByCamera.PersonOutView.2");
                    res = eventConsumed;
                }
        }
    
    if(res == eventNotConsumed)
        {
            res = PersonOutView_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus UC::PersonOutView_ComputePosition_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(evComputeFinish_Roboconfirmo_id))
        {
            NOTIFY_TRANSITION_STARTED("ROOT.NormalOperate.TrackingByCamera.PersonOutView.0");
            NOTIFY_STATE_EXITED("ROOT.NormalOperate.TrackingByCamera.PersonOutView.ROOT.PersonOutView.PersonOutView_ComputePosition");
            //#[ transition NormalOperate.TrackingByCamera.PersonOutView.0 
            sensoresSumAngulo=0;
            //#]
            NOTIFY_STATE_ENTERED("ROOT.NormalOperate.TrackingByCamera.PersonOutView.ROOT.PersonOutView.PersonOutView_RotateToMove");
            pushNullTransition();
            PersonOutView_subState = PersonOutView_RotateToMove;
            rootState_active = PersonOutView_RotateToMove;
            NOTIFY_TRANSITION_TERMINATED("ROOT.NormalOperate.TrackingByCamera.PersonOutView.0");
            res = eventConsumed;
        }
    
    if(res == eventNotConsumed)
        {
            res = PersonOutView_handleEvent();
        }
    return res;
}

void UC::PersonInView_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.NormalOperate.TrackingByCamera.PersonInView");
    pushNullTransition();
    TrackingByCamera_subState = PersonInView;
    NOTIFY_TRANSITION_STARTED("ROOT.NormalOperate.TrackingByCamera.PersonInView.0");
    NOTIFY_STATE_ENTERED("ROOT.NormalOperate.TrackingByCamera.PersonInView.ROOT.PersonInView.ApproachUser");
    pushNullTransition();
    PersonInView_subState = ApproachUser;
    rootState_active = ApproachUser;
    //#[ state NormalOperate.TrackingByCamera.PersonInView.PersonInView.ApproachUser.(Entry) 
    computeCameraApproach();     	
    //#]
    PersonInView_timeout = scheduleTimeout(ComputeStepTime, "ROOT.NormalOperate.TrackingByCamera.PersonInView.ROOT.PersonInView.ApproachUser");
    NOTIFY_TRANSITION_TERMINATED("ROOT.NormalOperate.TrackingByCamera.PersonInView.0");
}

void UC::PersonInView_exit() {
    popNullTransition();
    switch (PersonInView_subState) {
        // State ApproachUser
        // Description: Acercarse a la persona
        // El frente está libre, el robot se acerca a la persona.
        // //
        case ApproachUser:
        {
            popNullTransition();
            cancel(PersonInView_timeout);
            NOTIFY_STATE_EXITED("ROOT.NormalOperate.TrackingByCamera.PersonInView.ROOT.PersonInView.ApproachUser");
        }
        break;
        // State PathBlocked
        // Description: Obstaculo en el camino
        // El obstaculo puede ser una persona o un onstaculo real
        // Puedo rotar si la persona se mueve y retroceder
        case PathBlocked:
        {
            popNullTransition();
            cancel(PersonInView_timeout);
            NOTIFY_STATE_EXITED("ROOT.NormalOperate.TrackingByCamera.PersonInView.ROOT.PersonInView.PathBlocked");
        }
        break;
        case ComputeStepBlocked:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.NormalOperate.TrackingByCamera.PersonInView.ROOT.PersonInView.ComputeStepBlocked");
        }
        break;
        case ComputeStepApproach:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.NormalOperate.TrackingByCamera.PersonInView.ROOT.PersonInView.ComputeStepApproach");
        }
        break;
        default:
            break;
    }
    PersonInView_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.NormalOperate.TrackingByCamera.PersonInView");
}

IOxfReactive::TakeEventStatus UC::PersonInView_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 4 
            if(cameraIsPersonInView==false)
                {
                    NOTIFY_TRANSITION_STARTED("4");
                    PersonInView_exit();
                    PersonOutView_entDef();
                    NOTIFY_TRANSITION_TERMINATED("4");
                    res = eventConsumed;
                }
        }
    
    if(res == eventNotConsumed)
        {
            res = TrackingByCamera_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus UC::PathBlocked_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
        {
            if(getCurrentEvent() == PersonInView_timeout)
                {
                    NOTIFY_TRANSITION_STARTED("ROOT.NormalOperate.TrackingByCamera.PersonInView.3");
                    popNullTransition();
                    cancel(PersonInView_timeout);
                    NOTIFY_STATE_EXITED("ROOT.NormalOperate.TrackingByCamera.PersonInView.ROOT.PersonInView.PathBlocked");
                    NOTIFY_STATE_ENTERED("ROOT.NormalOperate.TrackingByCamera.PersonInView.ROOT.PersonInView.ComputeStepBlocked");
                    pushNullTransition();
                    PersonInView_subState = ComputeStepBlocked;
                    rootState_active = ComputeStepBlocked;
                    NOTIFY_TRANSITION_TERMINATED("ROOT.NormalOperate.TrackingByCamera.PersonInView.3");
                    res = eventConsumed;
                }
        }
    else if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition NormalOperate.TrackingByCamera.PersonInView.2 
            if(lidarIsObstable==false)
                {
                    NOTIFY_TRANSITION_STARTED("ROOT.NormalOperate.TrackingByCamera.PersonInView.2");
                    popNullTransition();
                    cancel(PersonInView_timeout);
                    NOTIFY_STATE_EXITED("ROOT.NormalOperate.TrackingByCamera.PersonInView.ROOT.PersonInView.PathBlocked");
                    NOTIFY_STATE_ENTERED("ROOT.NormalOperate.TrackingByCamera.PersonInView.ROOT.PersonInView.ApproachUser");
                    pushNullTransition();
                    PersonInView_subState = ApproachUser;
                    rootState_active = ApproachUser;
                    //#[ state NormalOperate.TrackingByCamera.PersonInView.PersonInView.ApproachUser.(Entry) 
                    computeCameraApproach();     	
                    //#]
                    PersonInView_timeout = scheduleTimeout(ComputeStepTime, "ROOT.NormalOperate.TrackingByCamera.PersonInView.ROOT.PersonInView.ApproachUser");
                    NOTIFY_TRANSITION_TERMINATED("ROOT.NormalOperate.TrackingByCamera.PersonInView.2");
                    res = eventConsumed;
                }
        }
    
    if(res == eventNotConsumed)
        {
            res = PersonInView_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus UC::ComputeStepBlocked_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            NOTIFY_TRANSITION_STARTED("ROOT.NormalOperate.TrackingByCamera.PersonInView.4");
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.NormalOperate.TrackingByCamera.PersonInView.ROOT.PersonInView.ComputeStepBlocked");
            NOTIFY_STATE_ENTERED("ROOT.NormalOperate.TrackingByCamera.PersonInView.ROOT.PersonInView.PathBlocked");
            pushNullTransition();
            PersonInView_subState = PathBlocked;
            rootState_active = PathBlocked;
            //#[ state NormalOperate.TrackingByCamera.PersonInView.PersonInView.PathBlocked.(Entry) 
            computeCameraWithObstacle();            	
            //#]
            PersonInView_timeout = scheduleTimeout(ComputeStepTime, "ROOT.NormalOperate.TrackingByCamera.PersonInView.ROOT.PersonInView.PathBlocked");
            NOTIFY_TRANSITION_TERMINATED("ROOT.NormalOperate.TrackingByCamera.PersonInView.4");
            res = eventConsumed;
        }
    
    if(res == eventNotConsumed)
        {
            res = PersonInView_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus UC::ComputeStepApproach_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            NOTIFY_TRANSITION_STARTED("ROOT.NormalOperate.TrackingByCamera.PersonInView.6");
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.NormalOperate.TrackingByCamera.PersonInView.ROOT.PersonInView.ComputeStepApproach");
            NOTIFY_STATE_ENTERED("ROOT.NormalOperate.TrackingByCamera.PersonInView.ROOT.PersonInView.ApproachUser");
            pushNullTransition();
            PersonInView_subState = ApproachUser;
            rootState_active = ApproachUser;
            //#[ state NormalOperate.TrackingByCamera.PersonInView.PersonInView.ApproachUser.(Entry) 
            computeCameraApproach();     	
            //#]
            PersonInView_timeout = scheduleTimeout(ComputeStepTime, "ROOT.NormalOperate.TrackingByCamera.PersonInView.ROOT.PersonInView.ApproachUser");
            NOTIFY_TRANSITION_TERMINATED("ROOT.NormalOperate.TrackingByCamera.PersonInView.6");
            res = eventConsumed;
        }
    
    if(res == eventNotConsumed)
        {
            res = PersonInView_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus UC::ApproachUser_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
        {
            if(getCurrentEvent() == PersonInView_timeout)
                {
                    NOTIFY_TRANSITION_STARTED("ROOT.NormalOperate.TrackingByCamera.PersonInView.5");
                    popNullTransition();
                    cancel(PersonInView_timeout);
                    NOTIFY_STATE_EXITED("ROOT.NormalOperate.TrackingByCamera.PersonInView.ROOT.PersonInView.ApproachUser");
                    NOTIFY_STATE_ENTERED("ROOT.NormalOperate.TrackingByCamera.PersonInView.ROOT.PersonInView.ComputeStepApproach");
                    pushNullTransition();
                    PersonInView_subState = ComputeStepApproach;
                    rootState_active = ComputeStepApproach;
                    NOTIFY_TRANSITION_TERMINATED("ROOT.NormalOperate.TrackingByCamera.PersonInView.5");
                    res = eventConsumed;
                }
        }
    else if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition NormalOperate.TrackingByCamera.PersonInView.1 
            if(lidarIsObstable==true)
                {
                    NOTIFY_TRANSITION_STARTED("ROOT.NormalOperate.TrackingByCamera.PersonInView.1");
                    popNullTransition();
                    cancel(PersonInView_timeout);
                    NOTIFY_STATE_EXITED("ROOT.NormalOperate.TrackingByCamera.PersonInView.ROOT.PersonInView.ApproachUser");
                    //#[ transition NormalOperate.TrackingByCamera.PersonInView.1 
                    
                    reproducirSonidoPerdida();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.NormalOperate.TrackingByCamera.PersonInView.ROOT.PersonInView.PathBlocked");
                    pushNullTransition();
                    PersonInView_subState = PathBlocked;
                    rootState_active = PathBlocked;
                    //#[ state NormalOperate.TrackingByCamera.PersonInView.PersonInView.PathBlocked.(Entry) 
                    computeCameraWithObstacle();            	
                    //#]
                    PersonInView_timeout = scheduleTimeout(ComputeStepTime, "ROOT.NormalOperate.TrackingByCamera.PersonInView.ROOT.PersonInView.PathBlocked");
                    NOTIFY_TRANSITION_TERMINATED("ROOT.NormalOperate.TrackingByCamera.PersonInView.1");
                    res = eventConsumed;
                }
        }
    
    if(res == eventNotConsumed)
        {
            res = PersonInView_handleEvent();
        }
    return res;
}

void UC::SurroundObstacle_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.NormalOperate.SurroundObstacle");
    pushNullTransition();
    NormalOperate_subState = SurroundObstacle;
    NOTIFY_TRANSITION_STARTED("9");
    //#[ transition 9 
    sensoresSumAngulo = 0;
    sensoresSumDistancia = 0;
    //#]
    NOTIFY_STATE_ENTERED("ROOT.NormalOperate.SurroundObstacle.MoveBack");
    pushNullTransition();
    SurroundObstacle_subState = MoveBack;
    rootState_active = MoveBack;
    NOTIFY_TRANSITION_TERMINATED("9");
}

IOxfReactive::TakeEventStatus UC::SurroundObstacle_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 16 
            if(sensoresCliff==true)
                {
                    NOTIFY_TRANSITION_STARTED("16");
                    popNullTransition();
                    switch (SurroundObstacle_subState) {
                        // State MoveBack
                        case MoveBack:
                        {
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.NormalOperate.SurroundObstacle.MoveBack");
                        }
                        break;
                        // State CrashAlgorithm
                        // Description: Algoritmo de rodeo.
                        // (El del TFG)
                        case CrashAlgorithm:
                        {
                            CrashAlgorithm_exit();
                        }
                        break;
                        default:
                            break;
                    }
                    SurroundObstacle_subState = OMNonState;
                    NOTIFY_STATE_EXITED("ROOT.NormalOperate.SurroundObstacle");
                    CliffAhead_entDef();
                    NOTIFY_TRANSITION_TERMINATED("16");
                    res = eventConsumed;
                }
        }
    
    if(res == eventNotConsumed)
        {
            res = NormalOperate_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus UC::MoveBack_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 10 
            if(sensoresSumDistancia<-30)
                {
                    NOTIFY_TRANSITION_STARTED("10");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.NormalOperate.SurroundObstacle.MoveBack");
                    CrashAlgorithm_entDef();
                    NOTIFY_TRANSITION_TERMINATED("10");
                    res = eventConsumed;
                }
        }
    
    if(res == eventNotConsumed)
        {
            res = SurroundObstacle_handleEvent();
        }
    return res;
}

void UC::CrashAlgorithm_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.NormalOperate.SurroundObstacle.CrashAlgorithm");
    pushNullTransition();
    SurroundObstacle_subState = CrashAlgorithm;
    NOTIFY_TRANSITION_STARTED("ROOT.NormalOperate.SurroundObstacle.CrashAlgorithm.1");
    NOTIFY_STATE_ENTERED("ROOT.NormalOperate.SurroundObstacle.CrashAlgorithm.ROOT.CrashAlgorithm.Rotate");
    pushNullTransition();
    CrashAlgorithm_subState = Rotate;
    rootState_active = Rotate;
    NOTIFY_TRANSITION_TERMINATED("ROOT.NormalOperate.SurroundObstacle.CrashAlgorithm.1");
}

void UC::CrashAlgorithm_exit() {
    popNullTransition();
    switch (CrashAlgorithm_subState) {
        // State UndoRotate
        case UndoRotate:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.NormalOperate.SurroundObstacle.CrashAlgorithm.ROOT.CrashAlgorithm.UndoRotate");
        }
        break;
        // State GoForwardExtended
        case GoForwardExtended:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.NormalOperate.SurroundObstacle.CrashAlgorithm.ROOT.CrashAlgorithm.GoForwardExtended");
        }
        break;
        // State GoForward
        case CrashAlgorithm_GoForward:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.NormalOperate.SurroundObstacle.CrashAlgorithm.ROOT.CrashAlgorithm.GoForward");
        }
        break;
        // State RotateExtended
        case RotateExtended:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.NormalOperate.SurroundObstacle.CrashAlgorithm.ROOT.CrashAlgorithm.RotateExtended");
        }
        break;
        // State Rotate
        case Rotate:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.NormalOperate.SurroundObstacle.CrashAlgorithm.ROOT.CrashAlgorithm.Rotate");
        }
        break;
        // State CrashAlorithmEndHelperState
        case CrashAlorithmEndHelperState:
        {
            popNullTransition();
        }
        break;
        default:
            break;
    }
    CrashAlgorithm_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.NormalOperate.SurroundObstacle.CrashAlgorithm");
}

IOxfReactive::TakeEventStatus UC::CrashAlgorithm_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 11 
            if(sensoresBl==true || sensoresBr==true)
                {
                    NOTIFY_TRANSITION_STARTED("11");
                    CrashAlgorithm_exit();
                    //#[ transition 11 
                    sensoresSumDistancia = 0;
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.NormalOperate.SurroundObstacle.MoveBack");
                    pushNullTransition();
                    SurroundObstacle_subState = MoveBack;
                    rootState_active = MoveBack;
                    NOTIFY_TRANSITION_TERMINATED("11");
                    res = eventConsumed;
                }
        }
    
    if(res == eventNotConsumed)
        {
            res = SurroundObstacle_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus UC::UndoRotate_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition NormalOperate.SurroundObstacle.CrashAlgorithm.0 
            if(sensoresSumAngulo<25)
                {
                    NOTIFY_TRANSITION_STARTED("ROOT.NormalOperate.SurroundObstacle.CrashAlgorithm.0");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.NormalOperate.SurroundObstacle.CrashAlgorithm.ROOT.CrashAlgorithm.UndoRotate");
                    pushNullTransition();
                    CrashAlgorithm_subState = CrashAlorithmEndHelperState;
                    rootState_active = CrashAlorithmEndHelperState;
                    NOTIFY_TRANSITION_TERMINATED("ROOT.NormalOperate.SurroundObstacle.CrashAlgorithm.0");
                    res = eventConsumed;
                }
            else
                {
                    //## transition NormalOperate.SurroundObstacle.CrashAlgorithm.4 
                    if(sensoresLBumpFront==true)
                        {
                            NOTIFY_TRANSITION_STARTED("ROOT.NormalOperate.SurroundObstacle.CrashAlgorithm.4");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.NormalOperate.SurroundObstacle.CrashAlgorithm.ROOT.CrashAlgorithm.UndoRotate");
                            NOTIFY_STATE_ENTERED("ROOT.NormalOperate.SurroundObstacle.CrashAlgorithm.ROOT.CrashAlgorithm.RotateExtended");
                            pushNullTransition();
                            CrashAlgorithm_subState = RotateExtended;
                            rootState_active = RotateExtended;
                            NOTIFY_TRANSITION_TERMINATED("ROOT.NormalOperate.SurroundObstacle.CrashAlgorithm.4");
                            res = eventConsumed;
                        }
                    else
                        {
                            //## transition NormalOperate.SurroundObstacle.CrashAlgorithm.10 
                            if(sensoresLBumpFront==false && sensoresLBumpSide==true)
                                {
                                    NOTIFY_TRANSITION_STARTED("ROOT.NormalOperate.SurroundObstacle.CrashAlgorithm.10");
                                    popNullTransition();
                                    NOTIFY_STATE_EXITED("ROOT.NormalOperate.SurroundObstacle.CrashAlgorithm.ROOT.CrashAlgorithm.UndoRotate");
                                    NOTIFY_STATE_ENTERED("ROOT.NormalOperate.SurroundObstacle.CrashAlgorithm.ROOT.CrashAlgorithm.GoForward");
                                    pushNullTransition();
                                    CrashAlgorithm_subState = CrashAlgorithm_GoForward;
                                    rootState_active = CrashAlgorithm_GoForward;
                                    NOTIFY_TRANSITION_TERMINATED("ROOT.NormalOperate.SurroundObstacle.CrashAlgorithm.10");
                                    res = eventConsumed;
                                }
                        }
                }
        }
    
    if(res == eventNotConsumed)
        {
            res = CrashAlgorithm_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus UC::RotateExtended_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition NormalOperate.SurroundObstacle.CrashAlgorithm.3 
            if(sensoresLBumpFront==false)
                {
                    NOTIFY_TRANSITION_STARTED("ROOT.NormalOperate.SurroundObstacle.CrashAlgorithm.3");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.NormalOperate.SurroundObstacle.CrashAlgorithm.ROOT.CrashAlgorithm.RotateExtended");
                    NOTIFY_STATE_ENTERED("ROOT.NormalOperate.SurroundObstacle.CrashAlgorithm.ROOT.CrashAlgorithm.GoForward");
                    pushNullTransition();
                    CrashAlgorithm_subState = CrashAlgorithm_GoForward;
                    rootState_active = CrashAlgorithm_GoForward;
                    NOTIFY_TRANSITION_TERMINATED("ROOT.NormalOperate.SurroundObstacle.CrashAlgorithm.3");
                    res = eventConsumed;
                }
        }
    
    if(res == eventNotConsumed)
        {
            res = CrashAlgorithm_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus UC::Rotate_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition NormalOperate.SurroundObstacle.CrashAlgorithm.2 
            if(sensoresSumAngulo>25)
                {
                    NOTIFY_TRANSITION_STARTED("ROOT.NormalOperate.SurroundObstacle.CrashAlgorithm.2");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.NormalOperate.SurroundObstacle.CrashAlgorithm.ROOT.CrashAlgorithm.Rotate");
                    NOTIFY_STATE_ENTERED("ROOT.NormalOperate.SurroundObstacle.CrashAlgorithm.ROOT.CrashAlgorithm.RotateExtended");
                    pushNullTransition();
                    CrashAlgorithm_subState = RotateExtended;
                    rootState_active = RotateExtended;
                    NOTIFY_TRANSITION_TERMINATED("ROOT.NormalOperate.SurroundObstacle.CrashAlgorithm.2");
                    res = eventConsumed;
                }
        }
    
    if(res == eventNotConsumed)
        {
            res = CrashAlgorithm_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus UC::GoForwardExtended_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition NormalOperate.SurroundObstacle.CrashAlgorithm.6 
            if(sensoresSumDistancia>300)
                {
                    NOTIFY_TRANSITION_STARTED("ROOT.NormalOperate.SurroundObstacle.CrashAlgorithm.6");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.NormalOperate.SurroundObstacle.CrashAlgorithm.ROOT.CrashAlgorithm.GoForwardExtended");
                    NOTIFY_STATE_ENTERED("ROOT.NormalOperate.SurroundObstacle.CrashAlgorithm.ROOT.CrashAlgorithm.UndoRotate");
                    pushNullTransition();
                    CrashAlgorithm_subState = UndoRotate;
                    rootState_active = UndoRotate;
                    NOTIFY_TRANSITION_TERMINATED("ROOT.NormalOperate.SurroundObstacle.CrashAlgorithm.6");
                    res = eventConsumed;
                }
            else
                {
                    //## transition NormalOperate.SurroundObstacle.CrashAlgorithm.7 
                    if(sensoresLBumpFront==false && sensoresLBumpSide==true)
                        {
                            NOTIFY_TRANSITION_STARTED("ROOT.NormalOperate.SurroundObstacle.CrashAlgorithm.7");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.NormalOperate.SurroundObstacle.CrashAlgorithm.ROOT.CrashAlgorithm.GoForwardExtended");
                            NOTIFY_STATE_ENTERED("ROOT.NormalOperate.SurroundObstacle.CrashAlgorithm.ROOT.CrashAlgorithm.GoForward");
                            pushNullTransition();
                            CrashAlgorithm_subState = CrashAlgorithm_GoForward;
                            rootState_active = CrashAlgorithm_GoForward;
                            NOTIFY_TRANSITION_TERMINATED("ROOT.NormalOperate.SurroundObstacle.CrashAlgorithm.7");
                            res = eventConsumed;
                        }
                    else
                        {
                            //## transition NormalOperate.SurroundObstacle.CrashAlgorithm.9 
                            if(sensoresLBumpFront==true)
                                {
                                    NOTIFY_TRANSITION_STARTED("ROOT.NormalOperate.SurroundObstacle.CrashAlgorithm.9");
                                    popNullTransition();
                                    NOTIFY_STATE_EXITED("ROOT.NormalOperate.SurroundObstacle.CrashAlgorithm.ROOT.CrashAlgorithm.GoForwardExtended");
                                    NOTIFY_STATE_ENTERED("ROOT.NormalOperate.SurroundObstacle.CrashAlgorithm.ROOT.CrashAlgorithm.RotateExtended");
                                    pushNullTransition();
                                    CrashAlgorithm_subState = RotateExtended;
                                    rootState_active = RotateExtended;
                                    NOTIFY_TRANSITION_TERMINATED("ROOT.NormalOperate.SurroundObstacle.CrashAlgorithm.9");
                                    res = eventConsumed;
                                }
                        }
                }
        }
    
    if(res == eventNotConsumed)
        {
            res = CrashAlgorithm_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus UC::CrashAlgorithm_GoForward_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition NormalOperate.SurroundObstacle.CrashAlgorithm.5 
            if(sensoresLBumpSide==false)
                {
                    NOTIFY_TRANSITION_STARTED("ROOT.NormalOperate.SurroundObstacle.CrashAlgorithm.5");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.NormalOperate.SurroundObstacle.CrashAlgorithm.ROOT.CrashAlgorithm.GoForward");
                    //#[ transition NormalOperate.SurroundObstacle.CrashAlgorithm.5 
                    
                    sensoresSumDistancia=0;
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.NormalOperate.SurroundObstacle.CrashAlgorithm.ROOT.CrashAlgorithm.GoForwardExtended");
                    pushNullTransition();
                    CrashAlgorithm_subState = GoForwardExtended;
                    rootState_active = GoForwardExtended;
                    NOTIFY_TRANSITION_TERMINATED("ROOT.NormalOperate.SurroundObstacle.CrashAlgorithm.5");
                    res = eventConsumed;
                }
            else
                {
                    //## transition NormalOperate.SurroundObstacle.CrashAlgorithm.8 
                    if(sensoresLBumpFront==true)
                        {
                            NOTIFY_TRANSITION_STARTED("ROOT.NormalOperate.SurroundObstacle.CrashAlgorithm.8");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.NormalOperate.SurroundObstacle.CrashAlgorithm.ROOT.CrashAlgorithm.GoForward");
                            NOTIFY_STATE_ENTERED("ROOT.NormalOperate.SurroundObstacle.CrashAlgorithm.ROOT.CrashAlgorithm.RotateExtended");
                            pushNullTransition();
                            CrashAlgorithm_subState = RotateExtended;
                            rootState_active = RotateExtended;
                            NOTIFY_TRANSITION_TERMINATED("ROOT.NormalOperate.SurroundObstacle.CrashAlgorithm.8");
                            res = eventConsumed;
                        }
                }
        }
    
    if(res == eventNotConsumed)
        {
            res = CrashAlgorithm_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus UC::CrashAlorithmEndHelperStateTakeNull() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    NOTIFY_TRANSITION_STARTED("ROOT.NormalOperate.SurroundObstacle.CrashAlgorithm.11");
    popNullTransition();
    switch (SurroundObstacle_subState) {
        // State MoveBack
        case MoveBack:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.NormalOperate.SurroundObstacle.MoveBack");
        }
        break;
        // State CrashAlgorithm
        // Description: Algoritmo de rodeo.
        // (El del TFG)
        case CrashAlgorithm:
        {
            CrashAlgorithm_exit();
        }
        break;
        default:
            break;
    }
    SurroundObstacle_subState = OMNonState;
    NOTIFY_STATE_EXITED("ROOT.NormalOperate.SurroundObstacle");
    TrackingByCamera_entDef();
    NOTIFY_TRANSITION_TERMINATED("ROOT.NormalOperate.SurroundObstacle.CrashAlgorithm.11");
    res = eventConsumed;
    return res;
}

IOxfReactive::TakeEventStatus UC::CrashAlorithmEndHelperState_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            res = CrashAlorithmEndHelperStateTakeNull();
        }
    
    if(res == eventNotConsumed)
        {
            res = CrashAlgorithm_handleEvent();
        }
    return res;
}

void UC::CliffAhead_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.NormalOperate.CliffAhead");
    NormalOperate_subState = CliffAhead;
    NOTIFY_TRANSITION_STARTED("12");
    //#[ transition 12 
    sensoresSumAngulo=0;
    sensoresSumDistancia=0;
    //#]
    NOTIFY_STATE_ENTERED("ROOT.NormalOperate.CliffAhead.Rotate180");
    pushNullTransition();
    CliffAhead_subState = Rotate180;
    rootState_active = Rotate180;
    NOTIFY_TRANSITION_TERMINATED("12");
}

IOxfReactive::TakeEventStatus UC::CliffAhead_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    res = NormalOperate_handleEvent();
    return res;
}

IOxfReactive::TakeEventStatus UC::Rotate180_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 13 
            if(sensoresSumAngulo>180)
                {
                    NOTIFY_TRANSITION_STARTED("13");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.NormalOperate.CliffAhead.Rotate180");
                    NOTIFY_STATE_ENTERED("ROOT.NormalOperate.CliffAhead.GoForward");
                    pushNullTransition();
                    CliffAhead_subState = GoForward;
                    rootState_active = GoForward;
                    NOTIFY_TRANSITION_TERMINATED("13");
                    res = eventConsumed;
                }
        }
    
    if(res == eventNotConsumed)
        {
            res = CliffAhead_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus UC::GoForwardTakeNull() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    //## transition 17 
    if(sensoresSumDistancia>300)
        {
            NOTIFY_TRANSITION_STARTED("17");
            switch (CliffAhead_subState) {
                // State Rotate180
                case Rotate180:
                {
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.NormalOperate.CliffAhead.Rotate180");
                }
                break;
                // State GoForward
                case GoForward:
                {
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.NormalOperate.CliffAhead.GoForward");
                }
                break;
                default:
                    break;
            }
            CliffAhead_subState = OMNonState;
            NOTIFY_STATE_EXITED("ROOT.NormalOperate.CliffAhead");
            TrackingByCamera_entDef();
            NOTIFY_TRANSITION_TERMINATED("17");
            res = eventConsumed;
        }
    return res;
}

IOxfReactive::TakeEventStatus UC::GoForward_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            res = GoForwardTakeNull();
        }
    
    if(res == eventNotConsumed)
        {
            res = CliffAhead_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus UC::IdleTakebtnClean() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    //## transition 26 
    if(sensoresInDock==true)
        {
            NOTIFY_TRANSITION_STARTED("2");
            NOTIFY_TRANSITION_STARTED("26");
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.Idle");
            UndoPark_entDef();
            NOTIFY_TRANSITION_TERMINATED("26");
            NOTIFY_TRANSITION_TERMINATED("2");
            res = eventConsumed;
        }
    else
        {
            NOTIFY_TRANSITION_STARTED("2");
            NOTIFY_TRANSITION_STARTED("27");
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.Idle");
            NormalOperate_entDef();
            NOTIFY_TRANSITION_TERMINATED("27");
            NOTIFY_TRANSITION_TERMINATED("2");
            res = eventConsumed;
        }
    return res;
}

IOxfReactive::TakeEventStatus UC::Idle_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 21 
            if(sensoresBateria<15)
                {
                    NOTIFY_TRANSITION_STARTED("21");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Idle");
                    NOTIFY_STATE_ENTERED("ROOT.GoingDock");
                    pushNullTransition();
                    rootState_subState = GoingDock;
                    rootState_active = GoingDock;
                    //#[ state GoingDock.(Entry) 
                    gotoDock();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("21");
                    res = eventConsumed;
                }
        }
    else if(IS_EVENT_TYPE_OF(btnClean_Roboconfirmo_id))
        {
            res = IdleTakebtnClean();
        }
    else if(IS_EVENT_TYPE_OF(btnSpot_Roboconfirmo_id))
        {
            NOTIFY_TRANSITION_STARTED("25");
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.Idle");
            NOTIFY_STATE_ENTERED("ROOT.EndOperation");
            pushNullTransition();
            rootState_subState = EndOperation;
            rootState_active = EndOperation;
            NOTIFY_TRANSITION_TERMINATED("25");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(btnDock_Roboconfirmo_id))
        {
            NOTIFY_TRANSITION_STARTED("7");
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.Idle");
            NOTIFY_STATE_ENTERED("ROOT.GoingDock");
            pushNullTransition();
            rootState_subState = GoingDock;
            rootState_active = GoingDock;
            //#[ state GoingDock.(Entry) 
            gotoDock();
            //#]
            NOTIFY_TRANSITION_TERMINATED("7");
            res = eventConsumed;
        }
    
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedUC::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case UC::Initializing:
        {
            Initializing_serializeStates(aomsState);
        }
        break;
        case UC::Idle:
        {
            Idle_serializeStates(aomsState);
        }
        break;
        case UC::GoingDock:
        {
            GoingDock_serializeStates(aomsState);
        }
        break;
        case UC::NormalOperate:
        {
            NormalOperate_serializeStates(aomsState);
        }
        break;
        case UC::InitFailed:
        {
            InitFailed_serializeStates(aomsState);
        }
        break;
        case UC::EndOperation:
        {
            EndOperation_serializeStates(aomsState);
        }
        break;
        case UC::UndoPark:
        {
            UndoPark_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedUC::UndoPark_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.UndoPark");
    switch (myReal->UndoPark_subState) {
        case UC::UndoPark_Rotate180:
        {
            UndoPark_Rotate180_serializeStates(aomsState);
        }
        break;
        case UC::ExitDock:
        {
            ExitDock_serializeStates(aomsState);
        }
        break;
        case UC::EndUndoParkHelperState:
        {
            EndUndoParkHelperState_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedUC::UndoPark_Rotate180_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.UndoPark.ROOT.UndoPark.Rotate180");
}

void OMAnimatedUC::ExitDock_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.UndoPark.ROOT.UndoPark.ExitDock");
}

void OMAnimatedUC::EndUndoParkHelperState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.UndoPark.ROOT.UndoPark.EndUndoParkHelperState");
}

void OMAnimatedUC::NormalOperate_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.NormalOperate");
    switch (myReal->NormalOperate_subState) {
        case UC::TrackingByCamera:
        {
            TrackingByCamera_serializeStates(aomsState);
        }
        break;
        case UC::CliffAhead:
        {
            CliffAhead_serializeStates(aomsState);
        }
        break;
        case UC::SurroundObstacle:
        {
            SurroundObstacle_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedUC::TrackingByCamera_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.NormalOperate.TrackingByCamera");
    switch (myReal->TrackingByCamera_subState) {
        case UC::PersonInView:
        {
            PersonInView_serializeStates(aomsState);
        }
        break;
        case UC::PersonOutView:
        {
            PersonOutView_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedUC::PersonOutView_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.NormalOperate.TrackingByCamera.PersonOutView");
    switch (myReal->PersonOutView_subState) {
        case UC::PersonOutView_RotateToMove:
        {
            PersonOutView_RotateToMove_serializeStates(aomsState);
        }
        break;
        case UC::PersonOutView_ComputePosition:
        {
            PersonOutView_ComputePosition_serializeStates(aomsState);
        }
        break;
        case UC::PersonOutView_GoForward:
        {
            PersonOutView_GoForward_serializeStates(aomsState);
        }
        break;
        case UC::PersonOutView_Rotate360:
        {
            PersonOutView_Rotate360_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedUC::PersonOutView_RotateToMove_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.NormalOperate.TrackingByCamera.PersonOutView.ROOT.PersonOutView.PersonOutView_RotateToMove");
}

void OMAnimatedUC::PersonOutView_Rotate360_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.NormalOperate.TrackingByCamera.PersonOutView.ROOT.PersonOutView.PersonOutView_Rotate360");
}

void OMAnimatedUC::PersonOutView_GoForward_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.NormalOperate.TrackingByCamera.PersonOutView.ROOT.PersonOutView.PersonOutView_GoForward");
}

void OMAnimatedUC::PersonOutView_ComputePosition_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.NormalOperate.TrackingByCamera.PersonOutView.ROOT.PersonOutView.PersonOutView_ComputePosition");
}

void OMAnimatedUC::PersonInView_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.NormalOperate.TrackingByCamera.PersonInView");
    switch (myReal->PersonInView_subState) {
        case UC::ApproachUser:
        {
            ApproachUser_serializeStates(aomsState);
        }
        break;
        case UC::PathBlocked:
        {
            PathBlocked_serializeStates(aomsState);
        }
        break;
        case UC::ComputeStepBlocked:
        {
            ComputeStepBlocked_serializeStates(aomsState);
        }
        break;
        case UC::ComputeStepApproach:
        {
            ComputeStepApproach_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedUC::PathBlocked_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.NormalOperate.TrackingByCamera.PersonInView.ROOT.PersonInView.PathBlocked");
}

void OMAnimatedUC::ComputeStepBlocked_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.NormalOperate.TrackingByCamera.PersonInView.ROOT.PersonInView.ComputeStepBlocked");
}

void OMAnimatedUC::ComputeStepApproach_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.NormalOperate.TrackingByCamera.PersonInView.ROOT.PersonInView.ComputeStepApproach");
}

void OMAnimatedUC::ApproachUser_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.NormalOperate.TrackingByCamera.PersonInView.ROOT.PersonInView.ApproachUser");
}

void OMAnimatedUC::SurroundObstacle_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.NormalOperate.SurroundObstacle");
    switch (myReal->SurroundObstacle_subState) {
        case UC::MoveBack:
        {
            MoveBack_serializeStates(aomsState);
        }
        break;
        case UC::CrashAlgorithm:
        {
            CrashAlgorithm_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedUC::MoveBack_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.NormalOperate.SurroundObstacle.MoveBack");
}

void OMAnimatedUC::CrashAlgorithm_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.NormalOperate.SurroundObstacle.CrashAlgorithm");
    switch (myReal->CrashAlgorithm_subState) {
        case UC::UndoRotate:
        {
            UndoRotate_serializeStates(aomsState);
        }
        break;
        case UC::GoForwardExtended:
        {
            GoForwardExtended_serializeStates(aomsState);
        }
        break;
        case UC::CrashAlgorithm_GoForward:
        {
            CrashAlgorithm_GoForward_serializeStates(aomsState);
        }
        break;
        case UC::RotateExtended:
        {
            RotateExtended_serializeStates(aomsState);
        }
        break;
        case UC::Rotate:
        {
            Rotate_serializeStates(aomsState);
        }
        break;
        case UC::CrashAlorithmEndHelperState:
        {
            CrashAlorithmEndHelperState_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedUC::UndoRotate_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.NormalOperate.SurroundObstacle.CrashAlgorithm.ROOT.CrashAlgorithm.UndoRotate");
}

void OMAnimatedUC::RotateExtended_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.NormalOperate.SurroundObstacle.CrashAlgorithm.ROOT.CrashAlgorithm.RotateExtended");
}

void OMAnimatedUC::Rotate_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.NormalOperate.SurroundObstacle.CrashAlgorithm.ROOT.CrashAlgorithm.Rotate");
}

void OMAnimatedUC::GoForwardExtended_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.NormalOperate.SurroundObstacle.CrashAlgorithm.ROOT.CrashAlgorithm.GoForwardExtended");
}

void OMAnimatedUC::CrashAlgorithm_GoForward_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.NormalOperate.SurroundObstacle.CrashAlgorithm.ROOT.CrashAlgorithm.GoForward");
}

void OMAnimatedUC::CrashAlorithmEndHelperState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.NormalOperate.SurroundObstacle.CrashAlgorithm.ROOT.CrashAlgorithm.CrashAlorithmEndHelperState");
}

void OMAnimatedUC::CliffAhead_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.NormalOperate.CliffAhead");
    switch (myReal->CliffAhead_subState) {
        case UC::Rotate180:
        {
            Rotate180_serializeStates(aomsState);
        }
        break;
        case UC::GoForward:
        {
            GoForward_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedUC::Rotate180_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.NormalOperate.CliffAhead.Rotate180");
}

void OMAnimatedUC::GoForward_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.NormalOperate.CliffAhead.GoForward");
}

void OMAnimatedUC::Initializing_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Initializing");
}

void OMAnimatedUC::InitFailed_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.InitFailed");
}

void OMAnimatedUC::Idle_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Idle");
}

void OMAnimatedUC::GoingDock_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.GoingDock");
}

void OMAnimatedUC::EndOperation_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.EndOperation");
}
//#]

IMPLEMENT_REACTIVE_META_P(UC, Roboconfirmo, Roboconfirmo, false, OMAnimatedUC)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/UC.cpp
*********************************************************************/
