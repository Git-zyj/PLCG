/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70324
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
    var_16 = ((/* implicit */_Bool) max(((-(max((1360547335), (((/* implicit */int) var_12)))))), (((/* implicit */int) ((short) var_10)))));
    var_17 &= ((/* implicit */int) var_11);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        arr_2 [i_0] = max((arr_0 [i_0]), (((/* implicit */signed char) (!((_Bool)0)))));
        var_18 = ((/* implicit */signed char) ((((/* implicit */int) max((min((((/* implicit */short) arr_0 [3ULL])), ((short)32767))), (((/* implicit */short) arr_0 [i_0]))))) * (((/* implicit */int) arr_1 [i_0] [i_0]))));
        var_19 = ((/* implicit */int) arr_0 [i_0]);
    }
}
