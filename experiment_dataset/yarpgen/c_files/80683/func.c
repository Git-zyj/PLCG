/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80683
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
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) var_3)) >> (((var_10) - (571453375)))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        var_16 *= ((/* implicit */unsigned char) max((((/* implicit */unsigned short) arr_1 [i_0])), (var_12)));
        arr_2 [i_0] = ((/* implicit */unsigned char) max(((((-(((/* implicit */int) (unsigned char)114)))) + (((((/* implicit */int) var_8)) + (((/* implicit */int) var_8)))))), (((((/* implicit */int) arr_0 [i_0])) - (((((/* implicit */int) var_11)) + (((/* implicit */int) var_3))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) var_8)) & (((/* implicit */int) arr_0 [i_0])))) * ((+(((/* implicit */int) arr_1 [i_0 - 1]))))));
        var_17 = ((/* implicit */int) min((var_17), (((((/* implicit */int) arr_0 [(unsigned short)18])) & (((/* implicit */int) max((((((/* implicit */int) arr_1 [i_0])) > (((/* implicit */int) var_14)))), (((((/* implicit */int) (unsigned char)142)) == (((/* implicit */int) arr_1 [(unsigned short)4])))))))))));
        arr_4 [7] [i_0] = ((/* implicit */unsigned short) (unsigned char)187);
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */int) arr_7 [i_1]))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 3; i_2 < 18; i_2 += 4) 
        {
            for (unsigned char i_3 = 4; i_3 < 19; i_3 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_4 = 1; i_4 < 18; i_4 += 3) 
                    {
                        arr_16 [i_1] [i_3] [i_4 + 1] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_2))));
                        arr_17 [i_1] [i_1] [i_2] [2] [i_4] = ((((/* implicit */_Bool) arr_12 [i_3] [i_2 - 3] [i_2 - 3] [i_1])) ? (arr_12 [i_1] [i_4] [i_2 - 1] [i_1]) : (arr_12 [i_4] [i_4] [i_2 + 1] [i_1]));
                        arr_18 [i_1] [i_4 + 2] [i_1] [i_3] [i_2] [i_1] = ((/* implicit */unsigned char) (+(arr_12 [i_1] [i_2 - 2] [i_3 - 4] [i_3])));
                        var_19 += ((/* implicit */unsigned short) ((2147483647) & (arr_12 [i_3 - 4] [i_3 - 4] [i_3 + 1] [i_3 - 3])));
                    }
                    var_20 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)41938))));
                    /* LoopSeq 3 */
                    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 4) 
                    {
                        var_21 = ((((/* implicit */_Bool) arr_12 [i_2] [i_2 + 1] [i_2] [i_3 - 2])) ? (((arr_20 [i_1] [i_2] [(unsigned char)9] [i_5]) & (var_10))) : (arr_12 [(unsigned short)10] [11] [i_3] [i_5]));
                        arr_21 [i_2] = ((/* implicit */int) arr_11 [i_1]);
                    }
                    for (unsigned char i_6 = 2; i_6 < 19; i_6 += 3) 
                    {
                        var_22 = ((/* implicit */int) arr_11 [i_1]);
                        arr_25 [i_6] [i_3] [i_2] [i_1] = ((/* implicit */unsigned short) arr_13 [i_1] [i_1] [i_2] [i_3] [i_3] [i_6 - 2]);
                    }
                    for (unsigned char i_7 = 0; i_7 < 20; i_7 += 3) 
                    {
                        var_23 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_7)) : (1887337682))) >> (((2147483647) - (2147483632)))));
                        var_24 = (-(arr_24 [i_3 - 4] [i_2 + 1]));
                    }
                    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_2] [i_3 + 1] [(unsigned char)18] [i_3])) && (((/* implicit */_Bool) var_9))));
                    var_26 ^= ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_14 [(unsigned char)15] [10] [i_1] [i_1])))) & (((/* implicit */int) (unsigned char)12))));
                }
            } 
        } 
    }
    for (unsigned short i_8 = 2; i_8 < 12; i_8 += 1) 
    {
        arr_31 [i_8] = var_0;
        var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) arr_12 [i_8 + 1] [i_8] [i_8 - 1] [i_8]))));
        /* LoopSeq 1 */
        for (int i_9 = 1; i_9 < 12; i_9 += 4) 
        {
            arr_34 [i_8] [i_9] [i_9] = var_9;
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_10 = 3; i_10 < 12; i_10 += 4) 
            {
                var_28 = var_2;
                var_29 = ((/* implicit */unsigned short) (((~(((/* implicit */int) (unsigned char)243)))) == (((((/* implicit */int) var_2)) & (((/* implicit */int) arr_6 [5] [i_9]))))));
                var_30 = ((/* implicit */unsigned char) (((+(((/* implicit */int) (unsigned char)147)))) >= (((/* implicit */int) arr_1 [i_8 - 2]))));
            }
        }
    }
    var_31 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_13)) : ((~(var_1)))))));
    /* LoopNest 2 */
    for (unsigned char i_11 = 2; i_11 < 13; i_11 += 2) 
    {
        for (unsigned short i_12 = 1; i_12 < 16; i_12 += 3) 
        {
            {
                var_32 ^= ((/* implicit */unsigned char) var_14);
                arr_41 [(unsigned char)2] [i_12] = ((/* implicit */unsigned char) max((max((arr_26 [i_12 - 1] [i_12] [i_11] [i_12] [i_12 + 1] [(unsigned char)2]), (((/* implicit */unsigned short) arr_40 [i_12] [i_12] [i_12])))), (max((((/* implicit */unsigned short) arr_40 [i_12] [i_12] [i_12])), (arr_26 [i_12] [i_12] [i_11] [i_12] [i_12 + 1] [i_12])))));
            }
        } 
    } 
    var_33 *= ((/* implicit */unsigned char) var_5);
}
