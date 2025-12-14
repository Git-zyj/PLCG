/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63274
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0 - 1] &= ((/* implicit */long long int) arr_1 [i_0]);
        var_19 -= ((/* implicit */long long int) arr_1 [i_0]);
        var_20 = ((/* implicit */short) ((3099180853U) - ((((+(var_12))) + (((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_0])))))))));
        var_21 = ((/* implicit */short) ((_Bool) max((((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) & (var_1))), (((-5LL) & (((/* implicit */long long int) 0U)))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) && (((/* implicit */_Bool) arr_1 [i_0 - 1])))))));
    }
    var_22 += ((/* implicit */unsigned char) (-(var_6)));
}
