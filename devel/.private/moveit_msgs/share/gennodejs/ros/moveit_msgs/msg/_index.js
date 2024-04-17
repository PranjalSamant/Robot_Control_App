
"use strict";

let PickupActionFeedback = require('./PickupActionFeedback.js');
let PickupFeedback = require('./PickupFeedback.js');
let MoveGroupGoal = require('./MoveGroupGoal.js');
let PickupAction = require('./PickupAction.js');
let MoveGroupActionFeedback = require('./MoveGroupActionFeedback.js');
let MoveGroupFeedback = require('./MoveGroupFeedback.js');
let ExecuteTrajectoryFeedback = require('./ExecuteTrajectoryFeedback.js');
let PlaceFeedback = require('./PlaceFeedback.js');
let ExecuteTrajectoryGoal = require('./ExecuteTrajectoryGoal.js');
let MoveGroupSequenceActionFeedback = require('./MoveGroupSequenceActionFeedback.js');
let PickupActionResult = require('./PickupActionResult.js');
let MoveGroupAction = require('./MoveGroupAction.js');
let MoveGroupSequenceActionGoal = require('./MoveGroupSequenceActionGoal.js');
let MoveGroupSequenceAction = require('./MoveGroupSequenceAction.js');
let ExecuteTrajectoryActionGoal = require('./ExecuteTrajectoryActionGoal.js');
let MoveGroupActionResult = require('./MoveGroupActionResult.js');
let MoveGroupSequenceFeedback = require('./MoveGroupSequenceFeedback.js');
let MoveGroupSequenceGoal = require('./MoveGroupSequenceGoal.js');
let ExecuteTrajectoryActionFeedback = require('./ExecuteTrajectoryActionFeedback.js');
let MoveGroupSequenceActionResult = require('./MoveGroupSequenceActionResult.js');
let PlaceResult = require('./PlaceResult.js');
let PlaceActionFeedback = require('./PlaceActionFeedback.js');
let MoveGroupSequenceResult = require('./MoveGroupSequenceResult.js');
let PlaceActionResult = require('./PlaceActionResult.js');
let PickupResult = require('./PickupResult.js');
let PlaceActionGoal = require('./PlaceActionGoal.js');
let ExecuteTrajectoryAction = require('./ExecuteTrajectoryAction.js');
let ExecuteTrajectoryActionResult = require('./ExecuteTrajectoryActionResult.js');
let MoveGroupResult = require('./MoveGroupResult.js');
let PickupActionGoal = require('./PickupActionGoal.js');
let PickupGoal = require('./PickupGoal.js');
let PlaceGoal = require('./PlaceGoal.js');
let MoveGroupActionGoal = require('./MoveGroupActionGoal.js');
let ExecuteTrajectoryResult = require('./ExecuteTrajectoryResult.js');
let PlaceAction = require('./PlaceAction.js');
let CartesianPoint = require('./CartesianPoint.js');
let MotionSequenceResponse = require('./MotionSequenceResponse.js');
let VisibilityConstraint = require('./VisibilityConstraint.js');
let MotionSequenceRequest = require('./MotionSequenceRequest.js');
let PlanningScene = require('./PlanningScene.js');
let PlanningSceneWorld = require('./PlanningSceneWorld.js');
let DisplayTrajectory = require('./DisplayTrajectory.js');
let MotionPlanResponse = require('./MotionPlanResponse.js');
let CartesianTrajectory = require('./CartesianTrajectory.js');
let CollisionObject = require('./CollisionObject.js');
let RobotTrajectory = require('./RobotTrajectory.js');
let CartesianTrajectoryPoint = require('./CartesianTrajectoryPoint.js');
let PlaceLocation = require('./PlaceLocation.js');
let PlanningOptions = require('./PlanningOptions.js');
let AttachedCollisionObject = require('./AttachedCollisionObject.js');
let MotionSequenceItem = require('./MotionSequenceItem.js');
let OrientedBoundingBox = require('./OrientedBoundingBox.js');
let PositionConstraint = require('./PositionConstraint.js');
let WorkspaceParameters = require('./WorkspaceParameters.js');
let PlannerInterfaceDescription = require('./PlannerInterfaceDescription.js');
let GripperTranslation = require('./GripperTranslation.js');
let MoveItErrorCodes = require('./MoveItErrorCodes.js');
let ContactInformation = require('./ContactInformation.js');
let GenericTrajectory = require('./GenericTrajectory.js');
let Constraints = require('./Constraints.js');
let MotionPlanDetailedResponse = require('./MotionPlanDetailedResponse.js');
let ConstraintEvalResult = require('./ConstraintEvalResult.js');
let PlanningSceneComponents = require('./PlanningSceneComponents.js');
let AllowedCollisionMatrix = require('./AllowedCollisionMatrix.js');
let Grasp = require('./Grasp.js');
let DisplayRobotState = require('./DisplayRobotState.js');
let OrientationConstraint = require('./OrientationConstraint.js');
let LinkPadding = require('./LinkPadding.js');
let KinematicSolverInfo = require('./KinematicSolverInfo.js');
let CostSource = require('./CostSource.js');
let MotionPlanRequest = require('./MotionPlanRequest.js');
let JointConstraint = require('./JointConstraint.js');
let TrajectoryConstraints = require('./TrajectoryConstraints.js');
let BoundingVolume = require('./BoundingVolume.js');
let JointLimits = require('./JointLimits.js');
let RobotState = require('./RobotState.js');
let LinkScale = require('./LinkScale.js');
let PlannerParams = require('./PlannerParams.js');
let PositionIKRequest = require('./PositionIKRequest.js');
let AllowedCollisionEntry = require('./AllowedCollisionEntry.js');
let ObjectColor = require('./ObjectColor.js');

module.exports = {
  PickupActionFeedback: PickupActionFeedback,
  PickupFeedback: PickupFeedback,
  MoveGroupGoal: MoveGroupGoal,
  PickupAction: PickupAction,
  MoveGroupActionFeedback: MoveGroupActionFeedback,
  MoveGroupFeedback: MoveGroupFeedback,
  ExecuteTrajectoryFeedback: ExecuteTrajectoryFeedback,
  PlaceFeedback: PlaceFeedback,
  ExecuteTrajectoryGoal: ExecuteTrajectoryGoal,
  MoveGroupSequenceActionFeedback: MoveGroupSequenceActionFeedback,
  PickupActionResult: PickupActionResult,
  MoveGroupAction: MoveGroupAction,
  MoveGroupSequenceActionGoal: MoveGroupSequenceActionGoal,
  MoveGroupSequenceAction: MoveGroupSequenceAction,
  ExecuteTrajectoryActionGoal: ExecuteTrajectoryActionGoal,
  MoveGroupActionResult: MoveGroupActionResult,
  MoveGroupSequenceFeedback: MoveGroupSequenceFeedback,
  MoveGroupSequenceGoal: MoveGroupSequenceGoal,
  ExecuteTrajectoryActionFeedback: ExecuteTrajectoryActionFeedback,
  MoveGroupSequenceActionResult: MoveGroupSequenceActionResult,
  PlaceResult: PlaceResult,
  PlaceActionFeedback: PlaceActionFeedback,
  MoveGroupSequenceResult: MoveGroupSequenceResult,
  PlaceActionResult: PlaceActionResult,
  PickupResult: PickupResult,
  PlaceActionGoal: PlaceActionGoal,
  ExecuteTrajectoryAction: ExecuteTrajectoryAction,
  ExecuteTrajectoryActionResult: ExecuteTrajectoryActionResult,
  MoveGroupResult: MoveGroupResult,
  PickupActionGoal: PickupActionGoal,
  PickupGoal: PickupGoal,
  PlaceGoal: PlaceGoal,
  MoveGroupActionGoal: MoveGroupActionGoal,
  ExecuteTrajectoryResult: ExecuteTrajectoryResult,
  PlaceAction: PlaceAction,
  CartesianPoint: CartesianPoint,
  MotionSequenceResponse: MotionSequenceResponse,
  VisibilityConstraint: VisibilityConstraint,
  MotionSequenceRequest: MotionSequenceRequest,
  PlanningScene: PlanningScene,
  PlanningSceneWorld: PlanningSceneWorld,
  DisplayTrajectory: DisplayTrajectory,
  MotionPlanResponse: MotionPlanResponse,
  CartesianTrajectory: CartesianTrajectory,
  CollisionObject: CollisionObject,
  RobotTrajectory: RobotTrajectory,
  CartesianTrajectoryPoint: CartesianTrajectoryPoint,
  PlaceLocation: PlaceLocation,
  PlanningOptions: PlanningOptions,
  AttachedCollisionObject: AttachedCollisionObject,
  MotionSequenceItem: MotionSequenceItem,
  OrientedBoundingBox: OrientedBoundingBox,
  PositionConstraint: PositionConstraint,
  WorkspaceParameters: WorkspaceParameters,
  PlannerInterfaceDescription: PlannerInterfaceDescription,
  GripperTranslation: GripperTranslation,
  MoveItErrorCodes: MoveItErrorCodes,
  ContactInformation: ContactInformation,
  GenericTrajectory: GenericTrajectory,
  Constraints: Constraints,
  MotionPlanDetailedResponse: MotionPlanDetailedResponse,
  ConstraintEvalResult: ConstraintEvalResult,
  PlanningSceneComponents: PlanningSceneComponents,
  AllowedCollisionMatrix: AllowedCollisionMatrix,
  Grasp: Grasp,
  DisplayRobotState: DisplayRobotState,
  OrientationConstraint: OrientationConstraint,
  LinkPadding: LinkPadding,
  KinematicSolverInfo: KinematicSolverInfo,
  CostSource: CostSource,
  MotionPlanRequest: MotionPlanRequest,
  JointConstraint: JointConstraint,
  TrajectoryConstraints: TrajectoryConstraints,
  BoundingVolume: BoundingVolume,
  JointLimits: JointLimits,
  RobotState: RobotState,
  LinkScale: LinkScale,
  PlannerParams: PlannerParams,
  PositionIKRequest: PositionIKRequest,
  AllowedCollisionEntry: AllowedCollisionEntry,
  ObjectColor: ObjectColor,
};
