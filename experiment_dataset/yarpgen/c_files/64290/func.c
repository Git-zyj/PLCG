/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64290
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
        var_17 = (+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_2)))));
        var_18 = ((/* implicit */unsigned char) ((unsigned int) ((((((/* implicit */int) arr_0 [i_0])) + (2147483647))) << (((((((/* implicit */int) arr_0 [i_0])) + (19357))) - (17))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)4)) != (((((var_13) <= (((/* implicit */int) arr_0 [i_0])))) ? (min((((/* implicit */int) arr_0 [i_0])), (var_13))) : (min((((/* implicit */int) arr_0 [i_0])), (var_9)))))));
    }
    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) ((int) (+(var_12))))) ? ((~(((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_10)))))) : (((int) var_3)))))));
}
