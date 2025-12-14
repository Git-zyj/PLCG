/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58482
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
    var_20 = ((/* implicit */short) (((-(((/* implicit */int) ((signed char) (unsigned short)24321))))) - (((/* implicit */int) max((((/* implicit */unsigned short) (short)-3831)), ((unsigned short)41214))))));
    var_21 = ((/* implicit */unsigned short) ((((((/* implicit */int) ((short) var_5))) + (2147483647))) << (((((/* implicit */int) max((var_8), (var_15)))) - (1)))));
    var_22 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_4)) ? (1798240122U) : (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 4; i_1 < 23; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 23; i_3 += 1) 
                    {
                        for (short i_4 = 2; i_4 < 23; i_4 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((unsigned short) max((((/* implicit */int) max((((/* implicit */unsigned short) (short)21705)), ((unsigned short)41214)))), (((arr_11 [i_0] [i_1 - 1]) ? (((/* implicit */int) arr_11 [i_0] [i_0])) : (((/* implicit */int) (signed char)-79))))))))));
                                arr_15 [i_0] [i_1] [i_0] [i_0] [22U] [i_4] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((short) (short)-29118)))));
                                var_24 = ((/* implicit */_Bool) ((signed char) min((((/* implicit */unsigned int) max(((short)29117), (((/* implicit */short) var_14))))), (((((/* implicit */_Bool) (short)-1)) ? (var_18) : (var_1))))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */short) (-(arr_1 [i_0])));
                }
            } 
        } 
    } 
}
