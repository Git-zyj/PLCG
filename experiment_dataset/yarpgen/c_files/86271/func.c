/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86271
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */signed char) ((min((((/* implicit */int) var_8)), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1)))))) > (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_11)), (var_2)))))))));
                /* LoopSeq 3 */
                for (int i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    var_16 -= ((/* implicit */int) var_1);
                    var_17 |= ((/* implicit */_Bool) max((max((((/* implicit */int) var_1)), (var_7))), (((((/* implicit */int) ((((/* implicit */int) var_1)) != (((/* implicit */int) var_1))))) & (((((/* implicit */_Bool) var_6)) ? (var_7) : (((/* implicit */int) var_6))))))));
                    var_18 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) var_14)) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6)))))) - (((((/* implicit */_Bool) max((var_9), (((/* implicit */long long int) var_7))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3))))));
                    var_19 -= ((/* implicit */unsigned char) ((min((var_2), (((/* implicit */unsigned long long int) var_7)))) + (((/* implicit */unsigned long long int) ((var_8) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_1)))))));
                    var_20 += ((/* implicit */unsigned int) ((((var_8) || (((/* implicit */_Bool) var_12)))) ? (((((/* implicit */_Bool) min((var_11), (((/* implicit */int) var_13))))) ? (max((var_7), (((/* implicit */int) var_1)))) : (((/* implicit */int) max((var_3), (((/* implicit */signed char) var_8))))))) : (((var_1) ? (var_7) : (var_0)))));
                }
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) min((((((var_8) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1)))) | (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_10)))))), (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) 2147483647))))))))));
                    arr_11 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) >> (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_0)) : (var_2))) - (18446744073419695059ULL)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))) ? (((((/* implicit */_Bool) var_6)) ? (var_7) : (((/* implicit */int) var_10)))) : (((((/* implicit */int) var_6)) + (((/* implicit */int) var_13))))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_8)), (var_6)))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_1)), (var_6))))) : (min((((/* implicit */long long int) var_6)), (var_9)))))));
                    var_22 -= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) var_8))))), (min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_4))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) var_11)) : (var_9))))))));
                    /* LoopSeq 3 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((max((var_2), (((/* implicit */unsigned long long int) var_3)))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))));
                        arr_14 [i_0] [i_1] [i_3 - 1] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (2147483647)))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_2))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_10)))) / (((/* implicit */int) var_6)))))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (((-2147483647 - 1)) >= (((/* implicit */int) (unsigned char)128)))))) == (min((((/* implicit */long long int) var_3)), (var_9)))));
                        var_25 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((((/* implicit */long long int) var_10)), (var_9)))) ? (((((/* implicit */_Bool) var_12)) ? (var_2) : (((/* implicit */unsigned long long int) var_0)))) : (((var_2) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_5))))) : (var_9))))));
                        arr_19 [i_1] = ((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */long long int) 15U)) : (-2120826572897948264LL))), (((/* implicit */long long int) max((((/* implicit */short) (unsigned char)1)), ((short)1030))))))) - (max((var_2), (((/* implicit */unsigned long long int) var_7)))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 2) 
                    {
                        arr_22 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */int) ((var_9) | (((/* implicit */long long int) ((/* implicit */int) var_14)))));
                        /* LoopSeq 4 */
                        for (unsigned char i_7 = 1; i_7 < 23; i_7 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_0)) : (var_4)));
                            arr_25 [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) var_14)) ^ (((/* implicit */int) var_3))));
                            arr_26 [i_1] [i_6] [i_0] [i_1] [i_1] = ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (var_0));
                            var_27 = ((/* implicit */unsigned int) ((var_0) / (((/* implicit */int) var_13))));
                            var_28 += ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_3)) + (2147483647))) << (((var_4) - (4562686952478311172ULL)))));
                        }
                        for (signed char i_8 = 0; i_8 < 24; i_8 += 1) 
                        {
                            arr_30 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */int) var_10))));
                            var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) ((var_9) >> (((((/* implicit */int) var_5)) + (11065))))))));
                            arr_31 [i_6] &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (var_7) : (((/* implicit */int) var_5))));
                        }
                        for (unsigned char i_9 = 2; i_9 < 21; i_9 += 1) 
                        {
                            arr_35 [i_1] [i_1] [i_1] [19U] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1))));
                            arr_36 [i_0] [i_1] [i_3 - 1] [i_1] [i_9] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_7) : (var_7)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_11)) * (var_12)))) : (((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))));
                            var_30 *= ((/* implicit */unsigned long long int) var_8);
                        }
                        for (int i_10 = 0; i_10 < 24; i_10 += 2) 
                        {
                            var_31 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
                            var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_11))));
                        }
                        arr_39 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (var_4) : (var_4)));
                        arr_40 [i_0] [i_1] [i_3] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) ^ (((/* implicit */int) var_3))));
                        arr_41 [i_1] = ((/* implicit */int) ((var_8) ? (var_2) : (var_2)));
                    }
                    var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_2))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) << (((var_12) - (1673745099U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) var_10)), (var_14))))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) var_11)) : (var_12)))))))))));
                }
                /* vectorizable */
                for (short i_11 = 0; i_11 < 24; i_11 += 2) 
                {
                    var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_5))));
                    arr_46 [i_11] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (((var_12) * (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) : (var_12)));
                    arr_47 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) var_9)) ? (var_11) : (((/* implicit */int) var_8)))) : (var_0)));
                    /* LoopSeq 4 */
                    for (unsigned int i_12 = 1; i_12 < 23; i_12 += 1) 
                    {
                        var_35 = ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) + (var_7)))) || (((/* implicit */_Bool) var_6)));
                        var_36 = ((/* implicit */unsigned int) ((((/* implicit */int) var_6)) >> (((((/* implicit */int) var_10)) % (((/* implicit */int) var_10))))));
                        arr_52 [i_11] [(unsigned short)14] [i_11] [i_12 - 1] &= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) >> (((var_11) - (158906927)))));
                    }
                    for (unsigned char i_13 = 0; i_13 < 24; i_13 += 3) 
                    {
                        var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) % (var_11)));
                        arr_55 [i_13] [i_13] [i_1] [i_0] [i_0] = ((/* implicit */signed char) ((var_12) | (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) - (((/* implicit */int) var_3)))))));
                        /* LoopSeq 4 */
                        for (signed char i_14 = 3; i_14 < 21; i_14 += 1) 
                        {
                            arr_59 [i_1] [i_11] [i_13] [i_14 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_5)) : (var_0)));
                            var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)14)) ? (2147483647) : (((/* implicit */int) (_Bool)1))));
                            arr_60 [i_0] [i_1] [i_11] [i_1] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */int) var_8)) - (((/* implicit */int) var_8))));
                            arr_61 [i_0] [i_0] [(signed char)4] [i_11] [i_11] [(signed char)6] [i_0] &= var_11;
                        }
                        for (unsigned char i_15 = 0; i_15 < 24; i_15 += 1) /* same iter space */
                        {
                            arr_66 [(unsigned short)11] [i_1] [i_1] [i_13] [i_15] = var_12;
                            arr_67 [i_0] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((var_2) / (((/* implicit */unsigned long long int) var_0))));
                        }
                        for (unsigned char i_16 = 0; i_16 < 24; i_16 += 1) /* same iter space */
                        {
                            arr_72 [(unsigned char)0] [i_11] [i_0] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_9)));
                            var_39 += ((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) != (((/* implicit */int) var_3))));
                            var_40 += ((/* implicit */unsigned long long int) var_6);
                            arr_73 [i_0] [i_1] [i_11] [i_1] [i_1] [i_0] = ((/* implicit */short) var_8);
                        }
                        for (unsigned char i_17 = 0; i_17 < 24; i_17 += 1) /* same iter space */
                        {
                            var_41 = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_13)));
                            var_42 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -2147483642)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-32766))))) : (0ULL)));
                        }
                        var_43 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)62)) >= (0)));
                    }
                    for (signed char i_18 = 0; i_18 < 24; i_18 += 2) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_19 = 0; i_19 < 24; i_19 += 3) 
                        {
                            arr_81 [i_19] [i_1] [i_19] [i_18] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) != (((/* implicit */int) var_13))));
                            arr_82 [i_19] [6U] [i_1] [(_Bool)1] [i_0] = ((/* implicit */short) ((var_7) - (((/* implicit */int) var_1))));
                            var_44 &= ((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3))));
                        }
                        arr_83 [i_1] [0ULL] [i_1] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) var_7)) : (var_12)));
                        var_45 = ((/* implicit */short) ((((/* implicit */_Bool) (short)1030)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (signed char)83))))) : (3177927674U)));
                        var_46 = ((/* implicit */signed char) ((((/* implicit */int) var_6)) >> (((((/* implicit */int) var_10)) - (130)))));
                        var_47 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)122)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)122))) : (15925645317883772104ULL))) >> (((((((/* implicit */_Bool) var_14)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) - (4562686952478311135ULL)))));
                    }
                    for (signed char i_20 = 0; i_20 < 24; i_20 += 2) /* same iter space */
                    {
                        arr_86 [i_1] [i_11] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_4))));
                        var_48 ^= ((/* implicit */signed char) ((((/* implicit */unsigned int) var_11)) + (var_12)));
                    }
                    arr_87 [i_1] [i_1] [i_0] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (var_11) : (((/* implicit */int) var_14))));
                }
                arr_88 [i_1] [i_1] = max((max((((((/* implicit */_Bool) var_12)) ? (var_11) : (((/* implicit */int) var_13)))), (((((/* implicit */int) var_6)) - (((/* implicit */int) var_1)))))), (max((var_0), (var_11))));
                arr_89 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_7)) : (var_2)))) ? (((((/* implicit */_Bool) min((((/* implicit */short) var_6)), (var_13)))) ? (var_0) : (var_0))) : (((((/* implicit */int) var_1)) >> (((((/* implicit */int) var_10)) - (125)))))));
                var_49 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) >> (((var_0) + (289856554)))))) ? (var_2) : (max((((/* implicit */unsigned long long int) var_7)), (var_4)))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (var_11))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_13)) : (((((/* implicit */_Bool) var_9)) ? (var_11) : (((/* implicit */int) var_13))))))));
            }
        } 
    } 
    var_50 = ((/* implicit */unsigned char) ((((/* implicit */int) min((var_14), (((/* implicit */short) var_3))))) | (((/* implicit */int) var_13))));
}
