/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7266
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned short) var_0);
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    arr_8 [i_0] [(unsigned char)13] [i_0] = ((/* implicit */_Bool) (-(((unsigned int) ((((/* implicit */int) var_7)) * (((/* implicit */int) (_Bool)0)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 21; i_3 += 1) 
                    {
                        for (long long int i_4 = 1; i_4 < 21; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4 + 1] [i_4 - 1] &= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_11 [6ULL] [i_4 - 1] [i_3 + 1] [i_2] [i_1] [i_0 - 1])) ? (arr_3 [i_2]) : (1076148754504759601LL)))));
                                var_12 = ((/* implicit */long long int) max((var_0), (((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_5 [i_0] [i_4 - 1]))))))));
                            }
                        } 
                    } 
                }
                var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) var_7))));
            }
        } 
    } 
    var_14 = (!(((/* implicit */_Bool) var_1)));
    var_15 &= ((/* implicit */unsigned char) (_Bool)1);
    /* LoopNest 2 */
    for (long long int i_5 = 0; i_5 < 22; i_5 += 1) 
    {
        for (unsigned short i_6 = 2; i_6 < 21; i_6 += 4) 
        {
            {
                var_16 |= ((/* implicit */unsigned long long int) ((_Bool) var_10));
                /* LoopSeq 3 */
                /* vectorizable */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (+((~(arr_22 [i_5] [i_6] [i_5]))))))));
                    arr_23 [i_5] [i_6 + 1] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)82)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)31))) : (-3085451943676252021LL)));
                }
                for (unsigned short i_8 = 0; i_8 < 22; i_8 += 4) /* same iter space */
                {
                    var_18 = ((/* implicit */unsigned char) arr_7 [i_5] [i_6] [i_5] [i_5]);
                    var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 8987067683047406185LL))));
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 0; i_9 < 22; i_9 += 4) 
                    {
                        for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */short) max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_26 [i_5]))))), (max((18U), (((/* implicit */unsigned int) (unsigned short)23500))))));
                                var_21 = ((/* implicit */_Bool) (unsigned short)37625);
                                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)90))))) ^ ((+(arr_19 [i_6 - 1] [i_6 - 1] [i_5])))));
                                var_23 = ((/* implicit */signed char) (~(((/* implicit */int) var_1))));
                            }
                        } 
                    } 
                }
                for (unsigned short i_11 = 0; i_11 < 22; i_11 += 4) /* same iter space */
                {
                    var_24 = ((/* implicit */unsigned char) ((((arr_22 [i_6 - 2] [i_6 + 1] [i_6 - 1]) > (((/* implicit */long long int) ((/* implicit */int) var_3))))) ? (((unsigned long long int) arr_22 [i_6 - 1] [i_6 - 1] [i_6 - 2])) : (((/* implicit */unsigned long long int) arr_30 [i_6 + 1] [i_6 - 1]))));
                    var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) 75202303853531973LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)245)))) : (((/* implicit */int) max((arr_0 [i_6]), (((/* implicit */short) var_4)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_5] [(short)0])) ? (arr_31 [i_5] [i_5] [i_5] [(unsigned short)11]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)52)))))) ? (max((((/* implicit */unsigned int) (unsigned short)33315)), (var_9))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_5])) ^ (((/* implicit */int) arr_18 [i_5] [i_6 + 1] [i_6]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                }
                /* LoopSeq 3 */
                for (unsigned short i_12 = 2; i_12 < 20; i_12 += 4) 
                {
                    /* LoopNest 2 */
                    for (long long int i_13 = 2; i_13 < 20; i_13 += 4) 
                    {
                        for (short i_14 = 0; i_14 < 22; i_14 += 1) 
                        {
                            {
                                var_26 = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_10), (((/* implicit */signed char) arr_36 [i_12 + 1] [i_12 - 1] [i_6] [i_5] [i_5])))))) : ((-(3611834817U))));
                                var_27 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) max((arr_11 [i_5] [i_5] [i_6] [i_12 + 1] [i_13 + 2] [i_14]), (((/* implicit */short) (unsigned char)191))))), (2628082791U)))) ? (min((max((((/* implicit */long long int) arr_1 [i_13 - 1])), (1076148754504759601LL))), (((/* implicit */long long int) ((unsigned char) (unsigned char)37))))) : (((/* implicit */long long int) min((arr_30 [i_14] [i_6 - 2]), (((/* implicit */unsigned int) (signed char)-3)))))));
                                var_28 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)104)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)152))));
                                var_29 = ((/* implicit */unsigned short) arr_7 [i_5] [i_12] [i_6] [i_5]);
                                var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) ((((/* implicit */int) (!((!(((/* implicit */_Bool) arr_2 [i_13 + 2]))))))) - (((/* implicit */int) (short)1392)))))));
                            }
                        } 
                    } 
                    arr_41 [i_5] [i_6] [i_6 - 2] [i_6 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_27 [i_5] [i_6] [i_6 + 1] [i_6] [i_12 + 1]), (((/* implicit */unsigned long long int) (+(-4926836542969579575LL))))))) ? (arr_31 [(unsigned short)19] [i_6 + 1] [(unsigned short)19] [(short)13]) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((unsigned int) var_3)) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_18 [i_5] [(_Bool)1] [i_5]))))))))));
                    var_31 = ((/* implicit */unsigned short) var_9);
                    var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) max((((/* implicit */signed char) arr_35 [i_12] [i_12] [i_12] [i_12 + 2])), (arr_18 [i_5] [i_6] [(unsigned short)10]))))));
                }
                for (unsigned long long int i_15 = 2; i_15 < 20; i_15 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_16 = 0; i_16 < 22; i_16 += 4) 
                    {
                        for (unsigned short i_17 = 0; i_17 < 22; i_17 += 3) 
                        {
                            {
                                arr_50 [i_5] [i_6] [(short)1] [i_16] [i_5] [i_17] = ((/* implicit */unsigned long long int) ((max((((/* implicit */int) arr_32 [(short)0] [i_6 + 1])), (((((/* implicit */_Bool) (unsigned short)128)) ? (((/* implicit */int) (unsigned short)26980)) : (((/* implicit */int) (short)-32647)))))) + (((/* implicit */int) min((((/* implicit */short) arr_12 [i_5] [i_6 - 1])), (arr_43 [i_15 + 1] [i_6 - 1]))))));
                                var_33 *= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_24 [i_5] [i_6 - 1] [i_15 - 1])) : (((/* implicit */int) var_6))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_19 = 0; i_19 < 22; i_19 += 1) 
                        {
                            var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (_Bool)1))) ? (-2449880083710038875LL) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_7))))));
                            arr_59 [i_5] [i_5] [i_15 + 1] [i_15] [(short)12] [18LL] [i_19] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_3)) ? ((~(((/* implicit */int) arr_16 [i_5])))) : (((/* implicit */int) (unsigned short)26980))))));
                            arr_60 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */long long int) ((unsigned short) arr_25 [i_6] [i_15] [i_19]));
                            arr_61 [i_15] &= ((/* implicit */long long int) ((((((/* implicit */_Bool) 1776229799U)) ? (((/* implicit */int) (short)21861)) : (((/* implicit */int) (_Bool)0)))) % (((/* implicit */int) var_6))));
                        }
                        var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned short)384)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_6]))) : (arr_17 [i_15 - 2]))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_20 = 0; i_20 < 22; i_20 += 3) 
                        {
                            arr_64 [i_15] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_57 [(unsigned short)3] [(unsigned short)3] [i_6] [i_15] [i_18] [i_20]))) : (arr_7 [i_15] [i_15] [i_15] [i_18])))) ? (var_9) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)23504)))))));
                            var_36 = ((/* implicit */short) (-(((/* implicit */int) var_2))));
                            var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_5] [i_5] [i_5])) ? (((/* implicit */int) (unsigned short)128)) : (((/* implicit */int) var_4))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_58 [i_5] [i_6] [i_15] [i_18] [i_20])) ? (((/* implicit */int) arr_15 [i_5])) : (((/* implicit */int) var_2)))))));
                            arr_65 [i_5] [i_6] [i_20] [i_5] = ((/* implicit */long long int) ((_Bool) 0LL));
                        }
                    }
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) /* same iter space */
                    {
                        var_38 = ((/* implicit */unsigned char) max((var_38), (((/* implicit */unsigned char) (((!((!((_Bool)0))))) ? (((/* implicit */long long int) ((arr_28 [i_6] [i_6 + 1] [i_6] [i_6 - 2] [i_6 + 1] [i_15 + 1]) ? (((/* implicit */int) arr_33 [i_5] [i_6 + 1] [i_6] [i_6 - 2])) : (((/* implicit */int) arr_33 [i_5] [i_6 + 1] [i_6 + 1] [i_6 - 2]))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)127)) >> (((((/* implicit */int) var_4)) - (65)))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_0)), (var_8))))) : ((~(-8843365591104820484LL))))))))));
                        var_39 = ((/* implicit */short) min((var_39), (((/* implicit */short) var_7))));
                        arr_70 [i_5] [i_6] [i_5] [8ULL] = ((unsigned short) min((((-4926836542969579567LL) & (((/* implicit */long long int) ((/* implicit */int) var_5))))), (((/* implicit */long long int) arr_18 [i_6 + 1] [i_6 + 1] [i_15 + 1]))));
                        var_40 = ((/* implicit */long long int) min((var_40), (((/* implicit */long long int) ((((/* implicit */_Bool) min(((-(((/* implicit */int) var_2)))), (((((/* implicit */_Bool) -4136375094664007462LL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)0))))))) ? (min((((((/* implicit */_Bool) arr_58 [i_6] [20LL] [(unsigned char)16] [i_15] [20LL])) ? (466060332351209965ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_6]))))), (((/* implicit */unsigned long long int) arr_44 [i_15 - 2] [i_15 - 2] [i_15] [i_15 - 1] [i_15 + 2] [i_15])))) : (((/* implicit */unsigned long long int) min((11LL), (-1076148754504759579LL)))))))));
                    }
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) /* same iter space */
                    {
                        var_41 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_15] [i_15 - 2] [i_6 + 1] [i_15])) ? (arr_7 [i_15] [i_15 + 2] [i_6 + 1] [i_15]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65526)))))) ? (min((7865505035618679317LL), (((((/* implicit */_Bool) arr_27 [i_6] [i_6 - 2] [i_6] [i_6 - 1] [i_6 - 1])) ? (4115321626264197332LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9937))))))) : (((((/* implicit */_Bool) min((((/* implicit */short) var_1)), (var_3)))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) % (arr_73 [(_Bool)1] [i_15] [i_6 + 1] [i_15 - 1] [i_15 - 2] [i_6 + 1])))))));
                        arr_74 [i_5] [i_6] [17ULL] [i_5] = var_5;
                        var_42 = ((/* implicit */short) var_4);
                    }
                }
                /* vectorizable */
                for (unsigned short i_23 = 2; i_23 < 21; i_23 += 4) 
                {
                    var_43 &= ((/* implicit */_Bool) var_1);
                    /* LoopNest 2 */
                    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                    {
                        for (signed char i_25 = 0; i_25 < 22; i_25 += 1) 
                        {
                            {
                                arr_84 [i_5] [i_5] [i_23 - 2] [(_Bool)1] [i_25] [i_25] = ((/* implicit */unsigned int) var_5);
                                arr_85 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_53 [i_5] [i_6] [i_23 + 1] [i_5])) : (((/* implicit */int) var_4))));
                                arr_86 [4U] [i_6 - 1] [i_23] [i_23] [i_25] &= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_51 [i_24] [i_23 + 1] [i_6 - 2] [i_6] [i_6 + 1] [i_6 - 2]))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
