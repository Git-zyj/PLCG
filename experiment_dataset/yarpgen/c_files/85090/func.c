/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85090
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
    var_14 = ((/* implicit */short) var_2);
    var_15 = ((/* implicit */_Bool) var_7);
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)56))))) ? (((var_4) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-36)))))));
        var_17 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (((/* implicit */unsigned long long int) arr_1 [4ULL])) : ((~(var_6)))));
        var_18 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((arr_0 [i_0]) ? (((/* implicit */int) (signed char)-53)) : (var_13))))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) (signed char)59)) ? (((/* implicit */int) (signed char)56)) : (((/* implicit */int) arr_2 [i_0] [7])))))));
            /* LoopSeq 2 */
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                arr_10 [i_0] [i_1] = ((/* implicit */int) var_11);
                var_20 = ((/* implicit */unsigned long long int) (signed char)56);
                arr_11 [i_0] [i_1] [i_0] = ((224716510U) << (((arr_9 [i_1 - 1] [i_1] [i_1 - 1]) + (300617498145891015LL))));
            }
            for (unsigned int i_3 = 4; i_3 < 21; i_3 += 2) 
            {
                var_21 &= ((/* implicit */int) ((unsigned long long int) arr_1 [i_3]));
                var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)221)))))));
                var_23 |= ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_12 [(_Bool)1] [(_Bool)1] [(_Bool)1])) - (var_2))) - ((~(((/* implicit */int) var_11))))));
                /* LoopSeq 1 */
                for (int i_4 = 2; i_4 < 20; i_4 += 3) 
                {
                    /* LoopSeq 4 */
                    for (signed char i_5 = 1; i_5 < 20; i_5 += 1) /* same iter space */
                    {
                        var_24 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11))));
                        arr_23 [i_0] [i_0] = ((/* implicit */short) ((long long int) arr_18 [i_0] [i_5 - 1]));
                        var_25 = ((/* implicit */_Bool) (~(((unsigned long long int) var_1))));
                        arr_24 [i_5] [6U] [i_3] [i_0] [i_5] [i_4] = ((/* implicit */short) ((((((/* implicit */int) (short)-1)) + (2147483647))) << (((((/* implicit */int) var_9)) - (31)))));
                    }
                    for (signed char i_6 = 1; i_6 < 20; i_6 += 1) /* same iter space */
                    {
                        var_26 -= ((/* implicit */_Bool) ((short) arr_4 [i_3 - 4]));
                        var_27 = ((/* implicit */unsigned int) ((short) ((((/* implicit */int) (short)18)) <= (-1648694504))));
                    }
                    for (signed char i_7 = 1; i_7 < 20; i_7 += 1) /* same iter space */
                    {
                        arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_8 [i_1] [i_3] [i_0] [i_7 + 1]))));
                        var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)640)) ? (var_2) : (((/* implicit */int) (_Bool)1))));
                        var_29 = ((/* implicit */_Bool) ((unsigned char) (signed char)-78));
                        var_30 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)102)) ? (7ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)17410))))) << ((((-(arr_16 [i_0] [(unsigned char)18] [i_3 - 1] [i_0] [i_3 - 1]))) - (3865842958U)))));
                    }
                    for (signed char i_8 = 1; i_8 < 20; i_8 += 1) /* same iter space */
                    {
                        var_31 = ((/* implicit */long long int) arr_15 [i_0] [i_1 - 1] [i_0]);
                        var_32 *= ((2782684434U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_0] [i_3 + 1] [i_1 - 1] [(_Bool)1] [i_8] [21LL]))));
                        var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)3973)) : (((/* implicit */int) (signed char)-18))))) ? (((((/* implicit */_Bool) -5136926529667025215LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)15785)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)15779)))))));
                        var_34 = ((/* implicit */int) var_12);
                        var_35 = ((/* implicit */_Bool) (-9223372036854775807LL - 1LL));
                    }
                    var_36 = var_1;
                    arr_34 [i_0] [i_0] [i_3] [i_0] [i_4 + 2] = ((/* implicit */unsigned long long int) (~(arr_8 [i_4 - 2] [17ULL] [i_0] [i_1 - 1])));
                }
            }
            arr_35 [i_0] [i_1 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-12)) ? (((/* implicit */int) (signed char)-53)) : (((/* implicit */int) (unsigned char)144))));
        }
        for (int i_9 = 3; i_9 < 19; i_9 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_10 = 1; i_10 < 21; i_10 += 1) 
            {
                arr_41 [i_0] [i_0] [i_0] [i_10] = ((/* implicit */unsigned int) var_5);
                arr_42 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)5930)) ? (((/* implicit */int) (short)16498)) : (var_2)));
            }
            /* LoopNest 2 */
            for (unsigned int i_11 = 0; i_11 < 22; i_11 += 2) 
            {
                for (signed char i_12 = 0; i_12 < 22; i_12 += 2) 
                {
                    {
                        var_37 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_17 [i_0] [i_9 + 3] [i_9] [20ULL] [i_9 + 3]))));
                        var_38 += ((/* implicit */unsigned int) ((_Bool) ((unsigned int) (short)32753)));
                    }
                } 
            } 
        }
        var_39 = ((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
    }
    for (int i_13 = 0; i_13 < 15; i_13 += 4) /* same iter space */
    {
        var_40 ^= ((/* implicit */_Bool) (-((+(max((((/* implicit */unsigned int) var_8)), (1073741568U)))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_14 = 0; i_14 < 15; i_14 += 1) 
        {
            var_41 = max(((~(var_4))), (((unsigned long long int) arr_43 [i_13])));
            var_42 += ((/* implicit */signed char) ((((/* implicit */int) min((arr_26 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] [i_14]), (((/* implicit */short) max(((signed char)-104), (((/* implicit */signed char) var_0)))))))) - ((~(((int) 5802242152451700666LL))))));
            arr_56 [i_13] [i_13] [i_14] = (-(((/* implicit */int) arr_53 [i_13] [i_13] [6LL])));
            var_43 -= max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_21 [i_13] [i_13] [i_13] [i_13] [i_13] [19])) : (((/* implicit */int) var_11)))), (min(((-(((/* implicit */int) var_3)))), (((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1)))))));
            var_44 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >> (((-625920646) + (625920654)))));
        }
        for (unsigned int i_15 = 0; i_15 < 15; i_15 += 2) 
        {
            arr_60 [i_13] [i_15] = (!(((/* implicit */_Bool) ((int) (signed char)103))));
            var_45 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-23981)) ? (((/* implicit */int) (signed char)-70)) : (((/* implicit */int) (unsigned char)95))));
            var_46 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_58 [(_Bool)1] [i_15] [i_15])))) ? (max((arr_58 [(short)10] [i_15] [i_15]), (arr_58 [i_13] [i_13] [i_13]))) : (((/* implicit */long long int) ((/* implicit */int) ((short) (_Bool)1))))));
        }
    }
    /* vectorizable */
    for (int i_16 = 0; i_16 < 15; i_16 += 4) /* same iter space */
    {
        /* LoopSeq 4 */
        for (signed char i_17 = 3; i_17 < 14; i_17 += 2) 
        {
            var_47 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_17 - 2] [i_17 + 1] [i_17 - 2] [i_17] [i_17])) ? (((/* implicit */unsigned int) var_2)) : (arr_16 [i_17 + 1] [i_17 - 3] [i_17] [i_17 - 1] [i_17 - 3])));
            /* LoopSeq 2 */
            for (signed char i_18 = 1; i_18 < 11; i_18 += 2) /* same iter space */
            {
                var_48 &= ((/* implicit */unsigned short) 625920618);
                /* LoopSeq 3 */
                for (short i_19 = 0; i_19 < 15; i_19 += 1) 
                {
                    var_49 = (_Bool)1;
                    var_50 *= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) arr_52 [4ULL])) : (((/* implicit */int) arr_49 [i_18 + 3]))))));
                }
                for (long long int i_20 = 2; i_20 < 14; i_20 += 3) 
                {
                    var_51 = ((/* implicit */_Bool) ((arr_12 [i_20 - 1] [i_17 - 3] [i_17 - 3]) ? (arr_16 [i_20] [i_20] [16ULL] [i_20 - 2] [i_20]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                    var_52 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_71 [i_18] [i_18 + 3] [i_18 - 1] [i_18 - 1] [i_18])) ? (arr_71 [i_18] [i_18 + 4] [i_18] [i_18 + 4] [i_18 + 4]) : (((/* implicit */unsigned long long int) arr_64 [i_18 - 1] [i_20 - 2]))));
                }
                for (unsigned long long int i_21 = 0; i_21 < 15; i_21 += 3) 
                {
                    var_53 = ((/* implicit */int) (~(arr_5 [i_18] [i_18 + 4] [i_18 + 4])));
                    var_54 = ((/* implicit */unsigned int) 7448825455930236860ULL);
                }
                var_55 = (!(((/* implicit */_Bool) ((long long int) (_Bool)1))));
                /* LoopNest 2 */
                for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
                {
                    for (int i_23 = 0; i_23 < 15; i_23 += 2) 
                    {
                        {
                            var_56 = ((/* implicit */short) (((_Bool)1) ? (arr_14 [i_18 + 4] [i_18 + 4] [i_23]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_17 - 2] [i_22 - 1] [i_18 + 3])))));
                            var_57 = ((/* implicit */int) max((var_57), (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
                        }
                    } 
                } 
            }
            for (signed char i_24 = 1; i_24 < 11; i_24 += 2) /* same iter space */
            {
                var_58 = ((/* implicit */_Bool) var_9);
                var_59 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_77 [i_16] [i_16] [i_16] [i_16]))) : (3507779977673345184ULL)));
                /* LoopSeq 1 */
                for (short i_25 = 2; i_25 < 14; i_25 += 3) 
                {
                    var_60 = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
                    var_61 = ((/* implicit */unsigned long long int) (signed char)(-127 - 1));
                }
                var_62 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))));
            }
        }
        for (long long int i_26 = 2; i_26 < 14; i_26 += 3) 
        {
            var_63 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_20 [i_26 + 1] [i_16] [i_16] [i_16] [i_16] [i_16])))) ? ((-(((/* implicit */int) (signed char)-114)))) : (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
            /* LoopNest 2 */
            for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
            {
                for (unsigned int i_28 = 3; i_28 < 14; i_28 += 2) 
                {
                    {
                        arr_97 [i_28] = ((/* implicit */long long int) (_Bool)1);
                        var_64 ^= ((/* implicit */unsigned char) arr_3 [i_16]);
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned short i_29 = 3; i_29 < 13; i_29 += 2) 
            {
                var_65 = ((/* implicit */signed char) max((var_65), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_54 [i_16] [i_16] [i_26 - 2])) ? (((/* implicit */int) arr_19 [i_16] [(short)1])) : (((/* implicit */int) var_7)))))));
                var_66 = ((/* implicit */long long int) max((var_66), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned int) 9U))))))));
                var_67 = ((/* implicit */signed char) (-(((/* implicit */int) arr_85 [i_16] [i_26 + 1] [i_16] [i_29 - 3]))));
                var_68 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 9U))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)114))) <= (65535U))))));
            }
            var_69 = ((/* implicit */_Bool) var_1);
            var_70 = ((/* implicit */signed char) max((var_70), (((/* implicit */signed char) ((_Bool) (_Bool)1)))));
        }
        for (long long int i_30 = 4; i_30 < 14; i_30 += 4) 
        {
            var_71 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_89 [i_30] [i_30 + 1])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-23)))));
            /* LoopNest 3 */
            for (int i_31 = 0; i_31 < 15; i_31 += 2) 
            {
                for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
                {
                    for (_Bool i_33 = 0; i_33 < 0; i_33 += 1) 
                    {
                        {
                            var_72 = ((/* implicit */_Bool) (~(625920641)));
                            var_73 = (!(((/* implicit */_Bool) var_11)));
                        }
                    } 
                } 
            } 
            var_74 = (_Bool)1;
        }
        for (long long int i_34 = 0; i_34 < 15; i_34 += 3) 
        {
            var_75 -= ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) var_5)) ? (arr_9 [11LL] [11LL] [i_34]) : (((/* implicit */long long int) ((/* implicit */int) var_3))))));
            /* LoopNest 2 */
            for (_Bool i_35 = 0; i_35 < 1; i_35 += 1) 
            {
                for (short i_36 = 1; i_36 < 13; i_36 += 2) 
                {
                    {
                        var_76 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [i_16] [i_36 - 1] [i_34])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                        var_77 = ((/* implicit */long long int) (-(((/* implicit */int) arr_82 [(short)10]))));
                        var_78 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)7))));
                    }
                } 
            } 
            var_79 *= ((/* implicit */signed char) var_6);
        }
        var_80 = ((/* implicit */unsigned int) min((var_80), (((/* implicit */unsigned int) (unsigned char)0))));
        var_81 = ((/* implicit */short) ((((/* implicit */int) arr_25 [i_16] [i_16] [i_16])) - (((/* implicit */int) arr_2 [i_16] [i_16]))));
        var_82 *= ((/* implicit */unsigned int) arr_118 [i_16] [i_16]);
        arr_120 [i_16] = ((/* implicit */unsigned char) (~(((unsigned long long int) -4743812604696032764LL))));
    }
}
