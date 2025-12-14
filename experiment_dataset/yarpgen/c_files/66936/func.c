/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66936
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((long long int) 9850681503415624769ULL)), (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)-22982)))))))) ? (((((/* implicit */_Bool) ((var_3) ? (((/* implicit */unsigned long long int) 536160628U)) : (arr_3 [i_0] [i_0] [i_2])))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) arr_2 [i_4] [i_4] [i_4])) ? (((/* implicit */int) (short)7907)) : (((/* implicit */int) var_4)))))) : (((/* implicit */int) var_5))));
                                var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2448996658U)) ? (((/* implicit */int) (unsigned char)108)) : (((/* implicit */int) (_Bool)1))));
                                var_13 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) max((var_5), ((short)-29190)))) ? ((+(((/* implicit */int) (unsigned char)245)))) : (((/* implicit */int) (short)28888))))));
                            }
                        } 
                    } 
                    arr_12 [i_2] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)197)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : ((~(((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) + (var_9)))))));
                }
            } 
        } 
    } 
    var_14 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)232)) ? (var_1) : (var_1)))) ? ((-(((/* implicit */int) (signed char)-4)))) : ((+(((/* implicit */int) var_4))))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), (var_2)))) ? (278132584U) : (((/* implicit */unsigned int) var_1)))) : (var_9));
}
