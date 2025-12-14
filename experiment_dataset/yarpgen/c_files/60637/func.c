/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60637
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
    var_18 = ((/* implicit */unsigned int) ((unsigned short) var_14));
    var_19 |= ((/* implicit */int) var_17);
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 3; i_2 < 16; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) var_3))));
                    arr_6 [i_0 + 1] [i_0 + 1] [i_0 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_4 [1ULL] [i_1] [16U])) ? (arr_5 [i_0] [i_0] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2] [i_0])))))))) ? (((/* implicit */int) var_3)) : ((-(((/* implicit */int) arr_3 [i_2 + 1] [i_0 - 1] [i_0]))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        arr_9 [i_0] [i_0] = ((/* implicit */short) arr_2 [i_0 + 2] [i_3]);
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 2; i_4 < 14; i_4 += 2) 
                        {
                            var_21 = ((/* implicit */short) (-(((/* implicit */int) (short)8998))));
                            var_22 -= ((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_4 [i_4 - 2] [i_1 - 1] [i_0 + 2]))))));
                            var_23 = ((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_1 - 1] [i_0] [i_3] [i_4 - 1]);
                        }
                        var_24 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_1 [i_0 + 2])) : (((/* implicit */int) arr_8 [i_0 - 1] [i_0 - 1] [i_1 - 1] [i_2 + 2] [i_2] [i_3]))))) ? ((-(((/* implicit */int) arr_1 [i_2 - 1])))) : (((arr_10 [i_0] [i_0 + 2] [i_0 + 2] [i_2 - 2] [i_0 + 2]) ? (((/* implicit */int) arr_1 [i_3])) : (((/* implicit */int) arr_10 [i_0 + 2] [i_0 + 2] [i_0] [i_0] [i_0 + 2]))))));
                    }
                    for (int i_5 = 1; i_5 < 16; i_5 += 2) 
                    {
                        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_3 [i_5 + 1] [(unsigned char)17] [i_5 - 1])) : (((/* implicit */int) arr_3 [i_5 + 1] [i_5 + 1] [i_5 + 1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_3 [i_5 + 2] [i_5] [i_5 + 1])))) : (((unsigned int) arr_3 [i_5 - 1] [i_5 - 1] [i_5 + 1]))));
                        var_26 ^= arr_13 [i_0] [i_2 + 2] [i_2] [i_5 + 2];
                        /* LoopSeq 4 */
                        for (unsigned int i_6 = 0; i_6 < 18; i_6 += 3) 
                        {
                            arr_17 [i_0] [i_0] [4U] [i_0] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_0] [i_1] [i_1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_0 [(short)14] [i_1 - 1]))))) ? (max((var_6), (((/* implicit */unsigned long long int) arr_10 [(unsigned short)3] [i_1 - 1] [i_1] [9ULL] [i_1])))) : (((/* implicit */unsigned long long int) ((arr_10 [7] [i_5 + 1] [7] [i_1 - 1] [i_0 + 1]) ? (((/* implicit */int) arr_3 [i_0] [i_1 - 1] [i_0])) : (var_1))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_0 + 1] [8ULL] [i_5])))))))) : ((+(((/* implicit */int) arr_15 [i_1 - 1] [i_1] [i_5] [i_1] [i_6] [i_2]))))));
                            var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) var_11))));
                        }
                        /* vectorizable */
                        for (short i_7 = 1; i_7 < 16; i_7 += 1) 
                        {
                            var_28 = ((/* implicit */unsigned short) (-(-1428999616)));
                            var_29 = ((/* implicit */unsigned short) ((arr_20 [i_5 - 1] [i_5 + 2] [i_5] [i_5] [i_7] [i_5]) + (((/* implicit */int) arr_18 [i_7] [(unsigned char)0] [i_1 - 1] [(unsigned short)3] [i_7] [i_7]))));
                        }
                        /* vectorizable */
                        for (unsigned char i_8 = 0; i_8 < 18; i_8 += 2) 
                        {
                            arr_24 [i_0] [i_1] [i_0] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_2] [i_2] [i_2] [(unsigned char)9])) ? (((/* implicit */int) arr_22 [i_8] [12] [i_0] [i_2] [12] [i_0])) : (((var_4) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_12 [i_0] [12] [i_0]))))));
                            arr_25 [i_0] [3U] [(_Bool)1] [i_5] [i_8] = ((/* implicit */short) arr_2 [i_0] [i_0]);
                        }
                        for (short i_9 = 2; i_9 < 16; i_9 += 3) 
                        {
                            var_30 ^= ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_0] [i_1] [(unsigned short)2] [i_5] [16U] [i_9])) ? (((/* implicit */int) arr_27 [i_0 - 1] [i_1] [i_2 + 1] [i_5] [i_9] [i_9] [i_0 - 1])) : (arr_26 [11U] [11U] [i_2] [i_5] [i_9 + 1])))) ? (arr_5 [i_0] [i_0] [(signed char)17]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_5] [i_1 - 1] [i_1 - 1] [i_0])) ? (((/* implicit */int) arr_14 [(unsigned char)3] [(signed char)8] [i_5 - 1] [(signed char)8])) : (arr_26 [i_0] [i_0] [i_0] [i_0] [i_0])))))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_14 [i_1 - 1] [i_2 - 2] [i_5 - 1] [i_9 - 2])))))));
                            arr_29 [i_9] [i_5] [i_9] [i_1 - 1] [i_0] = ((/* implicit */unsigned int) arr_23 [i_0] [(unsigned char)2] [i_0] [i_0] [i_0]);
                            arr_30 [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_27 [i_0] [i_0] [(unsigned char)15] [(unsigned char)15] [i_0] [i_5] [(signed char)17]))))) ? (((((/* implicit */_Bool) min(((unsigned short)17378), (((/* implicit */unsigned short) (short)-9008))))) ? (((((/* implicit */_Bool) (short)8980)) ? (((/* implicit */int) (short)-8999)) : (((/* implicit */int) (unsigned short)63)))) : (arr_26 [i_0 - 1] [i_0 - 1] [i_2] [i_0 - 1] [i_5]))) : ((~(((/* implicit */int) var_16))))));
                            var_31 = ((/* implicit */unsigned short) (-(((/* implicit */int) min((arr_14 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0]), (max((arr_0 [i_0] [i_0]), (((/* implicit */short) arr_15 [i_2] [i_9] [(short)2] [i_2] [i_9] [i_0 + 1])))))))));
                        }
                    }
                    arr_31 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) max((arr_4 [i_0] [i_1 - 1] [i_1 - 1]), (((/* implicit */short) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) arr_23 [i_0] [i_0] [i_1 - 1] [i_2 + 1] [i_0])) : (((/* implicit */int) ((short) (short)-8993))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_10 = 0; i_10 < 18; i_10 += 2) 
        {
            for (unsigned int i_11 = 3; i_11 < 16; i_11 += 2) 
            {
                {
                    arr_36 [i_0] [i_10] [i_11] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 - 1] [i_11])) ? (((((/* implicit */_Bool) var_1)) ? (arr_28 [i_0] [2] [8] [i_11] [i_11]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_11] [(unsigned short)6] [(unsigned short)6] [i_11]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))) + (((/* implicit */unsigned int) (-(arr_20 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [i_11] [i_0 + 1]))))));
                    /* LoopSeq 2 */
                    for (int i_12 = 0; i_12 < 18; i_12 += 4) 
                    {
                        arr_40 [i_11] [i_10] = ((/* implicit */signed char) (-(((/* implicit */int) arr_16 [(short)7] [i_0 + 2] [i_0 - 1] [i_11 - 2] [i_12]))));
                        var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_0 - 1] [i_12] [i_12])) ? (((/* implicit */int) arr_13 [i_11] [3ULL] [i_11] [1])) : (((/* implicit */int) ((_Bool) 4294967289U))))))))));
                        var_33 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [(short)8] [(_Bool)1] [15] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_11 + 2] [i_11 + 2] [i_11 + 2] [i_0 + 2]))) : (var_8)))) ? (((/* implicit */int) arr_19 [i_0 - 1] [i_0 - 1] [0U] [i_0 - 1] [i_0])) : ((~(((/* implicit */int) arr_0 [i_0 + 2] [i_11 - 3]))))));
                    }
                    for (unsigned long long int i_13 = 1; i_13 < 17; i_13 += 2) 
                    {
                        var_34 = ((/* implicit */signed char) ((arr_10 [i_10] [i_10] [i_11] [i_11 + 1] [i_0 - 1]) ? (var_1) : (((/* implicit */int) ((unsigned short) arr_16 [i_0 - 1] [i_10] [i_11] [i_11 - 3] [i_0 - 1])))));
                        var_35 *= ((/* implicit */short) (((!(((/* implicit */_Bool) arr_28 [i_13 + 1] [i_11 - 2] [i_0 - 1] [(unsigned short)7] [i_0])))) ? ((~(arr_28 [i_13 + 1] [i_11 + 1] [i_0 + 2] [i_0] [i_0]))) : ((+(arr_28 [i_13 - 1] [i_11 - 1] [i_0 + 2] [i_0] [i_0])))));
                        var_36 *= ((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_20 [i_11] [i_10] [i_13] [i_10] [i_10] [i_13])) ? (((/* implicit */int) arr_32 [i_0] [i_10] [i_10])) : (((/* implicit */int) arr_14 [i_0] [15] [(short)2] [i_13 - 1]))))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_39 [i_0 + 1] [16] [i_10]))))) ? (((/* implicit */int) ((signed char) arr_14 [i_0] [i_0] [i_0] [(unsigned char)7]))) : (((/* implicit */int) arr_23 [i_13 - 1] [i_13] [i_13] [i_13] [i_13 + 1])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_10] [(signed char)9] [i_0])) : (((/* implicit */int) var_12))))));
                    }
                    var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) var_1)))))) ? (((/* implicit */unsigned int) arr_34 [i_10] [i_10])) : (((((/* implicit */_Bool) arr_18 [i_10] [10ULL] [(unsigned short)0] [(unsigned short)0] [i_10] [i_11])) ? (((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_10] [i_0] [i_11 - 1] [i_11 - 2])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_10] [i_11 - 3] [(_Bool)1] [11ULL]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0 + 1] [i_0 + 1] [i_0] [i_0 - 1] [i_10] [i_0 + 1]))))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_14 = 1; i_14 < 17; i_14 += 2) 
                    {
                        for (signed char i_15 = 0; i_15 < 18; i_15 += 2) 
                        {
                            {
                                var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) (~(((int) arr_7 [i_15] [i_10] [(short)3] [i_10])))))));
                                arr_51 [i_0] [i_0] [i_11] [i_11] [i_15] [i_14] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((unsigned int) arr_3 [i_15] [i_0] [i_0])), (((/* implicit */unsigned int) (~(((/* implicit */int) var_16)))))))) ? (((/* implicit */int) arr_22 [i_0] [i_10] [i_11] [i_10] [i_14] [i_15])) : (((/* implicit */int) var_4))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_16 = 3; i_16 < 17; i_16 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_17 = 0; i_17 < 21; i_17 += 3) 
        {
            for (unsigned short i_18 = 0; i_18 < 21; i_18 += 2) 
            {
                for (unsigned char i_19 = 1; i_19 < 19; i_19 += 2) 
                {
                    {
                        var_39 = ((/* implicit */unsigned short) (~(((((/* implicit */int) var_0)) + (((/* implicit */int) arr_57 [i_17] [i_17]))))));
                        var_40 = ((/* implicit */short) min((var_40), (((/* implicit */short) arr_60 [i_18] [i_19 + 2]))));
                        arr_64 [10ULL] [i_18] [i_17] [i_18] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_1)) : (arr_60 [i_17] [i_18]))));
                    }
                } 
            } 
        } 
        arr_65 [i_16 + 3] = ((/* implicit */int) (~(arr_60 [4] [i_16 - 2])));
    }
    var_41 += ((/* implicit */short) var_11);
}
