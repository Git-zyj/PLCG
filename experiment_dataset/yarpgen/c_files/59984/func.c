/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59984
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                var_15 = (short)-19540;
                /* LoopSeq 3 */
                for (short i_2 = 4; i_2 < 20; i_2 += 1) 
                {
                    arr_8 [i_0] [i_0] [i_2] |= ((/* implicit */short) max((((/* implicit */unsigned char) ((signed char) max(((short)-19540), (arr_1 [i_1 + 1]))))), (((unsigned char) arr_4 [i_1 + 2] [i_1 + 2] [i_1 + 2]))));
                    var_16 = ((unsigned char) ((((/* implicit */int) (signed char)(-127 - 1))) / (((/* implicit */int) (unsigned char)251))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) arr_1 [i_1 - 1]);
                                var_18 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_12), (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]))))) ? ((-(((/* implicit */int) (short)-1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-19540)))))))) ? (min(((+(((/* implicit */int) arr_9 [i_1] [i_2] [i_3] [i_4])))), (((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [(short)3])) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) : (((/* implicit */int) (short)-19551)))))) : ((+(((/* implicit */int) min((((/* implicit */short) arr_12 [i_0] [i_3])), ((short)-16741))))))));
                                var_19 = ((/* implicit */int) arr_2 [i_0] [i_2]);
                                arr_15 [i_0] [i_0] [i_2] [i_2] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((int) -2122521431)), (((/* implicit */int) var_11))))) ? (((/* implicit */int) min((arr_0 [i_0]), (((/* implicit */short) ((signed char) (short)-21189)))))) : (max((((int) -1)), (var_10)))));
                                var_20 += ((short) ((((/* implicit */_Bool) (unsigned char)84)) ? (((/* implicit */int) (short)-3677)) : (((/* implicit */int) (short)-13))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 22; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 22; i_6 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) max((((/* implicit */short) max((arr_12 [i_0] [i_0]), (arr_12 [i_6] [i_2 - 3])))), (max((arr_22 [i_0] [5] [i_2] [i_5] [i_6]), (arr_22 [i_0] [i_1] [i_2 - 2] [i_5] [i_6]))))))));
                                arr_23 [i_0] [i_1 + 2] [i_6] [i_5] [i_6] [i_6] = ((/* implicit */unsigned char) ((int) var_13));
                            }
                        } 
                    } 
                }
                for (unsigned char i_7 = 0; i_7 < 22; i_7 += 4) 
                {
                    /* LoopSeq 2 */
                    for (int i_8 = 0; i_8 < 22; i_8 += 4) 
                    {
                        arr_31 [i_0] [i_1] [i_7] [i_0] [i_7] |= ((/* implicit */short) ((((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned char)113)))) | ((~(((/* implicit */int) arr_22 [(short)11] [i_1 + 2] [i_7] [i_7] [(unsigned char)1])))))) > (((/* implicit */int) arr_30 [i_1 - 1] [i_1 + 2] [i_7] [i_7] [i_8]))));
                        arr_32 [i_0] [i_0] [i_7] [i_8] |= ((/* implicit */short) min((((((/* implicit */_Bool) max((var_12), (((/* implicit */int) arr_19 [i_0] [(unsigned char)16] [i_1] [i_8] [i_7] [i_1]))))) ? (((/* implicit */int) (short)-22599)) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)241)) != (((/* implicit */int) (short)17001))))))), (((/* implicit */int) max((arr_14 [i_0] [i_1] [i_1] [i_1] [i_8] [i_8]), (arr_14 [i_0] [i_0] [i_7] [i_8] [i_7] [i_7]))))));
                    }
                    for (unsigned char i_9 = 0; i_9 < 22; i_9 += 1) 
                    {
                        var_22 = ((/* implicit */signed char) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) ^ (((/* implicit */int) max((arr_13 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_9]), (((/* implicit */unsigned char) var_4)))))));
                        var_23 *= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)253)) ? (((/* implicit */int) (unsigned char)166)) : (((/* implicit */int) (short)-14))));
                        var_24 = ((/* implicit */short) (((-(((/* implicit */int) max(((short)-21189), (((/* implicit */short) (unsigned char)75))))))) ^ (((/* implicit */int) var_1))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_10 = 0; i_10 < 22; i_10 += 4) 
                    {
                        arr_37 [i_0] [i_1 + 1] [21] [i_7] [i_10] |= ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_20 [i_1 - 1] [i_10])) ? (((/* implicit */int) arr_20 [i_1 - 1] [i_10])) : (((/* implicit */int) var_8)))), ((+(((/* implicit */int) arr_20 [i_1 - 1] [i_7]))))));
                        var_25 += max((((((/* implicit */_Bool) arr_13 [i_0] [i_1 - 1] [i_1 - 1] [i_10] [i_10])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_13 [i_0] [i_1 - 1] [i_1 - 1] [i_10] [i_10])))), (((((/* implicit */_Bool) arr_13 [i_1] [i_1 + 1] [i_1 - 1] [(unsigned char)0] [i_1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_13 [(short)6] [i_1 + 1] [i_1 + 2] [(short)11] [(short)11])))));
                        var_26 = ((/* implicit */signed char) (((~(((/* implicit */int) ((((/* implicit */_Bool) (short)1051)) || (((/* implicit */_Bool) (short)-32767))))))) ^ (((((/* implicit */int) (short)8955)) + (((/* implicit */int) (unsigned char)6))))));
                        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_10] [i_7] [i_1] [i_0] [i_0])) ? (var_10) : (((/* implicit */int) ((short) (-(((/* implicit */int) (signed char)86))))))));
                        var_28 = arr_33 [i_10] [i_7] [i_1] [i_0];
                    }
                    for (unsigned char i_11 = 0; i_11 < 22; i_11 += 3) 
                    {
                        var_29 -= ((/* implicit */unsigned char) ((short) (~(min((((/* implicit */int) (signed char)0)), (var_5))))));
                        var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((((/* implicit */_Bool) max((min(((short)32756), (((/* implicit */short) arr_34 [i_0] [i_0] [i_0] [i_0])))), (((/* implicit */short) arr_6 [i_0] [i_1 + 1]))))) ? (((((/* implicit */_Bool) (short)192)) ? (min((((/* implicit */int) (unsigned char)82)), (var_13))) : (((/* implicit */int) max(((short)27501), ((short)-1)))))) : (max((((/* implicit */int) ((short) var_7))), (((((/* implicit */_Bool) arr_35 [i_11] [i_7] [i_1] [i_0])) ? (((/* implicit */int) (signed char)-37)) : (var_5))))))))));
                        arr_40 [i_0] [i_1] [i_1] [i_11] [i_11] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_34 [i_0] [i_0] [i_0] [(short)15])) ? (((/* implicit */int) arr_0 [i_7])) : (((/* implicit */int) arr_38 [i_0] [i_1 - 1] [i_7] [i_11] [i_11] [i_7]))))))));
                    }
                }
                for (short i_12 = 0; i_12 < 22; i_12 += 4) 
                {
                    var_31 += ((/* implicit */int) ((unsigned char) min((((/* implicit */short) (unsigned char)84)), ((short)22569))));
                    arr_44 [(unsigned char)7] [i_1] [i_0] [i_1 - 1] = min((((/* implicit */int) arr_21 [i_0] [i_0] [i_1] [i_12] [i_12])), (((((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_12] [i_0])) | (((/* implicit */int) arr_21 [i_0] [i_0] [i_1] [i_12] [i_12])))));
                }
            }
        } 
    } 
    var_32 = ((/* implicit */short) min((var_14), (min((((/* implicit */int) max((((/* implicit */unsigned char) var_9)), ((unsigned char)255)))), (var_10)))));
    var_33 *= (unsigned char)248;
}
