/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92651
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
    for (int i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */int) 4294967283U);
                /* LoopSeq 3 */
                for (short i_2 = 0; i_2 < 18; i_2 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_3 = 2; i_3 < 17; i_3 += 2) 
                    {
                        var_18 = ((/* implicit */unsigned int) (_Bool)1);
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2704737226U)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1))));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 18; i_4 += 1) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 18; i_5 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_4]))));
                                var_21 ^= ((/* implicit */short) ((((((/* implicit */_Bool) ((unsigned short) (unsigned short)37269))) ? (max((arr_17 [i_0] [i_0] [i_2] [(short)16] [i_0]), (((/* implicit */unsigned long long int) (unsigned short)63597)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_4] [i_2] [i_2])) ? (-2069714810) : (((/* implicit */int) arr_13 [i_2] [12U] [5U]))))))) != (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)38049)) : (((/* implicit */int) (short)-2051)))), (arr_15 [(short)1] [(short)1] [i_5] [1]))))));
                            }
                        } 
                    } 
                    arr_19 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((min((134217600), (((/* implicit */int) (unsigned char)149)))) % (((((/* implicit */_Bool) 1544251242U)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (short)18118))))))) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_1])) ? (((var_7) | (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0 - 2] [i_0] [i_0 - 2]))))) : (((/* implicit */long long int) ((/* implicit */int) (short)29350))))) : (((((/* implicit */_Bool) -1580789663)) ? (var_6) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (signed char)85)) : (((/* implicit */int) arr_13 [i_1] [i_1] [(signed char)16])))))))));
                }
                for (short i_6 = 0; i_6 < 18; i_6 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 1; i_7 < 17; i_7 += 4) 
                    {
                        for (int i_8 = 0; i_8 < 18; i_8 += 2) 
                        {
                            {
                                arr_29 [i_0] [i_6] = ((/* implicit */long long int) min((min((((((/* implicit */_Bool) (short)-15772)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (2743678943U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_26 [i_0])) ? (((/* implicit */int) (short)16187)) : (arr_25 [i_7] [i_7])))))), (((/* implicit */unsigned int) (_Bool)0))));
                                arr_30 [i_0] [i_1] [i_1] [i_1] [i_0] &= ((/* implicit */unsigned long long int) (~(min(((~(((/* implicit */int) var_10)))), (min((arr_25 [i_0] [i_0]), (-1843029614)))))));
                                arr_31 [i_0 - 2] [i_0 - 2] [i_6] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)32767)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)0))) : (2030356465U)))) ? (arr_2 [15U] [i_1] [i_1]) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_0] [i_7 - 1] [(short)3]))) : (arr_11 [13ULL] [i_1] [13ULL] [13ULL]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)59022)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 1; i_9 < 17; i_9 += 4) 
                    {
                        for (unsigned int i_10 = 0; i_10 < 18; i_10 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) var_3);
                                arr_40 [(short)2] [(short)2] = ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)44046))))) ? (((((/* implicit */_Bool) var_9)) ? (arr_11 [i_0] [(signed char)6] [14] [14]) : (((((/* implicit */_Bool) 2985081078U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)12662))) : (arr_11 [(unsigned short)8] [i_10] [(unsigned short)8] [i_6]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [0U]))));
                                arr_41 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 2] = ((/* implicit */short) (unsigned short)27382);
                                arr_42 [i_0] [i_1] [i_1] [5ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_39 [i_0] [i_0] [i_0] [(unsigned short)1] [i_10])) : (((/* implicit */int) (short)-15659))));
                                arr_43 [i_0] [(short)1] [(short)1] [i_9] [(signed char)2] = ((/* implicit */short) (~(arr_6 [i_0] [i_0])));
                            }
                        } 
                    } 
                    arr_44 [i_0 + 1] [i_1] [i_6] = ((/* implicit */_Bool) -474973421);
                    var_23 = ((/* implicit */short) max((var_0), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)0)) % (((/* implicit */int) (short)-9398)))))));
                }
                for (short i_11 = 0; i_11 < 18; i_11 += 4) /* same iter space */
                {
                    arr_47 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) arr_24 [i_0] [4U] [4U] [(short)12] [i_11]);
                    /* LoopNest 2 */
                    for (long long int i_12 = 0; i_12 < 18; i_12 += 4) 
                    {
                        for (unsigned char i_13 = 0; i_13 < 18; i_13 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_0])) ? (((int) 9223372036854775807LL)) : (((/* implicit */int) arr_5 [i_0] [i_0] [(short)7]))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) -246269431))))), ((short)29314))))) : (((((/* implicit */_Bool) max((1959827534U), (((/* implicit */unsigned int) (short)16384))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 4294967295U)) ? (3888330388U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [(short)9] [i_11] [(short)11] [(unsigned short)6] [i_13])))))) : (var_7)))));
                                arr_52 [i_0] [i_0] [i_1] [i_11] [i_11] [i_0] = ((/* implicit */short) max((409817354), (((/* implicit */int) (short)-29235))));
                                arr_53 [i_1] [6] [i_12] [14LL] = ((/* implicit */_Bool) -2049022588);
                                arr_54 [i_13] [i_1] = ((/* implicit */unsigned int) var_5);
                            }
                        } 
                    } 
                    arr_55 [i_11] [i_1] [16LL] = ((/* implicit */long long int) arr_26 [7ULL]);
                }
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_14 = 0; i_14 < 18; i_14 += 2) 
                {
                    arr_60 [i_1] = ((/* implicit */int) var_15);
                    var_25 = ((/* implicit */int) var_12);
                }
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_16 = 0; i_16 < 18; i_16 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_17 = 1; i_17 < 17; i_17 += 2) 
                        {
                            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_0] [(unsigned short)11] [i_0 - 2]))))) ? ((((_Bool)1) ? (9223372036854775786LL) : (((/* implicit */long long int) 3421793879U)))) : (((/* implicit */long long int) ((((/* implicit */int) (short)-7111)) % (((/* implicit */int) (short)-32740)))))))) ? (min((2474605974765928515LL), (((/* implicit */long long int) (short)-5370)))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)43261)))));
                            arr_70 [i_0] [11LL] [i_0] [i_0] [(short)6] [i_17] = ((/* implicit */signed char) ((((((/* implicit */_Bool) 557049210)) ? (((((/* implicit */_Bool) var_0)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) arr_59 [i_0] [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)45105))))) << (((((/* implicit */int) (short)32767)) - (32743)))));
                            arr_71 [i_0 - 1] [i_1] [i_15] [i_0 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_45 [i_0] [(unsigned short)15] [(short)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_58 [i_0] [0] [9]))) : (((((/* implicit */_Bool) var_16)) ? (511U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32767)))))))) ? (((/* implicit */int) (unsigned short)36595)) : (((((/* implicit */_Bool) -1131827238)) ? (((/* implicit */int) min((var_8), (((/* implicit */short) (signed char)26))))) : ((((_Bool)1) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned char)37))))))));
                            arr_72 [i_0] [i_1] [i_15] [i_16] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_1)))) ? (((((/* implicit */_Bool) arr_39 [5] [5] [i_15] [i_16] [i_0])) ? (arr_45 [i_0] [(_Bool)1] [i_15]) : (((/* implicit */int) arr_49 [i_0] [i_1] [i_15] [i_15] [i_17] [(short)0])))) : (((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */int) ((_Bool) var_8))) : (-1583984427)));
                        }
                        arr_73 [i_1] [i_1] [i_15] [i_15] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)0)) : ((-2147483647 - 1))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)81)) && ((_Bool)1))))) : (var_6)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (short)3475)))))) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) arr_6 [i_15] [i_15])) ? (((/* implicit */int) (unsigned short)0)) : (854288282)))))) : (((unsigned int) var_12))));
                    }
                    for (long long int i_18 = 0; i_18 < 18; i_18 += 1) /* same iter space */
                    {
                        var_27 &= ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)57036)))), (((((/* implicit */_Bool) -1898783641)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-16027))) : (891867892U)))))) ? (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0] [2LL])) ? (3LL) : (((/* implicit */long long int) ((/* implicit */int) arr_69 [i_0] [i_1] [i_1] [i_0] [i_0]))))) : (((/* implicit */long long int) ((int) 0LL)))));
                        var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((int) 1022553932846677298LL)))));
                        arr_76 [i_0] [i_18] [i_15] [i_0] = ((/* implicit */short) arr_0 [i_0]);
                        arr_77 [(signed char)16] [i_1] [i_18] [i_18] = (unsigned short)19584;
                    }
                    /* vectorizable */
                    for (long long int i_19 = 0; i_19 < 18; i_19 += 1) /* same iter space */
                    {
                        arr_82 [i_15] [i_15] [i_15] = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) 0U)) ? (arr_75 [i_1] [i_1] [i_1] [2] [2] [i_15]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))));
                        var_29 = ((/* implicit */int) var_0);
                    }
                    arr_83 [i_15] [i_15] [i_15] [i_15] = ((/* implicit */long long int) ((arr_79 [9] [i_1] [i_1] [i_1]) % (((((/* implicit */_Bool) (signed char)56)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)24911))))));
                    var_30 = ((/* implicit */int) 0LL);
                    arr_84 [i_0] [i_0] [15LL] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_21 [i_15] [15])) ? (((/* implicit */int) (short)-26727)) : (((/* implicit */int) (unsigned short)60890))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)18)) ? (((/* implicit */int) (unsigned short)53773)) : (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) min(((unsigned short)0), (((/* implicit */unsigned short) (short)14564))))))))) : (((unsigned int) ((((/* implicit */_Bool) -536870912)) ? (((/* implicit */unsigned long long int) arr_24 [(short)14] [(short)14] [i_1] [i_0] [i_0])) : (11390107266123770321ULL))))));
                }
                var_31 = ((/* implicit */short) (signed char)108);
            }
        } 
    } 
    var_32 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 52399650059402153LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_15)))) ? (((((/* implicit */_Bool) var_16)) ? ((-9223372036854775807LL - 1LL)) : (var_1))) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)63516))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)21187)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)3487)))))) ? (-203382373) : (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)124)), (var_11)))))))));
    var_33 = ((/* implicit */short) 4194303U);
    var_34 = ((/* implicit */short) 1964811064);
}
