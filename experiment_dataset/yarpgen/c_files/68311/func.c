/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68311
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_10 = min((min((((((/* implicit */_Bool) var_2)) ? (var_1) : (arr_6 [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_0))))))), (min((((/* implicit */unsigned int) var_5)), (var_7))));
                    var_11 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8388607U)) ? ((+(arr_7 [11U] [11U] [11U] [11U]))) : (((var_6) | (arr_3 [i_0] [i_1] [i_1])))))) ? (min((((((/* implicit */_Bool) var_1)) ? (arr_8 [i_0] [i_1]) : (arr_3 [i_0] [i_0] [i_2]))), (min((var_6), (916745890U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [i_0])) ? (8388627U) : (arr_6 [i_0])))))));
                    var_12 = var_3;
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) max(((_Bool)1), ((((_Bool)1) && (((/* implicit */_Bool) 1397725176U))))))), (max(((~(1397725176U))), (max((var_1), (var_2)))))));
    var_14 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((2867193629U), (((/* implicit */unsigned int) (_Bool)0))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_9))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) * (var_7)))))) ? (var_1) : (3378221409U)));
}
