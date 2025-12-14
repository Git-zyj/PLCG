/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58665
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 4; i_1 < 18; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */short) max((664967477), (((/* implicit */int) (unsigned short)3085))));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (signed char i_3 = 4; i_3 < 18; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 18; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_1] = ((/* implicit */long long int) arr_6 [i_0] [(signed char)12] [i_0] [i_0]);
                                arr_16 [(unsigned short)5] [16U] [i_2] [i_2] [(short)14] [(signed char)1] [i_2] = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_6 [i_1 - 1] [i_4 - 1] [i_2] [i_3 - 4])) ? (arr_6 [i_0] [i_4 - 3] [i_2] [i_3 - 1]) : (arr_12 [i_1 - 2] [i_3 - 2] [i_3 - 2] [i_4 - 2] [i_4] [i_4 - 3])))));
                                var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_4 - 2])) ? (arr_1 [i_4 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-29)))))) ? ((-(arr_1 [i_4 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_1 [i_4 - 3]) != (arr_1 [i_4 - 2])))))));
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) max((((/* implicit */unsigned short) ((signed char) arr_6 [i_0] [i_1] [i_3 - 2] [i_4]))), (((unsigned short) (signed char)50)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_15 = ((max((((var_10) ? (((/* implicit */unsigned int) 255)) : (var_9))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -6550187459401708770LL)) ? (((/* implicit */int) (signed char)4)) : (((/* implicit */int) (signed char)-43))))))) / (((/* implicit */unsigned int) ((/* implicit */int) var_7))));
}
