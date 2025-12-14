/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94961
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
    var_20 = ((/* implicit */signed char) (((-(var_19))) + (((/* implicit */unsigned long long int) 8388607U))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 7; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_21 += ((/* implicit */unsigned int) ((unsigned long long int) ((((int) 256200269)) >= ((+(var_17))))));
                                var_22 ^= ((/* implicit */unsigned short) ((unsigned long long int) (~(((long long int) arr_10 [i_0] [i_4] [i_2] [i_3] [i_4])))));
                                arr_11 [i_0] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_1 + 4] [i_1 + 2] [i_1 + 3] [i_1 + 3] [i_1 + 2] [i_1 - 1])) ? (((/* implicit */int) arr_7 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 + 2] [i_1 + 4] [i_1 + 4])) : (((/* implicit */int) arr_7 [i_1 + 2] [i_1 + 3] [i_1 + 3] [i_1 + 2] [i_1 + 1] [i_1 + 2])))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22716))) == (2651576491U)));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) max((((/* implicit */int) var_7)), (var_5)));
    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_5) << (((var_12) - (804147970U)))))) ? (max((var_4), (var_10))) : (((/* implicit */unsigned long long int) 1643390821U))))) ? (var_19) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))));
    var_26 = ((/* implicit */signed char) 1643390821U);
}
