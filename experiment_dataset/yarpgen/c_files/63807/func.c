/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63807
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 18; i_3 += 4) 
                    {
                        for (int i_4 = 1; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_20 *= ((/* implicit */unsigned int) max((((/* implicit */long long int) ((unsigned short) arr_10 [i_1] [i_3 - 2] [i_4 + 3] [i_3] [i_4] [i_0]))), (((long long int) arr_11 [13] [i_2] [i_3] [13] [i_4] [(signed char)6] [i_4 - 1]))));
                                arr_12 [i_0] [i_0] [i_2] [i_0] [i_2] [i_0] [i_1] = ((/* implicit */unsigned int) ((long long int) ((signed char) arr_10 [i_2] [i_2] [i_0] [i_0] [(short)2] [i_0])));
                            }
                        } 
                    } 
                    arr_13 [i_0] [10] [i_2] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((signed char) arr_10 [i_2] [i_2] [i_2] [i_1] [i_2] [i_2]))), (((((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_0] [i_2] [i_0] [i_2])) ? (arr_10 [i_2] [i_2] [i_1] [i_0] [i_2] [i_2]) : (arr_10 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */long long int) min((var_21), (max((max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (var_0))), (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) max((((/* implicit */short) var_5)), ((short)8706))))))));
    /* LoopNest 3 */
    for (unsigned int i_5 = 4; i_5 < 14; i_5 += 1) 
    {
        for (int i_6 = 1; i_6 < 14; i_6 += 4) 
        {
            for (unsigned short i_7 = 0; i_7 < 15; i_7 += 1) 
            {
                {
                    arr_22 [i_5] [i_5] [i_5] [i_7] = ((/* implicit */int) max(((short)-8699), ((short)-8706)));
                    arr_23 [(_Bool)1] [i_5] = ((/* implicit */signed char) (~(max((2393504061U), (((/* implicit */unsigned int) (unsigned short)35673))))));
                }
            } 
        } 
    } 
}
