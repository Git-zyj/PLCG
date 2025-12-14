/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8628
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
    var_11 = var_8;
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_12 = ((/* implicit */short) (-(((((/* implicit */int) var_1)) & (((/* implicit */int) arr_3 [i_0]))))));
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0]))));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((short) arr_1 [i_0]));
    }
    for (short i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 2; i_2 < 11; i_2 += 4) 
        {
            for (unsigned char i_3 = 2; i_3 < 10; i_3 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_4 = 1; i_4 < 11; i_4 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_5 = 0; i_5 < 12; i_5 += 4) 
                        {
                            var_14 -= ((/* implicit */unsigned char) var_7);
                            var_15 = ((/* implicit */short) ((unsigned char) arr_3 [(short)15]));
                            var_16 = max((((short) (short)2047)), (((short) arr_9 [i_2 - 2] [(unsigned char)7])));
                            var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? ((-((~(((/* implicit */int) (short)0)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) arr_13 [i_1] [i_2 - 1] [i_5] [i_1] [i_5] [(unsigned char)6])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_1])))) : (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) arr_8 [i_1] [(short)10]))))))));
                        }
                        for (unsigned char i_6 = 0; i_6 < 12; i_6 += 4) 
                        {
                            var_18 -= ((short) var_10);
                            var_19 = ((unsigned char) (short)(-32767 - 1));
                            var_20 -= ((/* implicit */unsigned char) ((((/* implicit */int) (short)32767)) * (((/* implicit */int) var_3))));
                        }
                        arr_21 [i_4] [(short)7] [i_4] [i_4] = ((/* implicit */short) arr_20 [i_4] [i_1] [i_3 - 2] [i_1] [i_1]);
                        var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((short) arr_1 [i_3 + 2])))));
                        /* LoopSeq 2 */
                        for (short i_7 = 4; i_7 < 8; i_7 += 4) 
                        {
                            arr_24 [(short)2] [(unsigned char)3] = ((/* implicit */short) (unsigned char)127);
                            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) max(((short)29440), ((short)32761)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((short) (short)(-32767 - 1))))));
                        }
                        for (unsigned char i_8 = 0; i_8 < 12; i_8 += 4) 
                        {
                            var_23 -= ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) min((arr_15 [i_1] [i_8] [i_4 - 1] [i_1] [(unsigned char)4] [i_2 + 1] [i_1]), (((/* implicit */short) arr_25 [i_1] [i_1]))))) : (((/* implicit */int) arr_0 [i_1])))));
                            var_24 -= ((/* implicit */short) (~((-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8))))))));
                            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) arr_22 [i_8] [i_2] [i_3 + 1] [i_4] [i_8])) : (((/* implicit */int) min((var_5), ((short)-20194))))))) ? (((/* implicit */int) ((short) arr_2 [i_1] [i_1]))) : (((/* implicit */int) var_6))));
                            var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)-32740)) + (2147483647))) >> (((((/* implicit */int) (unsigned char)63)) - (56)))))) ? (((/* implicit */int) arr_25 [i_3 - 2] [i_2 - 1])) : (((/* implicit */int) ((unsigned char) (short)-32743)))))))))));
                            var_27 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_10)) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))) ? (((/* implicit */int) min((max((var_10), (((/* implicit */short) var_4)))), (min((((/* implicit */short) (unsigned char)61)), (arr_22 [i_1] [i_1] [i_3] [i_4] [i_8])))))) : (((/* implicit */int) (short)32765))));
                        }
                    }
                    /* LoopNest 2 */
                    for (short i_9 = 3; i_9 < 8; i_9 += 4) 
                    {
                        for (short i_10 = 0; i_10 < 12; i_10 += 4) 
                        {
                            {
                                var_28 = ((/* implicit */short) ((unsigned char) var_0));
                                var_29 = var_9;
                                var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) (-(((((/* implicit */int) arr_34 [(unsigned char)4] [i_2 - 2])) + (((/* implicit */int) var_7)))))))));
                                arr_35 [i_10] [(short)3] [i_3] [i_2 - 1] [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) (unsigned char)215)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_11 = 1; i_11 < 11; i_11 += 4) 
                    {
                        for (short i_12 = 0; i_12 < 12; i_12 += 4) 
                        {
                            {
                                arr_40 [i_1] [i_2 + 1] = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)-19565))));
                                arr_41 [i_1] [i_1] = ((/* implicit */unsigned char) ((short) (!(((/* implicit */_Bool) arr_5 [i_2 - 1] [i_3 + 2])))));
                                arr_42 [(short)10] [(short)3] [i_11] [i_3] [(unsigned char)11] [i_2 - 2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) arr_38 [i_12] [i_11 + 1] [i_11 - 1] [i_3 - 2] [i_2 + 1] [i_2 + 1]))) ? (((/* implicit */int) ((unsigned char) arr_38 [i_11 + 1] [i_11 - 1] [i_11 + 1] [i_3 + 2] [i_3] [i_2 - 2]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_38 [(short)10] [i_11 + 1] [i_11 - 1] [i_3 - 2] [i_2 - 2] [i_2 - 2])))))));
                                arr_43 [(short)10] [(short)11] [i_12] [i_3] [i_12] [i_3] [i_3] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)97)))))))));
                                arr_44 [i_1] [i_1] [i_3 + 2] [i_11] [i_1] = ((/* implicit */short) max(((+(((/* implicit */int) arr_5 [i_2 + 1] [(short)3])))), (((/* implicit */int) (short)-5839))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_31 -= ((/* implicit */unsigned char) var_2);
        arr_45 [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) var_5))));
        /* LoopNest 2 */
        for (short i_13 = 0; i_13 < 12; i_13 += 4) 
        {
            for (short i_14 = 2; i_14 < 11; i_14 += 4) 
            {
                {
                    var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2))));
                    var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) arr_37 [i_14 - 2] [i_14 - 2] [i_14 - 1] [i_14 + 1] [(short)11]))));
                    var_34 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) max((((/* implicit */short) arr_25 [i_1] [(short)0])), (arr_1 [i_1])))))))));
                    arr_51 [i_14] [i_14] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((short) var_9)))));
                    var_35 = ((/* implicit */unsigned char) var_5);
                }
            } 
        } 
        arr_52 [i_1] [i_1] = ((/* implicit */short) var_3);
    }
    var_36 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)70))))) ? (((/* implicit */int) (short)5839)) : (((/* implicit */int) var_7)))) << (((((/* implicit */int) var_6)) - (4166)))));
    /* LoopNest 2 */
    for (unsigned char i_15 = 1; i_15 < 21; i_15 += 4) 
    {
        for (short i_16 = 1; i_16 < 22; i_16 += 4) 
        {
            {
                var_37 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_53 [(short)8])) ? (((/* implicit */int) arr_54 [i_15 + 2])) : (((/* implicit */int) var_10)))), (((/* implicit */int) arr_53 [i_15 + 2])))))));
                var_38 = ((short) ((((/* implicit */int) ((unsigned char) arr_54 [i_16]))) >> (((((/* implicit */int) var_8)) + (16445)))));
                arr_57 [i_15] [i_16 + 1] [i_16] = max((((/* implicit */short) arr_54 [i_16 - 1])), (((short) ((((/* implicit */_Bool) arr_54 [i_15])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_1))))));
                var_39 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((short) var_2)))));
                arr_58 [(short)4] [(short)4] [i_15] = ((/* implicit */short) (((+(((/* implicit */int) max((var_10), ((short)15287)))))) % (((/* implicit */int) ((short) var_2)))));
            }
        } 
    } 
    var_40 += var_2;
}
