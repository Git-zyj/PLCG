/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61988
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_13 = ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
        arr_3 [i_0] = ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (var_1));
        var_14 = ((/* implicit */unsigned char) arr_1 [i_0] [i_0]);
    }
    var_15 = ((/* implicit */unsigned int) var_7);
    var_16 += ((/* implicit */short) (+((~(min((var_11), (((/* implicit */int) var_10))))))));
    var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_12))));
}
