/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65085
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            for (unsigned char i_2 = 4; i_2 < 22; i_2 += 4) 
            {
                for (unsigned char i_3 = 1; i_3 < 24; i_3 += 2) 
                {
                    {
                        var_19 = (unsigned char)255;
                        var_20 -= (unsigned char)94;
                        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) min(((-(((/* implicit */int) var_15)))), (((/* implicit */int) max(((unsigned char)236), (var_7)))))))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned char i_4 = 1; i_4 < 23; i_4 += 4) 
                        {
                            arr_14 [i_0] [(unsigned char)20] [(unsigned char)4] [i_2 - 4] [i_3] [i_4] [i_4] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_8))));
                            arr_15 [i_0] [i_1] [(unsigned char)1] = (unsigned char)20;
                        }
                        for (unsigned char i_5 = 0; i_5 < 25; i_5 += 4) 
                        {
                            var_22 = min(((unsigned char)228), (var_1));
                            var_23 = max((((unsigned char) (unsigned char)89)), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)6))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_6 = 0; i_6 < 25; i_6 += 2) 
                        {
                            var_24 -= var_11;
                            arr_23 [i_0] = var_5;
                            arr_24 [i_0] [i_0] [i_2 + 1] [i_3] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_11))));
                            var_25 = ((unsigned char) (unsigned char)27);
                        }
                        /* vectorizable */
                        for (unsigned char i_7 = 0; i_7 < 25; i_7 += 4) 
                        {
                            var_26 |= var_17;
                            var_27 -= ((unsigned char) (unsigned char)255);
                            var_28 |= var_8;
                        }
                    }
                } 
            } 
        } 
        var_29 = ((/* implicit */unsigned char) min((var_29), (var_0)));
    }
    /* vectorizable */
    for (unsigned char i_8 = 0; i_8 < 16; i_8 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_9 = 0; i_9 < 16; i_9 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_10 = 0; i_10 < 16; i_10 += 2) 
            {
                arr_36 [i_8] = var_4;
                /* LoopSeq 3 */
                for (unsigned char i_11 = 0; i_11 < 16; i_11 += 3) 
                {
                    arr_40 [i_8] [(unsigned char)4] [i_8] [i_10] [(unsigned char)0] = (unsigned char)192;
                    var_30 = (unsigned char)240;
                    /* LoopSeq 4 */
                    for (unsigned char i_12 = 0; i_12 < 16; i_12 += 2) 
                    {
                        var_31 = ((/* implicit */unsigned char) max((var_31), (var_5)));
                        arr_43 [(unsigned char)1] [i_8] [i_9] [i_8] [i_11] [i_12] = var_9;
                        var_32 = var_3;
                        var_33 = (unsigned char)255;
                        var_34 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
                    }
                    for (unsigned char i_13 = 0; i_13 < 16; i_13 += 4) 
                    {
                        var_35 = var_5;
                        var_36 = ((/* implicit */unsigned char) min((var_36), (((unsigned char) (+(((/* implicit */int) (unsigned char)82)))))));
                        var_37 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_1))));
                    }
                    for (unsigned char i_14 = 2; i_14 < 14; i_14 += 2) 
                    {
                        var_38 = (unsigned char)232;
                        var_39 = var_16;
                        arr_48 [i_8] [i_8] = ((unsigned char) (unsigned char)108);
                    }
                    for (unsigned char i_15 = 3; i_15 < 15; i_15 += 1) 
                    {
                        var_40 |= ((/* implicit */unsigned char) (-(((/* implicit */int) var_7))));
                        arr_51 [i_8] [i_9] [i_8] = var_2;
                        var_41 = (unsigned char)148;
                    }
                    var_42 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_5))));
                }
                for (unsigned char i_16 = 3; i_16 < 15; i_16 += 2) 
                {
                    var_43 = ((unsigned char) var_16);
                    var_44 = ((/* implicit */unsigned char) max((var_44), (((unsigned char) (unsigned char)255))));
                    var_45 = var_11;
                }
                for (unsigned char i_17 = 0; i_17 < 16; i_17 += 2) 
                {
                    arr_58 [i_8] = var_8;
                    arr_59 [i_8] [i_9] [i_8] [i_17] = var_15;
                }
                var_46 = var_13;
            }
            var_47 = ((unsigned char) var_9);
            arr_60 [i_8] = var_13;
            var_48 = ((unsigned char) (unsigned char)223);
        }
        for (unsigned char i_18 = 3; i_18 < 14; i_18 += 2) 
        {
            arr_64 [i_8] = ((unsigned char) var_4);
            arr_65 [(unsigned char)12] &= var_4;
            var_49 ^= (unsigned char)60;
            var_50 = var_12;
        }
        for (unsigned char i_19 = 3; i_19 < 13; i_19 += 4) 
        {
            var_51 += ((/* implicit */unsigned char) (-(((/* implicit */int) var_18))));
            var_52 = ((unsigned char) var_4);
            var_53 = ((/* implicit */unsigned char) min((var_53), (((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)1)))))));
            /* LoopSeq 2 */
            for (unsigned char i_20 = 0; i_20 < 16; i_20 += 3) 
            {
                var_54 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)174))));
                /* LoopNest 2 */
                for (unsigned char i_21 = 1; i_21 < 12; i_21 += 2) 
                {
                    for (unsigned char i_22 = 4; i_22 < 13; i_22 += 2) 
                    {
                        {
                            var_55 = var_18;
                            var_56 = var_5;
                            arr_75 [i_8] [i_21] [i_8] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) (unsigned char)19)))));
                            var_57 = ((/* implicit */unsigned char) min((var_57), (((unsigned char) (unsigned char)19))));
                        }
                    } 
                } 
            }
            for (unsigned char i_23 = 2; i_23 < 15; i_23 += 2) 
            {
                var_58 = ((/* implicit */unsigned char) max((var_58), (var_14)));
                var_59 = var_14;
            }
        }
        var_60 = (unsigned char)136;
        var_61 = ((unsigned char) var_11);
        var_62 = ((unsigned char) (unsigned char)254);
    }
    var_63 = var_0;
    var_64 = (unsigned char)174;
    var_65 = min((var_2), ((unsigned char)27));
}
