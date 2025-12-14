/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73622
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
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_4))) < (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) var_13)) : (((((/* implicit */_Bool) var_1)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))))));
    var_18 = ((/* implicit */unsigned char) var_0);
    var_19 = ((/* implicit */long long int) 17912522083235015200ULL);
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_2 [i_0] = 0ULL;
        arr_3 [i_0] = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) var_12)) < (arr_0 [(short)20]))))));
    }
}
