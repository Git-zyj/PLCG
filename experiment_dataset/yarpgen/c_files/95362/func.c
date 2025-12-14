/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95362
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
    var_10 = (~(var_8));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 6; i_2 += 3) 
            {
                {
                    var_11 = ((((/* implicit */_Bool) 5118554417672320157LL)) ? (-6456521804657002210LL) : (6729518150181598539LL));
                    var_12 = (-(((arr_3 [i_0] [i_1] [i_0]) ^ (((var_6) >> (((arr_6 [i_1]) + (3441013394675579141LL))))))));
                    var_13 = ((/* implicit */long long int) min((var_13), (((((((((/* implicit */_Bool) var_5)) ? (var_6) : (var_9))) << (((3754369722383575556LL) - (3754369722383575556LL))))) & (((long long int) ((((/* implicit */_Bool) var_9)) ? (-5118554417672320158LL) : (var_6))))))));
                    var_14 ^= arr_5 [i_0] [i_1 + 1];
                }
            } 
        } 
    } 
    var_15 = ((((/* implicit */_Bool) min((((/* implicit */long long int) ((var_6) == (var_7)))), (((long long int) var_7))))) ? (((((/* implicit */_Bool) (-(0LL)))) ? (((var_7) / (var_0))) : (-7026392422078224482LL))) : (-7815280487881400640LL));
}
