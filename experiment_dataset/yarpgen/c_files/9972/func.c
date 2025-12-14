/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9972
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
    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)252)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)219))) : (var_10))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)194)) < (((/* implicit */int) var_3))))))))) ? (min((13350373990714024912ULL), (((/* implicit */unsigned long long int) var_13)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)23))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_18 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((long long int) (_Bool)1)))));
        var_19 = ((/* implicit */int) var_13);
    }
    for (signed char i_1 = 0; i_1 < 25; i_1 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 25; i_2 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned short i_3 = 0; i_3 < 25; i_3 += 4) 
            {
                var_20 = ((/* implicit */signed char) min((((arr_8 [i_1] [i_2]) - (arr_8 [i_2] [i_3]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_7 [i_1])))))));
                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((unsigned long long int) (short)2802)))));
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned short i_5 = 0; i_5 < 25; i_5 += 3) 
                {
                    arr_15 [i_1] [i_2] [i_4] [i_4] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) (short)2778))) == ((-9223372036854775807LL - 1LL)))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_4))))) : (arr_5 [i_1])));
                    var_22 = ((/* implicit */_Bool) (+(var_11)));
                    var_23 = ((((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) arr_3 [i_1] [i_4])) : (((/* implicit */int) (short)-2803))))) ? (((unsigned long long int) (short)-2768)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_10 [i_1])))));
                    arr_16 [i_4] = ((/* implicit */int) ((long long int) arr_12 [i_4]));
                    var_24 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */int) (unsigned char)11)) : (var_9))));
                }
                for (unsigned short i_6 = 0; i_6 < 25; i_6 += 1) 
                {
                    var_25 -= ((/* implicit */unsigned long long int) (_Bool)1);
                    var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_16)))))));
                }
                for (unsigned short i_7 = 0; i_7 < 25; i_7 += 4) 
                {
                    var_27 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_11 [i_1] [i_2] [i_4] [i_7])), (max((arr_8 [i_4] [3ULL]), (((/* implicit */unsigned long long int) (unsigned char)187))))))) || (((/* implicit */_Bool) ((((/* implicit */int) max(((short)-2799), (var_12)))) ^ (((/* implicit */int) ((_Bool) (unsigned char)15))))))));
                    var_28 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_8)), (((((/* implicit */_Bool) (~(((/* implicit */int) var_16))))) ? (min((arr_8 [i_4] [i_7]), (((/* implicit */unsigned long long int) -2147483641)))) : (13350373990714024912ULL)))));
                }
                for (int i_8 = 0; i_8 < 25; i_8 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_9 = 0; i_9 < 25; i_9 += 4) 
                    {
                        var_29 = ((/* implicit */short) arr_13 [i_1] [i_2] [2ULL] [i_4] [i_8] [i_9]);
                        arr_27 [i_1] [11ULL] [11ULL] [i_4] [i_8] [(signed char)10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) (short)-1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (min((((/* implicit */unsigned long long int) (unsigned char)241)), (((14688245866878504215ULL) >> (((14688245866878504215ULL) - (14688245866878504187ULL)))))))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned short i_10 = 0; i_10 < 25; i_10 += 4) 
                    {
                        arr_30 [i_1] [i_4] [i_10] = ((/* implicit */short) ((unsigned short) (_Bool)1));
                        arr_31 [i_1] [i_2] [i_4] [i_8] = ((/* implicit */int) (!(((/* implicit */_Bool) var_13))));
                        var_30 *= ((/* implicit */long long int) min((arr_18 [i_1] [i_2] [i_8] [21U]), (((/* implicit */signed char) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))));
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        arr_35 [i_1] [i_2] [i_1] [i_8] [i_8] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9060129895873325034LL)) ? (((/* implicit */long long int) -477694399)) : (-1LL)));
                        var_31 = ((long long int) (short)(-32767 - 1));
                        arr_36 [i_1] [i_2] [i_2] [(unsigned char)16] [i_8] [(unsigned char)14] = ((/* implicit */short) (unsigned char)41);
                    }
                    /* vectorizable */
                    for (signed char i_12 = 0; i_12 < 25; i_12 += 4) 
                    {
                        arr_39 [i_2] [i_8] [i_12] = ((var_14) << (((((-9060129895873325043LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)250))))) + (9060129895873325324LL))));
                        var_32 = ((/* implicit */_Bool) ((unsigned long long int) (~(((/* implicit */int) (unsigned char)23)))));
                        arr_40 [8U] = ((/* implicit */long long int) (~(((int) (short)-2816))));
                    }
                    var_33 ^= ((_Bool) ((_Bool) (short)-750));
                }
                arr_41 [i_1] [i_2] [i_2] [i_4] = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) (_Bool)1))))));
            }
            var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)12))) ? (((/* implicit */int) (unsigned short)55560)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1054588530U)) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) (unsigned char)124))))) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) (unsigned char)16))))));
            var_35 &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((_Bool) -5800133155135218901LL)))))) ? (min((((/* implicit */int) (unsigned char)188)), (max((((/* implicit */int) arr_23 [(unsigned short)3] [i_1] [i_2] [12ULL])), (536870904))))) : (((((/* implicit */_Bool) ((var_4) ? (4294967279U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_1] [i_1] [i_1] [i_2])))))) ? ((+(((/* implicit */int) var_12)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_1] [i_2]))))))));
        }
        for (unsigned int i_13 = 0; i_13 < 25; i_13 += 3) /* same iter space */
        {
            var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)11)) ? (((((/* implicit */_Bool) var_13)) ? (11) : (((/* implicit */int) (unsigned short)30149)))) : (((/* implicit */int) arr_21 [i_1] [i_1] [i_1] [i_1]))))))));
            var_37 = ((/* implicit */signed char) min((var_37), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(85498563U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_19 [i_1] [i_1] [i_13] [i_13]), (((/* implicit */unsigned long long int) arr_38 [i_1] [i_1] [i_13] [i_13] [i_13])))))))) : (((/* implicit */int) ((short) ((_Bool) var_6)))))))));
            arr_44 [i_1] [i_1] [i_13] |= ((/* implicit */_Bool) 4116853947U);
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_14 = 0; i_14 < 25; i_14 += 4) 
            {
                arr_47 [(_Bool)1] [i_14] = ((/* implicit */long long int) ((unsigned long long int) ((unsigned int) arr_45 [i_14])));
                var_38 = ((/* implicit */signed char) arr_33 [i_1] [i_13] [i_13] [i_13] [i_13] [(unsigned char)23] [i_14]);
                /* LoopSeq 2 */
                for (unsigned int i_15 = 0; i_15 < 25; i_15 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_16 = 0; i_16 < 25; i_16 += 1) 
                    {
                        arr_52 [i_1] [i_13] [i_14] [i_15] [i_16] [i_16] = ((/* implicit */short) (~(((/* implicit */int) arr_18 [i_1] [14ULL] [i_14] [12]))));
                        arr_53 [i_1] [i_14] = ((/* implicit */unsigned long long int) -1LL);
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
                    {
                        arr_56 [i_1] [i_1] [i_13] [i_14] [i_15] [i_17] = ((/* implicit */unsigned int) ((_Bool) (!(((/* implicit */_Bool) 4776013864519018338ULL)))));
                        var_39 = ((/* implicit */short) max((var_39), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)247)) ? (((((/* implicit */_Bool) arr_18 [i_1] [i_13] [i_13] [i_15])) ? (2147483647) : (((/* implicit */int) var_16)))) : (((/* implicit */int) arr_49 [i_1] [i_1])))))));
                        arr_57 [i_1] [i_13] [5LL] [i_17] = ((/* implicit */unsigned char) (!((_Bool)1)));
                    }
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
                    {
                        arr_62 [i_13] [i_15] [i_18] = (-(((long long int) var_2)));
                        var_40 = ((/* implicit */unsigned char) max((var_40), (((/* implicit */unsigned char) ((_Bool) -680743507)))));
                        arr_63 [i_1] [i_1] [i_13] [i_14] [i_15] [i_15] [(signed char)2] = ((/* implicit */short) arr_4 [i_15]);
                    }
                    var_41 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) var_13))))));
                    var_42 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) -255204990))) ? (arr_20 [i_1] [i_1] [i_13] [i_14] [i_15] [i_15]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_14])))));
                }
                for (int i_19 = 0; i_19 < 25; i_19 += 3) 
                {
                    var_43 = ((/* implicit */long long int) max((var_43), (((/* implicit */long long int) ((unsigned short) arr_2 [i_1] [i_19])))));
                    var_44 = ((/* implicit */int) ((((/* implicit */_Bool) 9542597518877265296ULL)) ? (8522616801751213271LL) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_3))))));
                    arr_66 [i_1] [i_1] [i_1] [(unsigned short)5] [i_19] = ((/* implicit */unsigned char) (+(var_11)));
                }
            }
        }
        arr_67 [i_1] = ((/* implicit */unsigned short) 32767ULL);
    }
    for (long long int i_20 = 0; i_20 < 22; i_20 += 4) 
    {
        var_45 = ((/* implicit */unsigned char) max((max((((/* implicit */long long int) 17)), (max((1173110535171173250LL), (((/* implicit */long long int) arr_32 [i_20] [4ULL] [i_20])))))), (((/* implicit */long long int) (+(((/* implicit */int) arr_12 [i_20])))))));
        /* LoopSeq 1 */
        for (short i_21 = 0; i_21 < 22; i_21 += 4) 
        {
            var_46 = ((/* implicit */_Bool) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_37 [i_20] [i_20] [i_21] [i_21] [i_21]))))), (((unsigned char) arr_32 [i_20] [i_20] [i_21]))));
            /* LoopSeq 1 */
            for (unsigned long long int i_22 = 0; i_22 < 22; i_22 += 1) 
            {
                var_47 = ((/* implicit */unsigned char) min((var_47), (((/* implicit */unsigned char) 8))));
                var_48 = ((/* implicit */unsigned long long int) (short)-17907);
                /* LoopSeq 3 */
                for (unsigned long long int i_23 = 0; i_23 < 22; i_23 += 1) 
                {
                    /* LoopSeq 4 */
                    for (unsigned short i_24 = 0; i_24 < 22; i_24 += 1) /* same iter space */
                    {
                        arr_80 [i_22] [i_22] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_20] [i_20] [i_22] [i_20]))))) - (var_6)))) ? (max((((/* implicit */unsigned long long int) (-2147483647 - 1))), (max((((/* implicit */unsigned long long int) arr_29 [i_20] [i_21] [i_22] [i_23] [(short)23])), (11309611790533219765ULL))))) : (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_75 [(unsigned short)6] [(_Bool)1] [i_22] [i_23] [i_22])) ? (15869171829164408501ULL) : (((/* implicit */unsigned long long int) 140737487306752LL))))))));
                        var_49 = ((/* implicit */unsigned short) arr_69 [i_23]);
                    }
                    for (unsigned short i_25 = 0; i_25 < 22; i_25 += 1) /* same iter space */
                    {
                        var_50 = ((/* implicit */signed char) max((var_50), (((/* implicit */signed char) ((_Bool) (+(min((((/* implicit */unsigned long long int) var_7)), (10719857380854762376ULL)))))))));
                        var_51 = ((/* implicit */short) ((_Bool) ((_Bool) arr_68 [i_20])));
                    }
                    for (unsigned short i_26 = 0; i_26 < 22; i_26 += 1) /* same iter space */
                    {
                        arr_87 [i_22] [i_21] [i_22] [i_23] [i_26] = ((/* implicit */long long int) ((unsigned char) (!(((/* implicit */_Bool) arr_68 [i_23])))));
                        arr_88 [i_21] [i_22] [i_22] [i_22] = (!(((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) (-2147483647 - 1))))))));
                        var_52 |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_51 [i_20] [i_22]) : (7ULL)))) ? (arr_10 [i_20]) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) -1081897308)))))) / (((/* implicit */long long int) min((arr_22 [i_21] [i_22] [i_23] [i_26]), (arr_22 [i_20] [i_21] [i_22] [i_23]))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_27 = 0; i_27 < 22; i_27 += 1) /* same iter space */
                    {
                        var_53 |= ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)1))));
                        var_54 = (+(((unsigned long long int) -140737487306733LL)));
                    }
                    var_55 = ((/* implicit */long long int) arr_81 [i_20] [i_20] [i_20] [i_21] [i_21] [i_22] [i_23]);
                    var_56 = ((/* implicit */long long int) arr_32 [i_20] [i_22] [i_23]);
                }
                for (unsigned char i_28 = 0; i_28 < 22; i_28 += 1) 
                {
                    arr_94 [i_22] = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((((/* implicit */_Bool) arr_58 [i_20] [i_20] [i_20] [i_21] [i_21] [i_21])) ? (18446744073709551612ULL) : (((/* implicit */unsigned long long int) -32LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 2147483647)))))));
                    var_57 = ((/* implicit */short) min((var_57), (((/* implicit */short) max((((int) max(((_Bool)0), (arr_86 [i_20] [i_21] [(unsigned char)12] [3] [i_28])))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)8191))))))))));
                    arr_95 [i_22] = var_16;
                    var_58 -= ((/* implicit */long long int) arr_45 [i_20]);
                }
                for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                {
                    var_59 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (min((((/* implicit */int) var_12)), (var_11))) : (((/* implicit */int) ((signed char) arr_29 [i_20] [i_20] [i_21] [i_22] [i_29])))))) ? (max((max((11287422530004794757ULL), (((/* implicit */unsigned long long int) var_16)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_75 [i_20] [(_Bool)1] [i_20] [i_22] [i_22])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 140737488353280LL)) && (((/* implicit */_Bool) (short)15434)))))))));
                    arr_98 [i_20] [i_21] [i_22] [i_22] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)37817)) ? (((/* implicit */int) (short)-10988)) : (((/* implicit */int) (short)-2989))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (var_9) : (((/* implicit */int) arr_78 [i_20] [11U] [i_22] [i_22] [i_29]))))) : (var_14))) >> (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_4 [i_29]))))) : (var_1))) + (61667LL)))));
                }
            }
        }
    }
    for (int i_30 = 0; i_30 < 18; i_30 += 1) 
    {
        var_60 = ((long long int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_38 [i_30] [i_30] [i_30] [i_30] [i_30])) : (var_9))) - (((/* implicit */int) ((unsigned char) arr_93 [i_30] [i_30] [i_30] [11LL])))));
        /* LoopSeq 1 */
        for (unsigned char i_31 = 0; i_31 < 18; i_31 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_32 = 0; i_32 < 18; i_32 += 1) 
            {
                arr_106 [i_31] [i_31] [i_32] |= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_93 [i_30] [i_31] [i_30] [i_32]))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_33 = 0; i_33 < 18; i_33 += 1) 
                {
                    var_61 += ((/* implicit */unsigned char) var_0);
                    var_62 = ((/* implicit */signed char) ((short) arr_4 [i_30]));
                }
                var_63 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_9)), (arr_20 [i_30] [i_30] [i_30] [i_31] [i_32] [i_32])));
                var_64 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) arr_81 [i_30] [i_30] [i_31] [i_32] [i_32] [i_32] [i_32])))))) : (((((/* implicit */_Bool) var_15)) ? (arr_81 [i_30] [i_30] [(unsigned short)5] [i_30] [i_31] [i_32] [i_32]) : (arr_81 [i_30] [i_30] [i_30] [21] [i_31] [i_32] [i_32])))));
            }
            for (unsigned long long int i_34 = 0; i_34 < 18; i_34 += 4) 
            {
                arr_111 [i_30] [i_30] [i_31] [i_34] = ((/* implicit */short) (+(((/* implicit */int) (short)10987))));
                arr_112 [i_30] [i_30] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((_Bool) arr_65 [i_30] [i_31] [i_34] [i_34])))));
            }
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_35 = 0; i_35 < 18; i_35 += 3) 
            {
                var_65 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_50 [i_30])) ? (2403468447565934324ULL) : (10237600000819316537ULL)));
                arr_116 [i_30] [i_30] [i_31] [i_35] = ((/* implicit */int) var_1);
            }
            for (unsigned int i_36 = 0; i_36 < 18; i_36 += 4) 
            {
                arr_121 [i_30] [i_31] [i_36] = ((/* implicit */short) 2147483647);
                var_66 = ((/* implicit */unsigned short) (-(288230376134934528ULL)));
                var_67 ^= ((/* implicit */_Bool) max((((/* implicit */signed char) (!(var_4)))), (((signed char) var_6))));
            }
        }
    }
}
