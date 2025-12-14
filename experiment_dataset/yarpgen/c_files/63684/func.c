/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63684
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
    var_19 &= min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_16) >= (var_0))))) > (var_16)))), ((+(((unsigned int) var_1)))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                for (unsigned int i_3 = 1; i_3 < 12; i_3 += 2) 
                {
                    {
                        var_20 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_3 + 1])) && (((/* implicit */_Bool) arr_1 [i_3 - 1])))))));
                        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((unsigned int) (+(4255682420U)))) < (((arr_8 [i_3 + 2] [8U] [13U] [i_3 + 2]) / (((/* implicit */unsigned int) ((/* implicit */int) ((arr_10 [i_0] [i_0] [i_0] [i_0]) > (arr_9 [i_0] [i_0] [i_0] [i_0]))))))))))));
                    }
                } 
            } 
        } 
        var_22 ^= (-(((((/* implicit */_Bool) arr_10 [3U] [i_0] [i_0] [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0]))));
        var_23 = ((/* implicit */unsigned int) min((var_23), (((((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (4211100259U))) % ((+(arr_9 [i_0] [i_0] [i_0] [i_0])))))));
        var_24 = max(((+(max((1579503106U), (arr_2 [i_0]))))), (((((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [10U])) || (((/* implicit */_Bool) arr_8 [i_0] [11U] [i_0] [i_0])))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (4294967295U) : (arr_0 [i_0]))) : (max((1574804075U), (1040187392U))))));
        var_25 = (+(39284867U));
    }
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 17; i_4 += 4) 
    {
        var_26 = ((((arr_13 [i_4] [i_4]) > (4211100259U))) ? ((-(arr_13 [i_4] [i_4]))) : (((((/* implicit */_Bool) arr_13 [i_4] [i_4])) ? (arr_12 [i_4]) : (arr_12 [i_4]))));
        var_27 += ((((/* implicit */_Bool) ((arr_13 [i_4] [i_4]) & (arr_12 [i_4])))) ? (arr_13 [i_4] [i_4]) : (((arr_13 [i_4] [i_4]) | (arr_12 [i_4]))));
    }
    var_28 = ((/* implicit */unsigned int) min((var_28), (min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_7) : (var_14)))) ? (((var_0) | (4255682420U))) : (((var_8) ^ (1569660564U))))), (((unsigned int) var_15))))));
}
