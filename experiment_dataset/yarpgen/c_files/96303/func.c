/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96303
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
    for (unsigned short i_0 = 4; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        arr_8 [i_0] [i_0 - 2] [i_1] [i_2] [i_3] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_0 - 3] [i_0 - 3] [i_0 - 4] [i_0 - 1])) ? (arr_5 [i_0 + 1] [i_0 + 2] [i_0 + 2] [i_0 - 4]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 - 1] [i_3] [i_3])))));
                        var_10 = ((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_3]);
                        var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) var_6))));
                    }
                    for (long long int i_4 = 0; i_4 < 14; i_4 += 2) 
                    {
                        var_12 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_3 [i_0 - 3] [(unsigned short)5] [i_2])) : (((/* implicit */int) (unsigned char)222))));
                        var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((arr_5 [i_0 + 2] [i_0 + 1] [i_0 - 2] [i_0 + 2]) != (arr_5 [i_0 - 4] [i_0 + 1] [i_0 - 1] [i_0 - 2]))))));
                    }
                    var_14 = ((/* implicit */signed char) ((((/* implicit */long long int) (~(((/* implicit */int) arr_3 [i_0 - 4] [i_1] [i_2]))))) & (arr_9 [i_0 + 2] [5LL] [i_0 - 2] [i_0 - 2] [i_0])));
                }
                for (unsigned char i_5 = 0; i_5 < 14; i_5 += 2) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 14; i_7 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_9 [i_0] [(unsigned short)5] [i_0] [i_0 - 3] [i_0]))))));
                                var_16 = ((/* implicit */signed char) max((((/* implicit */long long int) arr_2 [i_1] [i_5] [i_6])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_5] [i_6] [i_7])) ? (((/* implicit */int) arr_15 [i_0 - 4] [i_0 - 4] [(unsigned char)4] [i_6])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (min((var_9), (var_0))) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
                                var_17 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) arr_4 [i_6] [i_5] [i_0])) ? (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_1])) << (((((/* implicit */int) arr_1 [i_7])) - (120)))))) : (var_4))));
                                var_18 = ((/* implicit */int) var_0);
                                var_19 = ((/* implicit */int) (-(max((var_2), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_5] [i_1] [i_7]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_8 = 0; i_8 < 14; i_8 += 2) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 14; i_9 += 2) 
                        {
                            {
                                arr_24 [i_1] [i_1] [i_5] [i_8] [i_9] [i_8] [i_1] = ((/* implicit */_Bool) min((((/* implicit */long long int) arr_12 [i_0 - 2] [i_5])), (min((((/* implicit */long long int) arr_0 [(signed char)6] [i_9])), (((long long int) 209948247))))));
                                var_20 = (~(((((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_1] [(unsigned char)11] [i_8] [i_0]))) : (var_4))) + ((+(var_0))))));
                                arr_25 [0LL] [0LL] [(signed char)6] [i_5] [i_1] [i_1] [i_0] = ((long long int) arr_9 [i_0] [i_0] [i_5] [1LL] [i_9]);
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */long long int) arr_13 [i_0] [i_1] [i_0] [i_1]);
                }
                for (signed char i_10 = 1; i_10 < 13; i_10 += 2) 
                {
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0 + 2] [i_0 + 2] [i_1] [i_10 + 1])) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_21 [i_10])), (arr_11 [i_0 - 3] [i_0] [i_0 - 3] [7LL])))) : (min((((/* implicit */long long int) arr_23 [i_0 - 2] [(signed char)6] [i_0] [i_1] [(signed char)4])), (arr_9 [i_0] [3LL] [i_1] [i_1] [i_10])))))) ? (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 7213766022673730660LL))))) <= (((/* implicit */int) arr_23 [i_0] [i_0] [i_1] [i_10 + 1] [i_10]))))) : (((((/* implicit */_Bool) (short)26387)) ? (((/* implicit */int) (unsigned char)89)) : (((((/* implicit */_Bool) -7213766022673730670LL)) ? (((/* implicit */int) (unsigned short)11270)) : (((/* implicit */int) arr_15 [i_0 - 4] [i_0] [i_0] [i_0 - 4]))))))));
                    var_23 = ((/* implicit */signed char) ((((/* implicit */long long int) max(((~(((/* implicit */int) var_5)))), (((/* implicit */int) var_5))))) >= (((((/* implicit */_Bool) ((11962416731561504113ULL) % (((/* implicit */unsigned long long int) -4LL))))) ? (arr_5 [i_0] [i_1] [i_10 + 1] [i_0]) : (((/* implicit */long long int) (-(var_6))))))));
                }
                /* vectorizable */
                for (signed char i_11 = 1; i_11 < 12; i_11 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_12 = 0; i_12 < 14; i_12 += 2) 
                    {
                        for (signed char i_13 = 2; i_13 < 10; i_13 += 2) 
                        {
                            {
                                arr_34 [i_0] [i_1] [(_Bool)1] [i_12] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) arr_21 [i_1])) ^ ((-(((/* implicit */int) arr_23 [i_0 - 4] [i_0 - 4] [i_11] [i_11] [i_13]))))));
                                arr_35 [i_12] [i_12] = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
                    {
                        for (int i_15 = 0; i_15 < 14; i_15 += 2) 
                        {
                            {
                                var_24 = ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)1179)) ? (((/* implicit */int) (unsigned char)45)) : (((/* implicit */int) (unsigned char)87))))) % ((+(var_9))));
                                var_25 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_40 [i_0 - 4] [i_1] [i_11 - 1] [i_11 - 1] [i_15])))))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)86))));
                }
                arr_41 [i_0] = ((/* implicit */signed char) var_7);
                var_27 = ((/* implicit */unsigned char) var_9);
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_16 = 2; i_16 < 22; i_16 += 2) 
    {
        for (long long int i_17 = 1; i_17 < 23; i_17 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    for (short i_19 = 0; i_19 < 24; i_19 += 2) 
                    {
                        {
                            var_28 = (+(max((arr_44 [i_17] [i_18] [i_19]), (arr_44 [i_16] [i_17 - 1] [i_18]))));
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (signed char i_20 = 0; i_20 < 24; i_20 += 2) 
                            {
                                var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_48 [i_16 - 2])) ? (((/* implicit */int) arr_55 [i_16 + 2] [i_17 - 1] [i_17] [i_18] [i_18] [i_19] [i_18])) : (((/* implicit */int) arr_49 [i_16 + 2] [i_16] [i_19] [i_16]))));
                                var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) ((((/* implicit */int) arr_46 [i_16] [i_16 - 1] [i_16 + 2] [i_17 - 1])) - (((/* implicit */int) ((signed char) arr_53 [i_20] [i_19] [i_18] [i_17 + 1] [i_16]))))))));
                            }
                            for (signed char i_21 = 0; i_21 < 24; i_21 += 2) 
                            {
                                arr_59 [i_21] [i_17] [i_21] [i_21] [i_21] [i_16 + 1] = ((/* implicit */signed char) arr_48 [i_16]);
                                arr_60 [i_16] [i_16] [i_19] [i_21] = ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */int) max(((unsigned char)78), (((/* implicit */unsigned char) (signed char)97))))) != (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_53 [i_16] [i_16] [i_18] [i_19] [i_21]))))))), (max((min((var_6), (((/* implicit */int) arr_49 [(unsigned char)3] [(unsigned char)3] [i_19] [(unsigned char)4])))), (((((/* implicit */_Bool) (unsigned char)87)) ? (((/* implicit */int) (signed char)92)) : (((/* implicit */int) (unsigned char)196))))))));
                            }
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (int i_22 = 0; i_22 < 24; i_22 += 2) 
                {
                    arr_63 [i_16] [i_17 - 1] [i_22] = ((/* implicit */signed char) (+((((_Bool)1) ? (7213766022673730642LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)85)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_23 = 0; i_23 < 24; i_23 += 2) 
                    {
                        for (_Bool i_24 = 1; i_24 < 1; i_24 += 1) 
                        {
                            {
                                var_31 = ((/* implicit */signed char) var_8);
                                var_32 = ((/* implicit */long long int) arr_58 [(signed char)23] [i_17] [i_17] [i_17] [i_23] [i_24]);
                                var_33 = ((/* implicit */long long int) -1407820368);
                            }
                        } 
                    } 
                    arr_69 [i_16] = var_5;
                    arr_70 [i_16 + 2] = ((((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)139))))) % ((~((~(var_0))))));
                }
            }
        } 
    } 
}
