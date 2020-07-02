/********************************************************************
	Rhapsody	: 8.4 
	Login		: chris
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: UC
//!	Generated Date	: Thu, 2, Jul 2020  
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

#define Roboconfirmo_UC_computeCameraApproach_SERIALIZE OM_NO_OP

#define Roboconfirmo_UC_computeCameraWithObstacle_SERIALIZE OM_NO_OP

#define Roboconfirmo_UC_establecerActuadores_SERIALIZE OM_NO_OP

#define Roboconfirmo_UC_gotoDock_SERIALIZE OM_NO_OP

#define Roboconfirmo_UC_init_SERIALIZE OM_NO_OP

#define Roboconfirmo_UC_reproducirSonidoPerdida_SERIALIZE OM_NO_OP
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

void UC::computeCameraApproach() {
    NOTIFY_OPERATION(computeCameraApproach, computeCameraApproach(), 0, Roboconfirmo_UC_computeCameraApproach_SERIALIZE);
    //#[ operation computeCameraApproach()
    //#]
}

void UC::computeCameraWithObstacle() {
    NOTIFY_OPERATION(computeCameraWithObstacle, computeCameraWithObstacle(), 0, Roboconfirmo_UC_computeCameraWithObstacle_SERIALIZE);
    //#[ operation computeCameraWithObstacle()
    //#]
}

void UC::establecerActuadores() {
    NOTIFY_OPERATION(establecerActuadores, establecerActuadores(), 0, Roboconfirmo_UC_establecerActuadores_SERIALIZE);
    //#[ operation establecerActuadores()
    //#]
}

void UC::gotoDock() {
    NOTIFY_OPERATION(gotoDock, gotoDock(), 0, Roboconfirmo_UC_gotoDock_SERIALIZE);
    //#[ operation gotoDock()
    //#]
}

void UC::init() {
    NOTIFY_OPERATION(init, init(), 0, Roboconfirmo_UC_init_SERIALIZE);
    //#[ operation init()
    //#]
}

bool UC::reproducirSonidoPerdida() {
    NOTIFY_OPERATION(reproducirSonidoPerdida, reproducirSonidoPerdida(), 0, Roboconfirmo_UC_reproducirSonidoPerdida_SERIALIZE);
    //#[ operation reproducirSonidoPerdida()
    //#]
}

int UC::getBumpObstacle() const {
    return BumpObstacle;
}

void UC::setBumpObstacle(int p_BumpObstacle) {
    BumpObstacle = p_BumpObstacle;
}

int UC::getComputeStepTime() const {
    return ComputeStepTime;
}

void UC::setComputeStepTime(int p_ComputeStepTime) {
    ComputeStepTime = p_ComputeStepTime;
}

bool UC::getCameraIsPersonInView() const {
    return cameraIsPersonInView;
}

void UC::setCameraIsPersonInView(bool p_cameraIsPersonInView) {
    cameraIsPersonInView = p_cameraIsPersonInView;
}

int UC::getInitStatus() const {
    return initStatus;
}

void UC::setInitStatus(int p_initStatus) {
    initStatus = p_initStatus;
}

int UC::getLidarIsObstable() const {
    return lidarIsObstable;
}

void UC::setLidarIsObstable(int p_lidarIsObstable) {
    lidarIsObstable = p_lidarIsObstable;
}

int UC::getSensoresBateria() const {
    return sensoresBateria;
}

void UC::setSensoresBateria(int p_sensoresBateria) {
    sensoresBateria = p_sensoresBateria;
}

bool UC::getSensoresBl() const {
    return sensoresBl;
}

void UC::setSensoresBl(bool p_sensoresBl) {
    sensoresBl = p_sensoresBl;
}

bool UC::getSensoresBr() const {
    return sensoresBr;
}

void UC::setSensoresBr(bool p_sensoresBr) {
    sensoresBr = p_sensoresBr;
}

bool UC::getSensoresCliff() const {
    return sensoresCliff;
}

void UC::setSensoresCliff(bool p_sensoresCliff) {
    sensoresCliff = p_sensoresCliff;
}

int UC::getSensoresInDock() const {
    return sensoresInDock;
}

void UC::setSensoresInDock(int p_sensoresInDock) {
    sensoresInDock = p_sensoresInDock;
}

bool UC::getSensoresLBumpFront() const {
    return sensoresLBumpFront;
}

void UC::setSensoresLBumpFront(bool p_sensoresLBumpFront) {
    sensoresLBumpFront = p_sensoresLBumpFront;
}

bool UC::getSensoresLBumpSide() const {
    return sensoresLBumpSide;
}

void UC::setSensoresLBumpSide(bool p_sensoresLBumpSide) {
    sensoresLBumpSide = p_sensoresLBumpSide;
}

int UC::getSensoresSumAngulo() const {
    return sensoresSumAngulo;
}

void UC::setSensoresSumAngulo(int p_sensoresSumAngulo) {
    sensoresSumAngulo = p_sensoresSumAngulo;
}

int UC::getSensoresSumDistancia() const {
    return sensoresSumDistancia;
}

void UC::setSensoresSumDistancia(int p_sensoresSumDistancia) {
    sensoresSumDistancia = p_sensoresSumDistancia;
}

bool UC::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void UC::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    UnDock_subState = OMNonState;
    NormalOperate_subState = OMNonState;
    TrackingByCamera_subState = OMNonState;
    PersonOutView_subState = OMNonState;
    PersonInView_subState = OMNonState;
    PersonInView_timeout = NULL;
    DodgeObstacle_subState = OMNonState;
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
            else if(IS_EVENT_TYPE_OF(btnSpot_Roboconfirmo_id))
                {
                    NOTIFY_TRANSITION_STARTED("33");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Initializing");
                    NOTIFY_STATE_ENTERED("ROOT.Shutdown");
                    pushNullTransition();
                    rootState_subState = Shutdown;
                    rootState_active = Shutdown;
                    NOTIFY_TRANSITION_TERMINATED("33");
                    res = eventConsumed;
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
        // State Dock
        // Description: Dirigirse a la base.
        case Dock:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 29 
                    if(sensoresInDock==true)
                        {
                            NOTIFY_TRANSITION_STARTED("29");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.Dock");
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
        // State PersonInView_ApproachUser
        // Description: Acercarse a la persona
        // El frente está libre, el robot se acerca a la persona.
        // //
        case PersonInView_ApproachUser:
        {
            res = PersonInView_ApproachUser_handleEvent();
        }
        break;
        // State PersonInView_PathBlocked
        // Description: Obstaculo en el camino
        // El obstaculo puede ser una persona o un onstaculo real
        // Puedo rotar si la persona se mueve y retroceder
        case PersonInView_PathBlocked:
        {
            res = PersonInView_PathBlocked_handleEvent();
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
        // State Dodge_MoveBack
        case Dodge_MoveBack:
        {
            res = Dodge_MoveBack_handleEvent();
        }
        break;
        // State CrashAlgorithm_Dodge
        case CrashAlgorithm_Dodge:
        {
            res = CrashAlgorithm_Dodge_handleEvent();
        }
        break;
        // State CrashAlgorithm_DodgeParallel
        case CrashAlgorithm_DodgeParallel:
        {
            res = CrashAlgorithm_DodgeParallel_handleEvent();
        }
        break;
        // State CrashAlgorithm_GoForward
        case CrashAlgorithm_GoForward:
        {
            res = CrashAlgorithm_GoForward_handleEvent();
        }
        break;
        // State CrashAlgorithm_GoForwardExtended
        case CrashAlgorithm_GoForwardExtended:
        {
            res = CrashAlgorithm_GoForwardExtended_handleEvent();
        }
        break;
        // State CrashAlgorithm_RecoverTrajectory
        case CrashAlgorithm_RecoverTrajectory:
        {
            res = CrashAlgorithm_RecoverTrajectory_handleEvent();
        }
        break;
        // State CrashAlorithmEndHelperState
        case CrashAlorithmEndHelperState:
        {
            res = CrashAlorithmEndHelperState_handleEvent();
        }
        break;
        // State CliffAhead_Rotate180
        case CliffAhead_Rotate180:
        {
            res = CliffAhead_Rotate180_handleEvent();
        }
        break;
        // State CliffAhead_GoForward
        case CliffAhead_GoForward:
        {
            res = CliffAhead_GoForward_handleEvent();
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
        // State Shutdown
        // Description: Fin de operacion
        // Terminar la ejecucion del algoritmo principal, liberar recursos y salir.
        case Shutdown:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("24");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Shutdown");
                    endBehavior();
                    NOTIFY_TRANSITION_TERMINATED("24");
                    res = eventConsumed;
                }
            
        }
        break;
        // State ExitDock
        case ExitDock:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition UnDock.1 
                    if(sensoresSumDistancia<-300)
                        {
                            NOTIFY_TRANSITION_STARTED("ROOT.UnDock.1");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.UnDock.ROOT.UnDock.ExitDock");
                            //#[ transition UnDock.1 
                            sensoresSumAngulo=0;
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.UnDock.ROOT.UnDock.UnDock_Rotate180");
                            pushNullTransition();
                            UnDock_subState = UnDock_Rotate180;
                            rootState_active = UnDock_Rotate180;
                            NOTIFY_TRANSITION_TERMINATED("ROOT.UnDock.1");
                            res = eventConsumed;
                        }
                }
            
            if(res == eventNotConsumed)
                {
                    res = UnDock_handleEvent();
                }
        }
        break;
        // State UnDock_Rotate180
        case UnDock_Rotate180:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition UnDock.2 
                    if(sensoresSumAngulo>180;)
                        {
                            NOTIFY_TRANSITION_STARTED("ROOT.UnDock.2");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.UnDock.ROOT.UnDock.UnDock_Rotate180");
                            pushNullTransition();
                            UnDock_subState = EndUndoParkHelperState;
                            rootState_active = EndUndoParkHelperState;
                            NOTIFY_TRANSITION_TERMINATED("ROOT.UnDock.2");
                            res = eventConsumed;
                        }
                }
            
            if(res == eventNotConsumed)
                {
                    res = UnDock_handleEvent();
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

void UC::UnDock_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.UnDock");
    rootState_subState = UnDock;
    NOTIFY_TRANSITION_STARTED("ROOT.UnDock.0");
    //#[ transition UnDock.0 
    sensoresSumDistancia=0;
    //#]
    NOTIFY_STATE_ENTERED("ROOT.UnDock.ROOT.UnDock.ExitDock");
    pushNullTransition();
    UnDock_subState = ExitDock;
    rootState_active = ExitDock;
    NOTIFY_TRANSITION_TERMINATED("ROOT.UnDock.0");
}

IOxfReactive::TakeEventStatus UC::UnDock_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(btnSpot_Roboconfirmo_id))
        {
            NOTIFY_TRANSITION_STARTED("34");
            switch (UnDock_subState) {
                // State ExitDock
                case ExitDock:
                {
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.UnDock.ROOT.UnDock.ExitDock");
                }
                break;
                // State UnDock_Rotate180
                case UnDock_Rotate180:
                {
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.UnDock.ROOT.UnDock.UnDock_Rotate180");
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
            UnDock_subState = OMNonState;
            NOTIFY_STATE_EXITED("ROOT.UnDock");
            NOTIFY_STATE_ENTERED("ROOT.Shutdown");
            pushNullTransition();
            rootState_subState = Shutdown;
            rootState_active = Shutdown;
            NOTIFY_TRANSITION_TERMINATED("34");
            res = eventConsumed;
        }
    
    return res;
}

IOxfReactive::TakeEventStatus UC::EndUndoParkHelperStateTakeNull() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    NOTIFY_TRANSITION_STARTED("ROOT.UnDock.3");
    switch (UnDock_subState) {
        // State ExitDock
        case ExitDock:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.UnDock.ROOT.UnDock.ExitDock");
        }
        break;
        // State UnDock_Rotate180
        case UnDock_Rotate180:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.UnDock.ROOT.UnDock.UnDock_Rotate180");
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
    UnDock_subState = OMNonState;
    NOTIFY_STATE_EXITED("ROOT.UnDock");
    NormalOperate_entDef();
    NOTIFY_TRANSITION_TERMINATED("ROOT.UnDock.3");
    res = eventConsumed;
    return res;
}

IOxfReactive::TakeEventStatus UC::EndUndoParkHelperState_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            res = EndUndoParkHelperStateTakeNull();
        }
    
    if(res == eventNotConsumed)
        {
            res = UnDock_handleEvent();
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
        // State DodgeObstacle
        // Description: Se ha colisionado con un obstaculo.
        // Rodear el obstaculo y volver a encontrar a la persona.
        case DodgeObstacle:
        {
            popNullTransition();
            switch (DodgeObstacle_subState) {
                // State Dodge_MoveBack
                case Dodge_MoveBack:
                {
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.NormalOperate.DodgeObstacle.Dodge_MoveBack");
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
            DodgeObstacle_subState = OMNonState;
            NOTIFY_STATE_EXITED("ROOT.NormalOperate.DodgeObstacle");
        }
        break;
        // State CliffAhead
        // Description: Barranco detectado.
        // Devolver el robot a un estado seguro.
        case CliffAhead:
        {
            switch (CliffAhead_subState) {
                // State CliffAhead_Rotate180
                case CliffAhead_Rotate180:
                {
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.NormalOperate.CliffAhead.CliffAhead_Rotate180");
                }
                break;
                // State CliffAhead_GoForward
                case CliffAhead_GoForward:
                {
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.NormalOperate.CliffAhead.CliffAhead_GoForward");
                }
                break;
                default:
                    break;
            }
            CliffAhead_subState = OMNonState;
            NOTIFY_STATE_EXITED("ROOT.NormalOperate.CliffAhead");
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
                    NOTIFY_STATE_ENTERED("ROOT.Dock");
                    pushNullTransition();
                    rootState_subState = Dock;
                    rootState_active = Dock;
                    //#[ state Dock.(Entry) 
                    gotoDock();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("20");
                    res = eventConsumed;
                }
        }
    else if(IS_EVENT_TYPE_OF(btnClean_Roboconfirmo_id))
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
    else if(IS_EVENT_TYPE_OF(btnSpot_Roboconfirmo_id))
        {
            NOTIFY_TRANSITION_STARTED("32");
            NormalOperate_exit();
            NOTIFY_STATE_ENTERED("ROOT.Shutdown");
            pushNullTransition();
            rootState_subState = Shutdown;
            rootState_active = Shutdown;
            NOTIFY_TRANSITION_TERMINATED("32");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(btnDock_Roboconfirmo_id))
        {
            NOTIFY_TRANSITION_STARTED("6");
            NormalOperate_exit();
            NOTIFY_STATE_ENTERED("ROOT.Dock");
            pushNullTransition();
            rootState_subState = Dock;
            rootState_active = Dock;
            //#[ state Dock.(Entry) 
            gotoDock();
            //#]
            NOTIFY_TRANSITION_TERMINATED("6");
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
                    DodgeObstacle_entDef();
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
            popNullTransition();
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
                    pushNullTransition();
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
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            NOTIFY_TRANSITION_STARTED("ROOT.NormalOperate.TrackingByCamera.PersonOutView.0");
            popNullTransition();
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
    NOTIFY_STATE_ENTERED("ROOT.NormalOperate.TrackingByCamera.PersonInView.ROOT.PersonInView.PersonInView_ApproachUser");
    pushNullTransition();
    PersonInView_subState = PersonInView_ApproachUser;
    rootState_active = PersonInView_ApproachUser;
    //#[ state NormalOperate.TrackingByCamera.PersonInView.PersonInView.PersonInView_ApproachUser.(Entry) 
    computeCameraApproach();     	
    //#]
    PersonInView_timeout = scheduleTimeout(ComputeStepTime, "ROOT.NormalOperate.TrackingByCamera.PersonInView.ROOT.PersonInView.PersonInView_ApproachUser");
    NOTIFY_TRANSITION_TERMINATED("ROOT.NormalOperate.TrackingByCamera.PersonInView.0");
}

void UC::PersonInView_exit() {
    popNullTransition();
    switch (PersonInView_subState) {
        // State PersonInView_ApproachUser
        // Description: Acercarse a la persona
        // El frente está libre, el robot se acerca a la persona.
        // //
        case PersonInView_ApproachUser:
        {
            popNullTransition();
            cancel(PersonInView_timeout);
            NOTIFY_STATE_EXITED("ROOT.NormalOperate.TrackingByCamera.PersonInView.ROOT.PersonInView.PersonInView_ApproachUser");
        }
        break;
        // State PersonInView_PathBlocked
        // Description: Obstaculo en el camino
        // El obstaculo puede ser una persona o un onstaculo real
        // Puedo rotar si la persona se mueve y retroceder
        case PersonInView_PathBlocked:
        {
            popNullTransition();
            cancel(PersonInView_timeout);
            NOTIFY_STATE_EXITED("ROOT.NormalOperate.TrackingByCamera.PersonInView.ROOT.PersonInView.PersonInView_PathBlocked");
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

IOxfReactive::TakeEventStatus UC::PersonInView_PathBlocked_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
        {
            if(getCurrentEvent() == PersonInView_timeout)
                {
                    NOTIFY_TRANSITION_STARTED("ROOT.NormalOperate.TrackingByCamera.PersonInView.3");
                    popNullTransition();
                    cancel(PersonInView_timeout);
                    NOTIFY_STATE_EXITED("ROOT.NormalOperate.TrackingByCamera.PersonInView.ROOT.PersonInView.PersonInView_PathBlocked");
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
                    NOTIFY_STATE_EXITED("ROOT.NormalOperate.TrackingByCamera.PersonInView.ROOT.PersonInView.PersonInView_PathBlocked");
                    NOTIFY_STATE_ENTERED("ROOT.NormalOperate.TrackingByCamera.PersonInView.ROOT.PersonInView.PersonInView_ApproachUser");
                    pushNullTransition();
                    PersonInView_subState = PersonInView_ApproachUser;
                    rootState_active = PersonInView_ApproachUser;
                    //#[ state NormalOperate.TrackingByCamera.PersonInView.PersonInView.PersonInView_ApproachUser.(Entry) 
                    computeCameraApproach();     	
                    //#]
                    PersonInView_timeout = scheduleTimeout(ComputeStepTime, "ROOT.NormalOperate.TrackingByCamera.PersonInView.ROOT.PersonInView.PersonInView_ApproachUser");
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

IOxfReactive::TakeEventStatus UC::PersonInView_ApproachUser_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
        {
            if(getCurrentEvent() == PersonInView_timeout)
                {
                    NOTIFY_TRANSITION_STARTED("ROOT.NormalOperate.TrackingByCamera.PersonInView.5");
                    popNullTransition();
                    cancel(PersonInView_timeout);
                    NOTIFY_STATE_EXITED("ROOT.NormalOperate.TrackingByCamera.PersonInView.ROOT.PersonInView.PersonInView_ApproachUser");
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
                    NOTIFY_STATE_EXITED("ROOT.NormalOperate.TrackingByCamera.PersonInView.ROOT.PersonInView.PersonInView_ApproachUser");
                    //#[ transition NormalOperate.TrackingByCamera.PersonInView.1 
                    
                    reproducirSonidoPerdida();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.NormalOperate.TrackingByCamera.PersonInView.ROOT.PersonInView.PersonInView_PathBlocked");
                    pushNullTransition();
                    PersonInView_subState = PersonInView_PathBlocked;
                    rootState_active = PersonInView_PathBlocked;
                    //#[ state NormalOperate.TrackingByCamera.PersonInView.PersonInView.PersonInView_PathBlocked.(Entry) 
                    computeCameraWithObstacle();            	
                    //#]
                    PersonInView_timeout = scheduleTimeout(ComputeStepTime, "ROOT.NormalOperate.TrackingByCamera.PersonInView.ROOT.PersonInView.PersonInView_PathBlocked");
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

IOxfReactive::TakeEventStatus UC::ComputeStepBlocked_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            NOTIFY_TRANSITION_STARTED("ROOT.NormalOperate.TrackingByCamera.PersonInView.4");
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.NormalOperate.TrackingByCamera.PersonInView.ROOT.PersonInView.ComputeStepBlocked");
            NOTIFY_STATE_ENTERED("ROOT.NormalOperate.TrackingByCamera.PersonInView.ROOT.PersonInView.PersonInView_PathBlocked");
            pushNullTransition();
            PersonInView_subState = PersonInView_PathBlocked;
            rootState_active = PersonInView_PathBlocked;
            //#[ state NormalOperate.TrackingByCamera.PersonInView.PersonInView.PersonInView_PathBlocked.(Entry) 
            computeCameraWithObstacle();            	
            //#]
            PersonInView_timeout = scheduleTimeout(ComputeStepTime, "ROOT.NormalOperate.TrackingByCamera.PersonInView.ROOT.PersonInView.PersonInView_PathBlocked");
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
            NOTIFY_STATE_ENTERED("ROOT.NormalOperate.TrackingByCamera.PersonInView.ROOT.PersonInView.PersonInView_ApproachUser");
            pushNullTransition();
            PersonInView_subState = PersonInView_ApproachUser;
            rootState_active = PersonInView_ApproachUser;
            //#[ state NormalOperate.TrackingByCamera.PersonInView.PersonInView.PersonInView_ApproachUser.(Entry) 
            computeCameraApproach();     	
            //#]
            PersonInView_timeout = scheduleTimeout(ComputeStepTime, "ROOT.NormalOperate.TrackingByCamera.PersonInView.ROOT.PersonInView.PersonInView_ApproachUser");
            NOTIFY_TRANSITION_TERMINATED("ROOT.NormalOperate.TrackingByCamera.PersonInView.6");
            res = eventConsumed;
        }
    
    if(res == eventNotConsumed)
        {
            res = PersonInView_handleEvent();
        }
    return res;
}

void UC::DodgeObstacle_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.NormalOperate.DodgeObstacle");
    pushNullTransition();
    NormalOperate_subState = DodgeObstacle;
    NOTIFY_TRANSITION_STARTED("9");
    //#[ transition 9 
    sensoresSumAngulo = 0;
    sensoresSumDistancia = 0;
    //#]
    NOTIFY_STATE_ENTERED("ROOT.NormalOperate.DodgeObstacle.Dodge_MoveBack");
    pushNullTransition();
    DodgeObstacle_subState = Dodge_MoveBack;
    rootState_active = Dodge_MoveBack;
    NOTIFY_TRANSITION_TERMINATED("9");
}

IOxfReactive::TakeEventStatus UC::DodgeObstacle_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 16 
            if(sensoresCliff==true)
                {
                    NOTIFY_TRANSITION_STARTED("16");
                    popNullTransition();
                    switch (DodgeObstacle_subState) {
                        // State Dodge_MoveBack
                        case Dodge_MoveBack:
                        {
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.NormalOperate.DodgeObstacle.Dodge_MoveBack");
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
                    DodgeObstacle_subState = OMNonState;
                    NOTIFY_STATE_EXITED("ROOT.NormalOperate.DodgeObstacle");
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

IOxfReactive::TakeEventStatus UC::Dodge_MoveBack_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 10 
            if(sensoresSumDistancia<-30)
                {
                    NOTIFY_TRANSITION_STARTED("10");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.NormalOperate.DodgeObstacle.Dodge_MoveBack");
                    CrashAlgorithm_entDef();
                    NOTIFY_TRANSITION_TERMINATED("10");
                    res = eventConsumed;
                }
        }
    
    if(res == eventNotConsumed)
        {
            res = DodgeObstacle_handleEvent();
        }
    return res;
}

void UC::CrashAlgorithm_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.NormalOperate.DodgeObstacle.CrashAlgorithm");
    pushNullTransition();
    DodgeObstacle_subState = CrashAlgorithm;
    NOTIFY_TRANSITION_STARTED("ROOT.NormalOperate.DodgeObstacle.CrashAlgorithm.1");
    NOTIFY_STATE_ENTERED("ROOT.NormalOperate.DodgeObstacle.CrashAlgorithm.ROOT.CrashAlgorithm.CrashAlgorithm_Dodge");
    pushNullTransition();
    CrashAlgorithm_subState = CrashAlgorithm_Dodge;
    rootState_active = CrashAlgorithm_Dodge;
    NOTIFY_TRANSITION_TERMINATED("ROOT.NormalOperate.DodgeObstacle.CrashAlgorithm.1");
}

void UC::CrashAlgorithm_exit() {
    popNullTransition();
    switch (CrashAlgorithm_subState) {
        // State CrashAlgorithm_Dodge
        case CrashAlgorithm_Dodge:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.NormalOperate.DodgeObstacle.CrashAlgorithm.ROOT.CrashAlgorithm.CrashAlgorithm_Dodge");
        }
        break;
        // State CrashAlgorithm_DodgeParallel
        case CrashAlgorithm_DodgeParallel:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.NormalOperate.DodgeObstacle.CrashAlgorithm.ROOT.CrashAlgorithm.CrashAlgorithm_DodgeParallel");
        }
        break;
        // State CrashAlgorithm_GoForward
        case CrashAlgorithm_GoForward:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.NormalOperate.DodgeObstacle.CrashAlgorithm.ROOT.CrashAlgorithm.CrashAlgorithm_GoForward");
        }
        break;
        // State CrashAlgorithm_GoForwardExtended
        case CrashAlgorithm_GoForwardExtended:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.NormalOperate.DodgeObstacle.CrashAlgorithm.ROOT.CrashAlgorithm.CrashAlgorithm_GoForwardExtended");
        }
        break;
        // State CrashAlgorithm_RecoverTrajectory
        case CrashAlgorithm_RecoverTrajectory:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.NormalOperate.DodgeObstacle.CrashAlgorithm.ROOT.CrashAlgorithm.CrashAlgorithm_RecoverTrajectory");
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
    
    NOTIFY_STATE_EXITED("ROOT.NormalOperate.DodgeObstacle.CrashAlgorithm");
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
                    NOTIFY_STATE_ENTERED("ROOT.NormalOperate.DodgeObstacle.Dodge_MoveBack");
                    pushNullTransition();
                    DodgeObstacle_subState = Dodge_MoveBack;
                    rootState_active = Dodge_MoveBack;
                    NOTIFY_TRANSITION_TERMINATED("11");
                    res = eventConsumed;
                }
        }
    
    if(res == eventNotConsumed)
        {
            res = DodgeObstacle_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus UC::CrashAlorithmEndHelperStateTakeNull() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    NOTIFY_TRANSITION_STARTED("ROOT.NormalOperate.DodgeObstacle.CrashAlgorithm.11");
    popNullTransition();
    switch (DodgeObstacle_subState) {
        // State Dodge_MoveBack
        case Dodge_MoveBack:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.NormalOperate.DodgeObstacle.Dodge_MoveBack");
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
    DodgeObstacle_subState = OMNonState;
    NOTIFY_STATE_EXITED("ROOT.NormalOperate.DodgeObstacle");
    TrackingByCamera_entDef();
    NOTIFY_TRANSITION_TERMINATED("ROOT.NormalOperate.DodgeObstacle.CrashAlgorithm.11");
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

IOxfReactive::TakeEventStatus UC::CrashAlgorithm_RecoverTrajectory_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition NormalOperate.DodgeObstacle.CrashAlgorithm.0 
            if(sensoresSumAngulo<25)
                {
                    NOTIFY_TRANSITION_STARTED("ROOT.NormalOperate.DodgeObstacle.CrashAlgorithm.0");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.NormalOperate.DodgeObstacle.CrashAlgorithm.ROOT.CrashAlgorithm.CrashAlgorithm_RecoverTrajectory");
                    pushNullTransition();
                    CrashAlgorithm_subState = CrashAlorithmEndHelperState;
                    rootState_active = CrashAlorithmEndHelperState;
                    NOTIFY_TRANSITION_TERMINATED("ROOT.NormalOperate.DodgeObstacle.CrashAlgorithm.0");
                    res = eventConsumed;
                }
            else
                {
                    //## transition NormalOperate.DodgeObstacle.CrashAlgorithm.4 
                    if(sensoresLBumpFront==true)
                        {
                            NOTIFY_TRANSITION_STARTED("ROOT.NormalOperate.DodgeObstacle.CrashAlgorithm.4");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.NormalOperate.DodgeObstacle.CrashAlgorithm.ROOT.CrashAlgorithm.CrashAlgorithm_RecoverTrajectory");
                            NOTIFY_STATE_ENTERED("ROOT.NormalOperate.DodgeObstacle.CrashAlgorithm.ROOT.CrashAlgorithm.CrashAlgorithm_DodgeParallel");
                            pushNullTransition();
                            CrashAlgorithm_subState = CrashAlgorithm_DodgeParallel;
                            rootState_active = CrashAlgorithm_DodgeParallel;
                            NOTIFY_TRANSITION_TERMINATED("ROOT.NormalOperate.DodgeObstacle.CrashAlgorithm.4");
                            res = eventConsumed;
                        }
                    else
                        {
                            //## transition NormalOperate.DodgeObstacle.CrashAlgorithm.10 
                            if(sensoresLBumpFront==false && sensoresLBumpSide==true)
                                {
                                    NOTIFY_TRANSITION_STARTED("ROOT.NormalOperate.DodgeObstacle.CrashAlgorithm.10");
                                    popNullTransition();
                                    NOTIFY_STATE_EXITED("ROOT.NormalOperate.DodgeObstacle.CrashAlgorithm.ROOT.CrashAlgorithm.CrashAlgorithm_RecoverTrajectory");
                                    NOTIFY_STATE_ENTERED("ROOT.NormalOperate.DodgeObstacle.CrashAlgorithm.ROOT.CrashAlgorithm.CrashAlgorithm_GoForward");
                                    pushNullTransition();
                                    CrashAlgorithm_subState = CrashAlgorithm_GoForward;
                                    rootState_active = CrashAlgorithm_GoForward;
                                    NOTIFY_TRANSITION_TERMINATED("ROOT.NormalOperate.DodgeObstacle.CrashAlgorithm.10");
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

IOxfReactive::TakeEventStatus UC::CrashAlgorithm_GoForwardExtended_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition NormalOperate.DodgeObstacle.CrashAlgorithm.6 
            if(sensoresSumDistancia>300)
                {
                    NOTIFY_TRANSITION_STARTED("ROOT.NormalOperate.DodgeObstacle.CrashAlgorithm.6");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.NormalOperate.DodgeObstacle.CrashAlgorithm.ROOT.CrashAlgorithm.CrashAlgorithm_GoForwardExtended");
                    NOTIFY_STATE_ENTERED("ROOT.NormalOperate.DodgeObstacle.CrashAlgorithm.ROOT.CrashAlgorithm.CrashAlgorithm_RecoverTrajectory");
                    pushNullTransition();
                    CrashAlgorithm_subState = CrashAlgorithm_RecoverTrajectory;
                    rootState_active = CrashAlgorithm_RecoverTrajectory;
                    NOTIFY_TRANSITION_TERMINATED("ROOT.NormalOperate.DodgeObstacle.CrashAlgorithm.6");
                    res = eventConsumed;
                }
            else
                {
                    //## transition NormalOperate.DodgeObstacle.CrashAlgorithm.7 
                    if(sensoresLBumpFront==false && sensoresLBumpSide==true)
                        {
                            NOTIFY_TRANSITION_STARTED("ROOT.NormalOperate.DodgeObstacle.CrashAlgorithm.7");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.NormalOperate.DodgeObstacle.CrashAlgorithm.ROOT.CrashAlgorithm.CrashAlgorithm_GoForwardExtended");
                            NOTIFY_STATE_ENTERED("ROOT.NormalOperate.DodgeObstacle.CrashAlgorithm.ROOT.CrashAlgorithm.CrashAlgorithm_GoForward");
                            pushNullTransition();
                            CrashAlgorithm_subState = CrashAlgorithm_GoForward;
                            rootState_active = CrashAlgorithm_GoForward;
                            NOTIFY_TRANSITION_TERMINATED("ROOT.NormalOperate.DodgeObstacle.CrashAlgorithm.7");
                            res = eventConsumed;
                        }
                    else
                        {
                            //## transition NormalOperate.DodgeObstacle.CrashAlgorithm.9 
                            if(sensoresLBumpFront==true)
                                {
                                    NOTIFY_TRANSITION_STARTED("ROOT.NormalOperate.DodgeObstacle.CrashAlgorithm.9");
                                    popNullTransition();
                                    NOTIFY_STATE_EXITED("ROOT.NormalOperate.DodgeObstacle.CrashAlgorithm.ROOT.CrashAlgorithm.CrashAlgorithm_GoForwardExtended");
                                    NOTIFY_STATE_ENTERED("ROOT.NormalOperate.DodgeObstacle.CrashAlgorithm.ROOT.CrashAlgorithm.CrashAlgorithm_DodgeParallel");
                                    pushNullTransition();
                                    CrashAlgorithm_subState = CrashAlgorithm_DodgeParallel;
                                    rootState_active = CrashAlgorithm_DodgeParallel;
                                    NOTIFY_TRANSITION_TERMINATED("ROOT.NormalOperate.DodgeObstacle.CrashAlgorithm.9");
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
            //## transition NormalOperate.DodgeObstacle.CrashAlgorithm.5 
            if(sensoresLBumpSide==false)
                {
                    NOTIFY_TRANSITION_STARTED("ROOT.NormalOperate.DodgeObstacle.CrashAlgorithm.5");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.NormalOperate.DodgeObstacle.CrashAlgorithm.ROOT.CrashAlgorithm.CrashAlgorithm_GoForward");
                    //#[ transition NormalOperate.DodgeObstacle.CrashAlgorithm.5 
                    
                    sensoresSumDistancia=0;
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.NormalOperate.DodgeObstacle.CrashAlgorithm.ROOT.CrashAlgorithm.CrashAlgorithm_GoForwardExtended");
                    pushNullTransition();
                    CrashAlgorithm_subState = CrashAlgorithm_GoForwardExtended;
                    rootState_active = CrashAlgorithm_GoForwardExtended;
                    NOTIFY_TRANSITION_TERMINATED("ROOT.NormalOperate.DodgeObstacle.CrashAlgorithm.5");
                    res = eventConsumed;
                }
            else
                {
                    //## transition NormalOperate.DodgeObstacle.CrashAlgorithm.8 
                    if(sensoresLBumpFront==true)
                        {
                            NOTIFY_TRANSITION_STARTED("ROOT.NormalOperate.DodgeObstacle.CrashAlgorithm.8");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.NormalOperate.DodgeObstacle.CrashAlgorithm.ROOT.CrashAlgorithm.CrashAlgorithm_GoForward");
                            NOTIFY_STATE_ENTERED("ROOT.NormalOperate.DodgeObstacle.CrashAlgorithm.ROOT.CrashAlgorithm.CrashAlgorithm_DodgeParallel");
                            pushNullTransition();
                            CrashAlgorithm_subState = CrashAlgorithm_DodgeParallel;
                            rootState_active = CrashAlgorithm_DodgeParallel;
                            NOTIFY_TRANSITION_TERMINATED("ROOT.NormalOperate.DodgeObstacle.CrashAlgorithm.8");
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

IOxfReactive::TakeEventStatus UC::CrashAlgorithm_DodgeParallel_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition NormalOperate.DodgeObstacle.CrashAlgorithm.3 
            if(sensoresLBumpFront==false)
                {
                    NOTIFY_TRANSITION_STARTED("ROOT.NormalOperate.DodgeObstacle.CrashAlgorithm.3");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.NormalOperate.DodgeObstacle.CrashAlgorithm.ROOT.CrashAlgorithm.CrashAlgorithm_DodgeParallel");
                    NOTIFY_STATE_ENTERED("ROOT.NormalOperate.DodgeObstacle.CrashAlgorithm.ROOT.CrashAlgorithm.CrashAlgorithm_GoForward");
                    pushNullTransition();
                    CrashAlgorithm_subState = CrashAlgorithm_GoForward;
                    rootState_active = CrashAlgorithm_GoForward;
                    NOTIFY_TRANSITION_TERMINATED("ROOT.NormalOperate.DodgeObstacle.CrashAlgorithm.3");
                    res = eventConsumed;
                }
        }
    
    if(res == eventNotConsumed)
        {
            res = CrashAlgorithm_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus UC::CrashAlgorithm_Dodge_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition NormalOperate.DodgeObstacle.CrashAlgorithm.2 
            if(sensoresSumAngulo>25)
                {
                    NOTIFY_TRANSITION_STARTED("ROOT.NormalOperate.DodgeObstacle.CrashAlgorithm.2");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.NormalOperate.DodgeObstacle.CrashAlgorithm.ROOT.CrashAlgorithm.CrashAlgorithm_Dodge");
                    NOTIFY_STATE_ENTERED("ROOT.NormalOperate.DodgeObstacle.CrashAlgorithm.ROOT.CrashAlgorithm.CrashAlgorithm_DodgeParallel");
                    pushNullTransition();
                    CrashAlgorithm_subState = CrashAlgorithm_DodgeParallel;
                    rootState_active = CrashAlgorithm_DodgeParallel;
                    NOTIFY_TRANSITION_TERMINATED("ROOT.NormalOperate.DodgeObstacle.CrashAlgorithm.2");
                    res = eventConsumed;
                }
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
    NOTIFY_STATE_ENTERED("ROOT.NormalOperate.CliffAhead.CliffAhead_Rotate180");
    pushNullTransition();
    CliffAhead_subState = CliffAhead_Rotate180;
    rootState_active = CliffAhead_Rotate180;
    NOTIFY_TRANSITION_TERMINATED("12");
}

IOxfReactive::TakeEventStatus UC::CliffAhead_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    res = NormalOperate_handleEvent();
    return res;
}

IOxfReactive::TakeEventStatus UC::CliffAhead_Rotate180_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 13 
            if(sensoresSumAngulo>180)
                {
                    NOTIFY_TRANSITION_STARTED("13");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.NormalOperate.CliffAhead.CliffAhead_Rotate180");
                    NOTIFY_STATE_ENTERED("ROOT.NormalOperate.CliffAhead.CliffAhead_GoForward");
                    pushNullTransition();
                    CliffAhead_subState = CliffAhead_GoForward;
                    rootState_active = CliffAhead_GoForward;
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

IOxfReactive::TakeEventStatus UC::CliffAhead_GoForwardTakeNull() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    //## transition 17 
    if(sensoresSumDistancia>300)
        {
            NOTIFY_TRANSITION_STARTED("17");
            switch (CliffAhead_subState) {
                // State CliffAhead_Rotate180
                case CliffAhead_Rotate180:
                {
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.NormalOperate.CliffAhead.CliffAhead_Rotate180");
                }
                break;
                // State CliffAhead_GoForward
                case CliffAhead_GoForward:
                {
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.NormalOperate.CliffAhead.CliffAhead_GoForward");
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

IOxfReactive::TakeEventStatus UC::CliffAhead_GoForward_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            res = CliffAhead_GoForwardTakeNull();
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
            UnDock_entDef();
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
                    NOTIFY_STATE_ENTERED("ROOT.Dock");
                    pushNullTransition();
                    rootState_subState = Dock;
                    rootState_active = Dock;
                    //#[ state Dock.(Entry) 
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
            NOTIFY_STATE_ENTERED("ROOT.Shutdown");
            pushNullTransition();
            rootState_subState = Shutdown;
            rootState_active = Shutdown;
            NOTIFY_TRANSITION_TERMINATED("25");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(btnDock_Roboconfirmo_id))
        {
            NOTIFY_TRANSITION_STARTED("7");
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.Idle");
            NOTIFY_STATE_ENTERED("ROOT.Dock");
            pushNullTransition();
            rootState_subState = Dock;
            rootState_active = Dock;
            //#[ state Dock.(Entry) 
            gotoDock();
            //#]
            NOTIFY_TRANSITION_TERMINATED("7");
            res = eventConsumed;
        }
    
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedUC::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("BumpObstacle", x2String(myReal->BumpObstacle));
    aomsAttributes->addAttribute("cameraIsPersonInView", x2String(myReal->cameraIsPersonInView));
    aomsAttributes->addAttribute("ComputeStepTime", x2String(myReal->ComputeStepTime));
    aomsAttributes->addAttribute("initStatus", x2String(myReal->initStatus));
    aomsAttributes->addAttribute("lidarIsObstable", x2String(myReal->lidarIsObstable));
    aomsAttributes->addAttribute("sensoresBateria", x2String(myReal->sensoresBateria));
    aomsAttributes->addAttribute("sensoresBl", x2String(myReal->sensoresBl));
    aomsAttributes->addAttribute("sensoresBr", x2String(myReal->sensoresBr));
    aomsAttributes->addAttribute("sensoresCliff", x2String(myReal->sensoresCliff));
    aomsAttributes->addAttribute("sensoresInDock", x2String(myReal->sensoresInDock));
    aomsAttributes->addAttribute("sensoresLBumpFront", x2String(myReal->sensoresLBumpFront));
    aomsAttributes->addAttribute("sensoresLBumpSide", x2String(myReal->sensoresLBumpSide));
    aomsAttributes->addAttribute("sensoresSumAngulo", x2String(myReal->sensoresSumAngulo));
    aomsAttributes->addAttribute("sensoresSumDistancia", x2String(myReal->sensoresSumDistancia));
}

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
        case UC::Dock:
        {
            Dock_serializeStates(aomsState);
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
        case UC::Shutdown:
        {
            Shutdown_serializeStates(aomsState);
        }
        break;
        case UC::UnDock:
        {
            UnDock_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedUC::UnDock_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.UnDock");
    switch (myReal->UnDock_subState) {
        case UC::ExitDock:
        {
            ExitDock_serializeStates(aomsState);
        }
        break;
        case UC::UnDock_Rotate180:
        {
            UnDock_Rotate180_serializeStates(aomsState);
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

void OMAnimatedUC::UnDock_Rotate180_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.UnDock.ROOT.UnDock.UnDock_Rotate180");
}

void OMAnimatedUC::ExitDock_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.UnDock.ROOT.UnDock.ExitDock");
}

void OMAnimatedUC::EndUndoParkHelperState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.UnDock.ROOT.UnDock.EndUndoParkHelperState");
}

void OMAnimatedUC::Shutdown_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Shutdown");
}

void OMAnimatedUC::NormalOperate_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.NormalOperate");
    switch (myReal->NormalOperate_subState) {
        case UC::TrackingByCamera:
        {
            TrackingByCamera_serializeStates(aomsState);
        }
        break;
        case UC::DodgeObstacle:
        {
            DodgeObstacle_serializeStates(aomsState);
        }
        break;
        case UC::CliffAhead:
        {
            CliffAhead_serializeStates(aomsState);
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
        case UC::PersonInView_ApproachUser:
        {
            PersonInView_ApproachUser_serializeStates(aomsState);
        }
        break;
        case UC::PersonInView_PathBlocked:
        {
            PersonInView_PathBlocked_serializeStates(aomsState);
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

void OMAnimatedUC::PersonInView_PathBlocked_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.NormalOperate.TrackingByCamera.PersonInView.ROOT.PersonInView.PersonInView_PathBlocked");
}

void OMAnimatedUC::PersonInView_ApproachUser_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.NormalOperate.TrackingByCamera.PersonInView.ROOT.PersonInView.PersonInView_ApproachUser");
}

void OMAnimatedUC::ComputeStepBlocked_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.NormalOperate.TrackingByCamera.PersonInView.ROOT.PersonInView.ComputeStepBlocked");
}

void OMAnimatedUC::ComputeStepApproach_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.NormalOperate.TrackingByCamera.PersonInView.ROOT.PersonInView.ComputeStepApproach");
}

void OMAnimatedUC::DodgeObstacle_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.NormalOperate.DodgeObstacle");
    switch (myReal->DodgeObstacle_subState) {
        case UC::Dodge_MoveBack:
        {
            Dodge_MoveBack_serializeStates(aomsState);
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

void OMAnimatedUC::Dodge_MoveBack_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.NormalOperate.DodgeObstacle.Dodge_MoveBack");
}

void OMAnimatedUC::CrashAlgorithm_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.NormalOperate.DodgeObstacle.CrashAlgorithm");
    switch (myReal->CrashAlgorithm_subState) {
        case UC::CrashAlgorithm_Dodge:
        {
            CrashAlgorithm_Dodge_serializeStates(aomsState);
        }
        break;
        case UC::CrashAlgorithm_DodgeParallel:
        {
            CrashAlgorithm_DodgeParallel_serializeStates(aomsState);
        }
        break;
        case UC::CrashAlgorithm_GoForward:
        {
            CrashAlgorithm_GoForward_serializeStates(aomsState);
        }
        break;
        case UC::CrashAlgorithm_GoForwardExtended:
        {
            CrashAlgorithm_GoForwardExtended_serializeStates(aomsState);
        }
        break;
        case UC::CrashAlgorithm_RecoverTrajectory:
        {
            CrashAlgorithm_RecoverTrajectory_serializeStates(aomsState);
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

void OMAnimatedUC::CrashAlorithmEndHelperState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.NormalOperate.DodgeObstacle.CrashAlgorithm.ROOT.CrashAlgorithm.CrashAlorithmEndHelperState");
}

void OMAnimatedUC::CrashAlgorithm_RecoverTrajectory_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.NormalOperate.DodgeObstacle.CrashAlgorithm.ROOT.CrashAlgorithm.CrashAlgorithm_RecoverTrajectory");
}

void OMAnimatedUC::CrashAlgorithm_GoForwardExtended_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.NormalOperate.DodgeObstacle.CrashAlgorithm.ROOT.CrashAlgorithm.CrashAlgorithm_GoForwardExtended");
}

void OMAnimatedUC::CrashAlgorithm_GoForward_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.NormalOperate.DodgeObstacle.CrashAlgorithm.ROOT.CrashAlgorithm.CrashAlgorithm_GoForward");
}

void OMAnimatedUC::CrashAlgorithm_DodgeParallel_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.NormalOperate.DodgeObstacle.CrashAlgorithm.ROOT.CrashAlgorithm.CrashAlgorithm_DodgeParallel");
}

void OMAnimatedUC::CrashAlgorithm_Dodge_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.NormalOperate.DodgeObstacle.CrashAlgorithm.ROOT.CrashAlgorithm.CrashAlgorithm_Dodge");
}

void OMAnimatedUC::CliffAhead_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.NormalOperate.CliffAhead");
    switch (myReal->CliffAhead_subState) {
        case UC::CliffAhead_Rotate180:
        {
            CliffAhead_Rotate180_serializeStates(aomsState);
        }
        break;
        case UC::CliffAhead_GoForward:
        {
            CliffAhead_GoForward_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedUC::CliffAhead_Rotate180_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.NormalOperate.CliffAhead.CliffAhead_Rotate180");
}

void OMAnimatedUC::CliffAhead_GoForward_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.NormalOperate.CliffAhead.CliffAhead_GoForward");
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

void OMAnimatedUC::Dock_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Dock");
}
//#]

IMPLEMENT_REACTIVE_META_P(UC, Roboconfirmo, Roboconfirmo, false, OMAnimatedUC)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/UC.cpp
*********************************************************************/
