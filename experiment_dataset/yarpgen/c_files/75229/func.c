/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75229
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
    var_19 = ((/* implicit */signed char) max(((+(((/* implicit */int) ((((/* implicit */_Bool) 5U)) && (((/* implicit */_Bool) var_2))))))), (max(((~(((/* implicit */int) var_4)))), (((/* implicit */int) ((signed char) var_1)))))));
    var_20 = (+(max(((-(4294967292U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8))))))));
    var_21 &= ((((/* implicit */unsigned int) ((/* implicit */int) var_17))) | ((~(4294967276U))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            {
                var_22 = ((((/* implicit */_Bool) 4294967276U)) ? (arr_0 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0]))));
                var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((4294967284U) > (1U))))));
                var_24 ^= ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_18))) | (1U)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [(signed char)4] [(signed char)4])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_5 [i_0] [i_0] [(signed char)16]))))) : (min((17U), (5U)))))));
                var_25 = ((/* implicit */short) (!((((-(4294967275U))) > (4294967293U)))));
            }
        } 
    } 
}
