/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75635
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
    var_19 = ((var_5) ? (var_15) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) var_2))) ? (((((/* implicit */int) (_Bool)1)) << (((var_15) - (1968169726U))))) : (((/* implicit */int) (_Bool)1))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_20 *= var_6;
        var_21 *= ((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (2739933253U)));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                arr_8 [i_2] [i_2] = 2739933253U;
                arr_9 [i_2] [i_1] [i_0] = ((/* implicit */_Bool) ((unsigned int) (_Bool)1));
            }
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_4 = 1; i_4 < 18; i_4 += 4) 
                {
                    var_22 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_13 [i_4] [i_4] [i_4 - 1] [i_4] [i_4 + 1]))));
                    arr_16 [(_Bool)1] [i_1] [11U] = (_Bool)1;
                }
                /* LoopSeq 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_23 += ((_Bool) arr_19 [i_0] [i_1] [i_3] [i_5]);
                    var_24 = 1209982088U;
                    var_25 ^= ((arr_4 [i_3 + 1]) - (((/* implicit */unsigned int) ((/* implicit */int) var_12))));
                    arr_20 [i_5] [i_1] [i_3] [i_5] = (~(arr_14 [i_3 + 1] [i_3 + 1] [i_5]));
                }
                for (unsigned int i_6 = 0; i_6 < 21; i_6 += 3) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        arr_26 [i_6] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_3] [i_3 + 1] [i_3 + 1] [i_7] [i_7])) && (arr_25 [i_0] [i_3 + 1] [i_3 + 1] [i_6] [i_6] [i_7 - 1])));
                        var_26 = ((/* implicit */unsigned int) max((var_26), (95976613U)));
                        arr_27 [i_0] [i_1] [i_6] [i_6] [i_7 - 1] = ((/* implicit */_Bool) var_8);
                    }
                    var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_12))));
                    arr_28 [i_0] [i_6] [i_0] [(_Bool)1] = arr_18 [i_6] [i_0] [i_3 + 1] [i_6];
                }
                /* LoopSeq 2 */
                for (unsigned int i_8 = 3; i_8 < 20; i_8 += 4) /* same iter space */
                {
                    arr_31 [i_0] [(_Bool)1] [(_Bool)1] [i_0] [i_0] [i_0] |= ((_Bool) (_Bool)1);
                    var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) (!(arr_19 [i_8 - 3] [i_8 - 2] [i_3 + 1] [i_3 + 1]))))));
                    arr_32 [i_0] [i_0] [i_1] [i_3] [i_8 - 3] = ((/* implicit */unsigned int) ((arr_19 [i_3 + 1] [i_8 + 1] [i_3 + 1] [i_8 - 2]) && (arr_19 [i_3 + 1] [i_8 + 1] [i_3] [i_3])));
                }
                for (unsigned int i_9 = 3; i_9 < 20; i_9 += 4) /* same iter space */
                {
                    arr_36 [i_9] [i_1] [i_1] [i_3] [i_3] [i_9] = ((var_1) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))));
                    var_29 = ((/* implicit */_Bool) var_6);
                }
                /* LoopNest 2 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (unsigned int i_11 = 2; i_11 < 19; i_11 += 4) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned int) (_Bool)1);
                            arr_42 [i_0] [i_1] [i_3] [i_10] [i_10] = ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_11]))) ^ (3090854389U));
                        }
                    } 
                } 
            }
            for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        {
                            arr_52 [i_0] &= arr_29 [i_0] [i_1] [i_12] [i_12 - 1] [i_14] [19U];
                            var_31 = ((((/* implicit */_Bool) arr_46 [i_12] [i_12 - 1] [i_12] [i_12 - 1])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_0] [i_1] [i_14]))));
                            arr_53 [i_0] [i_0] [i_0] [i_0] [i_0] [i_13] [i_0] = ((/* implicit */_Bool) 4198990682U);
                            var_32 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1689114329U))));
                        }
                    } 
                } 
                var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) ((4198990683U) & (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1))))))))));
            }
            arr_54 [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_29 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1]))))) ? (((((/* implicit */_Bool) 2993789838U)) ? (var_16) : (var_3))) : (((((/* implicit */_Bool) arr_46 [i_0] [i_0] [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1776490626U)))));
            arr_55 [i_0] [i_0] &= ((/* implicit */_Bool) ((arr_41 [i_0] [i_0] [i_1] [i_1] [(_Bool)1]) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) < (1555034042U)))) : (((/* implicit */int) arr_39 [i_0] [i_0] [i_1]))));
            var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) var_4))));
        }
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) ((unsigned int) 2739933253U)))));
            arr_59 [i_15] [i_0] [i_0] |= ((/* implicit */_Bool) var_17);
        }
    }
    for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
    {
        arr_62 [i_16 - 1] = arr_3 [i_16];
        arr_63 [i_16 - 1] = ((65535U) >= (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + ((+(65535U))))));
    }
    for (unsigned int i_17 = 0; i_17 < 21; i_17 += 4) 
    {
        var_36 = ((/* implicit */_Bool) min((var_36), (arr_47 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17])));
        var_37 ^= arr_65 [i_17];
    }
    var_38 = ((/* implicit */_Bool) 95976613U);
}
