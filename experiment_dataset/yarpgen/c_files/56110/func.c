/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56110
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 8; i_1 += 3) 
        {
            {
                arr_8 [i_0 + 1] [i_0] = ((/* implicit */short) ((min((min((((/* implicit */unsigned long long int) var_10)), (arr_6 [i_0 + 1] [i_0 + 1] [i_1 - 2]))), (((/* implicit */unsigned long long int) ((int) arr_2 [i_0]))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))));
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */short) max((((arr_1 [i_4]) + (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_8)), (0U)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9U)) ? (((/* implicit */int) arr_12 [i_1 - 1] [(unsigned short)10] [(unsigned short)10] [i_1 + 4])) : (((/* implicit */int) arr_9 [i_1 - 2] [i_1 - 2] [i_1 - 2])))))));
                                var_20 = ((/* implicit */short) ((((/* implicit */int) var_6)) - (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) arr_7 [i_0]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 4; i_5 < 11; i_5 += 3) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */int) arr_16 [i_6]);
                                arr_20 [(unsigned short)6] [i_1 + 1] [i_0] [i_5 - 4] [(unsigned short)7] = ((/* implicit */unsigned int) min(((-2147483647 - 1)), (((/* implicit */int) var_18))));
                                var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2] [i_0])) ? ((-(arr_6 [i_0 + 1] [(unsigned char)9] [i_0 + 1]))) : (((/* implicit */unsigned long long int) max((arr_11 [i_0 + 1] [6ULL] [i_0 + 1] [i_0]), (((/* implicit */int) var_15)))))))) ? (((/* implicit */unsigned long long int) (+((-(((/* implicit */int) var_6))))))) : (((((/* implicit */_Bool) ((var_9) - (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_5 - 4] [i_1 + 2])))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_13 [i_0] [(unsigned char)2] [i_2] [(unsigned char)2] [i_6])), (arr_11 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0])))) : (((((/* implicit */_Bool) arr_1 [i_1 + 2])) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0])))))))));
                            }
                        } 
                    } 
                }
                var_23 |= ((/* implicit */unsigned short) var_2);
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 15; i_7 += 1) 
    {
        for (unsigned char i_8 = 0; i_8 < 18; i_8 += 1) 
        {
            {
                var_24 = ((/* implicit */unsigned short) 4294967295U);
                var_25 = ((/* implicit */unsigned short) (-(arr_21 [i_7] [(_Bool)1])));
            }
        } 
    } 
}
