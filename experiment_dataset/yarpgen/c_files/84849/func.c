/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84849
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 13; i_3 += 4) 
                {
                    for (unsigned short i_4 = 0; i_4 < 13; i_4 += 4) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned long long int) arr_9 [i_0] [11] [i_0] [i_0] [i_4]);
                            var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) (~(0ULL))))));
                        }
                    } 
                } 
            } 
            arr_13 [i_0] = ((/* implicit */unsigned int) ((unsigned char) arr_8 [i_0] [i_1] [i_0] [i_1] [i_1]));
            var_14 = ((/* implicit */signed char) 5U);
        }
        for (long long int i_5 = 0; i_5 < 13; i_5 += 4) 
        {
            /* LoopNest 2 */
            for (long long int i_6 = 0; i_6 < 13; i_6 += 4) 
            {
                for (signed char i_7 = 1; i_7 < 11; i_7 += 1) 
                {
                    {
                        var_15 = ((/* implicit */signed char) 2147483640);
                        var_16 = ((/* implicit */long long int) (signed char)(-127 - 1));
                        arr_21 [i_0] [i_0] [i_6] [(unsigned char)1] = ((/* implicit */int) (((-9223372036854775807LL - 1LL)) | (((/* implicit */long long int) ((/* implicit */int) (short)8545)))));
                    }
                } 
            } 
            arr_22 [(unsigned short)7] = ((/* implicit */unsigned short) (-(max((((/* implicit */unsigned int) -2147483641)), (arr_9 [i_0] [i_0] [i_0] [i_5] [12LL])))));
        }
        arr_23 [i_0] = ((/* implicit */unsigned short) ((signed char) ((signed char) arr_3 [i_0] [i_0] [i_0])));
    }
    /* vectorizable */
    for (unsigned int i_8 = 0; i_8 < 12; i_8 += 4) 
    {
        arr_27 [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_26 [i_8] [i_8])) ? (arr_2 [i_8] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_8])))));
        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) 34033026))));
        /* LoopSeq 4 */
        for (unsigned int i_9 = 4; i_9 < 10; i_9 += 3) 
        {
            arr_31 [i_8] [i_9] = ((/* implicit */long long int) var_6);
            /* LoopNest 2 */
            for (unsigned int i_10 = 0; i_10 < 12; i_10 += 3) 
            {
                for (unsigned int i_11 = 3; i_11 < 9; i_11 += 1) 
                {
                    {
                        arr_36 [i_11] [i_11] [i_11] [i_11 - 3] [11U] [i_8] = ((/* implicit */unsigned long long int) var_11);
                        var_18 = ((/* implicit */unsigned int) arr_18 [i_8]);
                    }
                } 
            } 
            var_19 = ((/* implicit */long long int) arr_20 [i_8] [i_9 - 1] [i_8] [i_9]);
            var_20 = ((/* implicit */unsigned int) arr_33 [i_8] [(short)2]);
        }
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_13 = 0; i_13 < 12; i_13 += 4) 
            {
                for (unsigned char i_14 = 0; i_14 < 12; i_14 += 4) 
                {
                    {
                        var_21 = ((/* implicit */unsigned int) (unsigned short)33597);
                        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [i_8])) ? (((/* implicit */int) arr_25 [i_8])) : (((/* implicit */int) arr_25 [i_14])))))));
                        arr_46 [i_14] = ((/* implicit */unsigned short) arr_41 [i_12]);
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (unsigned int i_15 = 0; i_15 < 12; i_15 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_16 = 3; i_16 < 8; i_16 += 4) 
                {
                    var_23 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_39 [i_16 - 3])) ? (((/* implicit */int) arr_39 [i_8])) : (((/* implicit */int) arr_39 [i_15]))));
                    arr_53 [i_8] [i_12] [i_16] = ((/* implicit */long long int) ((2147483640) / (2147483640)));
                }
                var_24 -= ((2570471715U) << (((5774862110856975325ULL) - (5774862110856975303ULL))));
                var_25 = ((/* implicit */unsigned long long int) ((arr_50 [i_8] [i_12] [i_15]) ? (((/* implicit */int) arr_50 [i_8] [i_12] [i_15])) : (((/* implicit */int) arr_50 [i_15] [i_12] [i_15]))));
                arr_54 [(_Bool)1] [(unsigned short)1] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned int) var_6);
                var_26 = (+(((int) arr_41 [i_8])));
            }
            for (unsigned long long int i_17 = 0; i_17 < 12; i_17 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (signed char i_18 = 0; i_18 < 12; i_18 += 4) 
                {
                    for (signed char i_19 = 1; i_19 < 11; i_19 += 3) 
                    {
                        {
                            var_27 = ((/* implicit */long long int) (unsigned short)31939);
                            arr_63 [i_8] [i_12] [i_17] [i_18] [i_8] = ((/* implicit */unsigned int) ((unsigned short) (unsigned short)39241));
                            var_28 = ((/* implicit */unsigned char) arr_11 [i_8] [i_12] [11ULL] [7LL] [i_18] [i_19 - 1]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_20 = 1; i_20 < 10; i_20 += 4) 
                {
                    for (unsigned int i_21 = 1; i_21 < 10; i_21 += 3) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)31939)) ? (((/* implicit */int) (unsigned short)14159)) : ((-2147483647 - 1)))))));
                            var_30 = ((/* implicit */long long int) ((short) (!(((/* implicit */_Bool) (short)27935)))));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_22 = 0; i_22 < 12; i_22 += 1) /* same iter space */
            {
                var_31 = ((/* implicit */signed char) arr_6 [i_8] [i_22]);
                /* LoopNest 2 */
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                {
                    for (unsigned long long int i_24 = 3; i_24 < 10; i_24 += 1) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned char) ((unsigned long long int) arr_0 [i_8] [i_24 + 1]));
                            var_33 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_24 + 2] [(signed char)5] [9]))) | (arr_67 [i_22] [i_24 + 1] [i_24] [i_24] [i_24 - 2] [i_24] [i_24])));
                            arr_77 [i_12] [i_12] [i_12] |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_61 [i_24] [i_24] [i_24 - 1] [i_24 - 3] [i_24])) ? (arr_61 [i_24] [i_24] [i_24] [i_24 - 2] [9LL]) : (arr_61 [i_24] [i_24] [i_24 - 1] [i_24 - 3] [0ULL])));
                            arr_78 [8U] [i_12] [i_12] [i_12] [8U] = ((/* implicit */unsigned char) arr_18 [i_24 + 2]);
                        }
                    } 
                } 
                var_34 -= ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)16)) >> (((/* implicit */int) (unsigned char)30))));
            }
        }
        for (short i_25 = 1; i_25 < 9; i_25 += 4) 
        {
            arr_81 [i_8] = ((/* implicit */unsigned long long int) ((arr_16 [i_25 + 2] [i_25 + 2]) >> (((((/* implicit */int) (unsigned short)33592)) - (33572)))));
            var_35 = ((/* implicit */unsigned long long int) arr_39 [i_8]);
            arr_82 [i_8] &= ((/* implicit */unsigned long long int) arr_33 [i_25 + 3] [i_25 + 1]);
        }
        for (unsigned long long int i_26 = 0; i_26 < 12; i_26 += 4) 
        {
            arr_85 [(unsigned char)8] [(unsigned char)8] = ((/* implicit */unsigned short) ((((/* implicit */long long int) (+(arr_47 [i_26] [i_26] [i_26] [i_26])))) ^ ((+(arr_3 [i_26] [4U] [i_8])))));
            /* LoopNest 2 */
            for (unsigned short i_27 = 0; i_27 < 12; i_27 += 4) 
            {
                for (short i_28 = 0; i_28 < 12; i_28 += 1) 
                {
                    {
                        arr_91 [i_8] [i_8] [i_26] [(unsigned char)1] [i_27] [i_8] = ((/* implicit */long long int) ((unsigned long long int) (unsigned short)33609));
                        var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)31944)))))));
                        var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_39 [i_27])) ? (((/* implicit */int) arr_39 [i_28])) : (((/* implicit */int) arr_39 [i_8]))));
                        var_38 |= arr_34 [i_27] [i_26] [i_26] [i_26];
                    }
                } 
            } 
            var_39 = ((/* implicit */unsigned short) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-62))) : (3172167688031840922ULL)));
            /* LoopSeq 4 */
            for (unsigned int i_29 = 0; i_29 < 12; i_29 += 3) 
            {
                var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_80 [i_8] [i_8] [i_8])) ? (((/* implicit */int) arr_80 [i_8] [i_26] [i_26])) : (((/* implicit */int) arr_80 [i_8] [i_8] [i_29]))));
                arr_95 [i_26] [i_26] [i_8] [i_29] = ((/* implicit */unsigned char) ((((8702352580088148288ULL) <= (arr_2 [i_8] [i_29]))) ? (arr_20 [i_8] [i_8] [3U] [i_8]) : (((((/* implicit */unsigned long long int) arr_49 [i_26] [i_26] [i_29])) * (arr_2 [i_8] [i_26])))));
            }
            for (int i_30 = 0; i_30 < 12; i_30 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_31 = 0; i_31 < 12; i_31 += 1) 
                {
                    for (unsigned int i_32 = 2; i_32 < 9; i_32 += 4) 
                    {
                        {
                            var_41 &= ((/* implicit */unsigned int) (-(15178635590017323876ULL)));
                            var_42 = ((/* implicit */unsigned short) (-(4294967295U)));
                            var_43 = ((/* implicit */unsigned char) max((var_43), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-62))) : (199618243585395655LL))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned char i_33 = 1; i_33 < 9; i_33 += 1) 
                {
                    var_44 = ((/* implicit */long long int) min((var_44), (((/* implicit */long long int) (+(((/* implicit */int) arr_45 [i_8] [i_26] [i_26] [i_33] [i_33 - 1])))))));
                    arr_104 [i_8] |= ((/* implicit */unsigned long long int) arr_34 [i_8] [i_33 + 3] [1ULL] [i_30]);
                }
                /* LoopSeq 2 */
                for (unsigned int i_34 = 0; i_34 < 12; i_34 += 1) /* same iter space */
                {
                    var_45 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_49 [i_8] [i_26] [4LL])) ? (arr_26 [i_8] [i_26]) : (((/* implicit */unsigned long long int) arr_49 [3U] [i_26] [i_26]))));
                    var_46 = ((/* implicit */_Bool) (-(arr_94 [i_8] [i_8] [i_8])));
                    arr_107 [i_8] [i_8] [i_34] [(unsigned char)8] [i_30] = ((/* implicit */unsigned short) arr_86 [i_34] [(signed char)8] [i_30] [i_34]);
                }
                for (unsigned int i_35 = 0; i_35 < 12; i_35 += 1) /* same iter space */
                {
                    arr_111 [i_35] [i_26] [i_30] [i_35] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)155)) >> (((11014974478584960042ULL) - (11014974478584960011ULL)))));
                    var_47 = ((/* implicit */unsigned char) arr_94 [i_8] [i_30] [i_35]);
                    var_48 = ((/* implicit */long long int) min((var_48), (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-62)))))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_36 = 2; i_36 < 11; i_36 += 2) 
                {
                    for (unsigned char i_37 = 0; i_37 < 12; i_37 += 4) 
                    {
                        {
                            var_49 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) arr_99 [i_36])) ? (3U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_100 [i_8] [i_8] [i_30] [3U] [(unsigned short)10] [0U]))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-56)) + (((/* implicit */int) (unsigned short)33609)))))));
                            var_50 = ((/* implicit */long long int) (~(arr_49 [i_26] [i_30] [i_37])));
                        }
                    } 
                } 
            }
            for (unsigned int i_38 = 4; i_38 < 11; i_38 += 2) /* same iter space */
            {
                var_51 = ((/* implicit */unsigned int) ((arr_29 [i_38 - 3] [i_38 - 4]) | (((/* implicit */unsigned long long int) arr_40 [i_38 - 4]))));
                var_52 = ((/* implicit */short) ((arr_40 [i_38 - 1]) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)33618)))));
                var_53 *= ((/* implicit */unsigned int) arr_33 [i_8] [i_38]);
                var_54 = ((/* implicit */signed char) (+(((/* implicit */int) arr_89 [i_8] [i_26] [i_26] [i_26] [(signed char)4] [(_Bool)1]))));
            }
            for (unsigned int i_39 = 4; i_39 < 11; i_39 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned int i_40 = 0; i_40 < 12; i_40 += 4) 
                {
                    for (unsigned char i_41 = 0; i_41 < 12; i_41 += 4) 
                    {
                        {
                            var_55 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_99 [i_8])) || (((/* implicit */_Bool) arr_114 [i_8] [i_26] [i_39 - 4] [i_39 - 4] [i_40] [i_41]))))) % (((/* implicit */int) arr_100 [i_39 - 3] [i_39] [i_39] [(unsigned char)2] [i_39] [i_39 - 2]))));
                            var_56 = ((/* implicit */unsigned int) ((signed char) arr_52 [i_39] [(unsigned char)6] [i_40]));
                            var_57 = ((/* implicit */unsigned char) ((long long int) arr_10 [11ULL] [i_39 - 4] [i_39] [i_41]));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (signed char i_42 = 0; i_42 < 12; i_42 += 4) 
                {
                    var_58 = ((/* implicit */signed char) ((short) (unsigned short)31944));
                    var_59 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) (signed char)(-127 - 1)))));
                }
                for (int i_43 = 0; i_43 < 12; i_43 += 3) 
                {
                    arr_132 [(unsigned short)2] [(unsigned short)2] [9] [i_43] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_80 [i_39 - 3] [i_39 - 1] [i_39 - 3]))) ^ (arr_17 [i_39 - 3] [i_39 - 3] [i_39 - 2] [i_39 - 1])));
                    var_60 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)14187)) >> (((/* implicit */int) (signed char)11))));
                }
                var_61 = ((/* implicit */unsigned long long int) arr_44 [i_26]);
                var_62 = ((/* implicit */unsigned long long int) arr_25 [i_26]);
            }
        }
        var_63 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)75)) < (((/* implicit */int) (unsigned short)33591))));
    }
    for (long long int i_44 = 0; i_44 < 24; i_44 += 4) 
    {
        var_64 = ((/* implicit */signed char) arr_136 [i_44]);
        /* LoopNest 2 */
        for (unsigned int i_45 = 0; i_45 < 24; i_45 += 4) 
        {
            for (unsigned long long int i_46 = 0; i_46 < 24; i_46 += 4) 
            {
                {
                    arr_141 [i_44] [(signed char)18] [i_46] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) arr_134 [i_46]))) ? (-606003363) : ((+(((/* implicit */int) arr_139 [i_44] [i_44] [i_44]))))));
                    var_65 = ((/* implicit */signed char) arr_133 [i_44]);
                }
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_47 = 0; i_47 < 24; i_47 += 3) 
        {
            for (long long int i_48 = 0; i_48 < 24; i_48 += 2) 
            {
                for (_Bool i_49 = 0; i_49 < 1; i_49 += 1) 
                {
                    {
                        arr_150 [i_44] [i_47] [i_48] [i_48] |= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) 3268108483692227740ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)14186))) : (arr_145 [i_44] [i_44] [i_48] [(signed char)14])))));
                        var_66 += ((/* implicit */int) min((arr_136 [i_47]), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_137 [i_44])), (0U))))));
                        var_67 = ((/* implicit */signed char) max((var_67), (((/* implicit */signed char) ((min((2581466315U), (((/* implicit */unsigned int) (signed char)2)))) + (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) max((var_10), (((/* implicit */unsigned long long int) arr_135 [i_44]))))))))))));
                        var_68 ^= ((/* implicit */signed char) var_7);
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 1 */
    for (long long int i_50 = 1; i_50 < 18; i_50 += 4) 
    {
        var_69 |= ((/* implicit */signed char) arr_139 [i_50 + 1] [i_50 + 1] [i_50 + 2]);
        var_70 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)42187)) + (((/* implicit */int) (unsigned short)65535))));
    }
}
