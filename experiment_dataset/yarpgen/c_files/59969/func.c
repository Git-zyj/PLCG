/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59969
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
    for (unsigned long long int i_0 = 4; i_0 < 18; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 18; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 19; i_3 += 2) 
                    {
                        {
                            var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) arr_3 [i_0]))));
                            var_13 = max((arr_0 [i_0]), (((/* implicit */unsigned short) (signed char)-44)));
                            var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) arr_7 [i_0 - 2] [i_2 + 2]))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_4 = 0; i_4 < 25; i_4 += 1) 
    {
        arr_13 [i_4] = ((/* implicit */unsigned int) arr_11 [i_4]);
        /* LoopSeq 2 */
        for (unsigned short i_5 = 0; i_5 < 25; i_5 += 4) 
        {
            var_16 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_14 [i_4] [i_4])), (arr_15 [i_4])));
            /* LoopNest 2 */
            for (unsigned short i_6 = 0; i_6 < 25; i_6 += 3) 
            {
                for (unsigned int i_7 = 0; i_7 < 25; i_7 += 2) 
                {
                    {
                        arr_23 [i_4] [i_5] [i_6] [i_6] = ((/* implicit */int) arr_20 [i_6] [i_5]);
                        arr_24 [i_5] [i_6] = ((/* implicit */short) min((arr_11 [i_4]), (arr_11 [i_5])));
                        arr_25 [i_4] [i_5] [i_6] [i_4] = ((/* implicit */_Bool) min((min((arr_19 [i_6] [i_6] [i_7]), (arr_19 [i_6] [i_6] [i_6]))), (arr_19 [i_6] [i_5] [i_6])));
                        arr_26 [i_4] [i_4] [i_6] [i_4] [i_6] [6] = ((/* implicit */signed char) arr_22 [(unsigned char)24] [i_6] [i_5] [(_Bool)1]);
                    }
                } 
            } 
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned int i_8 = 3; i_8 < 24; i_8 += 4) 
            {
                arr_29 [i_5] [i_5] [(short)14] [i_5] &= ((/* implicit */_Bool) arr_11 [i_4]);
                arr_30 [i_8] [(unsigned char)19] [i_8] = ((/* implicit */long long int) arr_17 [i_4] [i_5] [10] [i_4]);
            }
            /* vectorizable */
            for (unsigned short i_9 = 1; i_9 < 21; i_9 += 3) 
            {
                var_17 = ((/* implicit */short) arr_12 [i_4]);
                arr_35 [i_4] [19] [i_4] = ((/* implicit */unsigned int) arr_27 [16] [i_9] [i_9 + 2]);
                arr_36 [i_4] [i_4] [i_9 + 3] [i_4] |= ((/* implicit */int) arr_12 [i_4]);
            }
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                /* LoopSeq 2 */
                for (short i_11 = 1; i_11 < 21; i_11 += 4) /* same iter space */
                {
                    arr_41 [i_4] [i_5] [i_10] [i_5] [i_10] [(signed char)7] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) arr_32 [i_11 + 3] [i_11 + 3] [(short)4] [(short)4])), (max((max((arr_39 [i_11] [i_5] [i_5] [i_4]), (arr_39 [i_4] [i_5] [i_10] [i_11 + 2]))), (((/* implicit */unsigned long long int) arr_40 [9LL] [9LL] [i_10] [i_11 + 3] [(short)17]))))));
                    var_18 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_37 [(signed char)20] [i_11 + 2] [(signed char)20] [i_4])), (min((((/* implicit */long long int) arr_14 [i_4] [i_4])), (arr_32 [i_10] [i_11 - 1] [i_11] [(unsigned char)10])))));
                    arr_42 [i_4] [i_4] [i_10] = ((/* implicit */unsigned int) arr_33 [i_11]);
                    arr_43 [i_10] [i_10] = ((/* implicit */unsigned char) arr_12 [i_4]);
                }
                for (short i_12 = 1; i_12 < 21; i_12 += 4) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (signed char i_13 = 0; i_13 < 25; i_13 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned char) max((arr_15 [i_12 + 1]), (max((arr_15 [i_12 + 2]), (arr_15 [i_12 + 3])))));
                        arr_48 [i_4] [i_12] [i_10] [i_12] [i_13] [i_5] [i_10] &= ((/* implicit */signed char) arr_32 [i_5] [i_10] [i_12] [i_13]);
                        arr_49 [i_4] [i_10] [i_10] [i_4] [i_13] [i_12] [i_5] = ((/* implicit */short) arr_18 [i_10] [i_12] [i_10] [i_10]);
                    }
                    for (long long int i_14 = 1; i_14 < 23; i_14 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned short) arr_52 [(unsigned short)16] [i_5] [i_14] [i_14] [i_14 - 1]);
                        arr_53 [i_4] [i_4] [(short)16] [i_10] [(short)16] [5] = ((/* implicit */unsigned int) arr_10 [i_4]);
                    }
                    for (signed char i_15 = 0; i_15 < 25; i_15 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned char) max((92340396U), (((/* implicit */unsigned int) (unsigned short)65535))));
                        arr_56 [i_4] [i_5] [i_5] [i_10] [i_10] [i_15] = ((/* implicit */int) arr_11 [i_4]);
                    }
                    var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) arr_38 [i_5]))));
                    var_23 = ((/* implicit */unsigned char) arr_39 [i_12] [i_10] [i_5] [(_Bool)1]);
                    var_24 = ((/* implicit */short) min((var_24), (max((((/* implicit */short) (signed char)-7)), ((short)-24438)))));
                }
                arr_57 [i_10] [i_10] [i_10] = ((/* implicit */unsigned char) arr_34 [i_4] [i_5] [i_10]);
                var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) min((((/* implicit */short) (_Bool)1)), ((short)32756))))));
            }
            arr_58 [(signed char)18] = ((/* implicit */unsigned long long int) arr_27 [i_4] [i_4] [i_4]);
        }
        for (short i_16 = 2; i_16 < 23; i_16 += 3) 
        {
            arr_61 [(unsigned char)6] = arr_46 [10ULL] [10ULL] [i_16] [10ULL] [i_16 - 2];
            arr_62 [i_4] |= ((/* implicit */unsigned long long int) max((((/* implicit */short) arr_22 [i_4] [i_16 - 2] [i_16 + 2] [i_16 + 2])), (max((((/* implicit */short) arr_22 [i_4] [i_16 - 2] [i_16 + 2] [i_16 - 1])), (arr_54 [i_4] [6LL] [i_16 + 1] [i_16 - 2] [i_16 + 1])))));
        }
        arr_63 [i_4] [i_4] = ((/* implicit */short) min((((/* implicit */unsigned int) arr_14 [i_4] [i_4])), (arr_45 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])));
        /* LoopSeq 1 */
        for (unsigned short i_17 = 4; i_17 < 24; i_17 += 1) 
        {
            arr_66 [i_4] [i_4] [i_4] &= ((/* implicit */long long int) arr_31 [i_17] [i_17] [i_17] [i_4]);
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned short i_18 = 1; i_18 < 24; i_18 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_19 = 1; i_19 < 21; i_19 += 1) 
                {
                    arr_71 [i_19 + 1] [i_4] = ((/* implicit */long long int) arr_31 [10LL] [i_18 + 1] [i_17] [i_4]);
                    arr_72 [8LL] [i_18 + 1] [i_4] [i_4] = ((/* implicit */unsigned long long int) arr_45 [i_17 - 2] [i_17 - 2] [i_17 + 1] [i_17 - 3] [i_17 - 1] [i_17]);
                }
                for (long long int i_20 = 0; i_20 < 25; i_20 += 2) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
                    {
                        arr_79 [i_4] [i_4] [i_17] [i_18] [i_20] [i_20] [i_21] = ((/* implicit */unsigned char) arr_78 [i_4] [i_17]);
                        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) arr_12 [i_4]))));
                        arr_80 [(_Bool)1] [i_4] [i_18] [i_17 - 3] [i_4] = ((/* implicit */long long int) arr_17 [i_18 + 1] [i_17] [i_21 - 1] [(short)11]);
                        arr_81 [10ULL] = ((/* implicit */unsigned char) arr_52 [i_21] [i_20] [i_4] [i_17] [i_4]);
                    }
                    for (unsigned char i_22 = 2; i_22 < 21; i_22 += 1) 
                    {
                        arr_85 [i_4] [i_20] [i_18] [i_20] [9] [i_4] = ((/* implicit */long long int) arr_14 [i_18 + 1] [i_18 + 1]);
                        var_27 = ((/* implicit */_Bool) arr_77 [i_4] [i_4] [i_18 - 1] [i_17 + 1] [i_22 - 2]);
                        arr_86 [i_17 - 4] = ((/* implicit */_Bool) arr_78 [i_22] [i_18]);
                    }
                    arr_87 [i_4] [i_17] [i_17] [i_20] = arr_60 [(signed char)17] [i_4] [i_18 - 1];
                    arr_88 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) arr_11 [i_18 - 1]);
                }
                var_28 = ((/* implicit */int) arr_68 [i_4]);
            }
            for (unsigned short i_23 = 0; i_23 < 25; i_23 += 1) 
            {
                var_29 |= ((/* implicit */unsigned int) max((arr_60 [i_17 - 1] [i_17 - 2] [i_17 - 4]), (((/* implicit */unsigned long long int) arr_50 [i_4] [i_4] [i_4] [i_17] [i_17] [i_17] [i_4]))));
                var_30 = ((/* implicit */unsigned short) arr_16 [i_4] [(unsigned char)22] [(short)18]);
                arr_91 [i_23] [i_23] [i_23] [i_4] = min((arr_52 [(unsigned short)20] [i_17 - 3] [i_17 - 2] [(unsigned short)20] [i_17 - 2]), (((/* implicit */long long int) arr_14 [i_17 - 4] [i_17 - 3])));
            }
            for (long long int i_24 = 1; i_24 < 23; i_24 += 4) 
            {
                arr_95 [i_24] [i_17] [i_24] = arr_19 [i_24] [i_17 - 2] [i_24];
                /* LoopNest 2 */
                for (signed char i_25 = 0; i_25 < 25; i_25 += 2) 
                {
                    for (unsigned long long int i_26 = 0; i_26 < 25; i_26 += 2) 
                    {
                        {
                            var_31 = ((/* implicit */long long int) arr_92 [i_4] [i_4] [i_24]);
                            arr_101 [i_24] = ((/* implicit */unsigned char) arr_52 [7U] [(signed char)16] [i_17] [i_17] [i_4]);
                            arr_102 [i_4] [i_17] [i_24 + 2] [i_24] [i_26] = ((/* implicit */long long int) max((arr_34 [i_4] [i_24 - 1] [i_24]), (((/* implicit */unsigned long long int) max(((signed char)-7), (((/* implicit */signed char) (_Bool)1)))))));
                            arr_103 [(unsigned short)20] [i_24] = ((/* implicit */unsigned short) arr_39 [i_4] [i_17 + 1] [i_24] [i_25]);
                            arr_104 [i_24] [i_4] [i_17] [i_24 + 1] [i_25] [i_26] = ((/* implicit */unsigned int) arr_20 [i_24] [i_24]);
                        }
                    } 
                } 
                arr_105 [i_4] [i_4] [(unsigned char)18] [i_4] &= ((/* implicit */unsigned long long int) arr_59 [(unsigned char)11] [i_24 + 1] [i_17 + 1]);
            }
            var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) arr_20 [(unsigned short)16] [(unsigned short)16]))));
        }
        /* LoopSeq 1 */
        for (unsigned char i_27 = 0; i_27 < 25; i_27 += 1) 
        {
            var_33 = ((/* implicit */long long int) arr_59 [i_4] [i_4] [i_4]);
            arr_108 [i_4] [i_27] = ((/* implicit */unsigned char) arr_92 [i_4] [i_4] [4LL]);
        }
    }
    var_34 |= ((/* implicit */unsigned short) var_2);
}
