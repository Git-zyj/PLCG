/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84854
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned int) ((long long int) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)39159)) : (((/* implicit */int) var_14)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))));
        var_20 = ((/* implicit */unsigned short) var_12);
    }
    for (long long int i_1 = 1; i_1 < 22; i_1 += 3) 
    {
        arr_4 [i_1] = var_13;
        var_21 = ((/* implicit */short) (~(((2111062325329920LL) << (((((/* implicit */int) (unsigned short)39159)) - (39158)))))));
    }
    for (unsigned char i_2 = 4; i_2 < 8; i_2 += 2) 
    {
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (~(((/* implicit */int) min((((/* implicit */unsigned short) (short)32767)), (arr_3 [i_2 - 4])))))))));
        arr_7 [i_2] = max((min((var_17), (((((/* implicit */long long int) ((/* implicit */int) var_14))) - (arr_6 [i_2]))))), (((/* implicit */long long int) var_4)));
        /* LoopSeq 2 */
        for (long long int i_3 = 2; i_3 < 8; i_3 += 3) /* same iter space */
        {
            arr_12 [i_2] = ((/* implicit */_Bool) arr_5 [i_2] [i_2]);
            arr_13 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */int) arr_3 [i_2 + 2])) << (((((-1347555846028176361LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_10))))) + (1347555846028176373LL))))) : (((/* implicit */int) ((unsigned char) arr_6 [i_2 + 3])))));
        }
        /* vectorizable */
        for (long long int i_4 = 2; i_4 < 8; i_4 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned char i_5 = 2; i_5 < 8; i_5 += 3) 
            {
                arr_20 [i_5] [i_4 + 3] [i_2] [i_5] = ((((/* implicit */_Bool) var_15)) ? (arr_2 [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [(signed char)4] [i_4] [7LL]))));
                var_23 = ((long long int) (-(1347555846028176361LL)));
            }
            arr_21 [1LL] [i_4] [i_4 - 1] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_8 [i_2] [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_17)))));
            var_24 = ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_14 [i_2] [i_4] [i_4 + 1]) != (((/* implicit */long long int) var_1)))))) : (((((/* implicit */long long int) ((/* implicit */int) var_11))) * (-4560418078807404347LL))));
            arr_22 [i_2 - 2] = ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned short) arr_0 [i_2] [i_4 - 1])))));
        }
        /* LoopSeq 3 */
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            arr_26 [(unsigned char)2] = ((/* implicit */unsigned short) ((arr_14 [6LL] [i_6 - 1] [i_6 - 1]) + (((((/* implicit */_Bool) 14LL)) ? (((((/* implicit */_Bool) var_9)) ? (arr_19 [i_2] [(unsigned short)3] [i_2] [6LL]) : (var_8))) : (268435455LL)))));
            var_25 = ((/* implicit */long long int) arr_17 [i_6 - 1] [i_2 + 3] [i_2]);
        }
        for (signed char i_7 = 0; i_7 < 11; i_7 += 3) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned short i_8 = 3; i_8 < 9; i_8 += 3) /* same iter space */
            {
                arr_33 [i_7] [i_7] = ((/* implicit */unsigned short) var_1);
                /* LoopSeq 2 */
                for (long long int i_9 = 1; i_9 < 10; i_9 += 1) /* same iter space */
                {
                    var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) -1347555846028176361LL))));
                    arr_37 [i_9 + 1] [i_7] [i_8] [i_8] [i_7] [i_2] = (((+(arr_19 [(unsigned char)4] [i_9] [i_9 - 1] [i_9 - 1]))) % (((/* implicit */long long int) ((/* implicit */int) var_10))));
                }
                for (long long int i_10 = 1; i_10 < 10; i_10 += 1) /* same iter space */
                {
                    var_27 = ((/* implicit */long long int) min((var_27), ((~(min((arr_10 [i_10] [i_2] [i_2]), (((/* implicit */long long int) 0U))))))));
                    var_28 ^= ((/* implicit */unsigned short) ((((_Bool) ((long long int) (short)-15))) ? (((((/* implicit */_Bool) arr_36 [i_10 + 1] [i_8 + 1] [i_2 - 3] [i_2])) ? (((((/* implicit */_Bool) arr_0 [i_10] [i_8 + 1])) ? (arr_19 [i_2 - 3] [i_7] [i_8] [3U]) : (arr_27 [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_16)), ((short)63))))))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                }
                /* LoopSeq 1 */
                for (signed char i_11 = 1; i_11 < 10; i_11 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_12 = 0; i_12 < 11; i_12 += 1) 
                    {
                        arr_45 [i_2 - 3] [i_7] [(signed char)0] [i_7] [i_12] = ((((/* implicit */_Bool) arr_30 [i_2])) ? (((((/* implicit */_Bool) var_12)) ? (max((arr_24 [i_2] [6LL] [i_8 + 2]), (((/* implicit */long long int) var_6)))) : (((((/* implicit */_Bool) arr_18 [(_Bool)1])) ? (var_9) : (var_8))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_6 [i_7])))));
                        var_29 -= ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_2 - 4] [i_11] [i_12])) ? (var_8) : (var_12)))) ? (-4433827320785139689LL) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_11 [(_Bool)1] [3LL] [i_12])))))) / (((long long int) arr_8 [i_8 - 2] [i_11 + 1] [i_8 - 2]))));
                        var_30 = ((/* implicit */long long int) min((var_30), (1452863697794920211LL)));
                        arr_46 [7LL] [i_2 + 3] [i_7] [i_8] [(_Bool)1] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_3 [(unsigned short)4]))))) ? (((/* implicit */int) arr_28 [i_7])) : (((((/* implicit */_Bool) max((arr_30 [i_7]), (((/* implicit */long long int) (unsigned short)26408))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_14))) != (var_8)))) : ((-(((/* implicit */int) (signed char)0))))))));
                    }
                    for (long long int i_13 = 0; i_13 < 11; i_13 += 2) 
                    {
                        arr_49 [i_2] [i_7] [i_7] [i_11] [i_13] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_10)) ? (arr_30 [i_2 + 2]) : (var_18))), (((/* implicit */long long int) var_7))));
                        var_31 &= arr_18 [i_2];
                        var_32 = ((/* implicit */unsigned short) -17LL);
                    }
                    arr_50 [i_7] = ((/* implicit */long long int) ((unsigned short) ((long long int) ((long long int) (unsigned short)62246))));
                    arr_51 [i_11] [i_8 - 3] [i_2] [i_2] [i_2] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (min((arr_2 [i_2]), (((/* implicit */long long int) ((arr_23 [i_8]) ? (((/* implicit */int) arr_40 [i_2] [i_7] [i_8 - 1] [i_11 - 1])) : (((/* implicit */int) var_11))))))) : (min((((((/* implicit */_Bool) var_18)) ? (arr_6 [0LL]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)239))))), (((/* implicit */long long int) arr_41 [i_2] [i_11 - 1] [i_11 - 1] [i_11]))))));
                }
                var_33 ^= ((/* implicit */signed char) ((_Bool) ((arr_15 [i_2 + 2] [i_2 + 2]) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_2 + 3] [i_2 - 1]))))));
            }
            for (unsigned short i_14 = 3; i_14 < 9; i_14 += 3) /* same iter space */
            {
                var_34 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) arr_47 [(_Bool)1] [i_7])))));
                var_35 *= ((/* implicit */unsigned int) (-(((/* implicit */int) max((arr_48 [6LL] [(short)8] [i_14] [(short)8] [6LL] [6LL] [i_2]), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_28 [i_2])) && (((/* implicit */_Bool) -7069616810293016558LL))))))))));
            }
            for (unsigned short i_15 = 3; i_15 < 9; i_15 += 3) /* same iter space */
            {
                var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_15)) ? ((+(((long long int) 139637976727552LL)))) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [(unsigned char)8])))));
                var_37 = ((/* implicit */long long int) min((var_37), (((/* implicit */long long int) ((unsigned short) (!(arr_52 [i_7] [i_2] [i_15 + 1] [i_2 - 2])))))));
                var_38 = ((/* implicit */long long int) min((var_38), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_17) * (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (_Bool)1))))))))))));
                /* LoopSeq 4 */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    arr_60 [i_2] [i_7] [i_2] [i_7] [i_16] [i_16] = ((/* implicit */long long int) var_14);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_17 = 2; i_17 < 10; i_17 += 3) /* same iter space */
                    {
                        var_39 = ((/* implicit */unsigned short) max((var_39), (((/* implicit */unsigned short) arr_6 [7LL]))));
                        arr_64 [i_17 - 1] [i_7] [i_15 + 2] [i_7] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) (signed char)90))) || (((/* implicit */_Bool) -9223372036854775788LL))));
                    }
                    for (long long int i_18 = 2; i_18 < 10; i_18 += 3) /* same iter space */
                    {
                        arr_67 [(unsigned short)9] [i_7] [i_16] [i_18 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_17)))) ? (max((1347555846028176356LL), (-1515214610218500108LL))) : (max((arr_59 [i_7] [i_15 + 1] [i_18] [i_7] [i_18 + 1]), (arr_47 [i_2] [i_2])))));
                        arr_68 [i_2 - 2] [i_15] [i_15 - 3] [i_7] [i_16] [i_16] [i_16] = ((/* implicit */unsigned char) ((long long int) (unsigned short)26408));
                        arr_69 [i_7] = ((((/* implicit */_Bool) 3960272314642411009LL)) ? (-3960272314642410988LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
                        arr_70 [i_2] [i_18 - 2] [i_7] [i_16] [i_7] [i_2 - 1] = ((/* implicit */_Bool) -3395831840838088954LL);
                    }
                    var_40 += ((/* implicit */long long int) (+(((/* implicit */int) (signed char)14))));
                }
                for (unsigned short i_19 = 1; i_19 < 7; i_19 += 2) 
                {
                    arr_75 [i_19] [i_7] [(unsigned char)2] [i_7] [i_2 + 3] = ((/* implicit */short) ((arr_18 [i_15 + 1]) == ((+(arr_18 [i_15 - 3])))));
                    var_41 = ((/* implicit */_Bool) max((var_41), (((/* implicit */_Bool) ((((/* implicit */_Bool) max(((+(3443462116671589853LL))), (((((/* implicit */_Bool) (unsigned short)14040)) ? (var_9) : (var_12)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_15]))) : (max((((/* implicit */long long int) var_14)), (((((/* implicit */_Bool) arr_31 [i_7] [3LL] [i_15] [(unsigned char)9])) ? (-15LL) : (5577091885411809202LL))))))))));
                }
                /* vectorizable */
                for (unsigned char i_20 = 0; i_20 < 11; i_20 += 3) 
                {
                    arr_80 [(short)4] [i_7] [i_15 - 2] [i_20] = ((/* implicit */_Bool) ((long long int) 3960272314642411015LL));
                    arr_81 [(signed char)5] [(short)3] [(short)3] [(short)3] [i_15] [i_7] = ((/* implicit */short) (+(arr_72 [i_2 - 4] [(unsigned char)3] [i_15 - 3] [i_15 - 3] [i_20])));
                }
                for (long long int i_21 = 0; i_21 < 11; i_21 += 1) 
                {
                    var_42 = ((/* implicit */_Bool) 12LL);
                    arr_84 [i_2] [i_2] [i_7] [i_15] [i_21] [i_21] = max(((~(((((/* implicit */_Bool) arr_82 [i_2] [i_7] [i_15] [i_21] [4LL] [i_15])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)26410))) : (-3960272314642411015LL))))), (min((((/* implicit */long long int) arr_32 [i_2 - 1] [i_2])), (((((/* implicit */_Bool) var_13)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_11))))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_22 = 1; i_22 < 10; i_22 += 2) 
                    {
                        arr_88 [i_7] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_15 + 2])) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_54 [i_7])) : (((/* implicit */int) arr_40 [i_7] [i_21] [i_15] [i_7])))) : (((((/* implicit */int) (signed char)-32)) - (((/* implicit */int) (signed char)96))))))));
                        var_43 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) ((unsigned short) -3670371698332663139LL)))) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)48974))))) : (max((-18LL), (min((arr_24 [i_7] [i_7] [i_7]), (arr_35 [i_7] [i_15] [i_21] [i_2])))))));
                    }
                }
            }
            arr_89 [i_2 - 4] [i_7] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((arr_29 [i_7] [i_2 - 1] [i_7]) > (((/* implicit */long long int) ((/* implicit */int) var_2))))))) != (((((/* implicit */_Bool) 3151253576210575443LL)) ? (-45LL) : (2233785415175766016LL)))));
            var_44 = ((((/* implicit */int) (signed char)90)) == ((+(((/* implicit */int) (signed char)-87)))));
        }
        for (signed char i_23 = 0; i_23 < 11; i_23 += 3) /* same iter space */
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (long long int i_24 = 1; i_24 < 9; i_24 += 2) 
            {
                arr_94 [i_2] = ((/* implicit */long long int) (!(arr_74 [i_2 - 3] [i_2 + 3] [i_2 + 1])));
                var_45 = arr_55 [i_2] [i_23] [i_23] [i_23];
            }
            for (unsigned char i_25 = 1; i_25 < 9; i_25 += 3) 
            {
                arr_99 [i_25] [i_23] [(unsigned char)9] = (+(arr_35 [i_25] [i_25 - 1] [i_2 - 4] [i_25]));
                arr_100 [i_25] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_2])) && (var_7)))), (arr_79 [8U] [i_23] [i_25 - 1] [i_25])))));
                arr_101 [(unsigned char)4] [i_25] [i_25] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((-1347555846028176361LL), (((/* implicit */long long int) arr_15 [i_2] [i_23]))))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_96 [i_25] [i_23] [i_2])) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_3 [i_2]))))) ? (max((((/* implicit */long long int) (short)-1572)), (max((arr_66 [i_2] [i_2] [i_2] [i_2] [i_25 + 2] [i_25] [i_25 + 2]), (((/* implicit */long long int) (_Bool)1)))))) : (((((/* implicit */_Bool) (((_Bool)1) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (short)-1572)))))) ? (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)32214))))) : (((arr_74 [i_2 + 2] [i_23] [i_25]) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)32))) : (-7157664564264290640LL))))));
                /* LoopSeq 1 */
                for (long long int i_26 = 2; i_26 < 9; i_26 += 1) 
                {
                    var_46 = ((/* implicit */long long int) ((signed char) ((unsigned short) ((((/* implicit */_Bool) arr_83 [(unsigned short)7] [i_25] [i_25 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (-7959577776222099871LL)))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_27 = 1; i_27 < 1; i_27 += 1) 
                    {
                        arr_109 [i_2] [2LL] [i_25] [i_2] [8LL] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_102 [i_2] [i_2] [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */int) arr_91 [i_27 - 1])) : (((/* implicit */int) var_4))));
                        arr_110 [i_25] [(unsigned short)7] [i_25] [i_23] [i_25] = ((/* implicit */unsigned short) var_1);
                    }
                    var_47 ^= ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) -3151253576210575443LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)1575))) : (9223372036854775807LL))))) - (((/* implicit */int) ((((/* implicit */_Bool) min((arr_18 [i_26]), (((/* implicit */long long int) var_15))))) || (((/* implicit */_Bool) var_10)))))));
                    arr_111 [i_2] [i_25] = ((((/* implicit */_Bool) max((max((((/* implicit */long long int) (unsigned short)14259)), (arr_104 [2LL] [i_25] [i_26 + 2] [(unsigned short)5]))), (((((/* implicit */_Bool) arr_11 [i_2 - 1] [i_23] [i_25 + 2])) ? (((/* implicit */long long int) var_5)) : (var_18)))))) ? ((((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_15))))) : (((((/* implicit */_Bool) arr_36 [i_2] [i_23] [i_2] [i_26])) ? (-7959577776222099876LL) : (((/* implicit */long long int) ((/* implicit */int) var_16))))))) : (((/* implicit */long long int) ((/* implicit */int) (((~(arr_35 [i_25 - 1] [i_23] [i_23] [i_25]))) == (min((15LL), (var_0))))))));
                    arr_112 [i_25] [i_23] [i_25] [i_26 + 2] = ((/* implicit */long long int) max((((arr_56 [i_23] [i_26 - 1] [i_26] [i_26 + 2]) ? (((/* implicit */int) arr_56 [i_25] [i_26 + 2] [i_26 + 2] [i_26 - 2])) : (((/* implicit */int) arr_56 [(unsigned short)10] [(unsigned short)10] [i_26] [i_26 - 2])))), ((-(((/* implicit */int) arr_56 [(unsigned char)5] [i_25] [i_26 - 1] [i_26 - 2]))))));
                }
            }
            /* vectorizable */
            for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
            {
                arr_117 [i_28] = ((/* implicit */unsigned char) arr_78 [i_2] [i_28] [i_28] [i_28] [(signed char)5] [i_2]);
                arr_118 [i_2] [i_28] [i_28] = ((/* implicit */unsigned short) (((+((-9223372036854775807LL - 1LL)))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_113 [i_2 - 2] [i_2 - 1])))));
                var_48 = ((/* implicit */long long int) arr_53 [i_28] [i_23] [i_28] [i_28]);
                var_49 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)48849))) >= (arr_8 [i_28] [i_23] [i_2 - 1]))))));
            }
            var_50 ^= ((/* implicit */unsigned int) arr_48 [i_23] [(signed char)1] [i_23] [i_2] [i_23] [i_2 - 1] [i_2]);
            var_51 = ((/* implicit */long long int) (((+(((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_65 [i_2 - 3] [i_2 + 1] [i_2 - 2] [i_2 + 2])))))));
        }
    }
    var_52 = ((/* implicit */unsigned char) 351696125870049906LL);
    var_53 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((var_11) ? (var_13) : (var_13))), (var_18)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) 122146038U))))))) : ((-(4503599627369472LL)))));
}
