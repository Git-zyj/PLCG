/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62342
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (short i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        arr_11 [i_3] [i_2] [i_1] [i_2] [i_0] = ((/* implicit */short) ((unsigned int) (~(((/* implicit */int) (short)-13)))));
                        arr_12 [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((var_3) / ((~(1874282843U))))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned int i_4 = 3; i_4 < 15; i_4 += 4) 
                        {
                            var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-10))) ^ (2356203121U)))) ? (((((/* implicit */_Bool) (short)30720)) ? (arr_14 [i_0] [i_1] [(short)0] [(short)11] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2] [i_3] [i_4 - 1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-10))))))));
                            arr_15 [i_2] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_7 [i_4 - 2] [i_3] [i_1])) < (((/* implicit */int) arr_2 [i_0]))))) << (((4294967295U) - (4294967274U)))));
                        }
                        for (unsigned int i_5 = 0; i_5 < 16; i_5 += 4) 
                        {
                            var_12 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) 1368686109U)) ? (1048575U) : (0U))) : (((16777208U) / (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))));
                            arr_18 [i_2] [i_3] [i_2] [i_2] [i_2] = ((/* implicit */short) (-(((((/* implicit */_Bool) 1368686096U)) ? (((/* implicit */int) (short)63)) : (((/* implicit */int) (short)-17))))));
                        }
                        for (unsigned int i_6 = 0; i_6 < 16; i_6 += 3) 
                        {
                            var_13 = ((/* implicit */short) ((unsigned int) ((short) var_6)));
                            var_14 += (short)-26427;
                            arr_22 [i_0] [i_1] [i_2] [i_3] [i_2] = (short)32758;
                            var_15 *= ((/* implicit */short) (+(((unsigned int) min((792289713U), (var_7))))));
                            var_16 = ((/* implicit */short) max((3577763738U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967272U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2] [i_1]))) : (2926281160U)))) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) var_0)), (arr_19 [i_2] [i_3] [i_0] [i_1] [i_2])))))))));
                        }
                        arr_23 [i_2] [i_0] [11U] [i_3] [i_3] = ((/* implicit */short) ((var_2) == (((/* implicit */unsigned int) ((/* implicit */int) (short)1024)))));
                        arr_24 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */short) ((unsigned int) var_7));
                    }
                    for (short i_7 = 3; i_7 < 14; i_7 += 3) 
                    {
                        var_17 = ((/* implicit */short) max((var_17), (var_1)));
                        arr_27 [(short)2] [i_1] [i_2] [i_1] |= ((/* implicit */short) var_3);
                        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) var_10))));
                    }
                    var_19 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((short) arr_9 [i_2] [(short)5] [i_1] [i_1] [(short)4] [i_0])))));
                }
                for (unsigned int i_8 = 0; i_8 < 16; i_8 += 2) 
                {
                    arr_30 [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_10))));
                    arr_31 [i_0] [i_1] [i_8] [i_8] = (+(((((/* implicit */_Bool) arr_6 [i_8] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_8]))) : (var_5))));
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 0; i_9 < 16; i_9 += 4) 
                    {
                        for (unsigned int i_10 = 0; i_10 < 16; i_10 += 2) 
                        {
                            {
                                arr_38 [i_0] [i_0] = ((/* implicit */unsigned int) (short)9);
                                var_20 -= ((/* implicit */unsigned int) (((+(((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_9] [i_0])))) ^ (((((/* implicit */_Bool) arr_16 [i_10] [i_10] [i_8] [i_10] [i_0])) ? (((/* implicit */int) arr_16 [i_0] [i_0] [i_8] [i_10] [i_10])) : (((/* implicit */int) var_1))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned int i_11 = 0; i_11 < 16; i_11 += 4) 
                {
                    arr_42 [i_11] [i_11] [i_1] [i_0] = (~(4294967295U));
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 0; i_12 < 16; i_12 += 3) 
                    {
                        for (short i_13 = 4; i_13 < 15; i_13 += 3) 
                        {
                            {
                                var_21 ^= ((/* implicit */short) (-((-(((/* implicit */int) (short)-56))))));
                                arr_47 [12U] [i_12] [14U] [(short)5] [i_12] &= ((arr_8 [i_0] [i_0] [i_11] [i_13 - 4]) / (arr_8 [i_13] [i_13 - 1] [i_11] [i_13 - 3]));
                            }
                        } 
                    } 
                    arr_48 [i_11] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_0)) <= (((/* implicit */int) arr_35 [i_0] [i_0] [i_1] [i_1] [i_0] [i_11] [i_11])))))) == (arr_8 [i_0] [i_0] [i_11] [i_11])));
                }
                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0] [14U] [i_1]))) : (arr_46 [i_0] [i_1] [i_0] [i_1])))) ? (((((/* implicit */_Bool) arr_1 [i_1] [i_0])) ? (var_7) : (arr_14 [i_1] [i_1] [(short)2] [i_1] [i_1]))) : (min((arr_46 [i_0] [i_0] [i_0] [0U]), (arr_32 [i_0] [i_1] [i_1] [i_1])))))))))));
                var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) == (min((((/* implicit */unsigned int) (short)10)), (((((/* implicit */_Bool) (short)-1032)) ? (arr_3 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))))))));
                arr_49 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) arr_35 [i_1] [i_1] [i_1] [(short)12] [i_1] [i_1] [(short)4])) : (((((/* implicit */_Bool) arr_13 [i_1])) ? (((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_1] [i_1])) : (((/* implicit */int) arr_16 [i_0] [i_1] [i_0] [i_1] [i_0]))))));
                var_24 = ((/* implicit */short) ((unsigned int) arr_1 [i_0] [i_1]));
            }
        } 
    } 
    var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (+(((/* implicit */int) (short)12901)))))));
    var_26 = var_2;
    var_27 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-16785))) : (var_7)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_7) <= (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))) : (var_2))))));
}
