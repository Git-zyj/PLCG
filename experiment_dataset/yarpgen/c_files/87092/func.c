/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87092
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
    for (long long int i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        for (long long int i_1 = 4; i_1 < 13; i_1 += 1) 
        {
            {
                arr_7 [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(4112199142730381491ULL))))));
                var_11 = ((/* implicit */signed char) max((((/* implicit */int) ((short) (~(((/* implicit */int) arr_3 [i_0] [i_0])))))), (((((/* implicit */_Bool) (unsigned short)60497)) ? (((/* implicit */int) (!(var_8)))) : (((/* implicit */int) var_4))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((var_1), (((((/* implicit */_Bool) 0U)) ? (((/* implicit */long long int) 2603493311U)) : (var_1)))))), ((((~(4112199142730381514ULL))) / (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16018))) & (562429477U)))))))))));
    var_13 = ((/* implicit */signed char) (+(max((((var_8) ? (((/* implicit */unsigned int) var_2)) : (var_6))), (((/* implicit */unsigned int) (!(var_7))))))));
    var_14 -= (-(2313077524U));
    var_15 = ((/* implicit */long long int) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_8))));
}
