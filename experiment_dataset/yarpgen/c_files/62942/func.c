/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62942
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_2 = 2; i_2 < 23; i_2 += 3) 
            {
                var_11 ^= (+(min((((unsigned long long int) arr_1 [(signed char)14])), (arr_2 [i_2 - 2]))));
                /* LoopSeq 2 */
                for (signed char i_3 = 1; i_3 < 23; i_3 += 1) /* same iter space */
                {
                    var_12 = ((/* implicit */unsigned long long int) ((signed char) ((unsigned long long int) arr_6 [i_0] [i_3 + 2] [i_0] [i_3])));
                    var_13 = ((/* implicit */signed char) (((+(((((/* implicit */_Bool) 6503551570548335410ULL)) ? (6503551570548335410ULL) : (arr_2 [i_1]))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                }
                for (signed char i_4 = 1; i_4 < 23; i_4 += 1) /* same iter space */
                {
                    var_14 -= ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */int) (signed char)-53)) < (((/* implicit */int) var_1)))));
                    var_15 = ((/* implicit */signed char) (+(arr_8 [i_0] [(signed char)1] [i_0] [i_4])));
                }
                arr_10 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0] [(signed char)17]))))))));
            }
            var_16 ^= ((/* implicit */signed char) min((((((/* implicit */_Bool) max((arr_4 [i_1] [i_1] [i_0] [0ULL]), (var_10)))) ? (((((/* implicit */_Bool) (signed char)86)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (6855301526770352052ULL))) : (2ULL))), (max((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-63))) % (arr_4 [i_0] [i_0] [i_0] [i_1]))), ((-(arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
            arr_11 [i_0] [i_0] = ((/* implicit */signed char) max(((+(18446744073709551613ULL))), ((+(arr_8 [i_0] [i_0] [i_0] [i_0])))));
        }
        arr_12 [i_0] = (+(9327656774792895643ULL));
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 1) 
        {
            for (signed char i_7 = 0; i_7 < 22; i_7 += 1) 
            {
                for (signed char i_8 = 3; i_8 < 18; i_8 += 4) 
                {
                    {
                        var_17 *= min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [(signed char)17] [i_8 - 3] [i_8] [(signed char)3] [i_8 + 3])) && (((/* implicit */_Bool) arr_9 [i_8] [i_8 + 3] [i_8] [i_8] [i_8 - 3]))))), (arr_8 [i_6] [i_8 + 4] [i_8] [(signed char)20]));
                        var_18 ^= ((/* implicit */signed char) (~(((/* implicit */int) (signed char)127))));
                        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_8 - 3] [i_8 - 2] [i_8 - 3] [(signed char)21])) ? (((/* implicit */int) arr_14 [i_8 + 2] [i_5])) : (((/* implicit */int) arr_14 [i_8 + 4] [i_5]))))) ? ((~(4289189661473805761ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_14 [i_8 - 1] [i_5]))))));
                        var_20 = 2047ULL;
                    }
                } 
            } 
        } 
        var_21 = max(((+(arr_3 [i_5] [i_5] [i_5]))), (min((arr_3 [i_5] [i_5] [i_5]), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_7 [i_5] [i_5] [i_5] [i_5] [i_5]))))))));
        var_22 += arr_7 [i_5] [i_5] [i_5] [i_5] [(signed char)24];
        var_23 = (-(((((/* implicit */_Bool) min((arr_21 [(signed char)4] [i_5] [i_5]), (((/* implicit */unsigned long long int) var_1))))) ? (11286178763645312585ULL) : (arr_1 [i_5]))));
        /* LoopNest 3 */
        for (unsigned long long int i_9 = 1; i_9 < 18; i_9 += 1) 
        {
            for (signed char i_10 = 4; i_10 < 18; i_10 += 1) 
            {
                for (unsigned long long int i_11 = 2; i_11 < 21; i_11 += 3) 
                {
                    {
                        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((((/* implicit */_Bool) min((arr_20 [0ULL] [i_9 + 4] [(signed char)14]), (((/* implicit */unsigned long long int) max(((signed char)-10), ((signed char)86))))))) ? ((-(max((arr_8 [i_9] [i_9] [i_9] [i_11 - 1]), (arr_19 [i_9]))))) : ((~((~(14611652060223233393ULL)))))))));
                        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-28)) ? (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_27 [i_5]))))), (min((((/* implicit */unsigned long long int) (signed char)(-127 - 1))), (var_4))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)9), ((signed char)-86)))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_12 = 0; i_12 < 13; i_12 += 3) 
    {
        arr_35 [i_12] |= 6222110805506184678ULL;
        var_26 = (+(arr_31 [i_12] [i_12] [i_12] [i_12]));
    }
    var_27 = ((signed char) max((var_7), (min((var_7), (var_1)))));
    /* LoopSeq 3 */
    for (unsigned long long int i_13 = 1; i_13 < 18; i_13 += 3) 
    {
        var_28 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_7 [i_13] [(signed char)3] [(signed char)3] [10ULL] [i_13 + 1]))) ? (arr_5 [(signed char)18] [(signed char)18]) : (max((18446744073709549568ULL), (arr_21 [12ULL] [7ULL] [i_13])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) arr_14 [i_13 + 2] [8ULL]))))))) : (((unsigned long long int) max(((signed char)(-127 - 1)), (var_6))))));
        var_29 ^= ((/* implicit */signed char) max((((unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)86))) : (arr_28 [i_13] [i_13 + 1])))), (6911613648108114871ULL)));
        /* LoopSeq 4 */
        for (unsigned long long int i_14 = 0; i_14 < 20; i_14 += 1) 
        {
            arr_40 [i_14] [i_14] [1ULL] = ((/* implicit */signed char) ((((unsigned long long int) (signed char)-115)) * (((((/* implicit */_Bool) 6485759435559205652ULL)) ? ((-(9789548827797486056ULL))) : (((7109381155821759169ULL) * (0ULL)))))));
            arr_41 [i_14] [i_13 + 1] [i_13] = max((arr_23 [(signed char)13] [2ULL] [i_14] [i_14]), (((/* implicit */unsigned long long int) (signed char)(-127 - 1))));
        }
        for (signed char i_15 = 0; i_15 < 20; i_15 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_16 = 3; i_16 < 17; i_16 += 1) 
            {
                var_30 |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_30 [i_13 + 1] [i_15] [2ULL] [2ULL] [2ULL] [(signed char)2]))));
                /* LoopSeq 4 */
                for (unsigned long long int i_17 = 0; i_17 < 20; i_17 += 1) /* same iter space */
                {
                    arr_50 [16ULL] |= ((/* implicit */unsigned long long int) ((signed char) arr_1 [i_16]));
                    var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) ((unsigned long long int) ((signed char) 3933096797855244217ULL))))));
                    var_32 = min((((((/* implicit */_Bool) min((arr_19 [i_13]), (((/* implicit */unsigned long long int) (signed char)-127))))) ? (((unsigned long long int) arr_26 [i_15] [i_15] [i_15])) : (((unsigned long long int) 11943192503161216206ULL)))), (18446744073709551615ULL));
                    var_33 = ((/* implicit */signed char) min(((+(((/* implicit */int) arr_36 [i_13] [i_16 + 1])))), (((/* implicit */int) ((((/* implicit */int) arr_7 [i_13] [i_13 + 1] [i_13] [(signed char)6] [i_15])) == (((/* implicit */int) arr_7 [i_13 - 1] [i_13 - 1] [i_15] [i_15] [i_15])))))));
                }
                /* vectorizable */
                for (unsigned long long int i_18 = 0; i_18 < 20; i_18 += 1) /* same iter space */
                {
                    arr_53 [i_15] [i_15] [i_13 + 1] [i_18] [i_16] = ((/* implicit */signed char) (~(arr_5 [i_15] [i_18])));
                    var_34 |= ((signed char) (+(((/* implicit */int) (signed char)51))));
                    var_35 = ((/* implicit */unsigned long long int) min((var_35), (((arr_16 [i_15]) - (arr_16 [i_16 + 2])))));
                }
                /* vectorizable */
                for (signed char i_19 = 2; i_19 < 19; i_19 += 3) 
                {
                    arr_56 [(signed char)9] [i_15] [i_15] [i_15] [i_16 + 3] [(signed char)11] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_2 [i_19]))));
                    /* LoopSeq 1 */
                    for (signed char i_20 = 1; i_20 < 18; i_20 += 1) 
                    {
                        var_36 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)114))));
                        arr_59 [i_13 - 1] [i_15] [12ULL] |= ((/* implicit */signed char) 0ULL);
                    }
                    var_37 -= ((/* implicit */unsigned long long int) (signed char)-44);
                    arr_60 [i_19] [i_15] [i_15] [i_19 - 2] = ((/* implicit */unsigned long long int) arr_27 [i_16]);
                    arr_61 [i_13] [6ULL] [i_13 + 2] |= ((signed char) arr_55 [0ULL] [i_16 + 1]);
                }
                /* vectorizable */
                for (unsigned long long int i_21 = 4; i_21 < 17; i_21 += 2) 
                {
                    arr_66 [7ULL] [(signed char)3] [i_15] [i_21 - 2] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-60))) != (arr_28 [i_13 - 1] [i_16 - 1])));
                    var_38 |= arr_31 [i_13] [(signed char)0] [i_16] [i_21 - 2];
                    /* LoopSeq 1 */
                    for (unsigned long long int i_22 = 0; i_22 < 20; i_22 += 4) 
                    {
                        var_39 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_22 [i_13] [i_13] [i_16 - 3])) ? (((/* implicit */int) arr_22 [i_13] [i_13] [i_16 - 3])) : (((/* implicit */int) arr_22 [i_15] [i_16] [i_16 - 3]))));
                        var_40 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_38 [6ULL])) : (((/* implicit */int) (signed char)-1)))) < (((/* implicit */int) ((((/* implicit */_Bool) 576179277326712832ULL)) || (((/* implicit */_Bool) 16491504477551537072ULL)))))));
                    }
                }
                /* LoopSeq 1 */
                for (signed char i_23 = 2; i_23 < 19; i_23 += 2) 
                {
                    var_41 = ((/* implicit */signed char) max((var_41), (((/* implicit */signed char) arr_67 [i_13] [i_13 + 2] [i_13] [i_15] [i_23] [i_16] [12ULL]))));
                    /* LoopSeq 3 */
                    for (signed char i_24 = 2; i_24 < 17; i_24 += 1) 
                    {
                        arr_73 [i_13] [i_15] [i_16] [i_15] = arr_39 [i_13];
                        var_42 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) (signed char)65)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)86))) : (4611683819404132352ULL))));
                    }
                    /* vectorizable */
                    for (signed char i_25 = 2; i_25 < 19; i_25 += 1) /* same iter space */
                    {
                        var_43 = ((((/* implicit */_Bool) arr_45 [i_15])) ? (((((/* implicit */_Bool) arr_36 [i_16] [(signed char)1])) ? (9789548827797486056ULL) : (arr_25 [i_15]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)55))));
                        var_44 *= ((/* implicit */unsigned long long int) arr_15 [i_23]);
                        arr_77 [i_15] [i_15] = (i_15 % 2 == zero) ? (((/* implicit */signed char) (~(((arr_63 [6ULL] [i_23] [i_16 - 1] [i_23]) >> (((((/* implicit */int) arr_49 [i_15] [i_13 + 2] [i_15] [i_15])) + (134)))))))) : (((/* implicit */signed char) (~(((arr_63 [6ULL] [i_23] [i_16 - 1] [i_23]) >> (((((((/* implicit */int) arr_49 [i_15] [i_13 + 2] [i_15] [i_15])) + (134))) - (78))))))));
                        arr_78 [i_15] [i_15] [i_15] [i_15] [i_23] [i_25] [(signed char)9] = arr_30 [i_13] [i_13] [i_13 - 1] [i_13] [i_13] [i_15];
                    }
                    for (signed char i_26 = 2; i_26 < 19; i_26 += 1) /* same iter space */
                    {
                        var_45 = ((/* implicit */unsigned long long int) ((signed char) (signed char)-60));
                        arr_81 [i_13] [i_15] [i_15] [i_16] [i_23] [i_26] = ((/* implicit */unsigned long long int) min((max(((signed char)81), ((signed char)-116))), (arr_22 [i_13] [i_15] [i_26])));
                        var_46 = ((/* implicit */unsigned long long int) min((var_46), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (signed char)-53)) : (((/* implicit */int) (signed char)-29)))), (((/* implicit */int) ((signed char) ((arr_70 [14ULL] [i_15] [i_16] [i_23 - 1] [i_23] [i_16]) << (((13711849991846575558ULL) - (13711849991846575543ULL))))))))))));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_27 = 0; i_27 < 20; i_27 += 2) 
                    {
                        var_47 = arr_74 [i_13] [i_15];
                        arr_85 [i_15] = arr_28 [i_13] [i_13 + 2];
                    }
                }
                var_48 = ((/* implicit */signed char) max((var_48), (((/* implicit */signed char) ((unsigned long long int) (~(((/* implicit */int) arr_69 [i_13 - 1] [i_16 - 1]))))))));
            }
            for (unsigned long long int i_28 = 0; i_28 < 20; i_28 += 1) 
            {
                var_49 = (+(var_0));
                /* LoopNest 2 */
                for (signed char i_29 = 0; i_29 < 20; i_29 += 3) 
                {
                    for (signed char i_30 = 0; i_30 < 20; i_30 += 1) 
                    {
                        {
                            arr_95 [i_15] = ((/* implicit */unsigned long long int) arr_54 [i_15]);
                            arr_96 [i_13 + 2] [i_15] [6ULL] |= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((unsigned long long int) arr_91 [i_13] [i_15] [0ULL] [(signed char)16])), (min((arr_23 [i_13] [i_15] [i_29] [(signed char)13]), (arr_67 [i_13] [i_15] [i_28] [i_28] [(signed char)0] [i_29] [i_30])))))) ? (((arr_19 [i_13 + 2]) * (((13711849991846575558ULL) / (15237021229340250608ULL))))) : (((((/* implicit */_Bool) (~(arr_39 [i_29])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)-32)) : (((/* implicit */int) (signed char)-98))))) : (((unsigned long long int) arr_63 [i_30] [i_28] [i_15] [i_13]))))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (signed char i_31 = 1; i_31 < 17; i_31 += 1) 
            {
                var_50 *= ((signed char) ((((/* implicit */_Bool) arr_88 [i_13] [i_15] [i_15] [i_15])) ? (18446744073709551613ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_79 [i_13 + 1] [i_13 - 1] [4ULL] [4ULL] [i_31] [i_31] [i_31])))));
                var_51 = ((/* implicit */signed char) max((var_51), ((signed char)-8)));
            }
            arr_99 [i_15] = ((unsigned long long int) 14977641488535858863ULL);
            /* LoopSeq 1 */
            for (unsigned long long int i_32 = 0; i_32 < 20; i_32 += 1) 
            {
                arr_102 [i_15] [i_15] [i_15] = ((/* implicit */signed char) ((6491820949706545197ULL) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 677616549387242891ULL)) ? (((/* implicit */int) (signed char)-47)) : (((/* implicit */int) ((signed char) 3329079397022215529ULL))))))));
                arr_103 [i_13] [i_15] [i_15] [i_32] = max((((/* implicit */unsigned long long int) (signed char)(-127 - 1))), (4536332435103585060ULL));
                /* LoopNest 2 */
                for (unsigned long long int i_33 = 0; i_33 < 20; i_33 += 3) 
                {
                    for (signed char i_34 = 0; i_34 < 20; i_34 += 1) 
                    {
                        {
                            var_52 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) max((arr_75 [2ULL] [(signed char)12] [i_32] [16ULL] [(signed char)16]), (arr_19 [i_15]))))));
                            var_53 = (-(18446744073709551615ULL));
                        }
                    } 
                } 
            }
            var_54 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(max((((/* implicit */unsigned long long int) arr_68 [i_13] [8ULL] [i_15] [i_15] [i_13] [i_15] [i_13])), (arr_63 [i_13] [i_13] [i_15] [i_15]))))))));
        }
        for (unsigned long long int i_35 = 0; i_35 < 20; i_35 += 4) 
        {
            var_55 ^= ((/* implicit */unsigned long long int) arr_52 [i_13] [i_13] [i_13 - 1] [i_13] [(signed char)11]);
            var_56 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_35] [i_35] [i_13] [i_13 - 1] [(signed char)14])) ? (((/* implicit */int) arr_7 [23ULL] [i_35] [i_35] [i_13 + 2] [0ULL])) : (((/* implicit */int) arr_7 [i_35] [i_35] [i_35] [i_13 + 1] [i_13 - 1]))))) != (arr_75 [i_13] [i_13] [i_13 + 2] [i_35] [i_35])));
        }
        for (signed char i_36 = 4; i_36 < 19; i_36 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_37 = 0; i_37 < 20; i_37 += 1) 
            {
                for (unsigned long long int i_38 = 0; i_38 < 20; i_38 += 2) 
                {
                    {
                        arr_119 [i_37] = max((((/* implicit */unsigned long long int) (signed char)-1)), (15566948328710975399ULL));
                        var_57 = (i_37 % 2 == zero) ? (((/* implicit */signed char) max((((((unsigned long long int) (signed char)-20)) >> (((arr_13 [i_37] [i_36 - 2]) - (16837128108073262226ULL))))), (((((/* implicit */_Bool) arr_75 [i_13] [i_13 + 2] [i_13 - 1] [i_13 - 1] [i_36 + 1])) ? (max((arr_58 [i_13] [i_36] [i_13] [i_13] [i_37] [(signed char)2] [i_38]), (17134434493358342222ULL))) : (max((17134434493358342222ULL), (9ULL)))))))) : (((/* implicit */signed char) max((((((unsigned long long int) (signed char)-20)) >> (((((arr_13 [i_37] [i_36 - 2]) - (16837128108073262226ULL))) - (5936289838837264375ULL))))), (((((/* implicit */_Bool) arr_75 [i_13] [i_13 + 2] [i_13 - 1] [i_13 - 1] [i_36 + 1])) ? (max((arr_58 [i_13] [i_36] [i_13] [i_13] [i_37] [(signed char)2] [i_38]), (17134434493358342222ULL))) : (max((17134434493358342222ULL), (9ULL))))))));
                    }
                } 
            } 
            var_58 += min((((unsigned long long int) 8657195245912065558ULL)), (((/* implicit */unsigned long long int) ((((((/* implicit */int) ((signed char) (signed char)-115))) + (2147483647))) << (((arr_0 [i_13 + 2]) - (11100092490904580857ULL)))))));
            arr_120 [i_13] [i_36 - 2] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((signed char) (signed char)98))), (max((min((arr_37 [i_36] [i_36]), (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) ((signed char) (signed char)98)))))));
        }
    }
    for (signed char i_39 = 2; i_39 < 21; i_39 += 3) 
    {
        var_59 = ((/* implicit */signed char) (~(((arr_3 [4ULL] [i_39 + 1] [i_39 + 2]) + (1876210338206778886ULL)))));
        var_60 = ((/* implicit */signed char) min((var_60), (((/* implicit */signed char) min((min((arr_5 [(signed char)0] [i_39 - 1]), (arr_0 [i_39 + 1]))), (arr_1 [i_39]))))));
    }
    /* vectorizable */
    for (unsigned long long int i_40 = 1; i_40 < 23; i_40 += 2) 
    {
        var_61 *= ((/* implicit */unsigned long long int) ((signed char) ((signed char) arr_6 [i_40] [(signed char)17] [i_40] [i_40])));
        var_62 = ((/* implicit */unsigned long long int) min((var_62), (((/* implicit */unsigned long long int) ((arr_5 [18ULL] [i_40 + 1]) != (arr_5 [(signed char)18] [i_40 + 1]))))));
        arr_125 [i_40 + 2] = ((/* implicit */unsigned long long int) (signed char)(-127 - 1));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_41 = 0; i_41 < 20; i_41 += 2) 
    {
        for (signed char i_42 = 2; i_42 < 19; i_42 += 3) 
        {
            for (signed char i_43 = 0; i_43 < 20; i_43 += 2) 
            {
                {
                    var_63 = ((/* implicit */unsigned long long int) min((var_63), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)31)) % (((/* implicit */int) (signed char)42)))))));
                    var_64 = ((/* implicit */signed char) min(((-(arr_130 [i_42] [i_42] [i_42 + 1]))), (((/* implicit */unsigned long long int) ((arr_37 [10ULL] [14ULL]) != (arr_130 [i_41] [i_41] [i_42 - 2]))))));
                    var_65 = arr_72 [i_43] [i_42] [i_42] [i_42] [i_41] [i_41];
                    var_66 -= max((max((arr_94 [i_42] [i_41] [(signed char)4] [i_41]), (arr_36 [i_42 - 2] [i_42 - 2]))), (((/* implicit */signed char) ((((/* implicit */int) (signed char)-85)) > (((/* implicit */int) arr_36 [i_42] [i_42 + 1]))))));
                }
            } 
        } 
    } 
}
