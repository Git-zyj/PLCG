/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84134
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
    for (short i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned short) arr_0 [i_0]);
        var_18 = ((/* implicit */unsigned long long int) ((short) ((short) ((((/* implicit */_Bool) (unsigned char)128)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))));
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (1791434697U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) var_4);
        arr_3 [i_0] = ((/* implicit */short) ((int) ((unsigned int) arr_0 [i_0])));
    }
    for (unsigned short i_1 = 1; i_1 < 14; i_1 += 1) 
    {
        var_20 = ((/* implicit */short) ((unsigned long long int) var_6));
        arr_7 [i_1] = ((((/* implicit */_Bool) (unsigned short)15)) ? (5ULL) : (((/* implicit */unsigned long long int) 4294967295U)));
    }
    var_21 = ((/* implicit */short) 1791434697U);
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_22 |= ((/* implicit */unsigned int) 5ULL);
        arr_11 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) 3409222307468549301ULL)) ? (arr_10 [i_2]) : (arr_10 [3LL])));
    }
    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 4) 
    {
        /* LoopNest 2 */
        for (short i_4 = 2; i_4 < 10; i_4 += 2) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 3; i_6 < 9; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 3; i_7 < 9; i_7 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) 0ULL))));
                                arr_24 [i_6] = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)3))) : (arr_9 [i_3])));
                                arr_25 [i_3] [(short)1] [i_6] = ((/* implicit */short) arr_16 [i_7] [i_6 - 2] [i_4]);
                            }
                        } 
                    } 
                    arr_26 [10ULL] [i_4 - 2] [i_4 - 2] = ((/* implicit */int) arr_21 [3ULL] [3ULL] [i_5] [i_3]);
                    var_24 = ((/* implicit */unsigned long long int) arr_0 [i_3]);
                    var_25 = ((/* implicit */short) ((int) 3183034855U));
                }
            } 
        } 
        arr_27 [i_3] = ((/* implicit */_Bool) 18446744073709551612ULL);
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_9 = 0; i_9 < 10; i_9 += 4) /* same iter space */
        {
            arr_34 [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) var_4)) : (arr_6 [i_9])));
            var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_30 [i_8 - 1])) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) arr_30 [i_8 - 1])))))));
            var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)7680)) ? (arr_9 [i_8 - 1]) : (arr_9 [i_8 - 1]))))));
        }
        for (unsigned char i_10 = 0; i_10 < 10; i_10 += 4) /* same iter space */
        {
            var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)41))) ? (arr_20 [4ULL] [i_10] [i_10] [i_10] [i_8 - 1]) : (arr_9 [i_8]))))));
            arr_37 [i_8] [i_10] = ((/* implicit */short) arr_20 [i_8] [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1]);
            /* LoopSeq 2 */
            for (unsigned int i_11 = 0; i_11 < 10; i_11 += 3) /* same iter space */
            {
                arr_40 [i_10] &= ((/* implicit */short) arr_33 [3LL] [3LL] [i_8]);
                var_29 = ((/* implicit */short) arr_10 [(unsigned short)17]);
            }
            for (unsigned int i_12 = 0; i_12 < 10; i_12 += 3) /* same iter space */
            {
                var_30 ^= ((/* implicit */long long int) arr_16 [i_8] [(_Bool)1] [(_Bool)1]);
                arr_43 [i_8] [i_8] [i_12] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (((((/* implicit */_Bool) var_16)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                var_31 = ((/* implicit */unsigned int) var_8);
                var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_8 - 1])) ? (3157343474064449337ULL) : (((/* implicit */unsigned long long int) 1073741823))));
                var_33 += ((/* implicit */int) arr_20 [i_8] [i_8] [i_8 - 1] [i_8 - 1] [i_8 - 1]);
            }
            /* LoopNest 3 */
            for (int i_13 = 0; i_13 < 10; i_13 += 2) 
            {
                for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                {
                    for (unsigned int i_15 = 0; i_15 < 10; i_15 += 4) 
                    {
                        {
                            arr_52 [i_8] [i_10] [i_14] [i_8] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_50 [i_8] [i_8 - 1] [i_14] [i_8 - 1] [i_8] [i_8])) ? (((/* implicit */long long int) arr_16 [(_Bool)1] [i_8 - 1] [i_8])) : (arr_44 [(short)1])));
                            var_34 -= ((/* implicit */unsigned int) var_6);
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_16 = 2; i_16 < 9; i_16 += 4) 
        {
            arr_55 [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) 67043328U)) ? (4294967295U) : (3183034834U)));
            var_35 = ((/* implicit */int) ((((/* implicit */_Bool) arr_28 [i_16 - 1] [i_16 + 1])) ? (((/* implicit */unsigned long long int) 1072693248U)) : (arr_28 [i_16 - 2] [i_16 + 1])));
            /* LoopNest 2 */
            for (int i_17 = 2; i_17 < 8; i_17 += 2) 
            {
                for (unsigned long long int i_18 = 0; i_18 < 10; i_18 += 4) 
                {
                    {
                        var_36 = ((/* implicit */short) ((long long int) (signed char)109));
                        var_37 = ((((/* implicit */_Bool) (unsigned char)22)) ? (17572917684349460562ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32512))));
                        arr_61 [4ULL] [i_16] [i_16] [i_16] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-32767)) ? (arr_46 [i_8 - 1] [i_8 - 1] [i_16 - 1]) : (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))));
                        arr_62 [i_18] [i_18] [i_17] [0ULL] [0ULL] = ((/* implicit */unsigned long long int) arr_21 [i_8] [(unsigned short)1] [i_8 - 1] [i_8]);
                    }
                } 
            } 
            /* LoopSeq 4 */
            for (unsigned short i_19 = 0; i_19 < 10; i_19 += 3) /* same iter space */
            {
                var_38 ^= ((/* implicit */long long int) arr_16 [i_19] [i_19] [i_19]);
                arr_65 [i_19] [7ULL] = 4294967295U;
                arr_66 [i_8 - 1] [i_8 - 1] [i_19] = ((/* implicit */long long int) arr_10 [i_19]);
                var_39 *= ((/* implicit */signed char) var_16);
                var_40 = ((/* implicit */unsigned short) var_4);
            }
            for (unsigned short i_20 = 0; i_20 < 10; i_20 += 3) /* same iter space */
            {
                /* LoopSeq 4 */
                for (long long int i_21 = 1; i_21 < 8; i_21 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_22 = 3; i_22 < 9; i_22 += 1) 
                    {
                        var_41 = ((/* implicit */unsigned long long int) min((var_41), (((/* implicit */unsigned long long int) ((_Bool) (unsigned char)21)))));
                        var_42 = ((/* implicit */unsigned long long int) arr_54 [(short)4] [i_20] [(short)4]);
                        var_43 *= arr_23 [i_16] [i_16] [i_16] [i_16] [i_21 - 1];
                        arr_73 [i_8 - 1] [i_16 - 1] [i_16 - 1] [i_21] [i_8 - 1] [i_16] [i_16] = ((/* implicit */long long int) arr_68 [i_16] [(unsigned char)7] [i_21] [i_22]);
                    }
                    for (long long int i_23 = 0; i_23 < 10; i_23 += 2) 
                    {
                        arr_77 [i_23] [i_21] [i_20] [i_21] [i_8 - 1] = ((/* implicit */unsigned int) arr_31 [i_16 + 1]);
                        var_44 = ((/* implicit */unsigned char) arr_46 [i_8] [i_20] [9U]);
                        arr_78 [i_23] [i_21 + 1] [i_16] [i_16] [i_8] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_8] [i_8 - 1] [i_16 - 1] [i_16] [i_21 + 2])) ? (arr_23 [i_8] [i_8 - 1] [i_8 - 1] [i_16] [i_21 - 1]) : (arr_23 [i_8] [i_8 - 1] [i_8] [i_23] [i_21 - 1])));
                        arr_79 [i_8] [i_16] [i_20] [i_21] [i_21] [4ULL] = ((/* implicit */long long int) arr_56 [i_8 - 1] [i_16 - 2] [i_20]);
                    }
                    var_45 ^= arr_35 [i_8 - 1] [i_16 + 1];
                }
                for (long long int i_24 = 1; i_24 < 8; i_24 += 3) /* same iter space */
                {
                    arr_83 [i_24] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_8 - 1])) ? (((/* implicit */int) arr_0 [i_8 - 1])) : (-1)));
                    var_46 = ((/* implicit */_Bool) arr_50 [i_24] [i_24 + 2] [i_24] [i_24] [i_8 - 1] [i_8 - 1]);
                }
                for (long long int i_25 = 1; i_25 < 8; i_25 += 3) /* same iter space */
                {
                    arr_88 [i_8] [i_16 + 1] [i_25] [i_25 + 2] = ((/* implicit */unsigned short) (unsigned char)24);
                    var_47 = ((/* implicit */unsigned short) var_7);
                }
                for (long long int i_26 = 1; i_26 < 8; i_26 += 3) /* same iter space */
                {
                    arr_93 [i_8 - 1] [i_16 - 2] [i_20] [(short)3] = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) 3U)) ? (arr_91 [i_20]) : (var_9))));
                    var_48 = ((/* implicit */unsigned int) arr_20 [i_26 + 1] [i_26] [(unsigned short)1] [(unsigned short)2] [5ULL]);
                    var_49 = ((/* implicit */unsigned long long int) arr_10 [i_26 + 2]);
                }
                var_50 = ((/* implicit */_Bool) (short)127);
                /* LoopSeq 1 */
                for (long long int i_27 = 0; i_27 < 10; i_27 += 2) 
                {
                    arr_96 [i_8] [(unsigned short)1] [0U] [0] [6ULL] [0U] = ((unsigned short) (short)255);
                    arr_97 [i_16] [i_20] [i_27] = ((/* implicit */long long int) arr_92 [i_8] [8ULL] [i_8] [i_20] [i_27] [4ULL]);
                    arr_98 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] &= ((/* implicit */unsigned short) (short)-32751);
                }
                var_51 = ((/* implicit */unsigned int) var_8);
                /* LoopSeq 2 */
                for (unsigned short i_28 = 0; i_28 < 10; i_28 += 4) 
                {
                    var_52 |= ((/* implicit */long long int) (unsigned short)1023);
                    var_53 = ((/* implicit */unsigned short) min((var_53), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_70 [i_16 - 2] [i_16 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1])) ? (arr_9 [i_8 - 1]) : (arr_9 [i_8 - 1]))))));
                    var_54 = var_4;
                }
                for (unsigned int i_29 = 0; i_29 < 10; i_29 += 3) 
                {
                    arr_104 [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_53 [i_16])) ? (((((/* implicit */_Bool) arr_38 [i_8 - 1] [i_16 + 1] [(unsigned short)0] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (arr_16 [i_16] [i_16] [i_16]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)17)) : (((/* implicit */int) (unsigned char)128)))))));
                    var_55 -= ((/* implicit */signed char) 18446744073709551611ULL);
                    var_56 = ((/* implicit */int) var_16);
                }
            }
            for (unsigned long long int i_30 = 0; i_30 < 10; i_30 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_31 = 1; i_31 < 7; i_31 += 2) 
                {
                    arr_110 [i_30] = ((/* implicit */unsigned long long int) (short)28994);
                    var_57 = ((/* implicit */long long int) min((var_57), (((/* implicit */long long int) (_Bool)0))));
                }
                arr_111 [i_8] [i_30] [9U] [(unsigned short)4] = ((/* implicit */unsigned long long int) arr_95 [8] [i_8] [8] [i_30]);
                /* LoopSeq 2 */
                for (int i_32 = 0; i_32 < 10; i_32 += 2) 
                {
                    var_58 = 4294967289U;
                    var_59 += ((/* implicit */short) arr_4 [i_16] [i_32]);
                    /* LoopSeq 1 */
                    for (unsigned int i_33 = 3; i_33 < 9; i_33 += 1) 
                    {
                        var_60 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_8 - 1] [i_16 - 2] [i_16 + 1]))) : (var_14)));
                        var_61 ^= ((/* implicit */unsigned short) arr_30 [i_33 - 2]);
                        var_62 = ((/* implicit */unsigned int) min((var_62), (((/* implicit */unsigned int) ((short) arr_99 [i_16 - 1] [i_8 - 1])))));
                        arr_118 [i_8] [i_30] [i_30] [i_30] [i_32] [i_33] [(_Bool)1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_8] [i_8] [i_8] [(signed char)7] [i_8])) ? (4294967284U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_72 [i_8 - 1] [(short)3] [i_30] [(short)3] [(short)3] [i_30] [(short)8])))))) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)3)))));
                    }
                }
                for (int i_34 = 0; i_34 < 10; i_34 += 1) 
                {
                    var_63 = arr_117 [i_8] [i_16] [(_Bool)1];
                    var_64 = ((/* implicit */signed char) min((var_64), (((/* implicit */signed char) 281474974613504LL))));
                    var_65 -= arr_68 [i_8] [(unsigned char)9] [i_8 - 1] [i_8 - 1];
                    var_66 = ((/* implicit */_Bool) 15289400599645102265ULL);
                }
                /* LoopNest 2 */
                for (unsigned long long int i_35 = 0; i_35 < 10; i_35 += 3) 
                {
                    for (int i_36 = 0; i_36 < 10; i_36 += 3) 
                    {
                        {
                            var_67 *= arr_13 [i_36] [i_16];
                            arr_126 [i_8] [i_8] [i_8] [i_8] [i_35] [i_30] [i_36] = ((/* implicit */short) 164114069153746253LL);
                            var_68 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_75 [i_16] [1U] [i_16] [(unsigned short)0] [i_16])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_117 [i_8] [i_8] [i_8])));
                        }
                    } 
                } 
            }
            for (signed char i_37 = 0; i_37 < 10; i_37 += 3) 
            {
                arr_129 [i_8] [i_37] [(short)9] = ((/* implicit */unsigned short) var_5);
                /* LoopNest 2 */
                for (_Bool i_38 = 0; i_38 < 1; i_38 += 1) 
                {
                    for (unsigned int i_39 = 1; i_39 < 8; i_39 += 4) 
                    {
                        {
                            var_69 -= ((/* implicit */_Bool) ((arr_45 [i_38]) ? (7956958880179675864ULL) : (arr_5 [i_16])));
                            var_70 = ((/* implicit */_Bool) ((var_13) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_50 [i_8] [(_Bool)1] [i_37] [i_8 - 1] [i_8] [i_8 - 1])));
                            var_71 = ((/* implicit */unsigned int) arr_30 [i_8]);
                        }
                    } 
                } 
            }
            var_72 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_36 [i_8 - 1] [i_8 - 1] [i_16])) ? (((/* implicit */unsigned long long int) arr_114 [i_8 - 1] [i_8] [i_8 - 1] [i_16 - 1] [i_16 - 1] [i_16])) : (arr_69 [i_16] [i_8] [i_8] [i_8] [i_8])));
        }
        var_73 &= ((/* implicit */short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_2)))) : (arr_14 [i_8] [i_8 - 1])));
    }
    for (long long int i_40 = 0; i_40 < 20; i_40 += 4) 
    {
        arr_139 [i_40] = ((var_13) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_40] [i_40]))) : (arr_137 [i_40]));
        var_74 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) var_9))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(short)20]))) : (((((/* implicit */_Bool) (unsigned char)14)) ? (((/* implicit */unsigned long long int) 3183034874U)) : (9065581490121448603ULL)))));
    }
}
