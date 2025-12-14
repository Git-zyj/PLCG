/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5603
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
    for (short i_0 = 3; i_0 < 20; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */short) (_Bool)1);
                var_11 = ((/* implicit */long long int) (signed char)114);
                /* LoopSeq 3 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopSeq 3 */
                    for (short i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        var_12 -= ((/* implicit */long long int) ((int) var_6));
                        var_13 = ((/* implicit */_Bool) (short)-8628);
                    }
                    for (signed char i_4 = 0; i_4 < 21; i_4 += 1) 
                    {
                        arr_14 [i_4] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (-((-(arr_13 [13U] [i_1])))));
                        arr_15 [(_Bool)0] [i_0] [i_4] = ((unsigned long long int) arr_10 [i_0] [i_0 + 1] [i_0]);
                        var_14 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_2 [i_1] [i_0])) ? (((/* implicit */int) arr_9 [i_0] [i_0 - 2] [i_0])) : (-2120949124))) * (((((/* implicit */_Bool) arr_12 [i_4] [i_1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)-30948))))));
                        var_15 = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) arr_7 [i_4] [i_0] [i_0] [i_0]))))));
                        var_16 += ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_13 [i_1] [i_2])))) ? ((((_Bool)0) ? (arr_8 [i_1] [i_2] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_4]))))) : (((/* implicit */unsigned long long int) ((long long int) arr_8 [i_2] [i_1] [(short)8])))));
                    }
                    for (signed char i_5 = 1; i_5 < 17; i_5 += 2) 
                    {
                        var_17 = ((/* implicit */short) ((long long int) arr_5 [i_0] [i_0] [i_0] [i_0 - 3]));
                        /* LoopSeq 2 */
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                        {
                            var_18 -= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_6 [i_0] [i_0 - 2]))));
                            var_19 = ((/* implicit */long long int) (-(((/* implicit */int) arr_17 [i_0] [i_0 - 3] [i_0] [i_5 + 2]))));
                        }
                        for (long long int i_7 = 2; i_7 < 19; i_7 += 2) 
                        {
                            var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (~(arr_11 [i_0 - 3] [i_5 - 1] [i_7 + 1] [i_7 + 1]))))));
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) arr_1 [i_0]))) ? ((~(arr_22 [i_0] [i_0] [i_2] [i_5] [i_7]))) : (((/* implicit */int) arr_5 [i_5 + 1] [(_Bool)1] [i_2] [(_Bool)1]))));
                        }
                        arr_24 [i_0] = ((/* implicit */short) (~(((arr_18 [i_0] [i_0] [i_1] [i_2] [i_2] [i_5]) ? (arr_8 [i_5] [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 4) 
                        {
                            arr_27 [(_Bool)1] [i_0] [i_0] [i_0 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_10 [i_5 + 1] [i_0 + 1] [i_0])) : (((/* implicit */int) arr_3 [i_0]))));
                            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (((-(((/* implicit */int) arr_4 [(signed char)3])))) > (((/* implicit */int) arr_23 [i_5 + 4] [i_8] [i_0 - 1] [i_0 - 2] [i_0 - 1] [i_8] [i_0 - 1])))))));
                        }
                        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_1] [i_5 + 3] [i_5] [i_5 + 1])) ? (((/* implicit */int) arr_5 [i_2] [i_2] [(_Bool)1] [i_5 + 4])) : (((/* implicit */int) arr_5 [14LL] [(signed char)20] [(_Bool)1] [i_5 + 4]))));
                    }
                    var_24 = ((/* implicit */long long int) (-(((((/* implicit */int) var_6)) & (((/* implicit */int) var_5))))));
                    /* LoopSeq 2 */
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        arr_30 [(short)1] [(unsigned short)3] [i_0] [i_0] [(unsigned short)3] [(unsigned short)3] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_29 [i_0 - 2] [i_9 - 1])) ? (((/* implicit */int) arr_29 [i_0 - 1] [i_9 - 1])) : (((/* implicit */int) arr_29 [i_0 - 1] [i_9 - 1]))));
                        var_25 = (~(arr_21 [i_0 - 2] [i_0] [i_0 + 1]));
                        /* LoopSeq 1 */
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            arr_34 [7LL] [i_1] [i_2] [i_0] [i_10] = ((/* implicit */long long int) ((signed char) var_0));
                            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_0] [i_9 - 1])) ? (arr_16 [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_0] [i_9]) : (arr_16 [i_9 - 1] [i_9 - 1] [i_9] [i_0] [i_9])));
                        }
                    }
                    for (long long int i_11 = 0; i_11 < 21; i_11 += 1) 
                    {
                        var_27 = ((/* implicit */unsigned char) arr_5 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1]);
                        var_28 ^= ((/* implicit */int) (-(((((/* implicit */_Bool) arr_31 [i_0] [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_12 [i_11] [i_0])))));
                        var_29 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (arr_16 [i_0] [i_0] [i_0] [(_Bool)1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                    }
                }
                for (signed char i_12 = 0; i_12 < 21; i_12 += 2) 
                {
                    /* LoopNest 2 */
                    for (short i_13 = 0; i_13 < 21; i_13 += 2) 
                    {
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            {
                                arr_46 [i_0] [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_16 [i_0] [i_0 - 1] [i_13] [i_0] [i_14])) ? (((/* implicit */int) arr_31 [i_0 + 1] [i_0 - 1])) : (((/* implicit */int) var_6))))));
                                arr_47 [i_12] [i_1] [i_0] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_13 [i_0 - 1] [i_0 - 2]) | (arr_13 [i_0 - 1] [i_0 - 2])))) ? (((((/* implicit */_Bool) arr_13 [i_0 - 1] [i_0 - 2])) ? (arr_13 [i_0 - 1] [i_0 - 2]) : (arr_13 [i_0 - 1] [i_0 - 2]))) : ((~(arr_13 [i_0 - 1] [i_0 - 2])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_15 = 3; i_15 < 20; i_15 += 1) 
                    {
                        for (long long int i_16 = 0; i_16 < 21; i_16 += 1) 
                        {
                            {
                                arr_53 [i_0] [i_0] [i_0] [i_0] [i_16] [(signed char)12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) (-(((/* implicit */int) (short)30948)))))) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_38 [i_0] [(_Bool)1] [i_15 - 1]))) % (arr_45 [i_0 - 2] [i_0] [i_0 - 2])))) ? (((((/* implicit */_Bool) var_2)) ? (var_1) : (((/* implicit */long long int) arr_19 [i_16])))) : (((/* implicit */long long int) (-(((/* implicit */int) var_9))))))) : (((long long int) arr_37 [i_15] [2] [2] [i_15 + 1] [(_Bool)1] [i_15]))));
                                var_30 = ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0] [i_12] [i_0] [(unsigned char)11])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6))))) ? (((arr_20 [i_0] [i_0] [i_0] [i_0]) ? ((-2147483647 - 1)) : (((/* implicit */int) var_6)))) : (-2120949117)));
                                var_31 = ((/* implicit */int) arr_21 [i_0] [i_0] [i_15 + 1]);
                                arr_54 [i_16] [i_16] [i_16] [i_0] [i_16] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_8 [i_0 + 1] [i_0] [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8654))) : (arr_8 [i_0 - 1] [6] [i_0 + 1])))));
                                arr_55 [i_1] [i_0] = ((/* implicit */unsigned char) arr_22 [i_15] [i_0] [i_12] [i_0] [i_0]);
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_17 = 1; i_17 < 19; i_17 += 3) 
                {
                    arr_59 [i_1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_40 [i_0] [i_0] [16ULL] [i_0]);
                    arr_60 [i_0] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_31 [i_1] [i_1])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) (signed char)45))))))));
                    var_32 = ((short) ((((/* implicit */_Bool) arr_50 [i_0] [i_0] [i_1] [i_17 + 2])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (_Bool)1))))) : (((arr_1 [i_0]) / (((/* implicit */long long int) ((/* implicit */int) arr_58 [i_0 - 1])))))));
                }
                arr_61 [i_0] [i_0] = ((/* implicit */_Bool) (-((-(((/* implicit */int) var_7))))));
            }
        } 
    } 
    var_33 &= ((/* implicit */short) (-(((/* implicit */int) ((unsigned short) var_9)))));
}
