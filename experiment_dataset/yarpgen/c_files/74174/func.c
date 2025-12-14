/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74174
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
    var_16 |= var_6;
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((min((-18LL), (((/* implicit */long long int) (_Bool)0)))) & (((/* implicit */long long int) ((var_14) | (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
    var_18 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_10))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned long long int) (_Bool)0);
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) | (((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned long long int) arr_0 [0ULL]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (4597408282502469258LL)))));
    }
}
