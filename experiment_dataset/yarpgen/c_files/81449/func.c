/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81449
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        arr_3 [i_0 + 1] [i_0] = ((/* implicit */_Bool) ((var_4) - (((/* implicit */unsigned int) 503316480))));
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) (+(arr_1 [i_0 - 1] [i_0 - 1])));
        arr_5 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 + 1])) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) var_5))));
    }
    var_11 = ((/* implicit */_Bool) max((var_11), ((!(((((/* implicit */int) var_2)) == (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))))));
}
