/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6457
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
    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) ((short) var_8)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_0])) || (((/* implicit */_Bool) var_2))))), (((min((((/* implicit */unsigned int) var_11)), (1711535205U))) >> ((((~(((/* implicit */int) var_7)))) - (1389)))))));
                var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2583432090U)) ? ((-(arr_3 [9] [i_1] [1]))) : (arr_5 [i_1] [i_0]))))));
                arr_6 [i_0] [6] = max((((/* implicit */int) ((2308256955U) <= (arr_2 [i_1])))), (((((arr_4 [i_0] [i_0] [i_1]) + (2147483647))) << (((1809989290U) - (1809989290U))))));
                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) max((0U), (var_9)))) ? (4194304) : ((~(0)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        for (int i_3 = 2; i_3 < 8; i_3 += 2) 
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 10; i_4 += 2) 
                {
                    for (int i_5 = 3; i_5 < 6; i_5 += 4) 
                    {
                        for (int i_6 = 0; i_6 < 10; i_6 += 4) 
                        {
                            {
                                arr_21 [i_6] [i_5] [i_5] [i_3] [i_2] = (-((+(((arr_17 [(short)0] [(short)0] [i_5] [i_5] [i_6] [3U]) % (var_1))))));
                                var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) var_4))));
                            }
                        } 
                    } 
                } 
                arr_22 [i_3] [i_2] = ((/* implicit */int) ((((((/* implicit */unsigned int) var_10)) ^ (var_6))) | (((/* implicit */unsigned int) var_8))));
                var_18 += ((/* implicit */unsigned int) max(((-(arr_12 [i_3 + 2]))), (((/* implicit */int) (short)-1851))));
                var_19 = ((/* implicit */int) arr_3 [i_2] [i_2] [10U]);
            }
        } 
    } 
    /* LoopSeq 4 */
    for (int i_7 = 0; i_7 < 24; i_7 += 2) 
    {
        var_20 = ((((/* implicit */_Bool) ((arr_24 [i_7] [0]) + (arr_24 [i_7] [i_7])))) ? (((int) ((1128722971) >> (((-68804029) + (68804034)))))) : (var_12));
        arr_25 [i_7] &= ((/* implicit */int) var_3);
        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) min((max((min((2308256955U), (1711535205U))), (arr_23 [i_7]))), (((/* implicit */unsigned int) var_0)))))));
        arr_26 [i_7] = ((/* implicit */int) max((((((/* implicit */_Bool) arr_24 [i_7] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_24 [i_7] [i_7]))), (max((((/* implicit */unsigned int) var_11)), (arr_24 [i_7] [i_7])))));
    }
    for (int i_8 = 3; i_8 < 11; i_8 += 3) 
    {
        var_22 = ((((/* implicit */_Bool) -1096703102)) ? (((((((/* implicit */int) var_7)) + (2147483647))) >> (((arr_23 [i_8 + 3]) - (3633907461U))))) : (arr_29 [i_8 + 2]));
        var_23 = var_11;
        arr_31 [i_8 + 2] = ((/* implicit */short) 0U);
        var_24 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((arr_5 [i_8 - 3] [i_8 + 1]) != (((/* implicit */unsigned int) ((/* implicit */int) ((short) (-2147483647 - 1))))))))));
        arr_32 [i_8] = ((/* implicit */short) ((((912017579U) == (((/* implicit */unsigned int) -68804033)))) ? (arr_2 [i_8 - 1]) : (2583432085U)));
    }
    for (short i_9 = 0; i_9 < 14; i_9 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) (!(((/* implicit */_Bool) (~(max((((/* implicit */unsigned int) (short)1023)), (arr_2 [i_9])))))))))));
        /* LoopSeq 2 */
        for (unsigned int i_10 = 0; i_10 < 14; i_10 += 2) 
        {
            var_26 = arr_5 [i_9] [i_10];
            /* LoopNest 2 */
            for (int i_11 = 1; i_11 < 13; i_11 += 4) 
            {
                for (short i_12 = 0; i_12 < 14; i_12 += 4) 
                {
                    {
                        var_27 = ((/* implicit */int) min((var_27), (var_12)));
                        var_28 = ((/* implicit */unsigned int) (short)-14115);
                    }
                } 
            } 
            var_29 = ((/* implicit */int) 1711535205U);
        }
        for (unsigned int i_13 = 0; i_13 < 14; i_13 += 1) 
        {
            arr_46 [i_9] [i_13] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_9])) ? (((((/* implicit */int) arr_39 [(short)2] [i_13] [(short)2])) >> (((arr_43 [i_13] [4] [4] [6]) - (3984663341U))))) : (var_5)))) ? (((/* implicit */int) min((min(((short)19243), ((short)8192))), (((/* implicit */short) ((2841253658U) > (396372315U))))))) : (-1884083202));
            arr_47 [i_9] = ((/* implicit */short) ((((/* implicit */unsigned int) min((((/* implicit */int) var_4)), (1134756718)))) % (3984758317U)));
        }
        var_30 = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_12), (((/* implicit */int) arr_33 [i_9]))))) ? (max((var_0), (arr_36 [i_9]))) : (((/* implicit */int) arr_40 [2]))))), (((((((/* implicit */_Bool) arr_29 [i_9])) ? (var_9) : (((/* implicit */unsigned int) arr_0 [(short)2])))) << ((((~(134217727U))) - (4160749548U)))))));
        arr_48 [i_9] = ((((/* implicit */int) var_2)) - (((((/* implicit */_Bool) arr_0 [i_9])) ? (var_5) : (((/* implicit */int) ((-1) <= (arr_0 [i_9])))))));
        var_31 = ((/* implicit */int) ((((/* implicit */_Bool) arr_28 [i_9])) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) % (arr_5 [i_9] [6U]))) : (((min((((/* implicit */unsigned int) var_11)), (6U))) / (((/* implicit */unsigned int) 1169910723))))));
    }
    for (short i_14 = 0; i_14 < 14; i_14 += 1) /* same iter space */
    {
        arr_51 [i_14] [i_14] = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_1)))) || (((/* implicit */_Bool) arr_24 [11] [1]))))), (((((/* implicit */_Bool) (~(var_5)))) ? (min((var_9), (((/* implicit */unsigned int) arr_36 [i_14])))) : (((/* implicit */unsigned int) ((((var_11) + (2147483647))) << (((var_9) - (584252394U))))))))));
        var_32 = ((/* implicit */short) ((arr_28 [i_14]) >> (((var_11) + (184793492)))));
        /* LoopNest 3 */
        for (int i_15 = 0; i_15 < 14; i_15 += 3) 
        {
            for (int i_16 = 4; i_16 < 11; i_16 += 4) 
            {
                for (short i_17 = 0; i_17 < 14; i_17 += 4) 
                {
                    {
                        arr_58 [i_14] [i_14] [i_14] = ((/* implicit */short) arr_54 [i_14] [i_14]);
                        var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) ((((/* implicit */unsigned int) var_8)) | (arr_24 [i_14] [i_15]))))));
                        var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) ((((/* implicit */_Bool) 461632216)) ? (3291142371U) : (((/* implicit */unsigned int) -870724112)))))));
                    }
                } 
            } 
        } 
    }
}
