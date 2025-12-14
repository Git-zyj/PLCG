/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72540
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
    var_17 = ((/* implicit */unsigned char) var_7);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                var_18 = ((/* implicit */int) arr_3 [i_2]);
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (unsigned long long int i_4 = 3; i_4 < 18; i_4 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) arr_7 [i_2]);
                            var_20 = ((/* implicit */long long int) arr_6 [i_0]);
                            arr_13 [i_3] [i_1] [i_1] [i_2] [i_3] [i_3] [i_4] = ((/* implicit */signed char) arr_5 [16LL] [i_1] [13ULL]);
                            var_21 -= ((/* implicit */long long int) arr_7 [10LL]);
                        }
                    } 
                } 
                arr_14 [i_0] [i_1] [i_2] = ((/* implicit */long long int) (unsigned char)162);
                arr_15 [i_0] = arr_3 [i_1];
            }
            for (short i_5 = 0; i_5 < 21; i_5 += 4) 
            {
                var_22 = ((/* implicit */long long int) (signed char)-110);
                /* LoopSeq 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                {
                    arr_21 [(signed char)5] [i_1] [i_1] [i_6] [i_0] = ((/* implicit */long long int) (_Bool)1);
                    var_23 = ((/* implicit */unsigned char) arr_2 [i_6]);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_7 = 1; i_7 < 19; i_7 += 4) 
                    {
                        arr_24 [i_0] [i_1] [i_5] [i_6] [(_Bool)1] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
                        arr_25 [(signed char)20] [19] [i_5] [i_6] [i_0] [i_5] [i_5] = ((/* implicit */unsigned long long int) arr_18 [i_6] [(unsigned char)10] [i_1] [i_0]);
                    }
                    for (short i_8 = 0; i_8 < 21; i_8 += 4) 
                    {
                        var_24 -= ((/* implicit */unsigned long long int) arr_19 [i_0] [i_1] [i_1] [i_1] [i_6] [i_8]);
                        var_25 -= ((/* implicit */unsigned int) arr_26 [i_0]);
                        arr_28 [13ULL] [i_1] [i_1] [13ULL] [i_6] [6ULL] [i_8] = ((/* implicit */unsigned int) arr_27 [i_6] [i_5] [i_0]);
                    }
                    arr_29 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */_Bool) (unsigned char)112);
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                {
                    arr_32 [i_1] = ((/* implicit */unsigned short) (signed char)-122);
                    arr_33 [i_0] [i_0] [8LL] [16ULL] = ((/* implicit */unsigned short) (_Bool)0);
                }
                arr_34 [i_0] = ((/* implicit */short) 3573759935781891087LL);
            }
            /* LoopSeq 4 */
            for (short i_10 = 1; i_10 < 20; i_10 += 4) 
            {
                /* LoopSeq 1 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    var_26 += ((/* implicit */unsigned long long int) (_Bool)1);
                    var_27 &= ((/* implicit */_Bool) arr_17 [i_11]);
                    arr_40 [i_0] [i_1] [i_10] [i_11] = ((/* implicit */unsigned long long int) (signed char)-110);
                    arr_41 [i_10] [i_11] [i_10] [(unsigned char)0] [i_10] [i_10] = ((/* implicit */unsigned int) arr_4 [i_0] [i_0] [i_0]);
                    var_28 = ((/* implicit */unsigned long long int) arr_17 [i_11]);
                }
                arr_42 [i_0] [i_1] [i_10] = ((/* implicit */unsigned long long int) arr_19 [19U] [(_Bool)1] [i_10] [i_0] [18ULL] [i_10]);
            }
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
            {
                var_29 = ((/* implicit */signed char) arr_26 [i_0]);
                arr_45 [(unsigned char)9] [i_1] [i_1] [i_0] = (_Bool)1;
            }
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
            {
                /* LoopSeq 4 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) arr_1 [i_14]))));
                    arr_51 [i_14] = ((/* implicit */_Bool) arr_19 [i_0] [i_1] [i_1] [i_1] [i_14] [i_14]);
                    var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) arr_30 [i_0] [i_0] [i_13] [i_13]))));
                }
                for (unsigned long long int i_15 = 0; i_15 < 21; i_15 += 4) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_16 = 0; i_16 < 21; i_16 += 4) 
                    {
                        arr_57 [(unsigned short)17] [(unsigned short)17] [i_1] [8U] [i_15] [(_Bool)1] [8U] = arr_50 [i_0];
                        var_32 = ((/* implicit */_Bool) arr_6 [i_0]);
                        var_33 = ((/* implicit */short) 3634298007U);
                    }
                    var_34 = arr_53 [i_0] [i_0] [i_0] [i_0];
                    var_35 = ((/* implicit */unsigned int) min((var_35), (arr_7 [i_1])));
                }
                /* vectorizable */
                for (unsigned long long int i_17 = 0; i_17 < 21; i_17 += 4) 
                {
                    arr_62 [6] [0LL] [i_13] [i_17] = ((/* implicit */unsigned short) (signed char)-121);
                    /* LoopSeq 3 */
                    for (unsigned long long int i_18 = 1; i_18 < 19; i_18 += 4) 
                    {
                        arr_66 [i_18] [i_1] [i_13] [3ULL] = ((/* implicit */unsigned short) arr_4 [i_1] [i_1] [i_1]);
                        var_36 = ((/* implicit */_Bool) arr_49 [i_0] [i_18] [i_18]);
                        var_37 = ((/* implicit */signed char) arr_23 [i_18] [i_17] [7LL] [8U] [i_0]);
                        arr_67 [2ULL] [i_18] [i_18] [(unsigned char)13] [i_18 + 1] [i_18] [i_18] = ((/* implicit */unsigned short) arr_6 [i_13]);
                    }
                    for (unsigned long long int i_19 = 4; i_19 < 18; i_19 += 4) /* same iter space */
                    {
                        arr_70 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) arr_22 [10] [i_19 - 2]);
                        arr_71 [i_19] [i_19] [i_19 - 1] [i_19 - 1] [i_19 - 3] [i_19] [i_19 + 2] = ((/* implicit */unsigned char) arr_18 [i_0] [(signed char)0] [(short)2] [i_0]);
                        var_38 += arr_63 [i_0] [(unsigned short)12] [i_1] [(unsigned short)11] [(unsigned short)12] [i_17] [i_19];
                    }
                    for (unsigned long long int i_20 = 4; i_20 < 18; i_20 += 4) /* same iter space */
                    {
                        arr_75 [i_0] [i_1] [i_13] [i_17] [i_20] = ((/* implicit */unsigned int) arr_12 [i_20] [(_Bool)1]);
                        arr_76 [i_20] [i_17] [17U] [i_0] = ((/* implicit */unsigned short) arr_11 [0LL] [i_17] [12] [i_17] [(short)8]);
                        var_39 = ((/* implicit */int) (unsigned char)128);
                    }
                }
                for (long long int i_21 = 2; i_21 < 20; i_21 += 4) 
                {
                    arr_79 [i_0] [i_1] [i_1] = ((/* implicit */short) arr_8 [i_0]);
                    arr_80 [i_0] [i_0] [i_13] [i_21 - 1] = ((/* implicit */int) arr_44 [i_0] [i_13] [i_1] [i_0]);
                }
                arr_81 [9ULL] [i_1] [(unsigned short)1] = ((/* implicit */unsigned char) (unsigned short)12288);
                arr_82 [i_0] [i_1] [i_13] = (signed char)94;
                arr_83 [i_0] = ((/* implicit */int) (_Bool)1);
            }
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) /* same iter space */
            {
                arr_87 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) 9249533190080669828ULL);
                var_40 = ((/* implicit */long long int) arr_4 [i_0] [1ULL] [i_0]);
                /* LoopSeq 1 */
                for (signed char i_23 = 0; i_23 < 21; i_23 += 4) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_24 = 0; i_24 < 21; i_24 += 4) 
                    {
                        var_41 = ((/* implicit */short) -11);
                        var_42 = ((/* implicit */long long int) arr_50 [i_22]);
                        var_43 = ((/* implicit */unsigned int) arr_43 [(signed char)2] [i_22] [i_23]);
                    }
                    for (long long int i_25 = 1; i_25 < 20; i_25 += 4) 
                    {
                        var_44 = ((/* implicit */_Bool) arr_89 [i_0] [i_1] [i_23] [i_25]);
                        var_45 += arr_4 [i_1] [i_1] [i_1];
                    }
                    arr_96 [i_0] [i_0] [i_22] [i_23] = ((/* implicit */long long int) arr_6 [i_1]);
                }
            }
        }
        for (signed char i_26 = 0; i_26 < 21; i_26 += 4) 
        {
            var_46 = ((/* implicit */int) min((var_46), (((/* implicit */int) arr_20 [i_0] [i_0] [i_0]))));
            arr_100 [i_0] [i_26] = arr_63 [i_0] [i_0] [i_0] [i_0] [5ULL] [i_26] [i_0];
            /* LoopNest 2 */
            for (signed char i_27 = 1; i_27 < 19; i_27 += 4) 
            {
                for (unsigned int i_28 = 1; i_28 < 20; i_28 += 4) 
                {
                    {
                        var_47 += ((/* implicit */long long int) arr_47 [i_0] [i_26] [3ULL] [i_28 + 1]);
                        var_48 = ((/* implicit */long long int) (_Bool)1);
                    }
                } 
            } 
        }
        arr_108 [i_0] = ((/* implicit */signed char) arr_77 [i_0] [i_0] [i_0] [i_0]);
        /* LoopSeq 3 */
        for (long long int i_29 = 1; i_29 < 19; i_29 += 4) 
        {
            var_49 = ((/* implicit */_Bool) arr_112 [i_0] [(unsigned char)20] [(unsigned char)20]);
            arr_113 [i_29 + 1] = arr_78 [i_0] [i_0] [i_0] [i_0] [5U] [i_0];
        }
        /* vectorizable */
        for (unsigned long long int i_30 = 0; i_30 < 21; i_30 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_31 = 0; i_31 < 21; i_31 += 4) 
            {
                var_50 = ((/* implicit */int) arr_95 [i_0] [i_0] [i_30] [i_30] [i_0] [i_31]);
                /* LoopNest 2 */
                for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
                {
                    for (unsigned int i_33 = 1; i_33 < 19; i_33 += 4) 
                    {
                        {
                            var_51 = ((/* implicit */unsigned char) min((var_51), (((/* implicit */unsigned char) -8503886173490832575LL))));
                            var_52 -= ((/* implicit */unsigned long long int) arr_46 [i_31] [i_31]);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (signed char i_34 = 3; i_34 < 20; i_34 += 4) 
                {
                    arr_126 [i_34] [i_31] [i_0] [i_30] [i_0] [1U] = ((/* implicit */long long int) (unsigned char)38);
                    arr_127 [i_0] [(signed char)10] [i_31] [i_34] [20U] = ((/* implicit */long long int) arr_6 [i_0]);
                    arr_128 [i_0] [i_0] [i_31] [i_31] = ((/* implicit */unsigned long long int) arr_115 [i_30] [i_31]);
                    arr_129 [i_30] [i_31] [i_31] = ((/* implicit */_Bool) (unsigned char)94);
                }
                var_53 = ((/* implicit */unsigned long long int) max((var_53), (((/* implicit */unsigned long long int) arr_123 [i_30] [i_30] [i_30] [i_30] [i_31] [i_31] [i_31]))));
                var_54 = arr_1 [i_30];
            }
            var_55 = ((/* implicit */unsigned char) 4294967295U);
            arr_130 [i_0] [(unsigned short)10] [i_0] = ((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_0]);
        }
        for (int i_35 = 1; i_35 < 20; i_35 += 4) 
        {
            var_56 = ((/* implicit */short) (unsigned char)12);
            /* LoopNest 2 */
            for (unsigned char i_36 = 1; i_36 < 20; i_36 += 4) 
            {
                for (_Bool i_37 = 0; i_37 < 1; i_37 += 1) 
                {
                    {
                        arr_139 [i_0] [i_35] [i_0] [(signed char)3] [i_0] = ((/* implicit */int) arr_118 [i_0] [i_35 - 1] [i_35 - 1]);
                        var_57 = ((/* implicit */_Bool) arr_64 [i_36] [i_36] [i_36] [(unsigned short)18] [i_36] [(_Bool)1] [18ULL]);
                        var_58 = ((/* implicit */unsigned short) min((var_58), (((/* implicit */unsigned short) arr_120 [i_0] [(_Bool)1] [i_0] [i_0]))));
                        arr_140 [i_0] [i_0] = (signed char)-110;
                        var_59 = ((/* implicit */int) arr_110 [i_0] [i_35 - 1] [i_35 - 1]);
                    }
                } 
            } 
        }
    }
    var_60 = var_4;
}
