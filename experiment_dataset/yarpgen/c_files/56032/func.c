/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56032
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
    for (int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0] [i_0])) ^ (((arr_1 [i_0] [i_0]) & (((/* implicit */int) arr_0 [i_0] [(short)14]))))));
        arr_2 [i_0] [i_0] = ((/* implicit */int) ((_Bool) arr_1 [i_0] [i_0]));
    }
    var_14 = ((/* implicit */unsigned char) var_4);
    var_15 = ((/* implicit */unsigned char) ((signed char) (-(-1874141585))));
    var_16 = ((/* implicit */short) (-(4294967295U)));
}
