/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80517
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
    var_11 = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned char) var_3)), (var_1))))) % (((/* implicit */int) (short)-17073))));
    var_12 = ((/* implicit */short) var_3);
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */int) (((+(((/* implicit */int) (_Bool)1)))) > (((/* implicit */int) var_7))))) >> (((((/* implicit */int) var_4)) - (3342)))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 4; i_3 < 19; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_14 *= ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) (unsigned char)245)))));
                                var_15 -= ((/* implicit */unsigned char) ((short) (~(((/* implicit */int) (short)31505)))));
                            }
                        } 
                    } 
                    arr_12 [i_0] [i_0] [(unsigned char)4] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) var_7)) != (((/* implicit */int) arr_8 [i_0 + 1] [i_2 - 1] [i_0]))))) & ((+(((/* implicit */int) var_7))))));
                    var_16 = ((_Bool) (!((_Bool)0)));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_15 [i_0] [(_Bool)1] [(short)0] [i_2 + 1] [i_0] = (_Bool)1;
                        /* LoopSeq 4 */
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                        {
                            var_17 += ((/* implicit */short) ((_Bool) arr_14 [i_0] [i_0 + 1] [i_2 - 1] [i_0 + 1] [i_6 + 1] [i_2 + 2]));
                            arr_20 [i_0] [i_0] [i_2] [i_5] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_0 + 1] [(unsigned char)14] [i_0])) ? (((/* implicit */int) arr_7 [i_2] [i_2 + 1] [(_Bool)1] [i_2 + 2] [i_2 + 1] [i_0])) : (((/* implicit */int) arr_18 [i_1] [i_2 + 1] [i_2 + 1] [(_Bool)0] [i_2 + 2]))));
                            var_18 = ((/* implicit */_Bool) (+(((var_6) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6))))));
                        }
                        for (unsigned char i_7 = 0; i_7 < 22; i_7 += 3) 
                        {
                            var_19 = ((((/* implicit */int) arr_17 [(unsigned char)13] [i_2 - 1] [i_2] [i_2 + 1] [i_2 - 1] [i_2] [i_2])) == (((/* implicit */int) arr_17 [i_2] [i_2 + 2] [i_2 + 2] [i_2 - 1] [i_2 + 2] [(unsigned char)0] [(_Bool)1])));
                            var_20 = ((/* implicit */short) (+(((/* implicit */int) (short)28569))));
                            var_21 -= ((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_2 + 2] [i_2 + 1])) & (((/* implicit */int) var_6))));
                            var_22 = ((/* implicit */short) (-(((/* implicit */int) var_5))));
                        }
                        for (unsigned char i_8 = 0; i_8 < 22; i_8 += 2) 
                        {
                            var_23 -= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5))))));
                            arr_27 [i_0 + 1] [i_1] [i_2 - 1] [i_5] [i_0] = ((/* implicit */_Bool) (-(((((/* implicit */int) var_1)) >> (((((/* implicit */int) arr_4 [i_0 + 1] [i_0] [i_0])) + (32233)))))));
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_16 [i_0] [i_0] [i_0 + 1] [i_2 - 1] [i_0 + 1])) + (((/* implicit */int) var_6))));
                            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2 + 2] [i_0 + 1] [i_2 + 2])) ? (((/* implicit */int) (unsigned char)236)) : (((((/* implicit */_Bool) (short)17088)) ? (((/* implicit */int) (unsigned char)8)) : (((/* implicit */int) var_3))))));
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            arr_30 [i_0] [(short)1] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (short)-17072)) * (((/* implicit */int) (unsigned char)8))));
                            arr_31 [i_0] [i_0] [i_1] [i_2 + 2] [(short)3] [i_0] = ((/* implicit */short) ((_Bool) (+(((/* implicit */int) (_Bool)1)))));
                            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [(short)2] [i_0 + 1] [i_0 + 1] [i_0 + 1] [(short)11] [(_Bool)1] [i_2 + 1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_17 [i_0] [(unsigned char)5] [i_2 + 1] [i_0 + 1] [i_9] [i_2] [i_2 + 2]))));
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_25 [(short)1] [i_2 + 2] [i_0] [i_1] [i_0 + 1]))));
                        }
                        var_28 = ((/* implicit */unsigned char) ((_Bool) (short)-11908));
                    }
                    for (unsigned char i_10 = 3; i_10 < 20; i_10 += 1) 
                    {
                        arr_36 [i_10] [i_1] [i_1] [i_10 + 2] [i_1] [i_0] = ((/* implicit */_Bool) (short)31508);
                        arr_37 [i_0 + 1] [i_1] [(unsigned char)12] [i_10] [i_10] &= ((/* implicit */unsigned char) max((((((/* implicit */int) (short)31514)) >> (((((/* implicit */int) arr_1 [i_0 + 1])) + (23622))))), ((~(((/* implicit */int) arr_13 [i_10 - 2] [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0]))))));
                    }
                    for (unsigned char i_11 = 3; i_11 < 19; i_11 += 2) 
                    {
                        var_29 = ((/* implicit */unsigned char) max(((+(((/* implicit */int) var_9)))), (((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_11 - 1]))));
                        arr_42 [i_2] [i_2] [i_0] [i_2] [i_2] [i_2] = ((_Bool) var_2);
                        arr_43 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) var_4)) == (((/* implicit */int) arr_29 [i_11 - 1] [i_11] [i_0] [i_2 + 1] [i_0] [i_1] [i_0])))))));
                        arr_44 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)-29372)))))));
                    }
                    arr_45 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) (short)17088);
                }
            } 
        } 
    } 
}
