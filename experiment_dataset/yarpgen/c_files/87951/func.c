/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87951
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
    var_11 += ((/* implicit */unsigned short) min((((/* implicit */int) (unsigned short)39091)), ((+(((((/* implicit */int) var_6)) / (((/* implicit */int) (unsigned short)26445))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) & (var_0)))))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_2))))) : (max((5576010979154578739LL), (((/* implicit */long long int) (unsigned short)26445)))))))));
                /* LoopSeq 4 */
                for (long long int i_2 = 3; i_2 < 15; i_2 += 2) 
                {
                    arr_8 [i_1 - 1] [i_1 - 1] [i_0] = ((/* implicit */unsigned short) max((min((((/* implicit */int) ((_Bool) 1783472651))), (((((/* implicit */int) (unsigned short)39082)) * (((/* implicit */int) (_Bool)1)))))), ((+(((/* implicit */int) min(((unsigned short)26436), (((/* implicit */unsigned short) (signed char)65)))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        var_13 += ((/* implicit */unsigned long long int) ((-8897033410019707193LL) | (((/* implicit */long long int) ((/* implicit */int) (signed char)52)))));
                        var_14 = ((/* implicit */long long int) ((((/* implicit */int) (!(var_6)))) - (((/* implicit */int) var_10))));
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) << (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (-1392423330))))))));
                            arr_13 [i_0] [i_0] [i_4] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 17770717436586185018ULL)))))));
                            arr_14 [i_0] [i_4] [i_2 + 1] [i_3] [i_4 - 1] = ((/* implicit */long long int) (-((+(var_1)))));
                        }
                    }
                    var_16 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))), (((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_9)))) | (min((1316545426U), (((/* implicit */unsigned int) var_6))))))));
                }
                for (unsigned long long int i_5 = 2; i_5 < 15; i_5 += 4) 
                {
                    arr_17 [i_1] |= (!(((/* implicit */_Bool) ((var_9) - (((/* implicit */long long int) (-(var_1))))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_6 = 3; i_6 < 14; i_6 += 3) /* same iter space */
                    {
                        arr_20 [i_0] [i_1 - 1] [i_5 - 2] [i_6] = var_2;
                        /* LoopSeq 3 */
                        for (unsigned int i_7 = 1; i_7 < 15; i_7 += 2) /* same iter space */
                        {
                            var_17 = ((/* implicit */unsigned short) (+(1316545426U)));
                            var_18 = ((/* implicit */long long int) min((((/* implicit */int) (!((_Bool)1)))), (max((((/* implicit */int) (signed char)-63)), (((((/* implicit */int) var_6)) / (((/* implicit */int) (_Bool)1))))))));
                        }
                        for (unsigned int i_8 = 1; i_8 < 15; i_8 += 2) /* same iter space */
                        {
                            arr_27 [i_8] [i_6 + 1] [i_5] [i_1 - 1] [i_0] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)64529))))) % (((((/* implicit */_Bool) (signed char)44)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-27))) : (15ULL))))) - (((/* implicit */unsigned long long int) (((+(2978421857U))) % (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (unsigned short)64529)))))))))));
                            arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) max(((-(((((/* implicit */int) var_3)) & (((/* implicit */int) var_4)))))), (((/* implicit */int) (!(var_7))))));
                        }
                        for (unsigned int i_9 = 1; i_9 < 15; i_9 += 2) /* same iter space */
                        {
                            var_19 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) -1392423350)))) && ((!(((/* implicit */_Bool) (short)-1))))));
                            var_20 *= ((/* implicit */_Bool) ((((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)22398))))) | (0U))) - (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))));
                        }
                        arr_32 [i_0] [i_1 - 1] [i_5] [i_6 - 1] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) 811530037)) % (var_1)));
                        var_21 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)9442)))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_10 = 3; i_10 < 14; i_10 += 3) /* same iter space */
                    {
                        arr_36 [i_0] [i_0] [i_5 - 1] [i_10 + 1] = (~(((((/* implicit */_Bool) 7ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_9))));
                        var_22 = ((/* implicit */unsigned short) 3928089813692077110ULL);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_11 = 1; i_11 < 12; i_11 += 1) 
                        {
                            var_23 *= ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)127)) ? (131071) : (((/* implicit */int) (_Bool)1))))) - ((~(-9223372036854775794LL)))));
                            var_24 -= ((/* implicit */signed char) (((+(131067))) >> (((/* implicit */int) ((131067) != (((/* implicit */int) (signed char)-44)))))));
                        }
                        for (unsigned short i_12 = 0; i_12 < 16; i_12 += 3) 
                        {
                            var_25 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)62525)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (18371257U)))) && (((/* implicit */_Bool) (unsigned short)63934))));
                            var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) (!(((/* implicit */_Bool) 18446744073709551615ULL)))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_13 = 0; i_13 < 16; i_13 += 1) 
                        {
                            var_27 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_3)))))));
                            var_28 = ((/* implicit */signed char) (+(18446744073709551615ULL)));
                            var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */int) var_7)) % (((/* implicit */int) (unsigned short)39091))))))));
                            var_30 = ((/* implicit */_Bool) (~(((((/* implicit */int) var_10)) - (((/* implicit */int) (signed char)21))))));
                        }
                        var_31 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_14 = 3; i_14 < 14; i_14 += 2) 
                    {
                        for (long long int i_15 = 3; i_15 < 12; i_15 += 2) 
                        {
                            {
                                var_32 = (signed char)59;
                                arr_52 [i_0] [i_1 - 1] [i_1 - 1] [i_5 + 1] [i_0] [i_15 - 3] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -131071)))))) % ((+(((var_2) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-85))) : (var_1)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_16 = 0; i_16 < 16; i_16 += 2) 
                    {
                        for (long long int i_17 = 0; i_17 < 16; i_17 += 1) 
                        {
                            {
                                arr_57 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (((((-(((/* implicit */int) (unsigned short)29608)))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))) << (((/* implicit */int) ((min((((/* implicit */int) var_10)), (131093))) > (((/* implicit */int) min(((unsigned short)32766), (((/* implicit */unsigned short) var_3))))))))));
                                var_33 = ((/* implicit */_Bool) (+(((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) < (var_1))))) % (((var_1) ^ (708689086U)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_18 = 3; i_18 < 12; i_18 += 4) 
                    {
                        for (unsigned short i_19 = 0; i_19 < 16; i_19 += 1) 
                        {
                            {
                                var_34 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)32109))))))) && (((/* implicit */_Bool) ((unsigned int) ((var_1) % (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))));
                                var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) ((var_3) ? (min((4375877301991521623ULL), (((/* implicit */unsigned long long int) 708689070U)))) : (((/* implicit */unsigned long long int) (+(min((131093), (-1685467070)))))))))));
                                arr_63 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) ((short) (!(((/* implicit */_Bool) var_5)))))) & (((/* implicit */int) var_4))));
                                var_36 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) == (((/* implicit */long long int) ((var_2) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)216))) : (7U)))))))));
                                arr_64 [i_5 - 1] [i_5 - 1] [i_18 + 4] [i_19] [i_0] [i_19] [i_5 - 1] = ((/* implicit */unsigned short) max((((((/* implicit */int) var_8)) / (((/* implicit */int) min((var_5), (((/* implicit */unsigned char) (signed char)-1))))))), ((-(131098)))));
                            }
                        } 
                    } 
                }
                for (signed char i_20 = 0; i_20 < 16; i_20 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (long long int i_21 = 1; i_21 < 12; i_21 += 2) 
                    {
                        for (unsigned int i_22 = 3; i_22 < 14; i_22 += 1) 
                        {
                            {
                                arr_73 [i_20] [i_20] [i_20] [i_21 - 1] [i_20] |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min(((-(17929214U))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_6))))))))));
                                arr_74 [i_20] [i_21 + 4] [i_22] = ((/* implicit */short) (!((_Bool)1)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_23 = 0; i_23 < 16; i_23 += 2) 
                    {
                        for (unsigned short i_24 = 2; i_24 < 15; i_24 += 2) 
                        {
                            {
                                var_37 = ((/* implicit */unsigned short) max((var_37), (((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) var_9)) / (5955628085456709731ULL))), (((/* implicit */unsigned long long int) (-(var_0)))))))));
                                var_38 |= ((/* implicit */unsigned long long int) (+(0U)));
                                var_39 |= max((((((/* implicit */_Bool) min((-131099), (((/* implicit */int) (_Bool)1))))) ? (max((((/* implicit */unsigned long long int) (_Bool)1)), (9504645460270848148ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((4294967277U) < (3586278214U))))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_2)), (((var_6) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_1)))))));
                                arr_83 [i_20] = ((/* implicit */unsigned char) (+(((var_7) ? (((((/* implicit */int) (unsigned short)1024)) & (((/* implicit */int) (unsigned short)0)))) : (((/* implicit */int) (!((_Bool)0))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_25 = 0; i_25 < 16; i_25 += 1) 
                    {
                        for (unsigned char i_26 = 0; i_26 < 16; i_26 += 1) 
                        {
                            {
                                var_40 = ((/* implicit */_Bool) min((var_40), (((/* implicit */_Bool) ((long long int) (+(((/* implicit */int) var_10))))))));
                                arr_88 [i_0] [i_0] [i_0] [i_0] [i_0] [i_26] [i_0] = (!(((/* implicit */_Bool) (+(((var_7) ? (((/* implicit */int) (signed char)60)) : (((/* implicit */int) (unsigned short)496))))))));
                            }
                        } 
                    } 
                }
                for (signed char i_27 = 0; i_27 < 16; i_27 += 2) /* same iter space */
                {
                    arr_91 [i_0] [i_1] [i_27] = ((/* implicit */_Bool) 2480024867U);
                    arr_92 [i_27] [i_1 - 1] [i_0] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_0)))) ? (4216341125U) : (((708689094U) * (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))))));
                    var_41 = ((/* implicit */signed char) max((var_41), (((/* implicit */signed char) min((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))), (((var_1) | (3586278210U))))))));
                }
                var_42 = ((/* implicit */long long int) (!(var_6)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_28 = 0; i_28 < 13; i_28 += 3) 
    {
        for (signed char i_29 = 0; i_29 < 13; i_29 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_30 = 0; i_30 < 13; i_30 += 4) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
                    {
                        for (unsigned short i_32 = 2; i_32 < 12; i_32 += 4) 
                        {
                            {
                                var_43 = ((/* implicit */unsigned long long int) (+(((2556980798U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)992)))))));
                                var_44 = ((/* implicit */unsigned char) var_6);
                                var_45 *= ((/* implicit */long long int) ((((/* implicit */int) var_4)) + (((/* implicit */int) max((var_7), ((_Bool)1))))));
                            }
                        } 
                    } 
                    var_46 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((2749778847U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-81))))))));
                }
                /* LoopNest 3 */
                for (unsigned int i_33 = 3; i_33 < 10; i_33 += 3) 
                {
                    for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) 
                    {
                        for (long long int i_35 = 2; i_35 < 12; i_35 += 4) 
                        {
                            {
                                var_47 = ((/* implicit */unsigned long long int) ((_Bool) max((408850853381576817LL), (((/* implicit */long long int) (unsigned short)32485)))));
                                var_48 = (((-(var_1))) / (((/* implicit */unsigned int) (-(((/* implicit */int) var_10))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_49 = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) var_8)))))) & (((var_1) & (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))) >> (((/* implicit */int) (_Bool)0))));
}
