/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69452
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
    var_11 = var_3;
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        var_12 = ((/* implicit */short) arr_1 [i_0 + 1]);
        arr_2 [14] |= ((/* implicit */short) arr_0 [i_0] [i_0 + 2]);
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */long long int) var_0);
        /* LoopSeq 4 */
        for (short i_2 = 2; i_2 < 17; i_2 += 1) 
        {
            arr_11 [i_1] [i_2 - 1] [i_2] |= ((/* implicit */short) var_1);
            var_13 = ((/* implicit */int) arr_3 [i_2 - 1]);
            /* LoopSeq 2 */
            for (unsigned int i_3 = 0; i_3 < 18; i_3 += 4) 
            {
                arr_16 [i_1] [i_3] [6LL] = ((/* implicit */unsigned int) var_3);
                var_14 = ((/* implicit */short) var_7);
            }
            for (int i_4 = 0; i_4 < 18; i_4 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 18; i_5 += 3) 
                {
                    for (long long int i_6 = 0; i_6 < 18; i_6 += 2) 
                    {
                        {
                            arr_26 [i_1] [17LL] [i_4] [17LL] [i_4] [i_6] = arr_8 [i_2 - 1];
                            arr_27 [i_6] [i_4] [i_1] = ((/* implicit */unsigned int) var_7);
                            arr_28 [0U] [i_5] [i_5] [i_5] [i_2 + 1] [i_6] [3U] = arr_12 [i_1] [i_4] [(unsigned char)16];
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned int i_7 = 1; i_7 < 17; i_7 += 2) 
                {
                    arr_31 [i_1] [i_2] [i_7] [i_4] = arr_20 [i_1] [i_2 + 1] [i_7 - 1] [i_7];
                    var_15 -= ((/* implicit */long long int) var_6);
                }
                for (unsigned int i_8 = 2; i_8 < 16; i_8 += 2) 
                {
                    /* LoopSeq 2 */
                    for (short i_9 = 1; i_9 < 17; i_9 += 4) 
                    {
                        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) var_8))));
                        arr_37 [i_9] [i_8] [i_4] [i_2] [i_9] = ((/* implicit */unsigned char) arr_32 [i_1] [i_9 + 1] [i_4] [i_8 + 2]);
                        var_17 = ((/* implicit */unsigned int) arr_14 [i_8 + 1]);
                        var_18 = ((/* implicit */short) arr_5 [i_8 - 1]);
                        var_19 = ((/* implicit */int) arr_4 [i_4] [i_2]);
                    }
                    for (short i_10 = 0; i_10 < 18; i_10 += 3) 
                    {
                        var_20 = var_2;
                        arr_40 [i_1] [i_1] [(unsigned char)14] [i_1] [i_10] |= arr_1 [i_2 - 1];
                    }
                    /* LoopSeq 1 */
                    for (int i_11 = 0; i_11 < 18; i_11 += 4) 
                    {
                        var_21 = arr_15 [i_8 + 2] [i_2 - 1] [i_4] [(unsigned char)8];
                        var_22 = ((/* implicit */short) arr_36 [(unsigned char)11] [i_4] [12] [i_4] [i_8 - 1] [i_8 - 1] [i_11]);
                        var_23 = ((/* implicit */int) min((var_23), (arr_33 [i_2 - 2] [i_2 - 2] [i_8 - 1] [i_8 - 2])));
                        arr_44 [i_11] [i_2 + 1] [i_11] [i_8] [i_11] [i_1] = ((/* implicit */long long int) var_2);
                    }
                    var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) var_6))));
                    arr_45 [i_4] = ((/* implicit */int) var_1);
                    var_25 = ((/* implicit */short) var_1);
                }
                for (unsigned char i_12 = 0; i_12 < 18; i_12 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_13 = 0; i_13 < 18; i_13 += 1) 
                    {
                        arr_50 [i_1] [i_1] [i_4] [i_12] [3U] = ((/* implicit */int) arr_13 [i_1] [i_2 - 1] [i_12] [i_12]);
                        var_26 = ((/* implicit */long long int) arr_33 [i_2 - 1] [i_2 - 1] [i_2 - 2] [i_2 - 2]);
                        var_27 *= ((/* implicit */short) arr_19 [i_2] [i_2 - 2]);
                    }
                    for (unsigned int i_14 = 1; i_14 < 15; i_14 += 2) 
                    {
                        var_28 = ((/* implicit */int) var_1);
                        arr_54 [i_12] [i_2 + 1] [i_14] [i_4] [i_14 + 3] [i_12] [i_14] = ((/* implicit */long long int) arr_52 [i_14] [(short)17] [i_14] [i_14] [i_14 + 2]);
                        var_29 ^= ((/* implicit */short) arr_10 [i_2] [i_2 + 1] [i_14 - 1]);
                    }
                    var_30 = var_3;
                    var_31 &= var_5;
                }
                arr_55 [1LL] [(unsigned char)9] &= ((/* implicit */int) arr_8 [i_1]);
                arr_56 [i_1] [8] [i_1] = ((/* implicit */long long int) arr_13 [i_1] [i_2 - 2] [i_2 - 1] [i_2 - 2]);
            }
        }
        for (unsigned int i_15 = 0; i_15 < 18; i_15 += 4) 
        {
            var_32 = ((/* implicit */int) arr_19 [i_15] [i_1]);
            var_33 = ((/* implicit */long long int) var_4);
            arr_59 [i_1] [13] = ((/* implicit */long long int) arr_48 [i_1]);
        }
        for (long long int i_16 = 0; i_16 < 18; i_16 += 1) 
        {
            /* LoopSeq 4 */
            for (short i_17 = 2; i_17 < 14; i_17 += 4) 
            {
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 18; i_18 += 3) 
                {
                    for (short i_19 = 0; i_19 < 18; i_19 += 2) 
                    {
                        {
                            var_34 = ((/* implicit */unsigned int) arr_4 [i_17 + 3] [i_1]);
                            var_35 = ((/* implicit */long long int) var_0);
                        }
                    } 
                } 
                var_36 = ((/* implicit */unsigned int) arr_35 [i_1] [i_17] [i_17]);
                var_37 = var_3;
                var_38 = ((/* implicit */unsigned char) arr_67 [i_1] [9] [i_17] [3] [i_16] [i_1]);
                var_39 = ((/* implicit */int) var_2);
            }
            for (long long int i_20 = 0; i_20 < 18; i_20 += 4) 
            {
                arr_74 [i_1] [i_1] [15LL] [i_16] = arr_17 [i_1] [i_1] [i_16] [i_20];
                /* LoopSeq 1 */
                for (long long int i_21 = 0; i_21 < 18; i_21 += 2) 
                {
                    var_40 = ((/* implicit */long long int) arr_19 [i_16] [17]);
                    var_41 = ((/* implicit */unsigned char) max((var_41), (arr_57 [i_1])));
                }
            }
            for (short i_22 = 1; i_22 < 17; i_22 += 1) 
            {
                var_42 = ((/* implicit */unsigned char) arr_73 [i_1] [i_16] [i_22 - 1]);
                var_43 = ((/* implicit */unsigned char) arr_53 [i_22 - 1] [i_22 - 1]);
            }
            for (unsigned char i_23 = 0; i_23 < 18; i_23 += 4) 
            {
                /* LoopNest 2 */
                for (long long int i_24 = 0; i_24 < 18; i_24 += 4) 
                {
                    for (long long int i_25 = 0; i_25 < 18; i_25 += 1) 
                    {
                        {
                            var_44 = ((/* implicit */short) min((var_44), (((/* implicit */short) var_0))));
                            arr_86 [i_1] [i_23] [i_1] |= ((/* implicit */int) arr_35 [i_1] [(short)2] [i_1]);
                            var_45 &= var_4;
                            var_46 = ((/* implicit */unsigned char) var_2);
                        }
                    } 
                } 
                var_47 = arr_67 [i_1] [i_1] [i_16] [i_16] [i_23] [i_23];
                var_48 |= ((/* implicit */long long int) arr_82 [11U] [(unsigned char)0] [i_16] [i_1]);
                var_49 &= ((/* implicit */short) arr_21 [i_1] [i_23] [(short)1] [i_23] [10] [10]);
            }
            arr_87 [i_16] [i_16] [i_1] = ((/* implicit */unsigned char) arr_51 [16] [i_1] [i_1] [i_16] [i_16] [15U] [i_16]);
        }
        for (int i_26 = 0; i_26 < 18; i_26 += 2) 
        {
            /* LoopNest 2 */
            for (short i_27 = 3; i_27 < 16; i_27 += 3) 
            {
                for (int i_28 = 0; i_28 < 18; i_28 += 4) 
                {
                    {
                        var_50 = ((/* implicit */long long int) arr_65 [i_1] [i_26] [i_26] [i_27] [i_28] [i_28]);
                        arr_94 [(short)17] [i_26] [i_27] [i_27] [0] = ((/* implicit */unsigned char) var_0);
                        var_51 = ((/* implicit */unsigned char) arr_41 [i_27 - 2] [17] [i_27 - 1] [17] [i_26] [i_1]);
                        arr_95 [i_1] [(unsigned char)6] [(unsigned char)8] = ((/* implicit */short) arr_78 [i_28] [13U] [i_27 - 2] [i_26]);
                        var_52 = ((/* implicit */short) var_10);
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (int i_29 = 0; i_29 < 18; i_29 += 4) 
            {
                /* LoopSeq 2 */
                for (int i_30 = 0; i_30 < 18; i_30 += 2) 
                {
                    arr_102 [i_30] [i_29] [5LL] [5LL] [i_1] = ((/* implicit */unsigned char) arr_17 [i_1] [i_1] [i_29] [i_30]);
                    var_53 = ((/* implicit */short) arr_73 [i_26] [i_29] [i_30]);
                    arr_103 [i_1] [i_1] [2U] [i_30] |= ((/* implicit */unsigned int) var_4);
                }
                for (short i_31 = 0; i_31 < 18; i_31 += 4) 
                {
                    arr_106 [i_1] [i_1] = var_7;
                    var_54 = ((/* implicit */short) arr_78 [i_31] [i_29] [i_26] [i_1]);
                    var_55 = arr_38 [i_1] [i_26] [i_26] [i_29] [i_31];
                }
                /* LoopNest 2 */
                for (long long int i_32 = 2; i_32 < 16; i_32 += 3) 
                {
                    for (unsigned int i_33 = 0; i_33 < 18; i_33 += 1) 
                    {
                        {
                            arr_112 [i_29] [i_32] = ((/* implicit */int) arr_13 [i_29] [7] [i_29] [i_32]);
                            var_56 = ((/* implicit */short) var_1);
                        }
                    } 
                } 
                /* LoopSeq 4 */
                for (short i_34 = 0; i_34 < 18; i_34 += 4) 
                {
                    arr_116 [i_34] [14U] [i_1] [i_1] = ((/* implicit */long long int) var_5);
                    var_57 = ((/* implicit */int) arr_10 [16U] [(unsigned char)1] [i_1]);
                    var_58 = ((/* implicit */short) arr_64 [i_1] [i_34]);
                }
                for (unsigned int i_35 = 3; i_35 < 15; i_35 += 1) 
                {
                    arr_119 [i_29] [i_29] [i_29] &= ((/* implicit */short) arr_60 [i_35 + 1] [i_35 - 3]);
                    var_59 += ((/* implicit */short) arr_73 [i_35 - 3] [i_1] [i_35 + 1]);
                    var_60 = ((/* implicit */int) var_1);
                    arr_120 [i_35] [i_26] [i_29] [i_35] = ((/* implicit */unsigned char) arr_36 [i_29] [i_35 - 1] [i_35] [i_35 + 3] [i_35] [i_35] [i_35]);
                }
                for (unsigned int i_36 = 0; i_36 < 18; i_36 += 1) 
                {
                    var_61 += ((/* implicit */int) arr_98 [i_1] [i_26] [i_29]);
                    /* LoopSeq 1 */
                    for (int i_37 = 0; i_37 < 18; i_37 += 2) 
                    {
                        var_62 = ((/* implicit */long long int) arr_79 [i_1] [i_29] [i_36] [i_37]);
                        arr_129 [i_1] = ((/* implicit */unsigned char) arr_42 [i_1] [i_26] [i_29] [i_29] [i_29]);
                        var_63 = arr_67 [i_37] [i_36] [i_29] [i_26] [9] [i_1];
                        var_64 |= ((/* implicit */long long int) arr_48 [i_36]);
                        var_65 = ((/* implicit */short) arr_115 [i_37] [i_29] [i_26] [i_1]);
                    }
                }
                for (int i_38 = 0; i_38 < 18; i_38 += 3) 
                {
                    /* LoopSeq 1 */
                    for (int i_39 = 2; i_39 < 16; i_39 += 1) 
                    {
                        var_66 += ((/* implicit */long long int) var_4);
                        arr_136 [i_1] [i_26] [15LL] [17] [8] |= ((/* implicit */int) arr_71 [i_1] [i_39 + 1] [i_29] [2U] [i_39 + 1] [i_26] [i_39 + 1]);
                        arr_137 [(unsigned char)8] [i_26] [i_29] [(short)6] [i_39] = ((/* implicit */unsigned char) arr_34 [11] [i_26] [11] [i_38] [i_39 + 1]);
                    }
                    var_67 = ((/* implicit */int) arr_101 [i_26] [i_1]);
                    arr_138 [i_1] |= ((/* implicit */long long int) arr_72 [i_38]);
                }
                /* LoopNest 2 */
                for (long long int i_40 = 1; i_40 < 17; i_40 += 3) 
                {
                    for (short i_41 = 0; i_41 < 18; i_41 += 1) 
                    {
                        {
                            var_68 ^= ((/* implicit */unsigned int) arr_70 [i_1] [i_26] [i_29] [i_26] [17U]);
                            var_69 = var_6;
                            var_70 = ((/* implicit */long long int) arr_14 [i_40 + 1]);
                            var_71 = ((/* implicit */int) arr_46 [i_1] [i_29]);
                        }
                    } 
                } 
            }
            /* LoopNest 3 */
            for (unsigned int i_42 = 0; i_42 < 18; i_42 += 1) 
            {
                for (int i_43 = 2; i_43 < 15; i_43 += 4) 
                {
                    for (unsigned int i_44 = 3; i_44 < 17; i_44 += 1) 
                    {
                        {
                            var_72 = ((/* implicit */int) arr_46 [i_43 + 3] [i_44 - 1]);
                            arr_150 [i_44] [i_43] [i_26] [i_26] [i_26] [i_1] [8U] = ((/* implicit */unsigned char) arr_111 [i_1] [i_43] [i_43 - 2] [i_43] [i_43] [i_43 + 2] [i_44 - 2]);
                            arr_151 [i_1] [i_1] = ((/* implicit */unsigned int) var_4);
                        }
                    } 
                } 
            } 
        }
        arr_152 [i_1] [i_1] = ((/* implicit */unsigned char) arr_144 [i_1] [i_1]);
        var_73 *= ((/* implicit */unsigned int) arr_9 [i_1]);
    }
    var_74 = ((/* implicit */int) var_8);
}
