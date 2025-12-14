/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92184
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
    var_16 = ((/* implicit */unsigned int) max((var_16), (var_2)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 7; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */signed char) (~(((/* implicit */int) arr_0 [i_0]))));
                    var_18 = ((/* implicit */unsigned char) arr_2 [i_2] [i_1]);
                    var_19 += (~(((/* implicit */int) arr_2 [4] [i_0])));
                    var_20 += (+(((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) arr_6 [i_0 + 1] [i_0] [i_0 - 1] [i_0 + 4])) : (((/* implicit */int) arr_2 [i_0 + 2] [i_2])))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 7; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_1] [i_4] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32764)) ? (((/* implicit */int) (unsigned char)22)) : (((/* implicit */int) (unsigned short)65535))))) ? (812197405U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)238)))))));
                                arr_15 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */int) var_14);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
