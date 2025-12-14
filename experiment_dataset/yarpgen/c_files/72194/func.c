/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72194
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_15 |= max((((long long int) max((var_3), (702738666253491378LL)))), (((/* implicit */long long int) ((max((var_6), (var_8))) < (max((var_9), (0LL)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_1 + 1] [i_1 - 1])))))) > (((long long int) 2047LL))));
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    var_17 = ((((/* implicit */_Bool) -1LL)) ? (((long long int) min((33554431LL), (1150669704793161728LL)))) : (-702738666253491373LL));
                    var_18 = ((((/* implicit */_Bool) min((arr_2 [i_0] [1LL] [i_2]), (((((/* implicit */_Bool) 805306368LL)) ? (7637451217960433307LL) : (-2655490881034813888LL)))))) ? (min((((long long int) 3987969273923658472LL)), (arr_1 [i_0]))) : (((arr_5 [i_0] [5LL] [i_2] [i_2]) + (arr_6 [i_1] [i_2] [i_2] [i_2]))));
                }
                var_19 ^= min((arr_4 [i_0] [i_0]), (((((/* implicit */_Bool) 17179869183LL)) ? (0LL) : (13LL))));
                var_20 = max((min((arr_2 [i_0] [i_1 - 1] [i_1 - 1]), (arr_4 [8LL] [i_1 - 1]))), (((((/* implicit */_Bool) max((var_4), (arr_0 [9LL])))) ? (((((/* implicit */_Bool) 6163076563034554212LL)) ? (var_7) : (var_12))) : ((-(arr_2 [i_0] [i_0] [13LL]))))));
                arr_7 [15LL] [i_0] = max((16777200LL), (min((arr_6 [3LL] [i_1 - 1] [i_1] [i_0]), (4508045949354701706LL))));
            }
        } 
    } 
}
