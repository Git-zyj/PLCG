/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93157
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
    var_15 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)63488))));
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        var_16 = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63))) : (arr_1 [i_0 - 2] [i_0]))));
        var_17 = (-(max((max((((/* implicit */long long int) arr_1 [(signed char)18] [(signed char)18])), (arr_2 [i_0]))), (((/* implicit */long long int) (-(((/* implicit */int) (signed char)63))))))));
    }
}
