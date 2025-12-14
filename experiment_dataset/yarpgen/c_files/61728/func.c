/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61728
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
    var_18 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_14)) ? (var_7) : (var_10))) : (((/* implicit */unsigned long long int) var_9))))) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_2) != (((/* implicit */long long int) 2892427181U))))))));
    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((signed char) var_3)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0] [i_1])) * (((/* implicit */int) ((unsigned short) var_5)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1]))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [(_Bool)1] [(short)10])) ? (((/* implicit */int) arr_1 [6ULL] [i_0])) : (((/* implicit */int) var_15))))), (max((10115465664815758500ULL), (((/* implicit */unsigned long long int) 1402540092U)))))))))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 13; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_12) * (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_2])) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_2 - 2] [i_3] [i_1]))) >= (arr_4 [i_0]))))))) ? (min((arr_5 [i_2 - 2] [3] [i_2]), (((arr_1 [i_0] [i_0]) ? (var_5) : (((/* implicit */int) arr_3 [i_0] [i_0])))))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_1 [i_2 - 2] [i_2 - 2])) : (((/* implicit */int) (unsigned char)250))))));
                            var_22 = (+(((((/* implicit */int) ((((/* implicit */int) (unsigned char)224)) > (((/* implicit */int) (unsigned char)245))))) >> (((((/* implicit */int) arr_6 [i_0] [i_1] [i_2 + 2] [i_2 + 2] [i_2 + 2])) - (14480))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
