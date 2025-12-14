/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96804
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
    var_20 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) 1063691197)) + (min((((/* implicit */unsigned int) ((unsigned short) 1063691193))), (min((((/* implicit */unsigned int) -1063691194)), (var_9)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) max((((((/* implicit */_Bool) (unsigned short)33801)) ? (((/* implicit */int) (short)23973)) : (((/* implicit */int) (short)-23973)))), (((((/* implicit */_Bool) var_6)) ? (-1063691178) : (-629691351))))))));
                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (-(((/* implicit */int) max((arr_3 [(signed char)14]), (((/* implicit */signed char) ((var_2) <= (((/* implicit */long long int) ((/* implicit */int) var_11))))))))))))));
                var_23 = ((/* implicit */short) ((((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned long long int) arr_0 [i_0]))))) ? (-1063691198) : (((/* implicit */int) ((((/* implicit */_Bool) 1063691202)) || (((/* implicit */_Bool) 1063691193))))))) > (((/* implicit */int) max((arr_1 [i_0 + 1]), (((/* implicit */unsigned short) (short)-24004)))))));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    for (int i_3 = 3; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-23955)) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (max((((/* implicit */int) arr_1 [i_0])), (1063691197)))))));
                                var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) -1063691198))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
