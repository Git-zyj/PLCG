/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84384
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
    var_19 = ((/* implicit */signed char) (unsigned short)65535);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_20 += ((/* implicit */long long int) (-(((/* implicit */int) min((arr_1 [(signed char)6]), (arr_1 [(signed char)4]))))));
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((unsigned short) 9223372036854775800LL));
    }
    for (int i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((/* implicit */int) arr_3 [i_1])))));
        /* LoopSeq 3 */
        for (long long int i_2 = 1; i_2 < 21; i_2 += 3) 
        {
            var_21 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((arr_8 [i_2 - 1] [i_2]) ? (((/* implicit */int) arr_8 [i_2 - 1] [i_2])) : (((/* implicit */int) (short)-12616))))), (min((((/* implicit */unsigned long long int) 1908368689U)), (arr_5 [i_2 - 1] [i_2 + 1])))));
            arr_11 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) (~(((/* implicit */int) var_8)))))) ? (((((/* implicit */int) var_3)) + (((((/* implicit */int) (unsigned char)10)) + (((/* implicit */int) arr_9 [i_1])))))) : (((/* implicit */int) min((var_3), (((/* implicit */unsigned char) var_8)))))));
            arr_12 [i_1] [i_2] = ((signed char) arr_4 [i_1] [i_1]);
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 22; i_4 += 4) 
                {
                    for (int i_5 = 0; i_5 < 22; i_5 += 3) 
                    {
                        {
                            arr_20 [i_2] [i_2] = ((/* implicit */long long int) ((unsigned long long int) ((int) arr_17 [i_4] [i_4] [(short)19] [i_2])));
                            var_22 = ((/* implicit */unsigned short) ((unsigned long long int) var_3));
                            arr_21 [i_5] [i_4] [i_2] [i_2] [i_2] [i_1] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_7)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2])))))));
                        }
                    } 
                } 
                arr_22 [i_3] [i_2] [i_3] = ((/* implicit */signed char) (~(((/* implicit */int) arr_18 [i_2] [i_2 - 1] [i_2 - 1] [i_2] [i_2] [i_2] [i_2]))));
                arr_23 [1LL] [i_2] [i_2] [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)0))));
                var_23 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_2 + 1] [i_2 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (arr_4 [i_2 - 1] [i_2 - 1])));
            }
            /* vectorizable */
            for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 2) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_7 = 4; i_7 < 20; i_7 += 2) /* same iter space */
                {
                    arr_28 [i_1] [i_1] [i_2] [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) ((((arr_27 [i_1] [i_2] [i_1] [i_7]) <= (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_7] [i_6] [2ULL] [2ULL]))))) ? (((/* implicit */int) arr_26 [i_1] [i_2 - 1] [i_6] [i_2])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_2])) || (((/* implicit */_Bool) arr_14 [i_2])))))));
                    var_24 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */int) (unsigned short)63797)) : (((/* implicit */int) (unsigned short)48773))));
                    arr_29 [i_1] [i_2] [i_6] [i_7] = ((/* implicit */short) arr_19 [i_2] [i_2] [i_1] [i_6] [i_2] [i_7]);
                }
                for (unsigned long long int i_8 = 4; i_8 < 20; i_8 += 2) /* same iter space */
                {
                    var_25 = ((/* implicit */int) (signed char)125);
                    arr_33 [i_1] [i_2] [i_2 - 1] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_17 [i_8] [i_8] [i_8 - 4] [i_8]))));
                    var_26 = ((/* implicit */unsigned short) arr_25 [i_2] [i_8]);
                    arr_34 [i_1] [(signed char)11] [i_2] [i_2] [i_8] [i_8 - 1] = ((/* implicit */int) ((short) ((((/* implicit */_Bool) (unsigned char)135)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)3))) : ((-9223372036854775807LL - 1LL)))));
                }
                arr_35 [(unsigned char)8] [(unsigned char)8] [i_2 - 1] [i_6] &= ((/* implicit */int) (unsigned char)14);
            }
            for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 2) /* same iter space */
            {
                var_27 = arr_13 [8LL] [i_2] [i_9] [8LL];
                arr_38 [i_1] [i_2] [i_9] [i_2] = var_17;
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_10 = 0; i_10 < 22; i_10 += 1) 
                {
                    arr_43 [i_10] [i_2] [i_2] [i_2] [i_2 + 1] [(short)9] = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (unsigned short)53147)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)230))) : (arr_30 [i_10] [i_10] [(_Bool)1] [i_10]))));
                    var_28 ^= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_18 [i_9] [i_10] [i_10] [i_2 + 1] [i_2 + 1] [i_2] [i_9])) ? (((/* implicit */int) (unsigned short)12373)) : (((/* implicit */int) arr_41 [i_1] [i_2 - 1] [i_2] [i_2] [i_2] [i_10]))))));
                }
            }
        }
        for (short i_11 = 2; i_11 < 20; i_11 += 1) /* same iter space */
        {
            /* LoopSeq 3 */
            for (short i_12 = 0; i_12 < 22; i_12 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned short i_13 = 0; i_13 < 22; i_13 += 4) 
                {
                    for (signed char i_14 = 0; i_14 < 22; i_14 += 4) 
                    {
                        {
                            arr_57 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) var_7);
                            arr_58 [i_1] [i_1] [i_1] = (-(((/* implicit */int) (unsigned char)150)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_15 = 0; i_15 < 22; i_15 += 4) 
                {
                    for (signed char i_16 = 0; i_16 < 22; i_16 += 2) 
                    {
                        {
                            arr_63 [(_Bool)1] [i_15] [i_12] [(_Bool)1] [i_1] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_52 [i_11 + 2] [i_11 - 2] [i_11 - 1] [i_11 + 2])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1728)))))));
                            arr_64 [(short)21] [i_1] [i_12] [i_11] [i_1] = (unsigned char)117;
                            var_29 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)66))))) ? ((~(arr_62 [i_11] [21LL]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_3 [i_11]))))))));
                            arr_65 [i_1] [i_11] [i_12] [i_15] [i_12] [14ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) var_14))) ? (((long long int) (short)-30618)) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)5)) ? (arr_31 [i_11 - 1] [i_11 - 2] [i_11 - 1] [i_16] [i_11 + 1]) : (arr_31 [i_11 - 1] [i_11 - 2] [i_11 - 1] [i_15] [i_11 + 1]))))));
                        }
                    } 
                } 
                var_30 &= ((/* implicit */unsigned int) var_7);
            }
            for (long long int i_17 = 0; i_17 < 22; i_17 += 4) /* same iter space */
            {
                var_31 *= ((/* implicit */short) ((int) (+(((/* implicit */int) (unsigned short)3584)))));
                var_32 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_46 [i_1])) ? (var_10) : (((/* implicit */int) var_3))))) || (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65527))))))))));
                arr_68 [0LL] [i_11] [i_1] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_31 [i_1] [i_1] [(signed char)2] [i_17] [i_1]))))), (arr_61 [i_11 + 1] [i_11] [i_11 + 2] [i_11] [i_11] [i_11 + 1]))))));
            }
            for (long long int i_18 = 0; i_18 < 22; i_18 += 4) /* same iter space */
            {
                var_33 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18])) ? (((/* implicit */int) arr_19 [i_18] [i_1] [i_1] [i_1] [i_1] [(signed char)6])) : (((/* implicit */int) var_14))))) * (min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63802))) ^ (6716596638361804457ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */short) arr_47 [i_1] [i_1])), ((short)32759))))))));
                arr_71 [i_1] = ((/* implicit */unsigned short) min((((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_11 - 2] [i_11 - 2] [i_11 - 2] [i_11 + 2]))) + (var_0))), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)233)))))));
                var_34 = ((/* implicit */int) max(((!(((/* implicit */_Bool) arr_53 [i_11 - 2] [i_11 + 1] [i_11 + 1] [i_11 - 2])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1] [i_1])) ? (((/* implicit */int) arr_67 [i_1] [i_1] [(signed char)19])) : (((/* implicit */int) (unsigned short)1724))))) && ((!(arr_47 [i_1] [i_1])))))));
                arr_72 [3ULL] [i_11] [(unsigned char)12] [i_11] = ((/* implicit */unsigned short) ((int) ((unsigned int) ((((/* implicit */int) (unsigned char)226)) >> (((-2872366462480112488LL) + (2872366462480112491LL)))))));
                var_35 = ((/* implicit */_Bool) ((((arr_8 [i_11] [i_18]) ? (4294495390253812176LL) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_11] [i_18]))))) / (((((/* implicit */_Bool) arr_25 [i_18] [i_11 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_18] [i_11 - 1]))) : (var_4)))));
            }
            var_36 = var_1;
            arr_73 [i_1] = ((/* implicit */int) (+(((((/* implicit */unsigned int) ((((/* implicit */int) arr_41 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) * (((/* implicit */int) arr_47 [i_1] [i_11]))))) / (645203766U)))));
            var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_40 [i_1] [i_1] [i_1] [i_11])))) ? (((/* implicit */long long int) (+(((arr_8 [i_1] [(signed char)8]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_56 [i_11] [(_Bool)1] [i_11] [i_11 - 1] [i_11 - 2]))) : (arr_60 [i_1] [15ULL] [i_11 + 2] [i_11] [i_11 + 2])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1152921496016912384ULL)) ? (((/* implicit */int) arr_52 [i_1] [i_1] [i_11 - 1] [i_11])) : (((/* implicit */int) arr_41 [i_1] [i_1] [i_1] [i_11 - 1] [i_1] [i_11]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (2587706888U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)17590)))))) : ((~(var_12))))))))));
        }
        for (short i_19 = 2; i_19 < 20; i_19 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_20 = 0; i_20 < 22; i_20 += 1) 
            {
                var_38 -= ((/* implicit */short) -1);
                var_39 -= ((/* implicit */unsigned short) ((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)65520))))) + (((-1LL) + (((/* implicit */long long int) arr_46 [i_1]))))));
                var_40 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3))));
            }
            var_41 += ((/* implicit */short) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) % (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)226))) & (964562274U))))));
            /* LoopNest 2 */
            for (unsigned short i_21 = 0; i_21 < 22; i_21 += 3) 
            {
                for (unsigned int i_22 = 0; i_22 < 22; i_22 += 4) 
                {
                    {
                        var_42 = (~(arr_31 [i_19 + 2] [i_19] [i_19 - 1] [i_19] [i_19 - 2]));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_23 = 0; i_23 < 22; i_23 += 4) /* same iter space */
                        {
                            var_43 = ((/* implicit */unsigned short) (-(((long long int) -9223372036854775802LL))));
                            arr_88 [i_19] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) var_2))) ? (((long long int) arr_46 [i_23])) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_81 [i_21] [i_22] [i_21])) ? (((/* implicit */int) arr_32 [i_1] [i_1] [i_23])) : (((/* implicit */int) arr_14 [i_19])))))));
                            arr_89 [i_22] [i_19] [i_19] [i_22] [i_22] [16LL] [i_22] = ((/* implicit */int) var_15);
                            arr_90 [i_19] [i_19 + 1] = ((/* implicit */short) (+((~(((/* implicit */int) arr_17 [i_1] [i_19 + 1] [i_21] [i_1]))))));
                        }
                        for (long long int i_24 = 0; i_24 < 22; i_24 += 4) /* same iter space */
                        {
                            var_44 += ((/* implicit */signed char) var_0);
                            var_45 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 683973466)) || (((/* implicit */_Bool) (unsigned char)244)))))) + (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-122))) % (arr_42 [i_1] [i_19] [i_24] [i_19 - 2] [i_24])))));
                            var_46 = ((min(((+(((/* implicit */int) (unsigned char)252)))), (((((/* implicit */_Bool) -695323461)) ? (((/* implicit */int) (short)32763)) : (((/* implicit */int) var_7)))))) / (((/* implicit */int) arr_45 [i_22])));
                        }
                        arr_94 [i_19] = ((/* implicit */unsigned char) arr_47 [i_19 - 1] [i_21]);
                        arr_95 [i_19] [i_19] [i_19] = ((/* implicit */unsigned char) (-(min((arr_10 [i_1] [i_1]), (((/* implicit */unsigned int) arr_32 [i_19 + 1] [i_19 + 2] [i_19 + 2]))))));
                        arr_96 [i_19] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_59 [i_22] [i_22] [i_19 - 1] [i_19 + 1] [i_19 - 2] [i_1])))) && (((/* implicit */_Bool) arr_59 [i_19 + 1] [i_22] [i_19 - 2] [i_19 + 1] [i_19 + 1] [i_1]))));
                    }
                } 
            } 
            var_47 = ((/* implicit */unsigned long long int) arr_50 [i_1] [i_1] [i_19]);
        }
        arr_97 [i_1] [i_1] = ((/* implicit */long long int) max((((/* implicit */int) (unsigned short)26677)), (((((int) arr_87 [(signed char)10] [i_1] [i_1] [i_1] [i_1])) * (((((/* implicit */int) (unsigned short)23189)) / (((/* implicit */int) arr_36 [i_1] [i_1] [i_1]))))))));
        var_48 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_32 [i_1] [i_1] [i_1])) || ((!(((/* implicit */_Bool) 9223372036854775801LL)))))))) <= (min((arr_80 [20]), (arr_80 [0ULL])))));
    }
}
