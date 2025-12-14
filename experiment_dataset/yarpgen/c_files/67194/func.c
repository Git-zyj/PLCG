/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67194
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
    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) var_7))));
    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) (+(((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))) ^ (((var_7) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))))));
    var_20 |= ((/* implicit */unsigned int) var_13);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned int i_1 = 4; i_1 < 17; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */_Bool) ((long long int) ((unsigned char) arr_1 [i_1 - 4])));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */long long int) ((((2113058524U) & (((/* implicit */unsigned int) ((((/* implicit */int) var_15)) >> (((2113058524U) - (2113058503U)))))))) <= (arr_4 [i_0] [i_2] [i_4])));
                                arr_14 [i_0] [i_0] [i_1] [i_1] [i_3] [i_4] = ((/* implicit */unsigned char) min(((+(2017693587))), (((int) var_3))));
                                var_23 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_0] [i_1]))))) : (arr_11 [i_0] [i_0] [i_0] [i_0] [i_4])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
