/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95132
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */signed char) arr_0 [i_0] [(_Bool)1]);
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (unsigned short i_3 = 2; i_3 < 22; i_3 += 3) 
                    {
                        {
                            var_13 = ((/* implicit */long long int) arr_7 [i_3] [i_2] [(signed char)0] [(signed char)0]);
                            arr_11 [i_0] [i_1] [(unsigned short)22] [i_2] [(unsigned short)22] [i_3] = ((/* implicit */long long int) arr_10 [i_0] [2U] [2U] [i_2] [22LL] [18LL]);
                        }
                    } 
                } 
                arr_12 [i_0] = ((/* implicit */unsigned int) arr_0 [(_Bool)1] [(unsigned short)13]);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_4 = 2; i_4 < 13; i_4 += 2) 
    {
        for (unsigned int i_5 = 0; i_5 < 14; i_5 += 4) 
        {
            for (signed char i_6 = 0; i_6 < 14; i_6 += 1) 
            {
                {
                    var_14 = ((/* implicit */long long int) arr_1 [2U]);
                    arr_23 [i_4] [i_4] [i_6] = ((/* implicit */short) arr_18 [i_5]);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (short i_7 = 0; i_7 < 25; i_7 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_8 = 1; i_8 < 22; i_8 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned short i_9 = 3; i_9 < 21; i_9 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                for (signed char i_10 = 0; i_10 < 25; i_10 += 4) /* same iter space */
                {
                    var_15 = ((/* implicit */short) arr_25 [i_10]);
                    var_16 *= ((/* implicit */unsigned int) arr_28 [i_7] [0LL]);
                    var_17 ^= arr_30 [i_8] [i_9] [(short)19];
                }
                /* vectorizable */
                for (signed char i_11 = 0; i_11 < 25; i_11 += 4) /* same iter space */
                {
                    var_18 = ((/* implicit */_Bool) arr_35 [i_7] [i_8] [i_9 + 1]);
                    arr_38 [i_7] [i_7] [i_9] [i_9] = arr_36 [i_7] [i_8 + 2] [i_8 + 2] [i_9] [i_7];
                    var_19 = arr_34 [i_7] [(unsigned char)10] [6U];
                }
                var_20 = ((/* implicit */unsigned char) arr_24 [i_9]);
            }
            for (unsigned short i_12 = 3; i_12 < 21; i_12 += 1) /* same iter space */
            {
                var_21 ^= arr_29 [i_7] [i_7] [(_Bool)1] [i_12];
                var_22 = arr_36 [7U] [i_8] [i_7] [10U] [i_7];
            }
            /* LoopNest 3 */
            for (short i_13 = 0; i_13 < 25; i_13 += 1) 
            {
                for (unsigned char i_14 = 0; i_14 < 25; i_14 += 4) 
                {
                    for (unsigned int i_15 = 0; i_15 < 25; i_15 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */signed char) arr_29 [i_7] [i_8] [i_7] [i_14]);
                            arr_49 [i_7] [i_7] [i_8] [i_13] [3U] [i_7] [9U] = arr_30 [i_8 - 1] [i_8 - 1] [i_8 - 1];
                        }
                    } 
                } 
            } 
            var_24 = ((/* implicit */_Bool) arr_37 [i_7] [i_7] [i_7] [i_8] [i_7]);
            /* LoopNest 2 */
            for (short i_16 = 0; i_16 < 25; i_16 += 1) 
            {
                for (signed char i_17 = 0; i_17 < 25; i_17 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_18 = 0; i_18 < 25; i_18 += 3) 
                        {
                            var_25 = ((/* implicit */long long int) arr_37 [i_7] [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_7]);
                            var_26 = ((/* implicit */long long int) arr_51 [i_7] [0U] [i_7]);
                            var_27 = arr_44 [i_8] [i_8] [i_8];
                            var_28 = ((/* implicit */_Bool) arr_58 [i_7] [i_7] [i_7] [i_16] [i_7] [i_7]);
                        }
                        var_29 = ((/* implicit */_Bool) arr_55 [i_8 + 3] [5U]);
                    }
                } 
            } 
            /* LoopNest 3 */
            for (long long int i_19 = 2; i_19 < 23; i_19 += 2) 
            {
                for (signed char i_20 = 0; i_20 < 25; i_20 += 4) 
                {
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        {
                            var_30 = arr_29 [7U] [i_8] [i_20] [i_8];
                            var_31 = ((/* implicit */unsigned char) arr_36 [i_7] [i_8] [i_19] [(signed char)8] [i_21]);
                            var_32 &= ((/* implicit */signed char) arr_50 [i_7] [9U] [i_7]);
                        }
                    } 
                } 
            } 
        }
        for (signed char i_22 = 1; i_22 < 22; i_22 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (long long int i_23 = 0; i_23 < 25; i_23 += 3) 
            {
                for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                {
                    for (unsigned int i_25 = 0; i_25 < 25; i_25 += 4) 
                    {
                        {
                            var_33 += ((/* implicit */_Bool) arr_70 [i_22]);
                            var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) arr_37 [i_7] [i_22] [i_23] [i_23] [i_25]))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 3 */
            for (long long int i_26 = 0; i_26 < 25; i_26 += 1) 
            {
                var_35 = ((/* implicit */unsigned int) arr_35 [i_22] [i_22] [i_7]);
                /* LoopNest 2 */
                for (long long int i_27 = 2; i_27 < 23; i_27 += 3) 
                {
                    for (unsigned char i_28 = 0; i_28 < 25; i_28 += 1) 
                    {
                        {
                            var_36 = ((/* implicit */unsigned int) arr_75 [i_7] [i_22] [i_7] [i_28]);
                            var_37 = ((/* implicit */unsigned char) arr_66 [i_7] [i_7] [i_22 + 2] [2U] [i_7] [16U]);
                            arr_84 [i_7] [(signed char)12] [i_7] [i_7] [(short)1] [i_27 - 2] [i_28] = ((/* implicit */unsigned char) arr_79 [(signed char)12] [(signed char)12] [(signed char)0] [10U]);
                        }
                    } 
                } 
                var_38 = ((/* implicit */_Bool) arr_79 [i_26] [i_22] [(_Bool)1] [i_7]);
                var_39 = ((/* implicit */unsigned int) arr_47 [i_7] [i_7] [(unsigned char)3] [(unsigned char)3] [i_22] [(unsigned char)3]);
                /* LoopNest 2 */
                for (unsigned int i_29 = 1; i_29 < 24; i_29 += 3) 
                {
                    for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                    {
                        {
                            var_40 = ((/* implicit */unsigned int) max((var_40), (arr_25 [i_22])));
                            var_41 = ((/* implicit */_Bool) arr_40 [i_7] [i_29] [(_Bool)1]);
                        }
                    } 
                } 
            }
            for (unsigned char i_31 = 0; i_31 < 25; i_31 += 2) 
            {
                var_42 = ((/* implicit */long long int) arr_70 [(signed char)2]);
                /* LoopSeq 1 */
                for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_33 = 4; i_33 < 23; i_33 += 1) 
                    {
                        var_43 = ((/* implicit */signed char) arr_39 [i_7] [i_7] [i_7]);
                        var_44 = ((/* implicit */unsigned char) arr_39 [i_7] [i_7] [(unsigned short)17]);
                    }
                    for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) 
                    {
                        var_45 = ((/* implicit */signed char) arr_93 [(_Bool)1] [3LL] [24U] [i_7] [i_34]);
                        arr_101 [i_7] [i_22] [i_32] [i_32] [i_31] [i_22] [i_7] = ((/* implicit */unsigned char) arr_29 [i_7] [(_Bool)1] [(_Bool)1] [i_34]);
                    }
                    var_46 = ((/* implicit */unsigned int) arr_88 [i_31] [i_31] [i_22] [18U]);
                }
                /* LoopNest 2 */
                for (long long int i_35 = 2; i_35 < 22; i_35 += 2) 
                {
                    for (signed char i_36 = 0; i_36 < 25; i_36 += 4) 
                    {
                        {
                            var_47 = ((/* implicit */unsigned int) arr_34 [i_31] [i_35 + 1] [i_36]);
                            var_48 = ((/* implicit */signed char) arr_53 [i_7] [3LL] [i_7] [1U] [i_36]);
                            var_49 = ((/* implicit */unsigned int) arr_46 [i_7] [(signed char)23] [i_31] [10U]);
                        }
                    } 
                } 
            }
            for (unsigned char i_37 = 0; i_37 < 25; i_37 += 1) 
            {
                var_50 = ((/* implicit */long long int) arr_37 [i_7] [i_7] [(short)20] [(_Bool)1] [i_7]);
                var_51 = arr_44 [i_37] [(signed char)9] [(signed char)9];
                var_52 = ((/* implicit */signed char) arr_28 [i_7] [i_22]);
            }
        }
        var_53 = ((/* implicit */signed char) arr_69 [i_7]);
    }
    /* LoopNest 2 */
    for (unsigned int i_38 = 0; i_38 < 15; i_38 += 3) 
    {
        for (long long int i_39 = 3; i_39 < 11; i_39 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_40 = 0; i_40 < 15; i_40 += 2) 
                {
                    /* LoopNest 2 */
                    for (signed char i_41 = 0; i_41 < 15; i_41 += 3) 
                    {
                        for (_Bool i_42 = 0; i_42 < 1; i_42 += 1) 
                        {
                            {
                                var_54 = arr_97 [(short)5] [i_38] [i_38] [(_Bool)1] [i_38];
                                var_55 = ((/* implicit */unsigned short) arr_99 [i_38] [i_39] [i_38] [i_41] [i_42]);
                                arr_119 [i_38] [i_39 + 1] [i_38] [i_41] [i_38] = ((/* implicit */unsigned short) arr_34 [i_38] [(short)11] [i_40]);
                                var_56 ^= ((/* implicit */long long int) arr_102 [i_38] [i_39 + 1] [i_40] [i_40]);
                                var_57 = ((/* implicit */signed char) arr_51 [20LL] [i_39] [i_38]);
                            }
                        } 
                    } 
                    var_58 = ((/* implicit */_Bool) arr_104 [i_38] [i_38] [i_39] [(unsigned char)16] [i_40]);
                    var_59 = ((/* implicit */long long int) arr_1 [i_40]);
                    /* LoopSeq 2 */
                    for (unsigned int i_43 = 0; i_43 < 15; i_43 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_44 = 2; i_44 < 12; i_44 += 4) 
                        {
                            var_60 = ((/* implicit */unsigned int) arr_92 [2LL] [i_40] [i_38] [i_40]);
                            var_61 = ((/* implicit */_Bool) arr_114 [i_39] [i_38] [i_43] [i_44]);
                            var_62 = ((/* implicit */unsigned int) max((var_62), (((/* implicit */unsigned int) arr_102 [i_38] [0U] [i_40] [i_38]))));
                        }
                        var_63 = ((/* implicit */signed char) arr_43 [i_38] [8LL]);
                    }
                    for (_Bool i_45 = 0; i_45 < 1; i_45 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_46 = 3; i_46 < 12; i_46 += 4) 
                        {
                            var_64 &= arr_32 [(_Bool)1] [(_Bool)1] [i_40] [i_40];
                            var_65 *= ((/* implicit */short) arr_91 [2U] [i_40] [2U]);
                            var_66 = ((/* implicit */signed char) arr_43 [i_39] [i_40]);
                        }
                        for (unsigned short i_47 = 4; i_47 < 11; i_47 += 4) 
                        {
                            var_67 = ((/* implicit */unsigned int) max((var_67), (((/* implicit */unsigned int) arr_39 [i_47] [4LL] [i_47]))));
                            var_68 = ((/* implicit */_Bool) arr_102 [11U] [i_40] [22U] [(short)6]);
                            var_69 = ((/* implicit */unsigned int) arr_95 [i_45] [i_45] [i_38] [i_38]);
                            arr_136 [(unsigned short)11] [i_38] [i_38] [8U] = ((/* implicit */unsigned int) arr_48 [2LL] [8LL] [i_38] [i_38] [i_45] [i_47 - 3]);
                        }
                        for (signed char i_48 = 0; i_48 < 15; i_48 += 1) 
                        {
                            var_70 &= ((/* implicit */_Bool) arr_25 [i_40]);
                            arr_140 [i_38] [i_38] [i_40] [(unsigned char)2] [i_48] = ((/* implicit */_Bool) arr_48 [i_38] [i_39 - 3] [i_38] [i_39 - 3] [i_39 - 3] [i_48]);
                        }
                        var_71 = ((/* implicit */unsigned int) arr_106 [(_Bool)1] [i_39 - 3] [i_40] [(short)5]);
                    }
                }
                var_72 = ((/* implicit */_Bool) arr_52 [i_38] [15U]);
                /* LoopSeq 1 */
                for (_Bool i_49 = 0; i_49 < 1; i_49 += 1) 
                {
                    var_73 = ((/* implicit */long long int) arr_143 [i_38] [i_38] [i_39] [(_Bool)1]);
                    /* LoopNest 2 */
                    for (unsigned int i_50 = 0; i_50 < 15; i_50 += 4) 
                    {
                        for (unsigned int i_51 = 0; i_51 < 15; i_51 += 1) 
                        {
                            {
                                var_74 ^= ((/* implicit */short) arr_32 [6U] [i_39] [i_49] [(short)11]);
                                arr_149 [i_38] [(short)2] [i_38] [1U] [i_38] [i_38] [i_38] = ((/* implicit */_Bool) arr_80 [i_38] [i_39 - 3] [i_49] [i_50] [i_39 - 3]);
                            }
                        } 
                    } 
                }
                var_75 = ((/* implicit */unsigned char) arr_124 [2U] [i_38] [i_38]);
            }
        } 
    } 
    var_76 = ((/* implicit */long long int) var_3);
}
