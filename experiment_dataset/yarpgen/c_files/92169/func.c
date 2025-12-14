/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92169
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
    var_15 = ((/* implicit */short) min((((int) var_7)), (((((/* implicit */_Bool) (unsigned short)28477)) ? (((/* implicit */int) (short)-28700)) : (((/* implicit */int) var_1))))));
    var_16 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) max((var_5), (((/* implicit */long long int) var_10))))))));
    var_17 = ((/* implicit */unsigned long long int) ((((var_0) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (27ULL) : (((/* implicit */unsigned long long int) var_8))))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) (short)14778))) : (var_4))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) -2147483645)))))))) - (14749LL)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 15; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */signed char) var_7);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 17; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 17; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] [i_1] [9U] [i_4] [i_3 - 1] [i_4 - 3] = ((/* implicit */short) ((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (short)-14778))) + (((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0 + 1] [i_1] [i_2 + 1] [i_3 + 2] [12ULL]))) - (var_3))))));
                                var_19 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) -8224118712703735183LL)) ? (((/* implicit */int) arr_0 [11])) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) == (((arr_3 [i_4]) / (arr_11 [i_1 + 1] [i_1 - 1] [(unsigned char)18] [i_2] [i_0]))))))));
                                var_20 = ((/* implicit */signed char) min((((long long int) arr_6 [i_0] [i_0] [i_2])), (((/* implicit */long long int) max((arr_6 [i_0 - 1] [i_1] [i_2]), (((/* implicit */unsigned int) arr_10 [i_0] [i_1 + 1] [i_2 + 4] [i_3] [i_3 + 2] [i_0] [i_0 - 1])))))));
                                arr_13 [i_0] [i_4] [9ULL] [i_3 + 2] = ((/* implicit */long long int) arr_8 [i_3 + 2] [i_4] [i_4] [i_4 - 3]);
                                var_21 -= ((/* implicit */_Bool) min((((/* implicit */long long int) arr_7 [i_0] [i_1] [i_2] [i_3] [i_4])), (max((((/* implicit */long long int) ((((((/* implicit */int) arr_10 [(unsigned char)14] [(unsigned char)3] [i_2] [i_3] [(unsigned char)14] [i_4] [i_4])) + (2147483647))) << (((var_8) - (1211870574)))))), (-8224118712703735196LL)))));
                            }
                        } 
                    } 
                    arr_14 [i_2 + 2] = ((/* implicit */signed char) arr_9 [i_0 - 1] [(unsigned char)14] [i_2 + 4] [i_2]);
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 1; i_5 < 18; i_5 += 2) 
                    {
                        for (long long int i_6 = 4; i_6 < 16; i_6 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1 + 1] [i_2] [i_2 + 3] [i_6 - 3] [i_6] [i_6 - 3] [i_6 + 2])) ? (((/* implicit */int) arr_10 [i_2 + 3] [i_2] [i_2 + 2] [i_6 + 3] [i_6 - 4] [i_6 + 2] [i_6])) : (((/* implicit */int) arr_10 [i_1 + 1] [i_1 + 1] [i_2 + 2] [i_6 + 2] [i_2 + 2] [i_6] [i_6]))))) ? (((((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_2 + 2] [i_6 - 4] [i_6 - 1] [i_6] [i_6 - 2])) ? (((/* implicit */int) arr_10 [i_0] [i_0 + 1] [i_2 + 4] [i_6 - 2] [i_6 - 1] [6ULL] [i_6])) : (((/* implicit */int) arr_10 [i_1 - 1] [7ULL] [i_2 + 3] [i_6 - 1] [i_6] [i_6 - 3] [i_6 + 1])))) : (((((/* implicit */int) arr_10 [(short)17] [i_0] [i_2 + 2] [i_6 + 2] [i_6] [i_6] [i_6])) | (((/* implicit */int) arr_10 [i_0] [(signed char)4] [i_2 - 1] [i_6 + 3] [i_6] [i_6 + 3] [i_6 - 1]))))));
                                var_23 = ((/* implicit */unsigned int) arr_19 [2LL] [2LL] [i_5]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned char) ((unsigned long long int) (!(((/* implicit */_Bool) var_5)))));
}
