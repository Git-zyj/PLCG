/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64138
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
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (!(((/* implicit */_Bool) 65535U)))))));
    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) 3988613962U)) ? (3988613974U) : (306353314U))))));
    var_21 = var_10;
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_22 ^= ((/* implicit */_Bool) (-(((/* implicit */int) var_5))));
        arr_2 [i_0] [i_0] = ((/* implicit */short) arr_1 [i_0] [i_0]);
    }
}
