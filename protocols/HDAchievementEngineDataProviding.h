/* Generated by RuntimeBrowser.
 */

@protocol HDAchievementEngineDataProviding <NSObject>

@required

- (NSDate *)currentDateForEngine:(HDAchievementEngineV2 *)arg1;
- (long long)lastCheckedSummaryIndexForAllGoals;
- (long long)lastCheckedSummaryIndexForDistance;
- (long long)lastCheckedSummaryIndexForExercise;
- (long long)lastCheckedSummaryIndexForMove;
- (long long)lastCheckedSummaryIndexForStand;
- (HKQuantity *)lastTodayDistanceValue;
- (HKQuantity *)lastTodayExerciseGoal;
- (HKQuantity *)lastTodayExerciseValue;
- (HKQuantity *)lastTodayMoveGoal;
- (HKQuantity *)lastTodayMoveValue;
- (unsigned long long)lastTodayStandGoal;
- (unsigned long long)lastTodayStandValue;
- (HKQuantity *)previousTodayExerciseValue;
- (HKQuantity *)previousTodayMoveValue;
- (unsigned long long)previousTodayStandValue;
- (void)setLastCheckedSummaryIndexForAllGoals:(long long)arg1;
- (void)setLastCheckedSummaryIndexForDistance:(long long)arg1;
- (void)setLastCheckedSummaryIndexForExercise:(long long)arg1;
- (void)setLastCheckedSummaryIndexForMove:(long long)arg1;
- (void)setLastCheckedSummaryIndexForStand:(long long)arg1;
- (void)setLastTodayDistanceValue:(HKQuantity *)arg1;
- (void)setLastTodayExerciseGoal:(HKQuantity *)arg1;
- (void)setLastTodayExerciseValue:(HKQuantity *)arg1;
- (void)setLastTodayMoveGoal:(HKQuantity *)arg1;
- (void)setLastTodayMoveValue:(HKQuantity *)arg1;
- (void)setLastTodayStandGoal:(unsigned long long)arg1;
- (void)setLastTodayStandValue:(unsigned long long)arg1;
- (void)setPreviousTodayExerciseValue:(HKQuantity *)arg1;
- (void)setPreviousTodayMoveValue:(HKQuantity *)arg1;
- (void)setPreviousTodayStandValue:(unsigned long long)arg1;
- (HKQuantity *)todayActiveEnergyBurnedForEngine:(HDAchievementEngineV2 *)arg1;
- (long long)todayActivitySummaryIndexForEngine:(HDAchievementEngineV2 *)arg1;
- (HKQuantity *)todayDistanceForEngine:(HDAchievementEngineV2 *)arg1;
- (HKQuantity *)todayExerciseGoalForEngine:(HDAchievementEngineV2 *)arg1;
- (HKQuantity *)todayExerciseTimeForEngine:(HDAchievementEngineV2 *)arg1;
- (HKQuantity *)todayMoveGoalForEngine:(HDAchievementEngineV2 *)arg1;
- (unsigned long long)todayStandGoalForEngine:(HDAchievementEngineV2 *)arg1;
- (unsigned long long)todayStandHoursForEngine:(HDAchievementEngineV2 *)arg1;
- (NSArray *)workoutsForEngine:(HDAchievementEngineV2 *)arg1 endingAfterAnchor:(long long)arg2 newAnchor:(long long*)arg3;
- (HKQuantity *)yesterdayActiveEnergyBurnedForEngine:(HDAchievementEngineV2 *)arg1;
- (HKQuantity *)yesterdayExerciseGoalForEngine:(HDAchievementEngineV2 *)arg1;
- (HKQuantity *)yesterdayExerciseTimeForEngine:(HDAchievementEngineV2 *)arg1;
- (HKQuantity *)yesterdayMoveGoalForEngine:(HDAchievementEngineV2 *)arg1;
- (unsigned long long)yesterdayStandGoalForEngine:(HDAchievementEngineV2 *)arg1;
- (unsigned long long)yesterdayStandHoursForEngine:(HDAchievementEngineV2 *)arg1;

@end
