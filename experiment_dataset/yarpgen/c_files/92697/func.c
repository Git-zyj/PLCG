/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92697
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
    var_16 = var_3;
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_4 [6LL] = ((/* implicit */_Bool) var_10);
        var_17 = ((/* implicit */signed char) var_8);
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */signed char) var_10);
        var_18 -= ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_1)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_14)))))));
    }
    var_19 = ((/* implicit */unsigned long long int) var_8);
    var_20 = ((/* implicit */_Bool) (-((((-(var_2))) + (((var_12) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
}
