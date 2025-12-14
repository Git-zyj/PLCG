/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70733
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
    var_16 = var_9;
    var_17 = ((/* implicit */short) var_4);
    var_18 = ((((/* implicit */_Bool) var_3)) ? (var_6) : (((/* implicit */unsigned long long int) var_10)));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) var_14);
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) arr_1 [i_0]))));
            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) arr_1 [i_0 - 1]))));
        }
        /* LoopSeq 3 */
        for (signed char i_2 = 2; i_2 < 10; i_2 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_3 = 1; i_3 < 8; i_3 += 2) 
            {
                var_21 = ((/* implicit */signed char) arr_7 [i_0] [i_0]);
                /* LoopSeq 1 */
                for (short i_4 = 1; i_4 < 9; i_4 += 1) 
                {
                    arr_14 [i_0 + 1] [i_0] [i_0] [i_0] [8U] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_0])) ? (arr_5 [i_0 + 1] [i_0]) : (arr_5 [i_0 + 1] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_5 [i_0 + 1] [i_0])));
                    var_22 &= ((/* implicit */unsigned char) var_7);
                    var_23 ^= arr_7 [i_3] [i_2];
                    var_24 = ((/* implicit */unsigned long long int) arr_5 [i_4 + 1] [i_0]);
                    var_25 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2 - 1] [i_2 - 2] [i_2] [i_2 - 2])) ? (((/* implicit */int) arr_8 [i_2] [i_2 - 1] [i_2] [i_2 + 1])) : (((/* implicit */int) arr_8 [i_2 - 1] [i_2 - 1] [(short)10] [i_2 + 1]))))) ? (((((/* implicit */_Bool) arr_8 [i_2] [i_2 - 2] [i_2 - 2] [i_2 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2] [i_2 - 1] [i_2 - 2] [i_2 - 1]))) : (var_14))) : (((/* implicit */unsigned int) ((arr_10 [i_2 - 2]) ? (((/* implicit */int) arr_10 [i_2 - 2])) : (((/* implicit */int) arr_10 [i_2 + 1])))))));
                }
                var_26 = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_2 - 1] [i_3 + 3] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0 - 1] [i_2 + 1] [i_3 + 3] [i_2 + 1]))) : (1588853064U)));
                var_27 -= ((/* implicit */long long int) arr_13 [(signed char)2] [i_2] [(signed char)2] [i_2 - 2]);
            }
            /* LoopNest 2 */
            for (unsigned char i_5 = 1; i_5 < 10; i_5 += 4) 
            {
                for (signed char i_6 = 3; i_6 < 10; i_6 += 1) 
                {
                    {
                        arr_20 [i_0] = ((/* implicit */unsigned int) arr_10 [i_0 - 1]);
                        var_28 = ((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0] [i_0] [i_6] [i_6 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0 - 1] [i_2 - 1] [i_0] [9LL]))) : (arr_18 [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0] [i_0])));
                        arr_21 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_0 + 1] [i_0 + 1] [i_2 - 1] [i_0] [i_2] [i_6 - 1])) ? (((/* implicit */int) arr_0 [i_0] [i_6 - 2])) : (((/* implicit */int) arr_0 [i_0] [i_6 - 1]))))) ? (((((/* implicit */_Bool) arr_18 [i_0 - 1] [i_0] [i_0 - 1] [i_0] [(unsigned char)2] [i_6 - 3])) ? (((/* implicit */int) arr_0 [i_0] [i_6])) : (((/* implicit */int) arr_0 [i_0] [i_6])))) : (((((/* implicit */_Bool) 911825278U)) ? (((/* implicit */int) (unsigned char)149)) : (((/* implicit */int) (unsigned char)0))))));
                    }
                } 
            } 
            arr_22 [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) var_1);
        }
        for (unsigned char i_7 = 2; i_7 < 8; i_7 += 4) 
        {
            arr_25 [i_0] [i_0] = (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_15 [i_0 - 1] [i_0] [i_7 + 3]));
            arr_26 [i_0] [i_0 + 1] [7U] = ((/* implicit */int) var_6);
        }
        for (long long int i_8 = 0; i_8 < 11; i_8 += 2) 
        {
            var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) var_11))));
            var_30 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [5U] [i_8] [5U] [i_8] [i_8] [i_0])) ? (arr_4 [i_0 - 1]) : (((/* implicit */int) arr_16 [10U] [10U] [i_8] [i_8]))));
            /* LoopNest 2 */
            for (unsigned int i_9 = 0; i_9 < 11; i_9 += 1) 
            {
                for (signed char i_10 = 0; i_10 < 11; i_10 += 1) 
                {
                    {
                        var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_10] [i_0])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_8 [i_10] [i_9] [i_8] [i_0 - 1]))));
                        arr_33 [i_0 + 1] [i_0] [i_0] [i_0 + 1] = ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 - 1]))) : (((((/* implicit */_Bool) 1785887826U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 - 1]))) : (1807630984U))));
                    }
                } 
            } 
            arr_34 [i_0] [i_8] = ((/* implicit */unsigned long long int) var_15);
            var_32 = ((/* implicit */signed char) arr_17 [i_0 - 1] [i_0 - 1] [i_0 - 1] [7] [i_8] [i_8]);
        }
        var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (16705104741961966703ULL) : (((/* implicit */unsigned long long int) 3573963348U))))) ? (((/* implicit */int) arr_27 [i_0 - 1] [i_0] [i_0 + 1])) : (((((/* implicit */_Bool) (short)13186)) ? (((/* implicit */int) arr_0 [i_0] [i_0 - 1])) : (((/* implicit */int) (unsigned char)0))))));
        var_34 += ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [0LL] [i_0])) ? (((((/* implicit */_Bool) arr_31 [(signed char)4] [i_0 + 1])) ? (((/* implicit */unsigned long long int) arr_4 [i_0 - 1])) : (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
    }
    for (unsigned char i_11 = 0; i_11 < 24; i_11 += 1) /* same iter space */
    {
        var_35 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_11])) ? (((/* implicit */int) arr_35 [i_11])) : (((/* implicit */int) arr_35 [i_11]))))) ? (((((/* implicit */_Bool) arr_36 [i_11])) ? (arr_36 [23ULL]) : (var_14))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_11])))));
        var_36 = ((/* implicit */short) var_3);
    }
    for (unsigned char i_12 = 0; i_12 < 24; i_12 += 1) /* same iter space */
    {
        /* LoopSeq 4 */
        for (short i_13 = 0; i_13 < 24; i_13 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned short i_14 = 1; i_14 < 21; i_14 += 3) 
            {
                for (long long int i_15 = 1; i_15 < 21; i_15 += 2) 
                {
                    for (unsigned int i_16 = 0; i_16 < 24; i_16 += 3) 
                    {
                        {
                            var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_45 [i_15 + 2] [i_15 + 2] [i_15 + 2] [i_16] [i_16])) ? (((/* implicit */int) arr_45 [i_15 + 2] [i_16] [i_16] [i_16] [i_16])) : (((/* implicit */int) arr_45 [i_15 + 2] [i_15 + 2] [(unsigned short)23] [i_15 - 1] [i_15 - 1]))));
                            arr_52 [i_16] [(short)18] [i_14] [i_14] [6LL] &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_44 [i_14 - 1])) : (((/* implicit */int) arr_44 [i_14 + 3]))))) ? (arr_46 [i_15 + 3] [i_15 - 1] [8U] [i_15 + 1]) : (((/* implicit */unsigned long long int) arr_49 [i_12] [i_13] [(signed char)6] [21LL] [i_16])));
                        }
                    } 
                } 
            } 
            arr_53 [i_13] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_51 [i_13] [4ULL] [i_13] [i_13] [4ULL] [i_12])) ? (((((/* implicit */_Bool) var_7)) ? (arr_51 [i_12] [i_13] [4ULL] [i_13] [(short)10] [i_13]) : (arr_51 [i_12] [i_12] [i_12] [i_12] [(unsigned char)18] [(unsigned char)10]))) : (arr_51 [i_12] [i_12] [i_12] [i_12] [(unsigned char)0] [i_12])));
        }
        for (short i_17 = 0; i_17 < 24; i_17 += 1) /* same iter space */
        {
            /* LoopSeq 4 */
            for (long long int i_18 = 1; i_18 < 21; i_18 += 3) 
            {
                var_38 = ((/* implicit */unsigned int) arr_48 [i_18] [i_17] [i_12]);
                var_39 = ((/* implicit */unsigned short) min((var_39), (((/* implicit */unsigned short) var_13))));
            }
            /* vectorizable */
            for (signed char i_19 = 0; i_19 < 24; i_19 += 3) 
            {
                arr_62 [i_12] [22LL] [i_19] [i_19] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)19)) : (((/* implicit */int) (unsigned char)40))));
                var_40 = ((/* implicit */unsigned short) var_6);
                /* LoopSeq 2 */
                for (unsigned long long int i_20 = 1; i_20 < 23; i_20 += 1) 
                {
                    var_41 += ((/* implicit */unsigned int) arr_65 [i_12] [i_20 - 1] [i_20 + 1] [i_20 + 1]);
                    arr_66 [i_19] = ((/* implicit */unsigned long long int) var_10);
                    arr_67 [i_12] [i_17] [(unsigned char)22] [i_20 - 1] [i_19] = ((/* implicit */unsigned short) arr_51 [i_12] [i_17] [i_17] [i_20] [i_19] [i_17]);
                }
                for (signed char i_21 = 0; i_21 < 24; i_21 += 2) 
                {
                    var_42 = ((/* implicit */signed char) var_11);
                    /* LoopSeq 2 */
                    for (short i_22 = 2; i_22 < 22; i_22 += 1) /* same iter space */
                    {
                        arr_73 [i_19] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_64 [i_22 + 2] [i_22 + 2] [i_19] [i_19] [i_22 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)74))) : (4294967293U)));
                        var_43 ^= ((/* implicit */long long int) arr_70 [i_21] [i_22 - 1] [i_21] [i_21]);
                        var_44 = ((/* implicit */long long int) arr_44 [i_12]);
                    }
                    for (short i_23 = 2; i_23 < 22; i_23 += 1) /* same iter space */
                    {
                        arr_76 [i_12] [i_19] [i_21] = ((var_15) ? (arr_69 [i_12] [i_17] [i_19] [(short)13]) : (arr_69 [i_12] [i_17] [i_19] [6LL]));
                        var_45 = ((/* implicit */signed char) min((var_45), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_43 [11U] [11U] [i_19])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_74 [i_21] [(signed char)6] [i_23 - 1] [i_23 + 1] [i_23] [i_21] [i_23 + 1]))))))));
                    }
                    /* LoopSeq 1 */
                    for (long long int i_24 = 0; i_24 < 24; i_24 += 2) 
                    {
                        var_46 = ((/* implicit */unsigned long long int) var_3);
                        var_47 = ((/* implicit */signed char) arr_44 [i_12]);
                    }
                }
            }
            for (signed char i_25 = 0; i_25 < 24; i_25 += 1) /* same iter space */
            {
                var_48 = ((((/* implicit */_Bool) arr_75 [i_12] [i_12] [i_12] [7U] [i_12] [i_12])) ? (arr_75 [i_12] [i_12] [(unsigned char)20] [i_12] [i_12] [i_12]) : (arr_75 [i_25] [i_17] [i_17] [i_17] [i_12] [i_12]));
                var_49 = ((/* implicit */unsigned int) max((var_49), (((/* implicit */unsigned int) arr_77 [i_17] [16] [i_17] [16]))));
            }
            for (signed char i_26 = 0; i_26 < 24; i_26 += 1) /* same iter space */
            {
                var_50 = ((/* implicit */unsigned char) max((var_50), (((/* implicit */unsigned char) var_12))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_27 = 0; i_27 < 24; i_27 += 1) /* same iter space */
                {
                    arr_85 [(_Bool)1] [(_Bool)1] [i_17] [i_26] [i_26] [i_26] = ((/* implicit */short) arr_55 [i_12]);
                    arr_86 [i_12] [20LL] [i_26] [(unsigned char)10] |= ((/* implicit */long long int) var_11);
                    var_51 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_47 [i_12] [i_12] [4] [20ULL])) ? (var_14) : (var_14)));
                }
                /* vectorizable */
                for (signed char i_28 = 0; i_28 < 24; i_28 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (int i_29 = 3; i_29 < 23; i_29 += 1) 
                    {
                        arr_92 [i_26] [i_17] [i_17] [10ULL] [i_17] [10ULL] = ((/* implicit */unsigned char) arr_72 [i_29 + 1] [i_29 - 1] [i_29] [9U] [i_29]);
                        arr_93 [i_26] = arr_56 [(_Bool)1] [i_17] [10U];
                    }
                    for (unsigned char i_30 = 2; i_30 < 23; i_30 += 1) 
                    {
                        arr_98 [i_12] [i_26] [i_26] [2U] [7ULL] = ((/* implicit */signed char) var_7);
                        arr_99 [i_12] [i_26] [i_12] [i_12] [i_26] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_63 [i_30 - 1] [i_26] [i_30 + 1] [i_26] [i_30 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_94 [i_30 - 2] [i_26] [i_30] [7LL] [i_30 + 1] [i_30 - 1]))) : (var_9)));
                        arr_100 [i_26] = ((/* implicit */short) ((((/* implicit */_Bool) arr_89 [i_26] [i_30] [i_26])) ? (arr_89 [i_26] [(unsigned char)16] [i_26]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_88 [i_12] [i_30 + 1])))));
                    }
                    arr_101 [23U] [i_12] [i_17] [i_26] [i_26] = ((/* implicit */long long int) arr_56 [i_12] [i_17] [i_26]);
                    var_52 = ((/* implicit */short) min((var_52), (((/* implicit */short) ((((/* implicit */_Bool) arr_63 [i_28] [(short)14] [i_17] [(short)14] [i_12])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_84 [i_12] [i_12])))))));
                }
                for (signed char i_31 = 0; i_31 < 24; i_31 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (int i_32 = 2; i_32 < 22; i_32 += 2) 
                    {
                        arr_107 [i_26] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_72 [i_32 + 1] [i_32 + 1] [i_31] [i_31] [i_12])) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_72 [i_32 - 2] [i_32 - 2] [i_31] [20U] [i_12])))) : (((/* implicit */int) arr_77 [(short)11] [i_26] [i_32] [i_32 - 2]))));
                        var_53 += ((/* implicit */unsigned short) arr_69 [i_12] [(signed char)7] [i_12] [i_12]);
                        var_54 ^= ((/* implicit */int) arr_50 [i_12] [i_12] [i_12] [i_12] [(unsigned short)16]);
                        var_55 = ((/* implicit */unsigned int) max((var_55), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_80 [i_32] [i_32] [i_32]))) : (var_8)))) ? (((((/* implicit */_Bool) arr_70 [i_32] [i_17] [i_26] [i_32 - 1])) ? (arr_39 [i_32 + 2]) : (var_7))) : (arr_39 [i_32 + 2]))))));
                    }
                    for (unsigned long long int i_33 = 0; i_33 < 24; i_33 += 2) 
                    {
                        var_56 = ((/* implicit */long long int) arr_48 [i_26] [i_31] [i_33]);
                        arr_111 [i_12] [i_26] [i_26] [i_31] [(signed char)0] = ((/* implicit */long long int) var_1);
                    }
                    for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) 
                    {
                        var_57 *= ((/* implicit */unsigned long long int) var_11);
                        arr_115 [13LL] [15LL] [i_26] [i_17] [9] = ((/* implicit */unsigned int) var_11);
                        var_58 = ((/* implicit */signed char) var_14);
                    }
                    arr_116 [i_31] [i_26] [i_31] [i_31] = ((/* implicit */_Bool) arr_48 [(unsigned char)21] [i_17] [i_12]);
                }
            }
            var_59 = ((/* implicit */long long int) arr_114 [i_12] [i_17] [i_12] [i_12] [(signed char)6]);
            arr_117 [i_17] [16LL] = ((/* implicit */unsigned char) arr_61 [i_12] [(unsigned char)22] [i_17]);
        }
        for (short i_35 = 0; i_35 < 24; i_35 += 1) /* same iter space */
        {
            arr_120 [i_12] [16U] = ((/* implicit */long long int) arr_39 [i_12]);
            /* LoopNest 3 */
            for (short i_36 = 1; i_36 < 22; i_36 += 1) 
            {
                for (long long int i_37 = 3; i_37 < 20; i_37 += 4) 
                {
                    for (signed char i_38 = 0; i_38 < 24; i_38 += 2) 
                    {
                        {
                            var_60 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_118 [i_36 + 2])) : (((((/* implicit */_Bool) arr_118 [i_36 + 1])) ? (((/* implicit */int) arr_118 [i_36 + 2])) : (((/* implicit */int) arr_118 [i_36 + 2]))))));
                            var_61 -= ((/* implicit */unsigned int) var_9);
                            arr_129 [i_38] [i_38] [i_36] [i_36] [i_35] [i_12] = ((/* implicit */long long int) arr_89 [i_36] [i_36 + 1] [i_36 + 2]);
                        }
                    } 
                } 
            } 
            var_62 = ((/* implicit */long long int) min((var_62), (((/* implicit */long long int) var_0))));
        }
        for (_Bool i_39 = 0; i_39 < 1; i_39 += 1) 
        {
            arr_134 [i_12] [(unsigned char)15] = ((/* implicit */short) arr_40 [i_39]);
            arr_135 [i_12] [(signed char)0] = ((/* implicit */unsigned long long int) arr_77 [(_Bool)1] [(unsigned char)0] [(unsigned char)0] [i_12]);
            arr_136 [i_39] = ((/* implicit */_Bool) arr_131 [i_12]);
        }
        arr_137 [11ULL] = var_10;
    }
    for (unsigned int i_40 = 1; i_40 < 13; i_40 += 3) 
    {
        var_63 = ((/* implicit */long long int) arr_81 [i_40 + 3] [i_40 + 3] [i_40 - 1]);
        var_64 ^= ((/* implicit */long long int) var_0);
    }
    /* LoopNest 2 */
    for (short i_41 = 2; i_41 < 21; i_41 += 3) 
    {
        for (_Bool i_42 = 0; i_42 < 1; i_42 += 1) 
        {
            {
                arr_145 [i_41 + 1] [10ULL] [i_42] = var_4;
                var_65 = ((/* implicit */unsigned int) min((var_65), (((/* implicit */unsigned int) arr_97 [i_41 - 2] [i_41]))));
            }
        } 
    } 
}
