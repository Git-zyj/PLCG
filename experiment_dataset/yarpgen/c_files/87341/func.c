/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87341
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
    var_11 |= ((/* implicit */long long int) ((((/* implicit */int) var_8)) / (((/* implicit */int) var_8))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 12; i_4 += 4) 
                        {
                            {
                                arr_15 [11] [i_2] [i_2] [i_3] [i_4 - 3] = ((/* implicit */unsigned long long int) ((((min((arr_0 [i_0] [i_0]), (((/* implicit */int) arr_2 [i_0])))) + (2147483647))) << (((((/* implicit */int) arr_9 [i_0] [7] [i_1] [i_3])) - (25550)))));
                                arr_16 [i_2] [i_2 + 1] [i_2] = ((/* implicit */short) max((17169703643269955720ULL), (((/* implicit */unsigned long long int) -2826825910851526723LL))));
                            }
                        } 
                    } 
                    var_12 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_9 [i_0] [i_2 + 1] [i_2] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_13 [i_2 + 1] [i_2] [i_1]))), (max((((/* implicit */long long int) max((arr_11 [i_0] [i_1] [i_0] [i_2] [i_2]), (arr_3 [i_1] [11LL])))), (min((((/* implicit */long long int) arr_8 [(unsigned short)10] [i_1] [i_2])), (arr_7 [i_0] [i_1] [i_2] [i_1])))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        arr_20 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_0] [i_2] [(unsigned short)5])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_13 [i_2 - 1] [i_2] [i_2])));
                        var_13 = ((/* implicit */unsigned short) arr_14 [i_1] [i_1] [i_1] [i_1]);
                    }
                    /* vectorizable */
                    for (long long int i_6 = 0; i_6 < 13; i_6 += 1) 
                    {
                        var_14 += ((/* implicit */short) arr_22 [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2 - 1]);
                        arr_23 [i_2] [i_2] = ((/* implicit */unsigned char) arr_3 [i_0] [i_0]);
                    }
                    for (unsigned long long int i_7 = 1; i_7 < 10; i_7 += 3) 
                    {
                        arr_27 [i_2] [i_2 + 1] [i_1] [i_2] = ((max((max((((/* implicit */long long int) arr_12 [i_7])), (var_4))), (((/* implicit */long long int) arr_2 [i_2])))) % ((+(min((((/* implicit */long long int) arr_1 [i_0] [i_7])), (arr_4 [i_0] [i_0] [i_0]))))));
                        arr_28 [i_2] [5LL] [i_1] [i_2] = ((/* implicit */unsigned short) min((arr_4 [i_2 - 1] [i_1] [i_7 + 3]), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_21 [i_1] [i_1] [i_2] [i_7])))))));
                        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) arr_26 [i_0] [i_1] [i_2] [i_7]))));
                    }
                    arr_29 [(short)5] [i_2] [i_1] [i_2] = ((/* implicit */signed char) arr_19 [i_0] [i_2] [i_2] [i_1] [i_2 + 1]);
                }
            } 
        } 
    } 
}
