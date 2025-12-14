/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55201
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
    var_18 &= ((/* implicit */short) var_8);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_19 ^= ((/* implicit */short) ((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))) == (((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0])))))));
        /* LoopNest 3 */
        for (short i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 15; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 16; i_3 += 1) 
                {
                    {
                        var_20 ^= ((/* implicit */short) max((((/* implicit */int) min((arr_10 [i_3] [i_1 + 3] [i_1 + 1] [i_2 + 1] [i_2]), (arr_10 [i_0] [i_0] [i_1 - 1] [i_2 + 1] [i_1 + 1])))), ((~(((/* implicit */int) arr_10 [i_1] [i_1] [i_1 - 1] [i_2 + 1] [i_1]))))));
                        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_2] [i_0] [i_0])) ? (min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_8 [i_3] [i_3] [(short)2] [(short)2] [i_1] [i_0])) : (((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) (short)7391)) ? (((/* implicit */int) (short)-25580)) : (((/* implicit */int) (short)25588)))))))));
                        var_22 = max((((unsigned int) (+(((/* implicit */int) var_15))))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_2 [i_2 - 1] [i_1 + 4] [i_1 + 2]))))));
                    }
                } 
            } 
        } 
        arr_11 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (arr_3 [i_0] [i_0] [i_0]) : (arr_3 [i_0] [i_0] [i_0])))) ? ((-(arr_3 [i_0] [i_0] [i_0]))) : (arr_3 [i_0] [i_0] [i_0])));
        arr_12 [i_0] = ((/* implicit */unsigned char) min((433298819U), (((/* implicit */unsigned int) (short)-14238))));
        arr_13 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [(short)3] [(short)3] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]))) : (arr_0 [i_0] [i_0])))) ? ((-(arr_7 [i_0] [i_0] [i_0]))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [(short)6] [i_0] [i_0]))) : (arr_5 [i_0] [i_0])))))) ? (min((arr_7 [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) arr_9 [(short)12] [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) min((var_11), (var_16)))) < (((/* implicit */int) ((var_12) == (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))))))));
    }
    for (short i_4 = 1; i_4 < 10; i_4 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 13; i_5 += 1) 
        {
            for (unsigned int i_6 = 0; i_6 < 13; i_6 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 13; i_7 += 4) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 13; i_8 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_0)) ? (arr_0 [i_4] [(unsigned char)12]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))) ? (((/* implicit */int) arr_9 [i_5] [i_7] [i_6] [i_4] [i_8])) : (((/* implicit */int) var_2))));
                                arr_26 [i_4] [i_5] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_4] [i_4] [i_7] [i_4])) ? (max((arr_16 [i_4] [7U] [i_5]), (((/* implicit */unsigned int) arr_21 [i_4] [i_4] [i_8] [i_4 + 1])))) : (max((((/* implicit */unsigned int) arr_17 [i_5] [i_5])), (arr_3 [i_7] [i_5] [i_6]))))))));
                                arr_27 [i_8] [i_7] [i_6] [i_5] [i_4] [i_4 - 1] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3190077802U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)254))) : (3648335089U)));
                            }
                        } 
                    } 
                    var_24 ^= ((/* implicit */short) arr_2 [i_4] [i_5] [i_6]);
                    var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) (((+(min((arr_3 [i_4 - 1] [i_4 - 1] [i_6]), (((/* implicit */unsigned int) var_4)))))) % (((/* implicit */unsigned int) max((((((/* implicit */int) arr_2 [i_4 + 2] [i_5] [i_4 + 2])) % (((/* implicit */int) arr_17 [i_6] [i_5])))), (((/* implicit */int) max((arr_21 [3U] [(short)6] [i_4] [i_4]), (((/* implicit */short) var_8)))))))))))));
                }
            } 
        } 
        var_26 = ((/* implicit */short) min((var_26), (var_7)));
    }
    for (unsigned char i_9 = 0; i_9 < 17; i_9 += 1) 
    {
        var_27 = ((/* implicit */unsigned char) arr_28 [i_9]);
        var_28 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_29 [i_9] [i_9])) ? (((/* implicit */int) arr_29 [i_9] [i_9])) : (((/* implicit */int) arr_29 [i_9] [i_9])))), (((((/* implicit */_Bool) arr_29 [i_9] [i_9])) ? (((/* implicit */int) arr_29 [i_9] [i_9])) : (((/* implicit */int) arr_29 [i_9] [i_9]))))));
        /* LoopNest 2 */
        for (short i_10 = 2; i_10 < 16; i_10 += 3) 
        {
            for (unsigned int i_11 = 0; i_11 < 17; i_11 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_12 = 0; i_12 < 17; i_12 += 4) 
                    {
                        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_38 [i_10] [i_10] [i_10] [i_10] [i_10 + 1])) ? (((/* implicit */int) arr_38 [i_10] [i_10] [i_10] [i_10 + 1] [i_10 + 1])) : (((/* implicit */int) arr_38 [i_9] [i_9] [i_10] [i_9] [i_10 + 1]))));
                        /* LoopSeq 1 */
                        for (unsigned int i_13 = 2; i_13 < 15; i_13 += 4) 
                        {
                            var_30 = ((/* implicit */unsigned int) var_11);
                            arr_43 [i_10] = arr_30 [i_10 + 1] [i_11] [i_11];
                            var_31 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_41 [i_9] [i_13 + 2] [i_12] [i_12] [i_12] [i_9] [i_11])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_41 [i_13] [i_13] [i_12] [i_13] [i_12] [i_13 - 1] [i_13 - 2]))));
                            var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_41 [i_13] [i_10] [i_10] [i_13] [i_10] [i_13 - 1] [i_11])) ? (((/* implicit */int) arr_41 [i_13] [6U] [i_10] [i_13] [i_10] [i_13 - 1] [i_12])) : (((/* implicit */int) arr_41 [i_13] [6U] [i_10] [i_13 - 2] [i_10] [i_13 - 1] [i_9]))));
                            var_33 = ((short) arr_29 [i_9] [i_10 - 1]);
                        }
                    }
                    for (short i_14 = 0; i_14 < 17; i_14 += 3) 
                    {
                        var_34 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_11), (((/* implicit */short) var_13))))) ? (arr_30 [i_14] [i_11] [i_10 - 2]) : (((((/* implicit */_Bool) arr_28 [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_10] [i_9] [i_14] [i_9] [i_14]))) : (var_5)))))) ? (((((/* implicit */_Bool) 3571576680U)) ? (4294967279U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_31 [i_10 - 1] [i_10] [i_11]))))));
                        arr_47 [i_10] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_36 [i_10] [i_10 - 2] [i_10] [i_10 + 1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : ((((!(((/* implicit */_Bool) arr_40 [i_11] [i_11] [i_11] [i_14] [i_11])))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_29 [(short)3] [(short)3]), (arr_31 [i_10] [i_10] [i_9]))))) : (arr_39 [i_10] [i_10])))));
                    }
                    var_35 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)-24428)))))));
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (unsigned int i_15 = 0; i_15 < 16; i_15 += 1) 
    {
        for (short i_16 = 2; i_16 < 14; i_16 += 3) 
        {
            for (unsigned char i_17 = 0; i_17 < 16; i_17 += 4) 
            {
                {
                    arr_55 [i_16] [i_16] = ((/* implicit */short) ((((((/* implicit */int) (short)7816)) < (((/* implicit */int) (short)(-32767 - 1))))) ? (((/* implicit */int) var_17)) : (max(((+(((/* implicit */int) var_17)))), (((((/* implicit */_Bool) arr_35 [i_17] [i_16] [i_16] [i_17])) ? (((/* implicit */int) arr_38 [i_15] [i_15] [i_16] [i_15] [i_15])) : (((/* implicit */int) var_16))))))));
                    var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) ((unsigned int) arr_10 [i_15] [i_16] [i_16] [i_15] [i_17])))));
                }
            } 
        } 
    } 
}
