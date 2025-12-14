/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93253
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] |= ((/* implicit */short) 2147483647);
        arr_3 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_1 [i_0])) : (2147483647)))) : (((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) 63314034U)) : (7220400924000330183LL))) / (((/* implicit */long long int) ((/* implicit */int) (short)-10229)))))));
    }
    var_14 ^= ((/* implicit */unsigned char) var_3);
}
