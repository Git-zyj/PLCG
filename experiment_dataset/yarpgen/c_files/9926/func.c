/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9926
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
    for (unsigned int i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (unsigned int i_1 = 4; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    for (unsigned int i_3 = 4; i_3 < 10; i_3 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned int) max((var_15), (((unsigned int) ((((/* implicit */int) arr_9 [3U] [3U] [i_2])) < (((/* implicit */int) (_Bool)1)))))));
                            var_16 *= ((/* implicit */unsigned int) var_13);
                            arr_11 [i_1] [i_1] [i_1] [i_2] [i_3] [i_1] = ((unsigned int) max(((_Bool)1), (arr_0 [i_0 - 1])));
                        }
                    } 
                } 
                arr_12 [i_1 - 4] [i_1] [i_1 + 2] = arr_5 [i_1 - 1] [i_1 - 4] [i_1] [i_1];
                /* LoopSeq 3 */
                /* vectorizable */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_5 = 1; i_5 < 10; i_5 += 4) 
                    {
                        arr_19 [i_1] [i_1] [9U] [7U] = ((unsigned int) arr_14 [i_1 + 2] [i_1] [6U] [(_Bool)1]);
                        var_17 = ((/* implicit */unsigned int) (((_Bool)1) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (3077127022U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 13; i_6 += 1) 
                    {
                        var_18 = ((arr_22 [i_0] [i_1] [i_1] [i_6]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_0 + 2] [i_1 - 2] [i_1 - 2] [i_1 - 2]))) : (308211185U));
                        arr_23 [i_0 - 1] [11U] [i_1] [i_6] = ((unsigned int) arr_10 [i_0 + 1] [i_0 + 2] [i_1] [i_0 + 1]);
                    }
                    arr_24 [i_1] [i_0 + 2] [i_4] [i_0 + 2] = ((/* implicit */_Bool) arr_2 [i_0 - 1]);
                    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((arr_6 [i_1 - 3] [(_Bool)1] [(_Bool)1] [(_Bool)1]) == (arr_8 [i_0] [i_1 + 3] [i_4] [i_0]))))));
                    var_20 = ((/* implicit */unsigned int) arr_9 [i_0] [i_0] [i_0]);
                }
                for (unsigned int i_7 = 1; i_7 < 9; i_7 += 1) 
                {
                    arr_27 [i_1] = ((var_5) | (3647149386U));
                    var_21 = ((/* implicit */unsigned int) max((var_21), (max((((((/* implicit */_Bool) min((arr_15 [i_0] [10U] [i_0] [i_0]), (4022160740U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_11))), ((~((+(2843461060U)))))))));
                }
                /* vectorizable */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 0; i_9 < 13; i_9 += 1) 
                    {
                        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                        {
                            {
                                arr_36 [i_10 - 1] [i_1] [i_8] [i_1] [i_10] = (+(arr_8 [i_1] [i_1 - 1] [i_8] [i_0 - 1]));
                                var_22 = ((/* implicit */unsigned int) arr_0 [i_10 - 1]);
                                arr_37 [i_1] [i_1] [i_8] [i_1] = arr_10 [(_Bool)1] [(_Bool)1] [i_1] [i_10 - 1];
                                var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) (_Bool)1))));
                                var_24 = ((/* implicit */unsigned int) max((var_24), (1451506236U)));
                            }
                        } 
                    } 
                    arr_38 [i_1] [i_1 + 3] [i_8] = ((/* implicit */unsigned int) arr_22 [i_0] [i_1] [i_1] [1U]);
                    arr_39 [i_1] [12U] [i_1] [7U] = ((var_1) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))));
                    arr_40 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) (((_Bool)1) ? (var_6) : (arr_16 [i_0])));
                    var_25 = ((/* implicit */unsigned int) max((var_25), (var_11)));
                }
                arr_41 [i_0] [i_1] [i_1] = ((((unsigned int) var_9)) >= ((+(var_9))));
            }
        } 
    } 
    var_26 = var_0;
}
