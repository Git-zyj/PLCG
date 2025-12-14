/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81147
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
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0]))))) ? ((~(((/* implicit */int) var_7)))) : (((/* implicit */int) arr_0 [i_0]))));
                var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) (-(((arr_2 [0ULL]) & (((/* implicit */unsigned long long int) var_12)))))))));
                /* LoopNest 3 */
                for (signed char i_2 = 2; i_2 < 11; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) arr_4 [i_1 + 1] [i_0] [i_1 + 1]);
                                var_21 |= ((/* implicit */int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned char)247)))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [12U]))) - (1830771417U)))) : (-7427154243438548865LL))))));
                                var_22 = ((/* implicit */signed char) (~((~(((/* implicit */int) arr_10 [i_2 + 1] [i_1 + 1] [i_1 + 2] [i_1 + 1] [i_1 - 1]))))));
                            }
                        } 
                    } 
                } 
                var_23 = ((/* implicit */signed char) min((-363894361), (2147483647)));
                arr_11 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? ((((~(-7427154243438548865LL))) | (((/* implicit */long long int) arr_6 [i_1 + 1] [i_1 + 2])))) : (((/* implicit */long long int) (~(arr_4 [i_0] [i_0] [i_1 + 1]))))));
            }
        } 
    } 
    var_24 = ((/* implicit */int) ((((/* implicit */_Bool) (~(min((-2147483628), (((/* implicit */int) var_5))))))) ? (min((min((var_14), (((/* implicit */unsigned int) (short)-11438)))), (((/* implicit */unsigned int) var_0)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
    var_25 = ((/* implicit */short) var_14);
}
