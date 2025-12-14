/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74733
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 4; i_2 < 22; i_2 += 1) /* same iter space */
                {
                    arr_8 [(unsigned short)14] [(unsigned short)14] [i_2] = ((((/* implicit */_Bool) (+(arr_5 [i_2 - 4] [i_2 + 1])))) ? ((-(arr_5 [i_2 + 1] [i_2 - 1]))) : (((arr_5 [i_2 + 2] [i_2 - 4]) * (arr_5 [i_2 - 1] [i_2 - 1]))));
                    arr_9 [i_1] [i_0] [i_2] = ((((arr_5 [i_1 + 3] [i_2 - 3]) | (arr_5 [i_0] [i_1 + 1]))) >> ((((-(((((/* implicit */_Bool) var_5)) ? (arr_4 [i_2]) : (arr_4 [i_1]))))) - (408751374U))));
                }
                for (unsigned int i_3 = 4; i_3 < 22; i_3 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 1; i_4 < 23; i_4 += 2) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 24; i_5 += 4) 
                        {
                            {
                                arr_19 [i_0] [i_5] [18U] [i_0] [i_0] = ((4261412864U) & (2271332988U));
                                arr_20 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_0])))))));
                                arr_21 [i_0] [i_5] [14U] [i_0] = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) arr_14 [3U] [i_3] [i_4] [i_3])))) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) / (arr_15 [i_0] [i_1 + 3] [i_1 + 3] [21U] [i_5])))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned int) ((2271332999U) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28672)))))), (((((/* implicit */_Bool) var_13)) ? (arr_7 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_3]))))))))));
                                arr_22 [i_0] [i_4] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2046203244U)) && (((/* implicit */_Bool) (unsigned short)16320))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned int i_6 = 4; i_6 < 22; i_6 += 3) 
                    {
                        arr_26 [12U] [i_0] [i_0] [i_0] = (~((~(((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_3 + 1] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_2 [20U]))))));
                        arr_27 [20U] [i_3] [i_1] [20U] = ((/* implicit */unsigned short) arr_4 [i_0]);
                    }
                    arr_28 [i_0] [20U] [i_1] [i_3 + 1] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) ((2023634307U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_0] [i_1 - 1] [i_3 + 1] [i_3 + 1] [i_0] [i_3]))))))) != (arr_7 [i_0]))) ? (((/* implicit */unsigned int) ((/* implicit */int) (((~(arr_13 [i_0] [i_1] [i_3 - 3] [i_1]))) != (arr_13 [i_0] [i_0] [i_1] [i_3 - 1]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)35177)) ? (1596844654U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12)))))) ? (arr_1 [i_0]) : (((((/* implicit */_Bool) arr_7 [i_3])) ? (arr_18 [2U]) : (var_2)))))));
                    arr_29 [i_0] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [3U] [i_1] [i_1 + 1])) * (((/* implicit */int) arr_17 [i_1 + 3] [12U] [i_1 + 3] [i_3 + 2] [i_3] [i_3 - 2] [i_0]))))) ? (arr_15 [i_0] [i_0] [i_1 - 1] [i_3 + 1] [i_3 + 1]) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_17 [i_0] [i_1] [i_1 + 1] [i_3 - 3] [i_3] [i_3 - 2] [i_0]))))));
                }
                arr_30 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned int) arr_12 [i_0] [i_0] [i_0])))));
                arr_31 [i_0] [i_1 - 1] [i_1] = max((361247639U), (4294967274U));
            }
        } 
    } 
    var_20 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_19)) ? (var_16) : (var_19))) - (((var_19) + (var_15)))))) ? (((var_17) >> (((min((((/* implicit */unsigned int) var_13)), (var_19))) - (60461U))))) : (((((/* implicit */_Bool) var_16)) ? (2698122653U) : (13U))));
    /* LoopSeq 4 */
    for (unsigned int i_7 = 1; i_7 < 11; i_7 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_8 = 0; i_8 < 12; i_8 += 3) 
        {
            for (unsigned int i_9 = 3; i_9 < 11; i_9 += 3) 
            {
                for (unsigned int i_10 = 0; i_10 < 12; i_10 += 3) 
                {
                    {
                        arr_42 [i_7] [i_8] [i_8] [i_10] = ((/* implicit */unsigned short) arr_37 [i_9 - 2] [i_7 + 1]);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_11 = 4; i_11 < 11; i_11 += 3) 
                        {
                            arr_46 [i_7] [i_8] [i_9] [2U] [i_11] [i_11 - 2] = arr_18 [(unsigned short)6];
                            arr_47 [i_7] [i_7 + 1] [i_7 + 1] [i_8] [i_7] [i_7 + 1] [i_7] = ((/* implicit */unsigned int) ((arr_15 [i_11 - 2] [i_7] [i_9] [i_8] [i_7]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_7] [i_8] [i_9] [i_10] [i_11 - 4])))));
                            arr_48 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 1] [6U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_9 - 1] [i_9 - 1])) ? (((/* implicit */int) arr_43 [i_9 - 2] [i_9] [i_11 + 1] [i_7 + 1] [i_11])) : (((/* implicit */int) arr_43 [i_9 + 1] [i_8] [i_11 - 2] [i_7 - 1] [i_8]))));
                            arr_49 [i_7] [i_7] [i_8] [i_7] = arr_5 [i_8] [i_8];
                            arr_50 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_8] = ((/* implicit */unsigned int) var_0);
                        }
                        for (unsigned int i_12 = 1; i_12 < 8; i_12 += 1) 
                        {
                            arr_55 [10U] [i_8] [i_8] [i_10] [i_12] = ((/* implicit */unsigned int) min((((/* implicit */int) arr_52 [i_9] [i_9])), (((((/* implicit */_Bool) arr_38 [i_8] [i_8] [i_8] [i_8])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_8] [i_9] [i_8])) && (((/* implicit */_Bool) arr_25 [i_7] [i_8] [i_9] [i_10] [i_8]))))) : (((/* implicit */int) arr_10 [i_9 - 2] [i_8] [i_7 + 1]))))));
                            arr_56 [i_7 - 1] [i_7 + 1] [i_7 + 1] [i_9] [i_10] [6U] [i_7 + 1] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_43 [i_9 - 1] [i_9 - 1] [i_9] [i_10] [i_12]))));
                            arr_57 [i_8] [i_8] [i_9 - 3] [2U] [i_9 - 2] = ((/* implicit */unsigned int) (!(((3262250907U) >= (1623009513U)))));
                            arr_58 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_8] [i_7 + 1] = var_17;
                            arr_59 [i_7] [i_7] [i_7] [i_7 - 1] [i_7] [i_7 - 1] [i_8] = ((/* implicit */unsigned int) (~(((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)53464))) == (3552864568U)))) | (((/* implicit */int) min(((unsigned short)37568), ((unsigned short)65535))))))));
                        }
                    }
                } 
            } 
        } 
        arr_60 [i_7 + 1] |= ((/* implicit */unsigned short) (+(((((unsigned int) var_4)) / (arr_2 [14U])))));
        arr_61 [i_7 + 1] = ((/* implicit */unsigned short) var_7);
        arr_62 [i_7] = ((/* implicit */unsigned int) (((((!(((/* implicit */_Bool) arr_38 [i_7] [i_7 - 1] [i_7] [i_7])))) ? (((/* implicit */int) arr_51 [(unsigned short)6] [i_7] [i_7])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_7 - 1] [i_7] [i_7] [i_7 - 1] [i_7] [i_7]))))))) << (((((/* implicit */int) arr_51 [8U] [i_7] [8U])) - (18752)))));
    }
    for (unsigned int i_13 = 1; i_13 < 11; i_13 += 2) /* same iter space */
    {
        arr_66 [i_13] = arr_35 [4U] [i_13 - 1] [i_13 + 1];
        arr_67 [i_13] [i_13] = arr_3 [(unsigned short)14];
    }
    for (unsigned short i_14 = 0; i_14 < 10; i_14 += 3) 
    {
        arr_72 [i_14] = ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) arr_7 [i_14])) ? (((((/* implicit */_Bool) arr_12 [i_14] [i_14] [i_14])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_41 [i_14] [i_14] [i_14] [(unsigned short)1] [i_14] [i_14]))) : (arr_38 [i_14] [i_14] [i_14] [i_14]))) : (arr_53 [i_14] [i_14] [8U] [i_14] [8U] [i_14] [i_14]));
        arr_73 [i_14] [i_14] = (~((+(((((/* implicit */_Bool) arr_14 [i_14] [i_14] [i_14] [i_14])) ? (arr_25 [9U] [i_14] [i_14] [i_14] [i_14]) : (arr_2 [14U]))))));
    }
    for (unsigned int i_15 = 0; i_15 < 14; i_15 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_16 = 0; i_16 < 14; i_16 += 1) 
        {
            for (unsigned int i_17 = 3; i_17 < 13; i_17 += 3) 
            {
                for (unsigned short i_18 = 0; i_18 < 14; i_18 += 1) 
                {
                    {
                        arr_84 [i_15] [i_18] [i_18] [i_15] = ((/* implicit */unsigned int) arr_16 [i_15] [i_16] [i_17]);
                        arr_85 [i_18] [i_17] [i_18] = ((/* implicit */unsigned int) (-((((!(((/* implicit */_Bool) 116233848U)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_9))))) : (((((/* implicit */int) var_11)) << (((((/* implicit */int) var_12)) - (33461)))))))));
                    }
                } 
            } 
        } 
        arr_86 [i_15] |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_12 [i_15] [i_15] [i_15])) ? (((arr_82 [4U] [i_15] [i_15] [i_15]) - (arr_78 [i_15]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) == (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (3126696136U) : (4255288524U)))) || (((/* implicit */_Bool) max((arr_24 [2U]), (arr_14 [i_15] [9U] [i_15] [i_15]))))))))));
        arr_87 [i_15] [i_15] = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_15] [i_15] [i_15]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_15] [i_15] [i_15]))) : (var_8));
    }
}
