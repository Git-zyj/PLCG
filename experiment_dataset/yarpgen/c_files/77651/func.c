/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77651
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
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (+((-(var_4)))))) ? (((/* implicit */unsigned int) var_7)) : (((((/* implicit */_Bool) ((var_15) / (var_14)))) ? ((-(1595239831U))) : (var_17)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (int i_2 = 2; i_2 < 19; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 2; i_3 < 18; i_3 += 1) 
                    {
                        var_21 = ((/* implicit */int) (((!(((/* implicit */_Bool) ((arr_3 [i_0]) ^ (arr_6 [i_0] [i_0] [10U])))))) ? (arr_6 [i_3] [i_0] [i_0]) : (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_3 [i_2]) : (arr_6 [i_0] [i_2] [i_3])))))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned int i_4 = 2; i_4 < 19; i_4 += 1) 
                        {
                            var_22 = ((unsigned int) (!(((/* implicit */_Bool) 1001303085))));
                            var_23 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_13 [i_0] [5U] [i_2] [i_1] [5U] [5U] [i_0])) ? (arr_5 [i_4 - 2]) : (arr_9 [i_2] [4] [i_2 + 1] [i_3] [5] [i_3]))) * (((/* implicit */unsigned int) (+(arr_10 [i_0] [i_3] [i_3]))))));
                            arr_16 [i_4] [i_1] [i_2] = (-((-(arr_3 [i_0]))));
                        }
                        for (unsigned int i_5 = 1; i_5 < 18; i_5 += 1) 
                        {
                            arr_19 [i_0] [i_0] [i_0] [i_3] [i_2] = ((/* implicit */unsigned int) arr_1 [19]);
                            arr_20 [i_2] = ((/* implicit */int) (!((!((!(((/* implicit */_Bool) arr_9 [i_2] [i_2] [i_2 - 2] [i_3 + 2] [i_5] [i_3 + 2]))))))));
                            arr_21 [6U] [i_0] [i_0] [i_2] [i_5] [i_2 + 1] [6] = ((/* implicit */unsigned int) arr_12 [i_0]);
                        }
                        for (int i_6 = 2; i_6 < 19; i_6 += 1) 
                        {
                            arr_24 [i_0] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */int) (-((((~(arr_18 [i_2] [i_1] [i_6] [i_1] [i_1]))) & (max((arr_14 [i_0] [i_2] [i_0] [i_2 - 2] [i_2] [i_0]), (((/* implicit */unsigned int) arr_13 [i_2] [18] [16U] [i_2] [i_2] [i_1] [2]))))))));
                            var_24 += ((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_0]);
                        }
                        for (unsigned int i_7 = 0; i_7 < 20; i_7 += 4) 
                        {
                            arr_28 [i_2] [11] = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_7])) ? (arr_12 [19]) : (arr_1 [i_2])))))))));
                            var_25 -= ((((/* implicit */_Bool) (-(2405522099U)))) ? (((unsigned int) ((((/* implicit */_Bool) arr_9 [i_0] [i_3 + 2] [i_2 - 1] [i_1] [i_1] [i_0])) ? (((/* implicit */unsigned int) arr_1 [i_0])) : (arr_4 [5U])))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_27 [i_7] [i_1] [i_3 - 2] [i_3 - 2] [i_2 - 2] [i_3 + 2] [i_2]) : (((/* implicit */unsigned int) arr_8 [i_2 + 1] [i_1] [i_2 + 1])))));
                            var_26 = ((/* implicit */int) max((var_26), ((+(20)))));
                        }
                        arr_29 [i_3] [i_2] [i_2] [i_2] [i_2] [10] = ((/* implicit */int) arr_11 [i_2] [i_2]);
                        var_27 = ((int) ((int) -13));
                    }
                    var_28 = ((/* implicit */int) (-((-(arr_27 [15] [15] [i_2] [i_1] [i_1] [i_1] [i_2 - 2])))));
                    var_29 = ((((/* implicit */_Bool) ((unsigned int) 36))) ? (min((arr_18 [i_2] [i_1] [10] [i_2] [i_2]), (arr_17 [i_1] [i_1] [i_2] [i_2] [i_1] [i_2 + 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (arr_26 [i_2] [i_1] [i_0]) : (arr_5 [i_0])))))))));
                    var_30 = min((((unsigned int) (~(arr_0 [i_0])))), ((~(arr_5 [i_0]))));
                }
            } 
        } 
    } 
}
