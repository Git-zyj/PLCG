/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83446
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned char i_2 = 3; i_2 < 13; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 12; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 4; i_4 < 13; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2 + 1] [i_3 + 3] [i_4] [i_0] [(unsigned char)2] = ((/* implicit */short) max(((-((-(514663787U))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) / (((/* implicit */int) (unsigned char)249))))) ? (((/* implicit */int) ((unsigned short) arr_4 [i_4]))) : ((~(((/* implicit */int) (unsigned char)2)))))))));
                                arr_13 [i_0] [i_1] [i_2] [i_0] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [(unsigned char)8])) && (((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_2 - 3] [i_0] [i_4]))));
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) var_0)) * (((((((/* implicit */int) (unsigned char)62)) <= (((/* implicit */int) arr_9 [i_0] [(unsigned char)11] [i_2 - 3] [i_2 - 3])))) ? (((/* implicit */int) max((arr_4 [i_2 + 1]), (((/* implicit */unsigned short) (unsigned char)94))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))));
                                var_10 = ((/* implicit */unsigned int) max((var_10), (min((((((/* implicit */_Bool) arr_7 [i_0] [i_2 + 1] [i_2] [i_3 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2] [i_2 + 1] [i_2] [i_3 + 1]))) : (var_4))), (((/* implicit */unsigned int) ((unsigned short) (unsigned char)94)))))));
                            }
                        } 
                    } 
                    arr_15 [i_1] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned int) arr_9 [i_2 + 2] [i_2] [i_2 + 1] [(unsigned short)11])))));
                    var_11 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)84)) >> ((((((((~(((/* implicit */int) (unsigned char)114)))) + (2147483647))) >> (((((/* implicit */int) var_9)) - (4060))))) - (33554426)))));
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned char i_5 = 1; i_5 < 22; i_5 += 1) 
    {
        var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) (-(((((/* implicit */unsigned int) (~(((/* implicit */int) arr_18 [i_5]))))) * (var_4))))))));
        var_13 *= ((unsigned short) ((arr_19 [i_5 + 2]) % (arr_19 [i_5 + 2])));
    }
    for (unsigned short i_6 = 0; i_6 < 11; i_6 += 3) 
    {
        var_14 &= (((!(((/* implicit */_Bool) arr_19 [i_6])))) ? (max((var_3), (((/* implicit */unsigned int) var_0)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))));
        /* LoopSeq 1 */
        for (short i_7 = 0; i_7 < 11; i_7 += 2) 
        {
            var_15 = ((/* implicit */short) (unsigned short)21);
            arr_26 [i_6] = ((/* implicit */unsigned short) (short)-11201);
            /* LoopNest 3 */
            for (unsigned int i_8 = 1; i_8 < 9; i_8 += 3) 
            {
                for (unsigned char i_9 = 3; i_9 < 10; i_9 += 4) 
                {
                    for (unsigned int i_10 = 0; i_10 < 11; i_10 += 2) 
                    {
                        {
                            arr_36 [i_6] [(unsigned short)7] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)13482)) ? (((((/* implicit */_Bool) ((unsigned char) arr_5 [i_8] [i_8] [i_8] [(unsigned char)3]))) ? (((/* implicit */int) ((unsigned char) (short)-11201))) : (((/* implicit */int) max((var_0), (var_6)))))) : (((((/* implicit */_Bool) (unsigned char)72)) ? (((((/* implicit */_Bool) 4294967278U)) ? (((/* implicit */int) (unsigned short)23715)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) arr_9 [i_6] [5U] [i_9 - 2] [i_8 - 1]))))));
                            var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_6] [i_7] [(unsigned char)8] [i_9] [(unsigned char)8])))))))) << (((min((((((/* implicit */_Bool) arr_33 [i_6] [i_6])) ? (((/* implicit */int) arr_7 [i_7] [i_8] [i_9] [i_10])) : (((/* implicit */int) var_6)))), (((/* implicit */int) arr_27 [i_6] [i_7] [i_8 + 1] [i_10])))) - (30357)))));
                            arr_37 [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) arr_23 [i_6]);
                        }
                    } 
                } 
            } 
        }
        var_17 = ((/* implicit */unsigned int) arr_21 [i_6] [i_6]);
    }
    for (unsigned short i_11 = 0; i_11 < 21; i_11 += 4) /* same iter space */
    {
        arr_40 [i_11] [i_11] = var_7;
        arr_41 [i_11] = arr_17 [i_11];
        var_18 *= (unsigned char)16;
        arr_42 [i_11] [i_11] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (-(var_3)))) ? ((~(((/* implicit */int) arr_16 [i_11] [i_11])))) : (((/* implicit */int) ((unsigned char) arr_17 [i_11])))))));
    }
    for (unsigned short i_12 = 0; i_12 < 21; i_12 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_44 [i_12])))))));
        var_20 = ((/* implicit */unsigned int) (+((+(((/* implicit */int) var_9))))));
        arr_46 [i_12] [i_12] = 670154157U;
        arr_47 [i_12] = min((var_5), (((/* implicit */unsigned int) var_9)));
    }
    /* LoopNest 3 */
    for (unsigned short i_13 = 3; i_13 < 15; i_13 += 2) 
    {
        for (unsigned int i_14 = 1; i_14 < 14; i_14 += 1) 
        {
            for (short i_15 = 0; i_15 < 17; i_15 += 3) 
            {
                {
                    arr_55 [(unsigned short)14] [i_14] [i_15] [i_15] &= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) / (var_3)));
                    /* LoopSeq 2 */
                    for (unsigned char i_16 = 1; i_16 < 14; i_16 += 4) 
                    {
                        arr_59 [(unsigned short)16] [(unsigned short)16] [(short)4] [(unsigned short)16] [(short)4] [i_16 + 2] = max((((/* implicit */unsigned int) ((unsigned char) arr_17 [i_13 - 3]))), (var_4));
                        arr_60 [i_16] [15U] [i_16] [i_16] = ((/* implicit */unsigned char) (+(((unsigned int) var_6))));
                        /* LoopSeq 1 */
                        for (short i_17 = 0; i_17 < 17; i_17 += 2) 
                        {
                            var_21 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_17 [i_16 + 1])) : (((/* implicit */int) arr_17 [i_16 - 1]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_64 [i_13 + 1] [i_13 + 2] [i_15] [i_15] [i_16 + 3] [i_14 + 2])) ? (((/* implicit */int) arr_64 [i_13 - 1] [i_13 - 1] [i_15] [i_16] [i_16 + 3] [i_14 + 1])) : (((/* implicit */int) var_1))))) : (max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3))))), (var_5))));
                            var_22 = ((/* implicit */unsigned short) var_3);
                        }
                        arr_65 [i_16] [(unsigned char)14] [i_15] [(short)6] [i_16] [i_16] = ((/* implicit */unsigned char) (~((-(((/* implicit */int) min((var_2), (arr_64 [i_13] [i_14] [i_15] [i_16] [i_16] [i_16]))))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_18 = 1; i_18 < 15; i_18 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)10))));
                        arr_68 [i_18] [(unsigned char)2] [i_14] [i_13] = ((/* implicit */unsigned char) arr_44 [i_15]);
                        var_24 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_7))));
                    }
                    arr_69 [i_13] [i_15] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_63 [i_13] [i_13] [i_13] [i_13] [i_13 - 2])))) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_63 [i_13 - 2] [(short)6] [(short)6] [i_13 - 3] [i_13 + 2])) : (((/* implicit */int) arr_63 [i_13] [(unsigned short)5] [i_13] [i_13] [i_13 - 2])))) : (((/* implicit */int) var_8))));
                }
            } 
        } 
    } 
}
