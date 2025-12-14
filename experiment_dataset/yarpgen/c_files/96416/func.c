/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96416
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
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */signed char) ((int) arr_2 [i_0] [i_0] [i_0 + 1]));
                var_17 = ((/* implicit */long long int) ((unsigned long long int) ((var_4) - (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0 + 1] [i_0 - 1])))));
                arr_6 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) (signed char)-30)) ? (((/* implicit */int) (signed char)-95)) : (((/* implicit */int) (signed char)-30)));
                var_18 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_1 [(signed char)14] [i_1]))) ? (((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0] [i_0])) ? (arr_3 [i_0] [i_0] [i_0 + 2]) : (((/* implicit */int) var_11)))) : (var_15)))) ? (max((((/* implicit */int) arr_0 [i_0 - 1])), (((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_1])) ? (var_15) : (((/* implicit */int) var_3)))))) : (((arr_0 [i_0 + 2]) ? (((((/* implicit */int) arr_0 [i_1])) + (((/* implicit */int) var_7)))) : (((/* implicit */int) var_13)))));
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_19 *= ((/* implicit */signed char) ((unsigned int) 13225294989960157160ULL));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                arr_15 [i_4] [i_3] [i_0] [i_1] [i_0] = ((/* implicit */long long int) var_4);
                                var_20 = ((/* implicit */short) min((((unsigned int) ((_Bool) var_3))), (((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) 2143289344U)) ? (13225294989960157171ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-30)))))))));
                                arr_16 [i_2] [i_2] [i_2] [i_2] [i_2] &= ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) arr_12 [i_0] [i_0 + 1] [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_4 [i_0] [i_0 - 1] [i_0])))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_5 = 0; i_5 < 17; i_5 += 2) 
                {
                    arr_19 [i_0] [i_0] [i_0 + 2] = ((_Bool) var_4);
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 17; i_6 += 2) 
                    {
                        for (unsigned long long int i_7 = 4; i_7 < 16; i_7 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) arr_8 [i_7 - 3]);
                                var_22 = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)48750))) / (arr_13 [i_0] [i_1] [(short)16] [i_7 - 1] [i_7] [i_1]))) >> (((((/* implicit */int) ((unsigned short) ((long long int) arr_11 [i_7] [i_6] [i_5] [i_1] [i_0])))) - (65499)))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (short)-20737)) : (((/* implicit */int) var_0))))), (min((arr_1 [(_Bool)1] [i_5]), (((/* implicit */long long int) (unsigned short)19405))))))))));
                    var_24 ^= ((/* implicit */_Bool) ((unsigned short) arr_22 [i_0 + 2] [i_0 + 1] [i_0 + 2] [i_0 + 2] [i_1] [i_0 + 2]));
                }
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((long long int) 298224426U)))));
    var_26 |= ((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */signed char) var_2)), (var_7))))) & (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (var_5)))));
    var_27 &= ((/* implicit */unsigned short) var_4);
}
