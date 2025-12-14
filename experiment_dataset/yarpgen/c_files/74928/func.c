/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74928
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
    for (unsigned short i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    var_10 &= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_5 [(signed char)6] [i_0 - 2]))));
                    arr_8 [i_2] [(short)2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 + 1]))));
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        arr_13 [(short)0] [(short)8] [(unsigned short)1] [(short)0] = ((/* implicit */signed char) (~(((/* implicit */int) arr_6 [i_0 - 2] [i_0 - 1] [i_0 - 2]))));
                        var_11 = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)113))));
                    }
                    var_12 = ((/* implicit */short) (-(((/* implicit */int) arr_0 [i_0 + 1]))));
                }
                var_13 = ((/* implicit */signed char) min((((/* implicit */int) min((arr_5 [(short)10] [(signed char)14]), (arr_0 [i_0])))), ((-(((/* implicit */int) max((arr_12 [(unsigned short)0] [(unsigned short)2] [(short)1] [(signed char)12]), (arr_12 [(signed char)12] [(signed char)12] [(unsigned short)13] [(signed char)12]))))))));
                var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */_Bool) arr_11 [(short)10] [(short)10] [(signed char)0])) ? (((/* implicit */int) min(((signed char)-1), ((signed char)-112)))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_2 [(unsigned short)13])), (max((arr_1 [(short)12]), (arr_4 [(unsigned short)9] [(unsigned short)3] [(unsigned short)3])))))))))));
                /* LoopNest 3 */
                for (short i_4 = 2; i_4 < 14; i_4 += 1) 
                {
                    for (unsigned short i_5 = 0; i_5 < 15; i_5 += 3) 
                    {
                        for (short i_6 = 0; i_6 < 15; i_6 += 1) 
                        {
                            {
                                arr_22 [i_5] = ((/* implicit */signed char) min(((~(((/* implicit */int) arr_16 [i_0 - 2])))), (((/* implicit */int) arr_17 [i_0 + 1] [i_0] [i_0]))));
                                var_15 = ((/* implicit */short) max((min((arr_18 [i_5] [i_0 + 1] [(unsigned short)9] [i_5]), (arr_18 [i_5] [i_0 - 2] [i_0 + 1] [i_5]))), (min((arr_18 [i_5] [i_0 + 1] [(short)4] [i_5]), (arr_18 [i_5] [i_0 - 2] [i_0 - 2] [i_5])))));
                                arr_23 [(signed char)14] [(signed char)14] [(short)9] [(short)2] [(short)7] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)5))))) ? (((/* implicit */int) arr_12 [(short)5] [(short)3] [(short)3] [(signed char)11])) : (((/* implicit */int) (signed char)4))))) ? (((/* implicit */int) (short)-1705)) : (((/* implicit */int) (signed char)-110))));
                                var_16 ^= ((/* implicit */short) (-(((/* implicit */int) (unsigned short)56062))));
                                arr_24 [(short)10] [(unsigned short)7] [(signed char)9] [i_5] [(unsigned short)7] [(short)9] = ((/* implicit */unsigned short) arr_16 [i_0 - 2]);
                            }
                        } 
                    } 
                } 
                var_17 -= ((/* implicit */unsigned short) arr_15 [(short)14] [(unsigned short)12] [(short)14] [(unsigned short)7]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_7 = 0; i_7 < 18; i_7 += 3) 
    {
        for (signed char i_8 = 0; i_8 < 18; i_8 += 1) 
        {
            {
                arr_31 [i_7] [i_7] = ((/* implicit */short) arr_27 [i_7] [(signed char)10]);
                /* LoopNest 2 */
                for (unsigned short i_9 = 2; i_9 < 16; i_9 += 3) 
                {
                    for (unsigned short i_10 = 0; i_10 < 18; i_10 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned short) min(((~(((/* implicit */int) (signed char)-109)))), (((/* implicit */int) min((arr_26 [i_7]), (arr_26 [i_7]))))));
                            var_19 = ((/* implicit */signed char) min((((/* implicit */int) min(((short)-6055), (((/* implicit */short) (signed char)111))))), (((((/* implicit */_Bool) (signed char)11)) ? (((/* implicit */int) (signed char)-50)) : (((/* implicit */int) (signed char)5))))));
                        }
                    } 
                } 
                arr_37 [i_7] [(short)4] = ((/* implicit */short) (~(((/* implicit */int) min((arr_32 [(short)11] [(short)11] [(signed char)12] [i_7]), (((/* implicit */unsigned short) arr_35 [i_7] [i_7] [(signed char)1] [i_8] [i_8])))))));
                /* LoopSeq 3 */
                for (unsigned short i_11 = 1; i_11 < 17; i_11 += 1) 
                {
                    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)-112)))))));
                    arr_41 [(signed char)13] [i_7] [(unsigned short)16] [(signed char)13] = ((/* implicit */signed char) arr_40 [i_7] [i_11 + 1] [(short)10] [i_11 - 1]);
                    arr_42 [i_7] [(short)15] [(short)4] = ((/* implicit */short) arr_38 [(signed char)1] [(signed char)17]);
                }
                for (short i_12 = 1; i_12 < 17; i_12 += 3) 
                {
                    arr_45 [i_7] [i_7] [(short)15] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_40 [(unsigned short)14] [(unsigned short)14] [(unsigned short)10] [i_12 + 1])) ? (((/* implicit */int) arr_40 [(short)9] [(short)9] [(short)9] [i_12 + 1])) : (((/* implicit */int) arr_40 [(unsigned short)2] [(unsigned short)2] [(unsigned short)2] [i_12 - 1])))), (((/* implicit */int) max((arr_40 [(unsigned short)16] [(unsigned short)16] [(unsigned short)16] [i_12 + 1]), (arr_40 [i_7] [(signed char)9] [(signed char)9] [i_12 - 1]))))));
                    arr_46 [i_7] = ((/* implicit */signed char) max(((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_7] [(signed char)3]))))))), (((((/* implicit */_Bool) arr_27 [i_7] [i_12 + 1])) ? (((/* implicit */int) arr_27 [i_7] [i_12 + 1])) : (((/* implicit */int) arr_27 [i_7] [i_12 - 1]))))));
                    var_21 = ((/* implicit */unsigned short) arr_43 [i_12 - 1] [(signed char)13] [i_12 - 1]);
                }
                /* vectorizable */
                for (unsigned short i_13 = 0; i_13 < 18; i_13 += 4) 
                {
                    var_22 = arr_38 [i_13] [(signed char)17];
                    /* LoopSeq 1 */
                    for (unsigned short i_14 = 1; i_14 < 17; i_14 += 1) 
                    {
                        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-44)) ? (((/* implicit */int) (unsigned short)42100)) : (((/* implicit */int) (signed char)-43))));
                        var_24 = arr_29 [i_14 - 1] [i_14 - 1] [(signed char)7];
                        arr_51 [i_7] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_50 [i_7] [i_14 - 1] [i_14 - 1] [(unsigned short)8] [(short)10]))));
                    }
                    /* LoopNest 2 */
                    for (short i_15 = 0; i_15 < 18; i_15 += 3) 
                    {
                        for (signed char i_16 = 0; i_16 < 18; i_16 += 4) 
                        {
                            {
                                var_25 = arr_36 [(short)9] [(short)9] [(unsigned short)7] [i_13] [(signed char)6];
                                var_26 = ((/* implicit */signed char) (-(((/* implicit */int) arr_44 [i_13] [i_13] [(unsigned short)3] [i_7]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_17 = 0; i_17 < 18; i_17 += 3) 
                    {
                        for (unsigned short i_18 = 3; i_18 < 14; i_18 += 3) 
                        {
                            {
                                arr_64 [i_7] [(unsigned short)14] [i_7] [(unsigned short)13] [(short)13] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_50 [(signed char)1] [i_18 - 2] [i_18 - 1] [i_18 - 2] [(signed char)0]))));
                                var_27 = ((/* implicit */short) arr_49 [(unsigned short)2] [(unsigned short)2] [(unsigned short)2] [(unsigned short)2] [(unsigned short)10]);
                                var_28 = arr_34 [i_18 - 2];
                            }
                        } 
                    } 
                    arr_65 [(short)8] [(unsigned short)6] [i_7] = ((/* implicit */signed char) arr_61 [i_7] [(unsigned short)7] [i_8] [i_13] [i_13]);
                }
            }
        } 
    } 
    var_29 = ((/* implicit */unsigned short) max((((/* implicit */int) var_5)), ((-(((/* implicit */int) max((var_3), (((/* implicit */short) var_4)))))))));
}
