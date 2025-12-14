/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7900
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
    for (unsigned short i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                            {
                                var_13 = ((/* implicit */_Bool) (((!(arr_12 [i_0] [i_0 + 1] [i_0] [i_0 - 1] [i_4 - 1]))) ? ((+(((/* implicit */int) arr_12 [i_0] [i_0 - 2] [i_0 - 2] [i_0 + 1] [i_4 - 1])))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_12 [i_0] [i_0 - 1] [i_0] [i_0 + 1] [i_4 - 1])) : (((/* implicit */int) arr_12 [i_0] [i_0 - 2] [i_0] [i_0 + 1] [i_4 - 1]))))));
                                var_14 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((_Bool) arr_9 [i_0] [i_0] [i_0])))));
                            }
                            /* vectorizable */
                            for (unsigned short i_5 = 0; i_5 < 12; i_5 += 2) /* same iter space */
                            {
                                var_15 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_10 [i_0] [i_0 - 1] [i_0 + 1] [i_0] [i_0 + 1]))));
                                var_16 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_3] [i_5])) : (((/* implicit */int) arr_11 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2]))));
                                var_17 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((((/* implicit */int) var_3)) <= (((/* implicit */int) var_8)))))));
                                var_18 ^= ((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_0] [i_0] [i_0 - 2] [i_0 - 3] [i_0 - 2] [i_0] [i_0 - 2])) << (((((/* implicit */int) var_1)) - (32453)))));
                                arr_16 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((arr_6 [i_2] [i_0 - 2] [i_2] [i_2]) ? (((/* implicit */int) ((((/* implicit */int) var_3)) == (((/* implicit */int) var_11))))) : (((/* implicit */int) arr_6 [i_0] [i_2] [i_3] [i_0]))));
                            }
                            for (unsigned short i_6 = 0; i_6 < 12; i_6 += 2) /* same iter space */
                            {
                                arr_19 [i_2] [i_2] [i_2] [i_0] [i_2] = ((/* implicit */unsigned short) ((_Bool) (!(((/* implicit */_Bool) (unsigned short)47056)))));
                                var_19 = var_5;
                                arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) var_5))))));
                                arr_21 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((-(((/* implicit */int) var_11)))) / (((/* implicit */int) arr_17 [i_0] [i_0 - 2]))))) ? (((/* implicit */int) min((arr_4 [i_0 - 1] [i_1]), (var_4)))) : (((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */int) var_8)) == (((/* implicit */int) var_7))))), (((unsigned short) var_11)))))));
                            }
                            /* vectorizable */
                            for (unsigned short i_7 = 0; i_7 < 12; i_7 += 2) /* same iter space */
                            {
                                arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] = var_3;
                                arr_26 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_22 [i_0 - 3]))));
                            }
                            var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) var_8)))))) ? ((+(((/* implicit */int) arr_4 [i_0 + 1] [i_0 - 2])))) : (((((/* implicit */_Bool) arr_2 [i_0 + 1] [(unsigned short)10])) ? (((/* implicit */int) arr_15 [i_0] [i_0 - 2] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_15 [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1]))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned short i_8 = 0; i_8 < 12; i_8 += 3) 
                {
                    arr_30 [i_0] [(unsigned short)2] [i_0] [(unsigned short)2] |= ((/* implicit */unsigned short) (-(((((/* implicit */int) arr_22 [i_0 - 1])) / (((/* implicit */int) arr_22 [i_0 - 1]))))));
                    var_21 = ((unsigned short) (_Bool)1);
                    /* LoopSeq 1 */
                    for (unsigned short i_9 = 4; i_9 < 11; i_9 += 3) 
                    {
                        arr_33 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (-(((var_9) ? ((-(((/* implicit */int) var_11)))) : (((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_0]))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned short) (((~(((/* implicit */int) var_9)))) & (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_1 [i_0] [i_0]))))));
                            arr_36 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */int) var_4)) <= (((/* implicit */int) arr_0 [i_10] [i_1])));
                        }
                        for (unsigned short i_11 = 0; i_11 < 12; i_11 += 1) /* same iter space */
                        {
                            var_23 = ((/* implicit */_Bool) ((max((((((/* implicit */_Bool) arr_22 [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10)))), (((/* implicit */int) var_11)))) * (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_31 [i_0] [i_0] [i_0] [i_0]))))));
                            var_24 = ((/* implicit */unsigned short) (((((~(((/* implicit */int) arr_28 [i_0 - 2])))) + (2147483647))) >> (((((((((/* implicit */int) var_3)) ^ (((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_0])))) << ((((((~(((/* implicit */int) var_5)))) + (31))) - (29))))) - (97899)))));
                        }
                        /* vectorizable */
                        for (unsigned short i_12 = 0; i_12 < 12; i_12 += 1) /* same iter space */
                        {
                            var_25 = ((/* implicit */_Bool) ((((((/* implicit */int) var_7)) & (((/* implicit */int) var_12)))) / (((((/* implicit */int) var_5)) + (((/* implicit */int) var_6))))));
                            var_26 *= ((/* implicit */_Bool) var_3);
                        }
                        var_27 = ((/* implicit */_Bool) ((unsigned short) (+(((/* implicit */int) (_Bool)1)))));
                        var_28 = ((/* implicit */unsigned short) max((var_9), (max(((_Bool)1), ((_Bool)1)))));
                    }
                }
                var_29 = ((/* implicit */_Bool) var_2);
            }
        } 
    } 
    var_30 = ((/* implicit */_Bool) var_8);
}
