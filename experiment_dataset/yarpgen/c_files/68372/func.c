/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68372
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
    var_17 = ((((((((/* implicit */_Bool) var_11)) ? (var_14) : (var_6))) - (max((var_14), (var_12))))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_14) + (var_14)))) ? (var_2) : ((-(var_7)))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) max(((+((+(2147483647))))), ((+(max((arr_0 [i_0]), (arr_0 [i_0]))))))))));
        var_19 = ((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (((/* implicit */unsigned int) (+(arr_0 [i_0 + 2])))) : (((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (arr_1 [i_0 + 2]) : (arr_1 [i_0 + 2]))));
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 17; i_1 += 4) 
        {
            for (int i_2 = 3; i_2 < 17; i_2 += 4) 
            {
                for (int i_3 = 3; i_3 < 18; i_3 += 4) 
                {
                    {
                        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 814084939U)) ? (-2147483647) : (-1417638862))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            var_21 = ((/* implicit */int) min((var_21), (((int) (((-(var_9))) & (arr_6 [2] [2] [2] [i_0]))))));
                            var_22 = ((/* implicit */unsigned int) min((var_22), (((arr_5 [11] [i_2 + 2] [i_1 - 1]) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_3 + 1] [i_2 + 1] [i_1] [i_0 - 1])) ? (arr_0 [i_0 + 2]) : (arr_0 [i_0 + 2]))))))));
                            arr_12 [i_0 - 1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_0 [i_0])))) ? (((arr_10 [i_0] [i_1 - 2] [i_1 - 2] [16U] [i_0] [i_3 - 2] [i_4]) / (arr_6 [i_4] [i_3 - 3] [i_1] [i_0]))) : (arr_10 [i_0] [i_1] [i_1 + 1] [i_3 - 2] [i_3 - 1] [i_4] [i_3 - 2])))) ? ((-((+(arr_6 [i_0] [i_1 + 1] [i_2] [i_4]))))) : ((+(arr_8 [i_4]))));
                            arr_13 [i_1] [i_3] [i_3] [i_3] [i_3] [i_1] = ((/* implicit */int) (((+(arr_6 [18] [12U] [12U] [i_3]))) != (((arr_7 [i_1] [10] [i_1] [i_1 + 1] [i_1] [i_1]) ^ (((/* implicit */unsigned int) (~(var_13))))))));
                        }
                    }
                } 
            } 
        } 
        var_23 = max((((/* implicit */unsigned int) min((arr_3 [i_0] [i_0 + 1] [i_0 + 2]), (arr_3 [i_0] [i_0 + 1] [i_0 + 1])))), (max((arr_7 [i_0 - 1] [i_0] [i_0 + 1] [i_0] [i_0 - 1] [i_0 + 1]), (arr_7 [i_0] [i_0] [i_0 - 1] [i_0] [i_0 + 2] [i_0]))));
        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [12] [12] [i_0] [17] [i_0] [11U])) ? ((~((+(arr_6 [i_0] [i_0] [i_0] [i_0]))))) : ((-(max((arr_5 [i_0 + 2] [i_0 + 2] [i_0]), (var_15)))))));
    }
    var_25 = ((/* implicit */unsigned int) max((var_5), (var_3)));
}
