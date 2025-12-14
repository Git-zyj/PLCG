/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82768
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
    for (short i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_2 = 2; i_2 < 10; i_2 += 2) 
                {
                    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) arr_0 [i_0 - 1]))));
                    var_21 *= ((/* implicit */signed char) arr_1 [i_0 + 1]);
                }
                var_22 = ((/* implicit */signed char) min((min((arr_5 [10LL] [i_0] [i_0 + 1] [11LL]), (arr_5 [i_0] [i_0] [i_1] [i_1]))), (arr_5 [(_Bool)1] [i_1] [i_1] [9ULL])));
                /* LoopSeq 2 */
                for (unsigned short i_3 = 0; i_3 < 12; i_3 += 4) /* same iter space */
                {
                    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) min((min((arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 1]), (arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 1]))), (arr_7 [i_0 - 1] [i_0 + 1] [i_0 - 1]))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_4 = 0; i_4 < 12; i_4 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 3; i_5 < 11; i_5 += 4) 
                        {
                            arr_17 [i_0] [i_1] [i_3] [i_4] [i_1] = ((/* implicit */unsigned short) arr_15 [i_0] [(signed char)5] [(signed char)4] [i_5] [i_0] [i_4]);
                            var_24 = ((/* implicit */unsigned short) arr_1 [(signed char)9]);
                            var_25 = ((/* implicit */_Bool) arr_2 [(_Bool)0] [i_0 - 1]);
                        }
                        var_26 = ((/* implicit */long long int) arr_14 [i_1] [i_1] [i_3] [i_4] [i_3] [8] [i_0 + 1]);
                        /* LoopSeq 2 */
                        for (short i_6 = 1; i_6 < 10; i_6 += 2) /* same iter space */
                        {
                            var_27 -= ((/* implicit */short) arr_14 [i_3] [i_1] [i_6 + 2] [8ULL] [4LL] [0U] [i_0 + 1]);
                            var_28 = ((/* implicit */unsigned int) arr_12 [i_0] [i_0 + 1] [(_Bool)1] [i_6]);
                            var_29 = ((/* implicit */_Bool) arr_15 [i_0] [(short)8] [(unsigned short)0] [i_1] [i_1] [i_6]);
                        }
                        for (short i_7 = 1; i_7 < 10; i_7 += 2) /* same iter space */
                        {
                            var_30 ^= ((/* implicit */signed char) arr_11 [i_0] [i_1] [i_3] [i_0 - 1] [i_4]);
                            var_31 += ((/* implicit */_Bool) arr_7 [i_0 - 1] [(short)1] [i_7 + 1]);
                            arr_22 [(unsigned short)9] [i_1] [i_3] [i_1] [i_7] = ((/* implicit */unsigned long long int) arr_2 [i_0 - 1] [i_1]);
                            var_32 ^= arr_18 [i_0] [i_0] [i_0 + 1] [i_0] [5ULL];
                            var_33 = ((/* implicit */signed char) arr_1 [i_0 + 1]);
                        }
                    }
                    var_34 = ((/* implicit */signed char) arr_5 [7LL] [i_1] [i_1] [(unsigned short)7]);
                    var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) arr_21 [i_3] [i_1] [i_1] [(unsigned short)6]))));
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 0; i_8 < 12; i_8 += 2) 
                    {
                        for (short i_9 = 0; i_9 < 12; i_9 += 1) 
                        {
                            {
                                var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) arr_9 [i_8]))));
                                var_37 = ((/* implicit */unsigned short) max((var_37), (((/* implicit */unsigned short) arr_24 [i_0 + 1] [i_1] [7ULL] [11ULL] [i_1]))));
                                var_38 = ((/* implicit */signed char) arr_18 [1LL] [i_8] [0ULL] [i_0 + 1] [i_0]);
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned short i_10 = 0; i_10 < 12; i_10 += 4) /* same iter space */
                {
                    arr_34 [i_1] = arr_20 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_10];
                    /* LoopSeq 1 */
                    for (short i_11 = 3; i_11 < 11; i_11 += 4) 
                    {
                        var_39 = ((/* implicit */signed char) arr_13 [i_0 - 1] [7LL] [i_0] [i_0] [i_0 - 1] [i_0] [i_0]);
                        /* LoopSeq 1 */
                        for (short i_12 = 1; i_12 < 11; i_12 += 2) 
                        {
                            arr_40 [(unsigned char)9] [i_1] [7ULL] [i_1] [i_12 - 1] [(short)4] = arr_23 [(signed char)3] [i_1] [(short)9] [i_12] [i_12 + 1] [i_11 - 1];
                            var_40 = ((/* implicit */short) arr_27 [i_0 + 1] [i_11 - 3]);
                            var_41 = ((/* implicit */unsigned char) arr_19 [(short)6] [i_10] [i_11 - 2]);
                        }
                        /* LoopSeq 1 */
                        for (signed char i_13 = 3; i_13 < 8; i_13 += 4) 
                        {
                            var_42 = ((/* implicit */long long int) arr_23 [4] [i_1] [i_10] [3ULL] [i_11] [5LL]);
                            var_43 = ((/* implicit */unsigned int) arr_10 [i_0 - 1] [i_1] [i_11] [i_13]);
                        }
                        var_44 = ((/* implicit */long long int) arr_29 [10ULL] [i_0] [i_0 + 1] [7ULL] [i_11 - 1]);
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_14 = 3; i_14 < 8; i_14 += 3) 
                    {
                        for (short i_15 = 0; i_15 < 12; i_15 += 2) 
                        {
                            {
                                arr_49 [i_1] [i_1] [i_14] [i_15] = ((/* implicit */unsigned short) arr_33 [i_0 + 1] [i_14 + 2] [(unsigned short)9]);
                                var_45 ^= ((/* implicit */short) arr_31 [i_0 + 1]);
                                arr_50 [i_1] [i_14] [0LL] [8ULL] [i_14] [i_14] = arr_0 [i_0 + 1];
                                var_46 = ((/* implicit */signed char) max((var_46), (arr_29 [i_14 - 2] [2U] [i_0 + 1] [i_0 - 1] [i_0 + 1])));
                            }
                        } 
                    } 
                    var_47 = ((/* implicit */signed char) arr_13 [i_10] [(_Bool)1] [3ULL] [i_10] [(short)10] [2U] [i_0]);
                }
                /* LoopNest 3 */
                for (unsigned short i_16 = 0; i_16 < 12; i_16 += 2) 
                {
                    for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
                    {
                        for (unsigned short i_18 = 0; i_18 < 12; i_18 += 1) 
                        {
                            {
                                arr_58 [2LL] [i_1] [i_1] [i_17] [i_18] [i_18] = ((/* implicit */unsigned long long int) arr_30 [7LL] [(signed char)3] [i_0 - 1]);
                                var_48 = ((/* implicit */_Bool) arr_47 [(short)1] [i_17] [i_1] [i_1] [i_1] [i_0 - 1]);
                                arr_59 [i_1] = ((/* implicit */int) arr_24 [(unsigned short)8] [(_Bool)1] [1LL] [i_17 + 1] [(short)2]);
                                var_49 = ((/* implicit */unsigned short) min((var_49), (max((arr_20 [i_0] [i_1] [10] [i_17 + 1] [i_18]), (((/* implicit */unsigned short) arr_25 [i_17 + 1] [(signed char)3]))))));
                                var_50 = ((/* implicit */unsigned short) max((var_50), (((/* implicit */unsigned short) arr_0 [i_17]))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    for (unsigned char i_20 = 0; i_20 < 12; i_20 += 2) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (int i_21 = 0; i_21 < 12; i_21 += 2) /* same iter space */
                            {
                                var_51 = ((/* implicit */signed char) max((arr_38 [i_20] [3U]), (max((arr_38 [i_1] [i_20]), (arr_38 [i_20] [i_21])))));
                                var_52 &= ((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_54 [i_1])), (arr_46 [(unsigned short)1] [5ULL])));
                                var_53 ^= min((((/* implicit */long long int) max((((/* implicit */unsigned short) arr_30 [i_19] [i_0 + 1] [i_0 - 1])), (arr_68 [i_21] [i_21])))), (arr_6 [i_20] [i_19] [i_20] [i_21]));
                            }
                            for (int i_22 = 0; i_22 < 12; i_22 += 2) /* same iter space */
                            {
                                var_54 = ((/* implicit */int) arr_60 [i_1] [i_1] [i_19]);
                                arr_71 [(unsigned short)3] [i_22] [i_1] [i_1] [i_22] [(short)5] = ((/* implicit */int) arr_16 [i_0] [(signed char)11] [i_1] [7] [(short)5] [i_0] [i_0]);
                            }
                            arr_72 [i_0] [i_19] [i_1] = ((/* implicit */long long int) arr_33 [3LL] [2U] [i_0]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_55 = var_17;
    var_56 = ((/* implicit */unsigned int) min((((/* implicit */long long int) min((((/* implicit */unsigned int) min(((signed char)-69), ((signed char)-56)))), (var_7)))), (min((((/* implicit */long long int) var_8)), (var_14)))));
    var_57 = ((/* implicit */unsigned int) var_3);
}
