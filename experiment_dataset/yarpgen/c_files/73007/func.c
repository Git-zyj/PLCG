/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73007
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
    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-22))) & (4294967295U))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) var_15)) >= (arr_1 [i_0] [i_0 - 1])))), (((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 1])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0 - 1])))))));
        var_18 |= ((/* implicit */long long int) min((32768U), (10U)));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (max((((/* implicit */unsigned long long int) 150270916)), (0ULL))) : (4097619010506165466ULL)));
            /* LoopSeq 3 */
            for (short i_2 = 3; i_2 < 11; i_2 += 4) 
            {
                var_20 = ((/* implicit */short) max(((+(((arr_10 [i_0] [(unsigned char)4] [i_0]) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (signed char)-42)))))), (((/* implicit */int) arr_10 [i_0] [i_1] [i_0]))));
                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (((!(((/* implicit */_Bool) max((var_9), (((/* implicit */long long int) arr_9 [i_1] [i_2]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 9811698878329387744ULL)))) : (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_1])) && (((/* implicit */_Bool) 4601026301441768173LL))))), (min((32765U), (((/* implicit */unsigned int) (signed char)22)))))))))));
                /* LoopNest 2 */
                for (unsigned int i_3 = 3; i_3 < 11; i_3 += 1) 
                {
                    for (unsigned int i_4 = 0; i_4 < 14; i_4 += 2) 
                    {
                        {
                            var_22 -= ((/* implicit */_Bool) 4097619010506165466ULL);
                            var_23 -= ((/* implicit */unsigned short) ((var_6) ? (max((((/* implicit */unsigned int) arr_9 [i_1] [i_1])), ((+(var_10))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
                        }
                    } 
                } 
                /* LoopSeq 4 */
                /* vectorizable */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    /* LoopSeq 2 */
                    for (short i_6 = 2; i_6 < 12; i_6 += 2) 
                    {
                        var_24 *= ((/* implicit */long long int) ((var_0) < (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_6])))));
                        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_9 [i_0] [i_2]) ? (((/* implicit */int) arr_12 [i_0 - 1] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_17 [i_6] [i_6] [(unsigned short)6]))))) ? (((((/* implicit */_Bool) arr_18 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_3))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_3)))));
                    }
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_1]))) : (var_2)))) ? (((/* implicit */int) var_11)) : ((~(((/* implicit */int) (signed char)-14))))));
                        var_27 = ((/* implicit */short) var_9);
                        var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((unsigned int) arr_6 [i_1])))));
                    }
                    var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)-11525))))))))));
                    var_30 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_12))));
                    var_31 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))));
                }
                /* vectorizable */
                for (long long int i_8 = 1; i_8 < 13; i_8 += 3) 
                {
                    arr_26 [i_0] = arr_6 [i_0];
                    var_32 = ((/* implicit */long long int) var_6);
                }
                for (short i_9 = 0; i_9 < 14; i_9 += 4) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_10 = 3; i_10 < 12; i_10 += 4) 
                    {
                        arr_33 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) var_1);
                        var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_8 [i_0 - 1] [i_0 - 1] [i_0] [i_1]), (((/* implicit */short) var_8))))) ? (((/* implicit */int) (short)-15611)) : (((/* implicit */int) max((arr_21 [i_0] [i_1] [i_1] [i_1]), (((/* implicit */signed char) (_Bool)1)))))))), (var_0))))));
                        var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_2) : (((/* implicit */long long int) (+(var_10))))))) ? (((/* implicit */int) ((signed char) arr_6 [i_0]))) : (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (arr_6 [i_0]))))));
                        arr_34 [i_0 - 1] [12U] [i_0] [i_9] [i_10 - 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_17 [i_10 + 2] [i_1] [i_0 - 1]), (((/* implicit */short) var_6))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [(_Bool)1] [i_0] [i_2] [i_9] [i_10] [i_10 + 2]))) : ((((_Bool)1) ? (3359244281U) : (32776U)))));
                        var_35 = ((/* implicit */unsigned short) var_7);
                    }
                    arr_35 [i_0] = ((/* implicit */short) arr_9 [i_0] [i_2 + 3]);
                }
                for (short i_11 = 0; i_11 < 14; i_11 += 4) 
                {
                    arr_39 [i_0] [12U] [i_1] [11ULL] [i_2] [i_0] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_0)) ? (max((4186389220U), (((/* implicit */unsigned int) (short)-22173)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_2] [i_11])) || (((/* implicit */_Bool) var_10)))))))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_10 [i_0] [i_2 + 3] [i_0])))))));
                    var_36 = ((/* implicit */_Bool) min((arr_27 [i_11] [i_1] [i_1] [(unsigned short)12] [i_11] [i_1]), (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1)))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_12 = 0; i_12 < 14; i_12 += 4) 
                    {
                        var_37 = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)15)) ? (arr_11 [i_11] [i_2 + 2] [i_1]) : (var_0)))) >= ((+(var_7))))) ? (((/* implicit */int) ((unsigned char) ((short) var_0)))) : (((/* implicit */int) (_Bool)1))));
                        arr_44 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (~(((/* implicit */int) arr_17 [i_11] [i_1] [i_2]))))) ? (((var_3) | (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_12] [i_0] [i_0] [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_4), (((/* implicit */short) arr_10 [i_0] [i_0] [i_0])))))))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_13 [i_0 - 1] [i_0 - 1] [i_2 - 1] [i_11])))))));
                        arr_45 [(short)13] [(short)5] [i_0] [i_11] [i_12] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_32 [i_0] [i_11] [i_2] [i_1] [i_0])) ? (((((/* implicit */_Bool) (signed char)22)) ? (((unsigned int) var_6)) : (((unsigned int) arr_24 [i_0] [i_1] [i_0] [i_11])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_7 [i_2] [i_0 - 1] [i_0 - 1]))))));
                        var_38 = ((/* implicit */unsigned int) arr_4 [i_0]);
                        var_39 = ((/* implicit */short) (_Bool)1);
                    }
                    for (unsigned int i_13 = 0; i_13 < 14; i_13 += 2) 
                    {
                        arr_48 [i_13] [i_1] [i_13] [i_11] [i_0] [i_0 - 1] [i_11] = ((/* implicit */_Bool) min((((/* implicit */long long int) min((((/* implicit */unsigned int) arr_12 [i_0] [i_0] [i_2] [i_0] [(short)1])), (var_0)))), (((((/* implicit */_Bool) 4186389225U)) ? (min((arr_4 [i_0]), (((/* implicit */long long int) var_13)))) : ((-(-2918009924630310918LL)))))));
                        arr_49 [i_0] [i_1] [i_0] [i_0] [i_1] = ((/* implicit */short) ((unsigned int) arr_37 [i_0] [i_0] [i_1] [i_2 + 2] [i_0] [i_13]));
                    }
                    var_40 |= ((/* implicit */unsigned int) (-((+(((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_4))))))));
                }
            }
            for (unsigned long long int i_14 = 0; i_14 < 14; i_14 += 2) 
            {
                var_41 = ((/* implicit */signed char) min((var_41), (((/* implicit */signed char) (((!(arr_20 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1] [i_1]))) ? (((/* implicit */int) (_Bool)1)) : (max((max((arr_1 [i_14] [i_1]), (((/* implicit */int) (short)1)))), (((/* implicit */int) (_Bool)1)))))))));
                arr_53 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (min((var_3), (((/* implicit */unsigned int) arr_47 [i_0] [i_0] [i_0] [(_Bool)1] [i_0] [i_0] [i_0]))))));
                var_42 -= ((/* implicit */short) var_0);
            }
            for (unsigned long long int i_15 = 3; i_15 < 13; i_15 += 3) 
            {
                arr_58 [i_0] [i_0] [i_0] = var_14;
                var_43 = ((/* implicit */unsigned int) max((var_43), (((/* implicit */unsigned int) arr_25 [i_0] [(_Bool)1] [i_1]))));
            }
            arr_59 [i_0] [i_1] [i_0] = min((((/* implicit */long long int) arr_13 [i_0] [i_1] [i_0] [(signed char)3])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0 - 1] [i_0] [(_Bool)1] [(_Bool)1] [i_0])) ? (((/* implicit */int) (short)16803)) : (((/* implicit */int) arr_20 [i_0] [i_1] [3ULL] [(_Bool)1] [0LL]))))) ? (((/* implicit */long long int) ((arr_30 [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_1] [i_1]) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (short)7))))) : (var_7))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                var_44 = ((/* implicit */unsigned long long int) ((_Bool) 111720173U));
                arr_62 [i_0] [i_0] = ((/* implicit */short) var_14);
            }
        }
        for (unsigned int i_17 = 0; i_17 < 14; i_17 += 2) 
        {
            var_45 *= ((/* implicit */_Bool) var_5);
            /* LoopSeq 2 */
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                var_46 = ((/* implicit */long long int) (short)(-32767 - 1));
                var_47 = (~(3947049031U));
            }
            for (unsigned int i_19 = 3; i_19 < 13; i_19 += 1) 
            {
                var_48 = ((/* implicit */short) ((((536739840U) > (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_36 [(_Bool)1] [(_Bool)1] [(signed char)2] [(_Bool)1] [i_19 + 1] [i_19])))))) ? (((/* implicit */unsigned long long int) 3294925950U)) : (13712142690919615520ULL)));
                var_49 = ((/* implicit */_Bool) ((short) max((arr_67 [i_17] [i_19 - 1] [i_19 + 1]), (arr_67 [i_19] [i_19] [i_19 - 3]))));
                arr_69 [i_17] [(short)6] [i_0] [i_17] = ((/* implicit */short) var_2);
            }
            arr_70 [i_0] [i_0] = (-(((((arr_56 [(_Bool)1] [i_17] [i_17]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_17] [i_17] [i_0]))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_25 [(unsigned short)7] [i_0] [i_0]), (arr_20 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_17] [i_0 - 1]))))))));
        }
    }
}
