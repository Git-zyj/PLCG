/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90624
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
    for (unsigned int i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            {
                var_18 = ((((/* implicit */_Bool) 0U)) ? (2147483647U) : (min((arr_6 [i_0 - 3] [i_0]), (((/* implicit */unsigned int) var_14)))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    var_19 = ((/* implicit */unsigned int) var_2);
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) var_17))));
                        arr_12 [i_0 - 2] [i_0] [i_2] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_1 - 2] [i_1 - 3])) ? (((unsigned int) var_6)) : (((/* implicit */unsigned int) ((int) -446605022)))));
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_4] [18])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 2] [i_1 - 2]))) : (((unsigned int) 55847089)))))));
                            arr_15 [i_0] [i_1] [i_0] [i_3] [(unsigned char)15] = ((/* implicit */int) 849372572U);
                            arr_16 [i_0] = ((/* implicit */int) ((unsigned char) arr_4 [i_0]));
                            arr_17 [i_0] [i_1] [i_2] [i_0] [i_4] [i_4] = arr_6 [i_0] [i_0];
                        }
                        /* LoopSeq 3 */
                        for (int i_5 = 0; i_5 < 20; i_5 += 4) /* same iter space */
                        {
                            var_22 -= ((/* implicit */unsigned int) ((int) arr_7 [i_1 - 2] [i_5]));
                            arr_21 [i_3] [i_0] = 2043205459;
                        }
                        for (int i_6 = 0; i_6 < 20; i_6 += 4) /* same iter space */
                        {
                            var_23 = ((int) arr_1 [i_0] [i_1 - 2]);
                            var_24 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(unsigned char)6] [i_3]))) : (arr_3 [i_0] [i_1] [i_3])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_0] [i_1 - 1] [i_2] [i_2] [i_6])) ? (-1306375026) : (((/* implicit */int) var_16))))) : (arr_7 [i_1 - 1] [i_0])));
                        }
                        for (int i_7 = 0; i_7 < 20; i_7 += 1) 
                        {
                            arr_29 [i_0 - 3] [i_0] [i_2] = ((unsigned int) arr_11 [i_0 + 2] [i_1] [i_2] [i_2]);
                            arr_30 [i_0] [i_7] [i_7] [i_3] [12U] [i_0] [i_0] = ((((var_8) + (2147483647))) >> (((var_11) - (79789930U))));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 0; i_8 < 20; i_8 += 4) 
                    {
                        for (int i_9 = 0; i_9 < 20; i_9 += 1) 
                        {
                            {
                                arr_35 [i_9] [i_0] [i_2] [i_2] [i_0] [i_0] = ((int) -1306375026);
                                var_25 = var_8;
                            }
                        } 
                    } 
                }
                for (int i_10 = 0; i_10 < 20; i_10 += 4) 
                {
                    var_26 = var_5;
                    /* LoopNest 2 */
                    for (unsigned int i_11 = 0; i_11 < 20; i_11 += 1) 
                    {
                        for (int i_12 = 0; i_12 < 20; i_12 += 4) 
                        {
                            {
                                arr_45 [i_0 - 1] [i_1] [i_10] [i_10] [i_11] [i_0] = 1306375018;
                                arr_46 [i_0] = ((((/* implicit */_Bool) max((arr_34 [i_0] [i_0 + 2] [10U] [i_0 + 2] [i_0] [i_1 - 1]), (arr_34 [i_0] [i_0 + 1] [i_0] [i_1] [i_0] [i_1 - 2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_34 [i_0] [i_0 + 1] [i_0] [1] [i_0] [i_1 + 1]) < (arr_34 [i_0] [i_0 - 1] [i_0] [14] [i_0] [i_1 - 3]))))) : ((-(arr_34 [i_0] [i_0 - 1] [i_1] [13] [i_0] [i_1 - 1]))));
                                var_27 = ((/* implicit */unsigned char) ((int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_12] [i_1])) ? (((/* implicit */int) arr_0 [i_0 - 3] [i_0 - 3])) : (arr_9 [i_0] [i_10] [i_12])))), (arr_6 [i_0] [i_0]))));
                                var_28 = (+(min((((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_11 [i_0] [i_10] [14U] [i_12]) : (var_13))), (arr_39 [i_0 + 2] [i_0] [i_12] [i_12] [i_0 - 1]))));
                            }
                        } 
                    } 
                    arr_47 [i_0 - 1] [10U] [i_0] [16U] = max(((-(arr_31 [i_0] [i_1 - 2] [i_0] [i_0] [i_0 + 2] [i_0]))), (((((/* implicit */_Bool) -480566877)) ? (var_3) : (((/* implicit */unsigned int) arr_40 [i_1] [i_1] [i_1] [i_0 + 1] [i_0] [i_0])))));
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_13 = 1; i_13 < 9; i_13 += 1) 
    {
        var_29 = arr_14 [i_13] [i_13] [0U] [i_13];
        arr_51 [i_13] = arr_42 [i_13 - 1] [i_13] [i_13 - 1] [i_13 + 2] [i_13] [i_13];
    }
}
