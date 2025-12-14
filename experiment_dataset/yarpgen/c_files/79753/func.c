/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79753
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
    var_16 = ((/* implicit */short) var_11);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 7; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */_Bool) ((min((607549914U), (((/* implicit */unsigned int) 16383)))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) 607549899U)) ? (arr_3 [8U] [(_Bool)1] [i_1 - 1]) : (((/* implicit */int) arr_0 [i_1 + 3])))))));
                arr_4 [i_0] [i_1] [(_Bool)1] = ((/* implicit */short) ((((var_9) - (((/* implicit */int) arr_0 [(_Bool)1])))) / (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) var_3))) && (((/* implicit */_Bool) var_10)))))));
                arr_5 [i_1] [i_1] [i_0] |= ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_3 [i_0] [i_1 - 1] [i_1 - 1])) ? (arr_2 [(short)4] [i_1] [i_1 - 1]) : (arr_3 [i_0] [i_0] [i_1 + 2]))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
            }
        } 
    } 
}
