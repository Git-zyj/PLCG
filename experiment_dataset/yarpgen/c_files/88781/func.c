/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88781
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
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) min((((/* implicit */short) (signed char)8)), ((short)-18386)))), (3221225472U)))) ? (max((((/* implicit */int) var_6)), (((((/* implicit */_Bool) (signed char)19)) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) (short)-32757)))))) : (((/* implicit */int) (signed char)81))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 3; i_2 < 17; i_2 += 4) 
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (short i_3 = 2; i_3 < 16; i_3 += 3) 
                    {
                        var_16 = (signed char)104;
                        var_17 = ((/* implicit */short) (unsigned char)247);
                    }
                    for (unsigned char i_4 = 0; i_4 < 18; i_4 += 1) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_5 = 1; i_5 < 17; i_5 += 2) 
                        {
                            var_18 = ((/* implicit */signed char) 67108832U);
                            arr_16 [i_0] [i_1] [i_2] [i_2 - 2] [i_2] [(signed char)9] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)37)) ? (((/* implicit */int) (unsigned char)17)) : (((/* implicit */int) var_2))));
                        }
                        arr_17 [i_2] [i_1] [i_1] [i_2] = ((/* implicit */signed char) (unsigned char)4);
                    }
                    for (unsigned char i_6 = 0; i_6 < 18; i_6 += 2) 
                    {
                        arr_20 [i_2] [i_1] [i_2 - 1] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) max(((unsigned char)9), ((unsigned char)3)))) : (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)63)), (var_8))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_7 = 1; i_7 < 14; i_7 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned char) var_7);
                            var_20 = ((/* implicit */unsigned char) min((((/* implicit */int) var_8)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)115)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)35))))) ? (((/* implicit */int) (unsigned char)213)) : (((/* implicit */int) var_2))))));
                            var_21 = ((/* implicit */signed char) max((((/* implicit */int) var_10)), (max((((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (short)31900)) : (((/* implicit */int) (signed char)57)))), (((/* implicit */int) min((((/* implicit */short) (unsigned char)65)), ((short)20996))))))));
                        }
                        for (unsigned char i_8 = 2; i_8 < 17; i_8 += 3) 
                        {
                            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) min((min((max((1475927098U), (((/* implicit */unsigned int) (signed char)-72)))), (min((((/* implicit */unsigned int) var_2)), (393216U))))), (((((/* implicit */_Bool) var_2)) ? (min((((/* implicit */unsigned int) var_6)), (2013265920U))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)46), (var_12))))))))))));
                            var_23 = ((/* implicit */short) var_10);
                        }
                    }
                    for (unsigned char i_9 = 1; i_9 < 16; i_9 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_10 = 1; i_10 < 15; i_10 += 1) 
                        {
                            var_24 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_10)), (2798586840U)))) ? (((/* implicit */int) min((var_10), ((unsigned char)87)))) : (((/* implicit */int) min((((/* implicit */short) (signed char)83)), (var_3))))))) ? (max((((((/* implicit */_Bool) 3174126375U)) ? (2877405223U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)76))))), (((/* implicit */unsigned int) var_4)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))));
                            var_25 = max((7U), (((/* implicit */unsigned int) max(((signed char)-1), (min(((signed char)-110), ((signed char)-6)))))));
                            arr_31 [i_0] [i_9] [i_2] [i_2] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) min((var_12), ((signed char)(-127 - 1))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2145386496U)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_12))))) : (max((var_13), (((/* implicit */unsigned int) (unsigned char)255)))))), (min((min((var_13), (469762048U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)8191)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)11)))))))));
                        }
                        arr_32 [i_0] [i_1] [i_2] [(short)1] = ((/* implicit */unsigned int) var_9);
                        /* LoopSeq 1 */
                        for (short i_11 = 1; i_11 < 17; i_11 += 1) 
                        {
                            var_26 = max((min((var_13), (((/* implicit */unsigned int) (short)30790)))), (2708616801U));
                            var_27 = ((/* implicit */unsigned char) var_0);
                            arr_36 [i_2] [(short)11] [i_2] [(unsigned char)11] [i_11] [i_0] [8U] = ((/* implicit */short) var_9);
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_12 = 0; i_12 < 18; i_12 += 1) 
                    {
                        for (short i_13 = 0; i_13 < 18; i_13 += 1) 
                        {
                            {
                                arr_42 [(unsigned char)7] [i_2] [i_2] [i_2] [i_2] = max((((/* implicit */unsigned int) var_6)), (((((/* implicit */_Bool) var_9)) ? (min((((/* implicit */unsigned int) var_12)), (var_13))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))));
                                var_28 = ((/* implicit */short) max((((/* implicit */unsigned int) min((var_3), (((/* implicit */short) (signed char)127))))), (min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)108))) : (3710673282U))), (((/* implicit */unsigned int) max((((/* implicit */short) var_2)), (var_11))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (signed char i_14 = 0; i_14 < 18; i_14 += 3) 
                    {
                        arr_45 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) max((min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) var_10)))), (((/* implicit */int) var_8)))), (((/* implicit */int) var_10))));
                        arr_46 [i_0] [(signed char)13] [i_2] [i_14] [i_14] [(signed char)13] = ((/* implicit */unsigned char) max((min((min((var_13), (var_7))), (max((var_1), (((/* implicit */unsigned int) var_9)))))), (((/* implicit */unsigned int) var_12))));
                        var_29 = ((/* implicit */signed char) max((max((((/* implicit */short) min(((unsigned char)127), (((/* implicit */unsigned char) (signed char)-88))))), (min((((/* implicit */short) (unsigned char)4)), (var_11))))), ((short)-6348)));
                        arr_47 [i_2] [i_2] = ((/* implicit */short) min((((/* implicit */unsigned int) (unsigned char)52)), (var_1)));
                        arr_48 [i_2] = ((/* implicit */signed char) min((((/* implicit */unsigned int) (signed char)-107)), (((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_11)) ? (var_13) : (var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_6), (((/* implicit */short) var_10))))))))));
                    }
                    for (unsigned int i_15 = 1; i_15 < 17; i_15 += 3) 
                    {
                        var_30 = ((/* implicit */unsigned int) var_8);
                        var_31 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_0), (190575286U)))) ? (((((/* implicit */_Bool) (signed char)-99)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)-2)))) : (((/* implicit */int) var_10))))), (((((/* implicit */_Bool) var_8)) ? (min((98037416U), (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)207)))))));
                        arr_51 [i_15] [(short)13] [i_2] [i_1] [i_0] = max((((((/* implicit */_Bool) var_5)) ? (min((948809085U), (((/* implicit */unsigned int) (unsigned char)7)))) : (((((/* implicit */_Bool) (unsigned char)31)) ? (2221091477U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-21021))))))), (((/* implicit */unsigned int) (short)4394)));
                    }
                    arr_52 [i_0] [(short)6] [i_2] |= ((/* implicit */unsigned int) (signed char)-19);
                    var_32 += ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (unsigned char)255)), (max((((/* implicit */unsigned int) max((var_3), (var_11)))), (min((var_13), (((/* implicit */unsigned int) (unsigned char)153))))))));
                }
                arr_53 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((short)16449), (min((var_3), (((/* implicit */short) var_2))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) (short)17264)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (short)-594)) : (((/* implicit */int) var_6))))) : (var_13)))));
                var_33 = ((/* implicit */signed char) var_3);
            }
        } 
    } 
}
