/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70261
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
    for (short i_0 = 4; i_0 < 14; i_0 += 1) 
    {
        var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */int) arr_0 [i_0 + 1])) & ((+(((/* implicit */int) arr_0 [10])))))) : (((/* implicit */int) arr_0 [i_0 - 4]))));
        var_13 = ((/* implicit */short) var_11);
        var_14 = ((/* implicit */int) arr_1 [(unsigned short)12]);
    }
    var_15 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_5)) ? (var_4) : (((/* implicit */long long int) var_6)))), (((/* implicit */long long int) var_6))))) ? (7546045390382900404LL) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) 7546045390382900404LL))))));
}
