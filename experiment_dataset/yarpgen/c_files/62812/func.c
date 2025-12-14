/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62812
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_20 = min((((long long int) min((((/* implicit */int) var_1)), (arr_2 [i_0])))), (min((min((arr_6 [i_1] [i_1] [i_1]), (var_0))), (arr_6 [i_1] [i_1] [i_0]))));
                var_21 &= ((signed char) var_5);
                arr_7 [i_1] [2LL] = ((/* implicit */signed char) min((var_11), (((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_1] [i_1])) - (((/* implicit */int) (signed char)56)))))));
                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (-365907727336711235LL) : (((/* implicit */long long int) arr_4 [i_1] [i_0] [i_0]))))) ? (var_3) : (var_12)))) ? (max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) arr_3 [i_0] [i_0])))), (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))) : ((((-(var_18))) % (arr_2 [i_0]))))))));
                var_23 = ((((/* implicit */_Bool) var_10)) ? (-1LL) : (((((/* implicit */_Bool) 2909102610483377851LL)) ? (2909102610483377842LL) : (((/* implicit */long long int) ((/* implicit */int) var_7))))));
            }
        } 
    } 
    var_24 = (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 9088343913097830386LL)) ? (var_4) : (var_19)))) ? (min((var_11), (0LL))) : (((((/* implicit */_Bool) 2909102610483377849LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_15))))));
    var_25 = ((/* implicit */signed char) max((((/* implicit */long long int) -367081384)), (max((min((6LL), (((/* implicit */long long int) (signed char)15)))), (((((/* implicit */long long int) ((/* implicit */int) var_17))) / (3213953066685727635LL)))))));
}
