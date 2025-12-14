/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6701
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
    var_12 = ((/* implicit */short) ((((/* implicit */int) var_0)) >> ((((-(((var_11) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)15))))))) - (9144961317555104167ULL)))));
    var_13 = ((unsigned long long int) ((((/* implicit */_Bool) 12713333503065208969ULL)) ? (((/* implicit */int) ((short) var_8))) : (((/* implicit */int) var_8))));
    /* LoopNest 2 */
    for (short i_0 = 4; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) var_5)), (var_8))))) : (((((/* implicit */_Bool) 3657119989924738192ULL)) ? (18446744073709551601ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))) <= (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)0)) >> (((18446744073709551601ULL) - (18446744073709551590ULL)))))), (8444249301319680ULL)))));
                var_14 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551601ULL)) ? (var_11) : (var_2)))) ? (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (signed char)-31))))))) : (4424863238150048201ULL)));
            }
        } 
    } 
    var_15 = var_0;
}
