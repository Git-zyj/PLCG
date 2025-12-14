/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81062
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
    for (int i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */int) min((((((/* implicit */_Bool) ((int) var_8))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) -2651694827217878347LL)) ? (((/* implicit */int) arr_4 [i_0 - 1] [i_0] [i_0 - 1])) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_1]))))) : (arr_0 [i_0] [i_0 + 1]))), (((/* implicit */unsigned int) arr_2 [i_0 - 2]))));
                arr_7 [i_0 - 2] = ((/* implicit */short) ((long long int) var_3));
                var_11 &= max((((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_0 [i_1] [i_0])), (-481128894137852095LL)))) ? (((/* implicit */int) arr_4 [i_0] [i_0 - 2] [i_0 + 1])) : (((/* implicit */int) ((((/* implicit */int) arr_2 [i_1])) < (((/* implicit */int) arr_1 [(short)6] [i_1 + 1])))))))), (((562949953421311LL) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_0) : (var_0)))) ? (var_5) : (((/* implicit */int) max((var_1), (var_1)))))));
}
