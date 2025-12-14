/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94154
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
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        var_18 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
                        arr_10 [i_0] [i_3] [(short)12] [i_3] [i_1] = ((/* implicit */unsigned char) min((((unsigned int) arr_6 [i_2] [i_1] [i_2] [i_2])), (min((arr_6 [i_2] [i_1] [i_2] [i_3]), (arr_6 [i_0] [i_1] [i_2] [i_3])))));
                    }
                    /* vectorizable */
                    for (signed char i_4 = 2; i_4 < 18; i_4 += 1) 
                    {
                        var_19 += ((long long int) arr_6 [i_0] [i_0] [i_0] [i_0]);
                        arr_15 [i_0] [i_2] [i_4 - 1] = ((/* implicit */unsigned long long int) ((unsigned int) arr_7 [i_0]));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 20; i_5 += 3) 
                    {
                        for (signed char i_6 = 0; i_6 < 21; i_6 += 1) 
                        {
                            {
                                arr_20 [i_0] [i_1] [i_1] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((max((arr_13 [i_6]), (((/* implicit */unsigned int) arr_9 [i_1] [i_2] [(signed char)6] [i_2] [i_1] [i_1])))), (max((arr_7 [i_1]), (arr_7 [i_1])))))), (arr_2 [i_2] [i_2])));
                                var_20 ^= ((/* implicit */short) ((long long int) min((arr_11 [i_5 - 1] [i_5 - 1]), (arr_11 [i_5 + 1] [i_5 + 1]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 21; i_7 += 4) 
                    {
                        for (long long int i_8 = 0; i_8 < 21; i_8 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((unsigned short) ((short) ((long long int) arr_1 [i_1])))))));
                                var_22 = ((/* implicit */short) max((((unsigned int) max((((/* implicit */unsigned int) arr_4 [i_0] [(unsigned short)13] [i_2])), (arr_13 [5])))), (((/* implicit */unsigned int) min((arr_4 [i_1] [i_7] [i_8]), (arr_4 [i_7] [i_1] [i_2]))))));
                                arr_25 [i_8] = ((/* implicit */int) ((short) ((unsigned int) arr_24 [i_0] [i_0] [i_0] [i_0] [i_0])));
                                var_23 = ((/* implicit */unsigned long long int) max((var_23), (((unsigned long long int) arr_4 [(signed char)8] [i_7] [i_7]))));
                            }
                        } 
                    } 
                    arr_26 [i_0] [i_1] [i_1] [4ULL] = ((/* implicit */signed char) max((max((max((((/* implicit */unsigned long long int) arr_21 [(unsigned short)2] [i_2] [i_1] [i_0])), (arr_8 [i_0] [i_0] [i_2] [i_2]))), (min((arr_8 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_13 [i_2])))))), (max((((/* implicit */unsigned long long int) ((_Bool) arr_1 [i_1]))), (arr_2 [i_2] [i_0])))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (short i_9 = 4; i_9 < 11; i_9 += 1) 
    {
        for (signed char i_10 = 0; i_10 < 14; i_10 += 1) 
        {
            for (unsigned short i_11 = 0; i_11 < 14; i_11 += 1) 
            {
                {
                    arr_35 [i_11] [i_11] [i_11] [i_9] = ((/* implicit */unsigned short) min((arr_2 [i_9] [i_9]), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((unsigned short) arr_13 [(unsigned short)14]))), (arr_6 [i_9 + 2] [i_9 - 2] [i_9 + 2] [i_9 - 1]))))));
                    /* LoopSeq 3 */
                    for (int i_12 = 0; i_12 < 14; i_12 += 1) 
                    {
                        var_24 += ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((short) arr_27 [i_11]))), (max((arr_17 [i_9] [i_10] [7U] [i_9]), (arr_21 [i_9] [i_9] [i_11] [i_11])))))), (((unsigned long long int) arr_13 [i_9 - 3]))));
                        var_25 ^= ((/* implicit */int) arr_37 [i_10] [0] [i_12]);
                    }
                    for (unsigned short i_13 = 3; i_13 < 10; i_13 += 2) 
                    {
                        var_26 = ((/* implicit */short) max((max((((/* implicit */unsigned int) max((arr_39 [i_9]), (((/* implicit */unsigned short) arr_23 [i_9 + 2] [i_10] [i_11] [6] [i_11]))))), (max((((/* implicit */unsigned int) arr_18 [i_9] [i_10] [i_10] [i_11] [i_13 - 1])), (arr_7 [i_11]))))), (arr_21 [i_9] [i_9] [i_9] [i_9])));
                        var_27 = ((/* implicit */unsigned long long int) arr_12 [i_9] [i_10] [i_11] [1U]);
                    }
                    /* vectorizable */
                    for (unsigned int i_14 = 2; i_14 < 11; i_14 += 3) 
                    {
                        var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) arr_40 [i_14] [(short)2] [i_10] [0ULL]))));
                        arr_43 [i_9 - 1] [11LL] [i_11] [i_14] [i_9 - 4] = arr_38 [i_9] [i_9 + 3] [i_9] [i_9] [i_9 - 3] [i_9 - 1];
                    }
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */long long int) max((var_2), (((/* implicit */unsigned int) var_16))));
    var_30 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_4)), (max((var_2), (((/* implicit */unsigned int) var_14))))))), (min((((unsigned long long int) var_3)), (((/* implicit */unsigned long long int) max((var_13), (((/* implicit */short) var_12)))))))));
    var_31 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_5)), (var_11)));
}
