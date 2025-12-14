/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96787
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
    var_17 = (~(max((((/* implicit */unsigned int) var_3)), (1151194204U))));
    var_18 *= ((/* implicit */short) ((var_5) << (((((/* implicit */int) min((((/* implicit */unsigned short) var_11)), ((unsigned short)16745)))) - (16744)))));
    var_19 += max((max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned short)30)), (var_10)))), (max((17767126150383260976ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)15111)) - (((/* implicit */int) var_11))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_20 -= ((/* implicit */unsigned char) arr_0 [i_0]);
        arr_2 [i_0] &= ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_0]))));
    }
}
