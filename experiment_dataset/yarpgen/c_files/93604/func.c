/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93604
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
    var_19 = ((/* implicit */unsigned int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)60)));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */_Bool) max((min((min((var_16), (var_3))), (((/* implicit */long long int) max(((short)32767), ((short)-1649)))))), (((/* implicit */long long int) max((((var_5) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4)))), (max((((/* implicit */int) var_7)), (var_14))))))));
                                arr_16 [i_0] [i_1 + 2] [i_0] [i_0] [i_4] [i_1] = ((((/* implicit */_Bool) (unsigned short)16384)) ? (2130894722) : (((/* implicit */int) (unsigned char)178)));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) var_7))));
                        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_6)))))));
                        arr_19 [i_1] [i_1] [i_1] [i_1 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_4))));
                        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) var_14)) : (var_10))))));
                        arr_20 [i_0] [i_1] [i_1] [i_5] = ((/* implicit */unsigned int) var_17);
                    }
                    for (unsigned char i_6 = 0; i_6 < 22; i_6 += 2) 
                    {
                        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? ((~(var_14))) : (((/* implicit */int) max((var_2), (((/* implicit */signed char) var_5)))))))) ? (((((/* implicit */_Bool) var_14)) ? (max((var_18), (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_1) : (((((/* implicit */_Bool) var_13)) ? (var_3) : (((/* implicit */long long int) var_12))))))))))));
                        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) var_3))));
                        var_25 |= ((/* implicit */unsigned short) max((max((min((var_18), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))), (((/* implicit */unsigned long long int) min((var_7), (((/* implicit */short) var_2)))))));
                    }
                    for (long long int i_7 = 0; i_7 < 22; i_7 += 4) 
                    {
                        var_26 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? ((-(var_16))) : (((/* implicit */long long int) max((max((((/* implicit */unsigned int) var_12)), (var_10))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) -1075660723))))))))));
                        var_27 ^= ((/* implicit */unsigned char) (+(var_12)));
                    }
                    for (int i_8 = 0; i_8 < 22; i_8 += 2) 
                    {
                        arr_29 [i_1 - 2] [i_1] [7LL] [i_1] [i_1] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_10)) : (var_18))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_8)), (var_16))))));
                        var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), ((short)-16773))))));
                        arr_30 [i_0] [i_1] = min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_18))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)6))))));
                    }
                    var_29 &= ((/* implicit */_Bool) max((min((var_1), (((/* implicit */long long int) var_15)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_10))))));
                    arr_31 [i_1] [i_1] = ((/* implicit */long long int) min((((/* implicit */int) (!(var_5)))), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_2)), (var_6)))) ? (var_15) : ((-(((/* implicit */int) var_7))))))));
                    var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) min(((+(var_8))), (((((/* implicit */_Bool) max(((unsigned char)250), ((unsigned char)250)))) ? (((/* implicit */unsigned int) var_14)) : (var_0))))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (signed char i_9 = 0; i_9 < 22; i_9 += 4) 
        {
            arr_36 [i_9] [i_9] [i_9] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_18))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -3651005959495782142LL)))))));
            var_31 *= ((/* implicit */_Bool) (-(((/* implicit */int) var_2))));
            var_32 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 1307510404U))));
            arr_37 [i_0] [i_9] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) var_16)) ? (var_1) : (((/* implicit */long long int) var_10))));
        }
    }
    for (long long int i_10 = 4; i_10 < 12; i_10 += 4) 
    {
        arr_40 [i_10 - 2] = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned int) var_5)), (var_8))), (((/* implicit */unsigned int) min((var_7), (var_4))))));
        arr_41 [i_10] = min((((((/* implicit */_Bool) min((((/* implicit */long long int) var_15)), (var_3)))) ? (var_10) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_17)) : (var_12)))))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_13))))));
    }
    for (unsigned short i_11 = 0; i_11 < 12; i_11 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 4) 
        {
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                {
                    var_33 = ((/* implicit */short) (!(((/* implicit */_Bool) min((var_14), (((/* implicit */int) var_7)))))));
                    /* LoopSeq 2 */
                    for (long long int i_14 = 0; i_14 < 12; i_14 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_15 = 1; i_15 < 9; i_15 += 3) 
                        {
                            var_34 = ((/* implicit */_Bool) var_2);
                            arr_58 [i_12] [i_13] [i_14] [i_15] |= ((/* implicit */_Bool) var_6);
                        }
                        /* vectorizable */
                        for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) /* same iter space */
                        {
                            arr_61 [i_11] [i_12] [i_12] [i_16] [i_14] [i_14] [i_16] = ((/* implicit */unsigned char) var_17);
                            var_35 |= ((/* implicit */int) (!(((/* implicit */_Bool) var_17))));
                            var_36 |= ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_16));
                            arr_62 [i_11] [i_16] [i_13] [i_14] [(signed char)1] [i_16] [11ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 450030784377873236LL)) ? (137170518016LL) : (((/* implicit */long long int) 2147483647))));
                        }
                        for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) /* same iter space */
                        {
                            var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) var_13))));
                            var_38 |= ((/* implicit */unsigned int) var_16);
                        }
                        var_39 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (min((3901347381083515183LL), (((/* implicit */long long int) var_8))))))) ? (((/* implicit */int) (unsigned char)250)) : (((/* implicit */int) (unsigned char)250))));
                    }
                    for (int i_18 = 2; i_18 < 9; i_18 += 4) 
                    {
                        var_40 *= ((/* implicit */unsigned int) min((min((var_18), (((/* implicit */unsigned long long int) var_17)))), (((/* implicit */unsigned long long int) max((268435456U), (((/* implicit */unsigned int) (short)-2013)))))));
                        arr_68 [i_11] [i_12] [i_13] [i_18 + 3] |= ((/* implicit */long long int) var_12);
                        var_41 = max((((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)-2)), ((unsigned char)6)))) ? (((((/* implicit */_Bool) var_14)) ? (var_12) : (((/* implicit */int) var_11)))) : (((/* implicit */int) max((var_17), (((/* implicit */short) var_5))))))), (((/* implicit */int) max((var_4), (((/* implicit */short) var_5))))));
                    }
                }
            } 
        } 
        arr_69 [8U] [7LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_18), (((/* implicit */unsigned long long int) var_1))))) ? (((/* implicit */unsigned long long int) min((var_16), (((/* implicit */long long int) var_11))))) : (min((var_18), (((/* implicit */unsigned long long int) var_5))))));
        arr_70 [i_11] [i_11] = min((((((/* implicit */_Bool) (-(var_15)))) ? ((~(var_0))) : (((/* implicit */unsigned int) var_14)))), (min((var_10), ((~(var_10))))));
        /* LoopNest 2 */
        for (short i_19 = 4; i_19 < 10; i_19 += 1) 
        {
            for (int i_20 = 0; i_20 < 12; i_20 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (short i_22 = 4; i_22 < 10; i_22 += 1) 
                        {
                            arr_81 [i_11] [i_19 - 3] [10] [i_19] [i_22 - 4] = ((/* implicit */unsigned int) var_2);
                            arr_82 [i_20] [i_21] [i_20] [i_19 - 4] [i_20] &= ((/* implicit */unsigned long long int) var_9);
                            arr_83 [i_11] [i_19] [i_20] [i_19] [i_22] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(var_8)))) ? (max((var_8), (var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_7)))))))))));
                        }
                        for (long long int i_23 = 1; i_23 < 10; i_23 += 2) 
                        {
                            var_42 = ((/* implicit */_Bool) min((var_42), (((/* implicit */_Bool) (-(((var_5) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_7)))))))));
                            var_43 = ((/* implicit */long long int) max(((~(((/* implicit */int) var_11)))), ((~(((/* implicit */int) var_7))))));
                        }
                        for (unsigned short i_24 = 3; i_24 < 8; i_24 += 2) /* same iter space */
                        {
                            var_44 ^= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_2)) : (var_14))))));
                            var_45 -= ((/* implicit */signed char) (-(max((((/* implicit */unsigned int) var_17)), (var_10)))));
                        }
                        for (unsigned short i_25 = 3; i_25 < 8; i_25 += 2) /* same iter space */
                        {
                            var_46 = ((/* implicit */short) max((var_46), (((/* implicit */short) max((min((max((var_18), (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) max((var_6), (var_0)))))))));
                            var_47 = ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)59))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-43)))))) : (min((((/* implicit */unsigned long long int) (signed char)48)), (0ULL))));
                        }
                        var_48 = max((min((var_8), (var_0))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4))))));
                        arr_93 [i_11] [i_19 + 2] [i_20] [i_21] [i_19] [(unsigned char)3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 2898709140U)) ? (((/* implicit */int) (unsigned char)250)) : (((/* implicit */int) (unsigned short)0))))))) ? (min(((~(var_1))), (min((var_3), (((/* implicit */long long int) var_2)))))) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_26 = 0; i_26 < 12; i_26 += 3) 
                    {
                        for (short i_27 = 2; i_27 < 11; i_27 += 1) 
                        {
                            {
                                arr_98 [i_11] [3U] [i_19] [i_20] [i_26] [i_27] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_2)), (var_6)))), (max((min((((/* implicit */unsigned long long int) var_0)), (var_18))), (((/* implicit */unsigned long long int) var_12))))));
                                var_49 = ((/* implicit */signed char) var_7);
                                var_50 = ((/* implicit */short) max(((+(var_10))), (((/* implicit */unsigned int) max((var_12), (((/* implicit */int) var_7)))))));
                            }
                        } 
                    } 
                    var_51 ^= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))))), (min((((/* implicit */unsigned long long int) var_9)), (var_18)))));
                    arr_99 [i_19] [i_11] = ((/* implicit */_Bool) min((((/* implicit */long long int) min((((/* implicit */short) (signed char)-106)), ((short)2013)))), ((+(var_16)))));
                    arr_100 [i_11] [i_19] [i_11] = ((/* implicit */signed char) max((((((/* implicit */_Bool) max((((/* implicit */signed char) var_5)), (var_9)))) ? (((/* implicit */unsigned long long int) var_10)) : (var_18))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-11008)))))));
                }
            } 
        } 
    }
    var_52 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((min((((/* implicit */long long int) var_17)), (var_3))), (min((var_16), (((/* implicit */long long int) var_5))))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_17))));
    var_53 = ((/* implicit */unsigned char) var_9);
}
