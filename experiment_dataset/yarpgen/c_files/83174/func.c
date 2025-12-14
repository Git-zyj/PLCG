/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83174
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_17 = ((((/* implicit */_Bool) ((long long int) var_15))) ? (var_10) : ((+(((/* implicit */int) arr_0 [i_0])))));
        arr_2 [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) arr_0 [i_0]))));
    }
    var_18 = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) (-(((/* implicit */int) (unsigned char)186)))))) << (((((/* implicit */int) var_15)) - (49482)))));
}
