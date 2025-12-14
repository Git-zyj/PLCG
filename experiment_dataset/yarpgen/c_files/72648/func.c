/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72648
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
    var_10 = ((/* implicit */signed char) ((max((-1694407719), (((/* implicit */int) (unsigned char)78)))) | ((-(((/* implicit */int) (signed char)-33))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (int i_4 = 1; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_11 += ((/* implicit */unsigned int) max((max((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) var_4)) : (arr_6 [1] [1] [i_2] [i_2]))), (((((/* implicit */_Bool) (unsigned short)10863)) ? (-2138467081) : (((/* implicit */int) (signed char)-10)))))), (var_1)));
                                var_12 = ((/* implicit */unsigned short) max((max((arr_8 [i_0] [i_1] [i_0]), (((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)-17)) + (2147483647))) << (((((/* implicit */int) arr_2 [i_3] [i_4 - 1])) - (13014)))))))), (((/* implicit */unsigned int) var_7))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-10))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_7))))) : (min((arr_0 [i_0]), (251857553U)))))) ? (((((((/* implicit */_Bool) var_4)) ? (arr_9 [(unsigned short)4] [(short)4] [(unsigned short)4] [(signed char)4]) : (((/* implicit */int) (unsigned short)24524)))) + (((/* implicit */int) max((var_8), ((signed char)-42)))))) : (arr_6 [i_0] [i_1] [i_2] [i_0])));
                    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) -2138467107)) ? (2138467107) : (2133048825))), (((((/* implicit */int) arr_7 [i_0] [i_1] [i_0] [i_0])) ^ (((/* implicit */int) arr_4 [i_0]))))))) ? ((~(arr_11 [i_0] [i_2] [(unsigned char)7] [i_0] [i_0] [i_0]))) : (arr_9 [(short)9] [0] [(signed char)2] [16])));
                }
            } 
        } 
    } 
}
