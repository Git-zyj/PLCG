/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70606
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
    for (signed char i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */short) ((((/* implicit */int) (signed char)127)) >> (((((/* implicit */int) var_7)) - (45)))));
                var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [(short)2] [i_0 - 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (((max((arr_0 [(signed char)4] [(signed char)4]), (var_0))) >> ((((+(((/* implicit */int) var_7)))) - (64))))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_2 = 2; i_2 < 17; i_2 += 1) 
                {
                    var_15 -= ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)69)) >> (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)-74)))) - (48141)))));
                    /* LoopSeq 2 */
                    for (short i_3 = 1; i_3 < 19; i_3 += 4) 
                    {
                        arr_11 [i_0 - 2] [i_0 - 2] [i_0] [i_0 - 1] = ((/* implicit */signed char) ((((/* implicit */int) arr_7 [i_3 + 1] [i_0] [i_3 + 1])) >> (((((/* implicit */int) var_12)) + (8171)))));
                        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) >> (((((/* implicit */int) var_1)) - (14)))))) ? (((((/* implicit */_Bool) 4084834100U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-22994))) : (var_11))) : (((210133189U) >> (((var_8) - (3549344517U))))))))));
                    }
                    for (unsigned short i_4 = 3; i_4 < 18; i_4 += 4) 
                    {
                        var_17 = ((/* implicit */signed char) max((var_17), (((signed char) arr_12 [i_2 - 1] [i_1] [i_4 - 3] [i_0 - 1] [i_4]))));
                        var_18 = ((/* implicit */signed char) ((unsigned short) arr_13 [i_0] [i_0 - 1] [i_0 - 2] [i_0] [(unsigned short)1]));
                        arr_14 [i_0 + 1] [i_1] [i_0] = ((/* implicit */unsigned int) (signed char)101);
                        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_2 + 1] [i_4] [1U])) ? (((/* implicit */int) ((short) var_1))) : (((((/* implicit */int) arr_5 [i_0] [(short)13] [i_4])) >> (((var_11) - (2129236376U)))))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_5 = 1; i_5 < 18; i_5 += 4) 
                    {
                        for (signed char i_6 = 1; i_6 < 16; i_6 += 2) 
                        {
                            {
                                arr_20 [(signed char)9] [i_0] [i_2] [(short)12] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_6 + 2] [i_5 + 2] [i_0 - 1] [i_0])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_6 [i_6 + 4] [i_5 + 1] [i_0 - 2] [i_0]))));
                                arr_21 [i_6 + 1] [i_5] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_8 [i_5] [i_0] [6U] [i_5]))));
                                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) arr_16 [(unsigned short)10]))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_7 = 1; i_7 < 16; i_7 += 1) 
                {
                    arr_24 [i_0] [(signed char)0] [i_0] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_7 + 2] [(short)10] [i_7 + 2])) ? (arr_9 [i_7 + 3] [6U] [10U]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))));
                    /* LoopSeq 3 */
                    for (signed char i_8 = 0; i_8 < 20; i_8 += 1) 
                    {
                        arr_27 [i_0] = ((/* implicit */unsigned int) arr_5 [i_7 + 3] [i_1] [i_1]);
                        arr_28 [i_0 - 1] [i_7 - 1] [i_0 - 1] [i_8] [i_0] [i_8] = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_26 [i_0 + 1])) : (((/* implicit */int) arr_26 [i_0 - 2])))) + (2147483647))) >> (((((/* implicit */_Bool) 2115515705U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)19))) : (2115515732U)))));
                        var_21 |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_19 [i_7 + 4] [i_7 - 1] [i_7] [i_7 + 2] [i_0 - 1])) ? (((/* implicit */int) arr_19 [i_7 + 3] [i_7 + 2] [(short)10] [i_7 - 1] [i_0 - 3])) : (((/* implicit */int) var_10)))) >> (((((/* implicit */int) min((arr_19 [i_7 + 2] [i_7 + 2] [i_7 - 1] [i_7 + 4] [i_0 + 1]), (arr_19 [i_7 + 1] [i_7 + 1] [i_7 + 3] [i_7 + 3] [i_0 - 1])))) - (477)))));
                    }
                    for (unsigned int i_9 = 3; i_9 < 16; i_9 += 1) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_10 = 0; i_10 < 20; i_10 += 2) 
                        {
                            var_22 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0] [i_10]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) 2179451610U)) ? (2179451612U) : (2115515732U))))) >> (((((/* implicit */int) (unsigned short)59424)) - (59399)))));
                            var_23 = (i_0 % 2 == zero) ? (((((arr_0 [(unsigned short)19] [i_0]) >> (((arr_0 [(short)16] [i_0]) - (4121187334U))))) >> (((((/* implicit */int) arr_12 [i_9] [i_7] [i_7 + 3] [i_1] [i_1])) + (26))))) : (((((arr_0 [(unsigned short)19] [i_0]) >> (((((arr_0 [(short)16] [i_0]) - (4121187334U))) - (1114262054U))))) >> (((((/* implicit */int) arr_12 [i_9] [i_7] [i_7 + 3] [i_1] [i_1])) + (26)))));
                        }
                        for (unsigned int i_11 = 3; i_11 < 17; i_11 += 2) /* same iter space */
                        {
                            var_24 *= ((/* implicit */signed char) (+(((/* implicit */int) arr_19 [i_11] [i_9] [i_7 + 3] [i_1] [(unsigned short)14]))));
                            arr_38 [i_0] [(signed char)5] [i_7] = arr_30 [i_9] [i_7] [i_1] [i_0];
                        }
                        for (unsigned int i_12 = 3; i_12 < 17; i_12 += 2) /* same iter space */
                        {
                            var_25 = ((/* implicit */short) ((unsigned short) (~((-(((/* implicit */int) arr_39 [(short)13] [(unsigned short)15] [i_7] [i_7] [i_7] [i_7 + 2])))))));
                            arr_42 [(signed char)9] [i_0] [i_7] [i_7] [i_7] = ((/* implicit */signed char) var_9);
                            arr_43 [i_0] [i_0] = ((/* implicit */unsigned short) arr_25 [i_1] [19U] [i_1] [i_0]);
                            var_26 = arr_26 [i_9 - 1];
                        }
                        var_27 = ((/* implicit */unsigned short) (+((-(((/* implicit */int) var_4))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_13 = 3; i_13 < 16; i_13 += 1) /* same iter space */
                    {
                        var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_23 [18U] [(short)18] [(signed char)10])) : (((/* implicit */int) arr_17 [(signed char)18] [(short)0] [i_13])))) + (2147483647))) >> (((((/* implicit */int) arr_19 [i_1] [i_1] [4U] [i_1] [i_1])) >> (((((/* implicit */int) (signed char)57)) - (31))))))))));
                        var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) var_11))));
                        arr_47 [i_0] [(signed char)11] [i_0] = ((/* implicit */unsigned short) ((unsigned int) (-(((/* implicit */int) (signed char)0)))));
                        arr_48 [i_0] [(unsigned short)11] [(signed char)18] = arr_29 [i_13] [i_0] [i_0] [i_0 - 1];
                    }
                    arr_49 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2115515705U)) ? (431359790U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-22994)))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_16 [i_0])))) : (((/* implicit */int) arr_23 [i_0] [(short)9] [i_0]))));
                    var_30 = ((/* implicit */short) arr_9 [i_7] [i_0] [i_0 - 1]);
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_14 = 1; i_14 < 21; i_14 += 2) 
    {
        for (short i_15 = 0; i_15 < 25; i_15 += 4) 
        {
            {
                var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_52 [6U] [6U] [i_14 - 1])) ? (((/* implicit */int) arr_50 [i_15])) : (((/* implicit */int) arr_52 [i_14] [17U] [i_14 - 1]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_52 [i_14] [i_14] [i_14 - 1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)-13927))))) : ((-(4084834100U))))))));
                arr_56 [i_14 + 1] [(unsigned short)15] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_53 [i_14])) >> (13U)))) ? (min((((((/* implicit */_Bool) arr_52 [i_14 + 2] [i_15] [(signed char)13])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_54 [i_14])))), (((/* implicit */int) var_2)))) : (((/* implicit */int) (short)13926))));
            }
        } 
    } 
    var_32 = ((/* implicit */signed char) var_9);
}
