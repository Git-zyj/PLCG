/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63922
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) arr_1 [i_0]);
        arr_3 [i_0] = ((/* implicit */long long int) arr_0 [i_0] [(short)13]);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */short) arr_1 [i_2]);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_3 = 2; i_3 < 19; i_3 += 4) 
                    {
                        arr_10 [i_0] [i_1] [i_3] [i_1] = ((/* implicit */unsigned char) arr_8 [i_0] [i_0] [i_2] [i_3] [i_0]);
                        var_15 = ((/* implicit */unsigned short) arr_6 [i_0] [i_1 + 1]);
                    }
                }
            } 
        } 
        arr_11 [i_0] = ((/* implicit */short) arr_0 [i_0] [i_0]);
        arr_12 [i_0] [i_0] = ((/* implicit */unsigned char) arr_4 [i_0] [i_0]);
    }
    for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_5 = 0; i_5 < 20; i_5 += 2) 
        {
            var_16 = ((/* implicit */unsigned char) arr_7 [i_4] [i_5] [i_5]);
            arr_17 [13] [i_5] [i_4] = ((/* implicit */int) arr_0 [i_4] [i_5]);
        }
        for (int i_6 = 2; i_6 < 19; i_6 += 4) 
        {
            var_17 = ((/* implicit */unsigned int) arr_16 [i_4] [i_4] [i_4]);
            var_18 = ((/* implicit */unsigned int) arr_5 [i_6] [i_4] [i_4]);
        }
        arr_20 [i_4] = ((/* implicit */unsigned short) arr_5 [i_4] [(unsigned short)0] [i_4]);
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_7 = 0; i_7 < 13; i_7 += 1) 
    {
        /* LoopSeq 3 */
        for (long long int i_8 = 1; i_8 < 12; i_8 += 2) 
        {
            var_19 = ((/* implicit */unsigned char) arr_5 [(short)10] [i_8] [i_8]);
            /* LoopSeq 1 */
            for (short i_9 = 3; i_9 < 12; i_9 += 2) 
            {
                arr_29 [i_7] [i_8 + 1] [i_7] = ((/* implicit */int) arr_24 [i_7] [i_7]);
                var_20 = ((/* implicit */int) arr_0 [1LL] [i_8]);
                arr_30 [i_7] [i_7] [i_7] = ((/* implicit */short) arr_0 [i_7] [i_7]);
            }
            arr_31 [i_7] [i_7] = ((/* implicit */long long int) arr_27 [i_7] [i_7] [i_7]);
            arr_32 [i_7] [i_7] [i_7] = ((/* implicit */int) arr_25 [i_7] [i_7]);
        }
        for (unsigned short i_10 = 0; i_10 < 13; i_10 += 4) 
        {
            /* LoopSeq 1 */
            for (short i_11 = 1; i_11 < 12; i_11 += 2) 
            {
                var_21 = ((/* implicit */unsigned int) arr_8 [i_7] [i_10] [i_11] [i_11] [i_11]);
                var_22 = ((/* implicit */int) arr_25 [i_7] [i_7]);
            }
            var_23 = ((/* implicit */unsigned int) arr_33 [i_10] [i_10]);
            var_24 = ((/* implicit */unsigned char) arr_25 [i_7] [i_7]);
            arr_38 [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) arr_36 [i_7]);
            /* LoopSeq 3 */
            for (int i_12 = 1; i_12 < 12; i_12 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (short i_13 = 3; i_13 < 10; i_13 += 1) 
                {
                    for (signed char i_14 = 0; i_14 < 13; i_14 += 4) 
                    {
                        {
                            var_25 ^= ((/* implicit */unsigned char) arr_23 [i_7]);
                            var_26 |= ((/* implicit */unsigned long long int) arr_5 [i_13] [i_10] [i_10]);
                            arr_47 [i_7] [i_10] [i_12 + 1] = ((/* implicit */unsigned short) arr_44 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]);
                        }
                    } 
                } 
                arr_48 [i_7] [i_7] = arr_5 [i_7] [i_7] [i_7];
            }
            for (int i_15 = 1; i_15 < 12; i_15 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned short i_16 = 3; i_16 < 12; i_16 += 1) 
                {
                    var_27 = ((/* implicit */_Bool) arr_45 [i_7] [i_7] [i_15] [i_16 - 2]);
                    /* LoopSeq 2 */
                    for (short i_17 = 0; i_17 < 13; i_17 += 4) 
                    {
                        var_28 = ((/* implicit */unsigned long long int) arr_55 [i_7] [i_10] [i_7] [i_7] [i_17]);
                        arr_58 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */long long int) arr_5 [i_7] [i_15] [i_17]);
                        var_29 = ((/* implicit */unsigned short) arr_27 [i_15 + 1] [4LL] [4LL]);
                        arr_59 [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) arr_7 [(signed char)17] [(signed char)17] [i_15 - 1]);
                    }
                    for (short i_18 = 1; i_18 < 12; i_18 += 2) 
                    {
                        var_30 = ((/* implicit */long long int) arr_42 [i_7] [i_10] [i_15] [i_15 - 1] [(unsigned short)10] [i_18]);
                        arr_62 [i_7] = ((/* implicit */unsigned char) arr_50 [i_7] [i_7] [i_7] [i_7]);
                        arr_63 [i_7] [i_10] [i_15] [i_7] [i_16 - 3] [i_18] = ((/* implicit */int) arr_55 [i_7] [i_10] [(_Bool)1] [i_7] [i_7]);
                        arr_64 [i_7] = ((/* implicit */unsigned char) arr_27 [i_7] [i_7] [i_7]);
                    }
                    arr_65 [i_7] [i_7] [i_15] [i_16] = ((/* implicit */int) arr_39 [i_7] [11] [i_7]);
                }
                for (long long int i_19 = 2; i_19 < 11; i_19 += 3) 
                {
                    /* LoopSeq 4 */
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) /* same iter space */
                    {
                        var_31 = ((/* implicit */unsigned short) arr_22 [i_20]);
                        arr_74 [i_7] [i_7] [i_7] [i_7] [i_7] [i_10] |= ((/* implicit */unsigned char) arr_42 [i_19] [i_19] [i_19] [i_19 + 2] [i_20] [i_19 + 2]);
                        arr_75 [i_7] [i_10] [i_15 + 1] [3LL] = ((/* implicit */long long int) arr_39 [i_7] [i_10] [(unsigned char)1]);
                        arr_76 [i_20] [i_19] [i_7] [i_15] [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) arr_36 [i_7]);
                    }
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) /* same iter space */
                    {
                        arr_80 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */_Bool) arr_6 [i_15 - 1] [i_21]);
                        arr_81 [i_7] = ((/* implicit */signed char) arr_28 [i_7] [i_15] [i_19 + 2] [i_21]);
                    }
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) /* same iter space */
                    {
                        var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) arr_16 [i_7] [i_7] [i_7]))));
                        arr_85 [i_7] [i_15] [i_15] [i_19 + 2] [i_22] [i_7] = ((/* implicit */unsigned int) arr_73 [(signed char)2] [i_10] [i_15 - 1] [i_22] [(unsigned char)6]);
                        arr_86 [i_22] [i_7] [i_7] [i_10] [i_7] [i_7] = ((/* implicit */unsigned char) arr_5 [i_15] [i_19] [i_22]);
                    }
                    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) /* same iter space */
                    {
                        var_33 = ((/* implicit */unsigned short) arr_19 [i_19]);
                        var_34 = ((/* implicit */_Bool) arr_6 [i_15] [i_10]);
                    }
                    arr_89 [i_7] [i_7] [i_7] [i_19] = ((/* implicit */unsigned char) arr_35 [i_7] [i_7] [i_15 + 1] [i_15 - 1]);
                    var_35 |= ((/* implicit */unsigned char) arr_7 [i_19] [i_15] [i_10]);
                    var_36 = ((/* implicit */int) arr_84 [i_15] [i_7] [i_15 + 1] [i_15 + 1] [i_7] [i_10]);
                    /* LoopSeq 1 */
                    for (unsigned char i_24 = 0; i_24 < 13; i_24 += 4) 
                    {
                        var_37 += arr_53 [i_24] [i_19] [i_15] [(signed char)5] [i_7];
                        var_38 = ((/* implicit */int) arr_91 [i_7] [i_7] [i_7] [i_19 + 2]);
                    }
                }
                var_39 += ((/* implicit */unsigned short) arr_16 [i_7] [i_7] [i_15]);
                var_40 = ((/* implicit */long long int) arr_71 [i_7] [i_10] [i_7] [i_15]);
            }
            for (int i_25 = 1; i_25 < 12; i_25 += 1) /* same iter space */
            {
                arr_96 [i_7] = ((/* implicit */unsigned int) arr_22 [i_25]);
                var_41 = ((/* implicit */unsigned short) arr_15 [i_7]);
                arr_97 [0U] [i_10] [i_7] = ((/* implicit */unsigned short) arr_46 [i_10] [i_10] [i_10] [i_10] [i_10]);
            }
        }
        for (unsigned int i_26 = 1; i_26 < 12; i_26 += 3) 
        {
            /* LoopNest 3 */
            for (long long int i_27 = 0; i_27 < 13; i_27 += 2) 
            {
                for (unsigned int i_28 = 1; i_28 < 11; i_28 += 1) 
                {
                    for (unsigned char i_29 = 1; i_29 < 9; i_29 += 4) 
                    {
                        {
                            arr_110 [i_7] [i_26] = ((/* implicit */long long int) arr_84 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]);
                            var_42 ^= ((/* implicit */unsigned short) arr_109 [i_7] [i_26] [i_27] [i_27] [i_28 + 1] [i_29] [i_29]);
                            arr_111 [i_7] [i_26] [i_27] [i_28 + 2] [i_29 + 2] = ((/* implicit */long long int) arr_13 [i_26] [i_26]);
                            arr_112 [i_27] [i_28] [i_7] [i_27] [i_7] [i_7] [4U] = ((/* implicit */signed char) arr_103 [i_26] [i_26] [i_29]);
                        }
                    } 
                } 
            } 
            arr_113 [i_7] [i_26] = ((/* implicit */short) arr_13 [i_26] [i_7]);
            arr_114 [i_7] [i_26] = ((/* implicit */int) arr_37 [i_7] [(unsigned short)0] [(unsigned short)0]);
            arr_115 [4LL] [i_7] = ((/* implicit */unsigned char) arr_87 [i_26 - 1] [i_7]);
            var_43 = ((/* implicit */int) arr_93 [i_7] [i_7] [i_7]);
        }
        var_44 = ((/* implicit */unsigned short) arr_82 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]);
    }
}
