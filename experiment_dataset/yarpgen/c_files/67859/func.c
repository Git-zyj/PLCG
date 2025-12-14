/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67859
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
    for (long long int i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (int i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    arr_10 [i_2] [i_1] [i_0] [i_0] &= ((/* implicit */unsigned int) arr_3 [i_0] [i_0]);
                    var_17 = ((/* implicit */unsigned int) arr_5 [i_2] [(signed char)11] [i_0 + 3]);
                    var_18 = ((/* implicit */short) arr_9 [i_2] [i_2] [(unsigned short)15] [i_0]);
                    var_19 = ((/* implicit */unsigned short) arr_7 [i_2] [i_0] [i_1] [i_0]);
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        var_20 = ((/* implicit */short) arr_2 [i_3] [i_2]);
                        var_21 = ((/* implicit */long long int) arr_5 [i_3] [i_0] [i_0]);
                    }
                }
                for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 1) 
                {
                    var_22 = ((/* implicit */unsigned int) arr_6 [i_4] [i_1] [i_1] [i_0]);
                    arr_16 [11] [i_1] = ((/* implicit */short) arr_9 [i_4] [i_1] [15LL] [(signed char)1]);
                    /* LoopSeq 4 */
                    for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 1) /* same iter space */
                    {
                        var_23 = ((/* implicit */_Bool) arr_9 [i_5] [i_4] [i_1] [12LL]);
                        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) arr_13 [i_5] [i_1] [12U]))));
                        var_25 = ((/* implicit */unsigned short) arr_3 [i_0] [i_0]);
                        arr_20 [i_5] = arr_3 [i_5] [i_4];
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 1) /* same iter space */
                    {
                        var_26 ^= ((/* implicit */unsigned char) arr_21 [(unsigned short)6] [i_4] [(unsigned short)15] [(unsigned short)12]);
                        arr_24 [i_6] [i_4] [i_1] [(_Bool)1] [i_1] [i_6] = ((/* implicit */short) arr_19 [i_6] [(_Bool)1] [i_4] [i_0] [i_0]);
                        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) arr_11 [i_6] [i_4] [i_0] [i_0] [i_0]))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_7 = 0; i_7 < 18; i_7 += 2) 
                        {
                            arr_27 [i_6] [i_6] [i_1] [i_1] [i_0] [i_1] [i_6] = ((/* implicit */unsigned short) arr_12 [5ULL] [i_4] [(unsigned char)12] [(unsigned char)12]);
                            arr_28 [i_6] [i_6] [i_4] [i_6] [i_0] = ((/* implicit */unsigned long long int) arr_22 [i_7] [i_0] [i_0]);
                        }
                        var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) arr_17 [i_6] [(_Bool)0] [i_1] [i_0]))));
                    }
                    /* vectorizable */
                    for (short i_8 = 0; i_8 < 18; i_8 += 1) 
                    {
                        arr_32 [i_0 + 3] [i_4] [i_8] [i_0 + 3] [i_0 + 3] = ((/* implicit */unsigned long long int) arr_11 [11ULL] [i_1] [i_1] [i_0 - 2] [i_0]);
                        arr_33 [i_8] [i_8] [i_8] [i_0] = ((/* implicit */int) arr_15 [i_8] [i_0 + 1] [i_0 + 1] [i_0 + 1]);
                        var_29 ^= ((/* implicit */long long int) arr_29 [i_8] [i_0]);
                    }
                    for (long long int i_9 = 1; i_9 < 16; i_9 += 1) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_10 = 2; i_10 < 17; i_10 += 1) 
                        {
                            var_30 += arr_25 [i_10] [14U] [i_1] [i_1] [i_1] [i_0] [i_0];
                            var_31 = arr_26 [i_10] [i_9 - 1] [i_4] [(signed char)2] [(signed char)2];
                            var_32 = ((/* implicit */long long int) arr_17 [i_10 - 2] [i_9] [14U] [(unsigned short)3]);
                        }
                        for (short i_11 = 0; i_11 < 18; i_11 += 3) 
                        {
                            var_33 = ((/* implicit */unsigned short) arr_42 [i_11] [i_9 + 2] [i_4]);
                            arr_43 [i_11] [i_9] [i_4] [i_4] [i_1] [i_11] = ((/* implicit */int) arr_36 [i_9 + 2]);
                            var_34 = ((/* implicit */long long int) arr_25 [i_11] [(short)6] [i_11] [i_9] [i_11] [(short)6] [(short)6]);
                            arr_44 [i_11] [i_9 - 1] [i_4] [i_1] [i_11] = ((/* implicit */unsigned short) arr_31 [i_11] [i_11] [i_0]);
                        }
                        var_35 = ((/* implicit */unsigned long long int) arr_38 [(unsigned char)10] [i_0]);
                    }
                }
                for (unsigned short i_12 = 0; i_12 < 18; i_12 += 2) 
                {
                    var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) arr_40 [11LL]))));
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 18; i_13 += 3) 
                    {
                        for (long long int i_14 = 0; i_14 < 18; i_14 += 2) 
                        {
                            {
                                arr_53 [(_Bool)1] [i_13] [i_12] [i_1] [(unsigned short)11] = ((/* implicit */unsigned int) arr_9 [i_13] [i_12] [i_1] [i_0 + 3]);
                                var_37 ^= ((/* implicit */_Bool) arr_29 [i_13] [i_12]);
                                var_38 = arr_50 [i_14] [i_0] [i_1] [i_0];
                                arr_54 [i_1] [i_13] [17LL] [i_0] [i_1] [i_0] = ((/* implicit */short) arr_37 [i_13] [i_12]);
                                arr_55 [i_14] [0LL] [i_0] [15ULL] [i_0] = ((/* implicit */unsigned long long int) arr_13 [(short)3] [i_1] [i_0]);
                            }
                        } 
                    } 
                }
                var_39 = ((/* implicit */short) arr_14 [i_0]);
                var_40 = ((/* implicit */short) arr_11 [i_1] [i_0] [i_0 - 2] [i_0 - 2] [i_0]);
            }
        } 
    } 
    var_41 = ((/* implicit */unsigned int) var_9);
}
