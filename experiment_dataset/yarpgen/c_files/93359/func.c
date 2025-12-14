/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93359
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned int) (((-(((/* implicit */int) arr_1 [i_0])))) - (((((/* implicit */_Bool) var_4)) ? ((-(((/* implicit */int) arr_1 [(_Bool)1])))) : (((/* implicit */int) var_11))))));
        var_16 = ((/* implicit */unsigned short) ((_Bool) (_Bool)0));
    }
    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned char) var_12)))))));
}
