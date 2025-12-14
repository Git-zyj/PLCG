/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63082
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
    var_18 = ((/* implicit */_Bool) var_4);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_2 [i_0] = ((_Bool) (unsigned short)1475);
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) / (((/* implicit */int) var_14))))) ? ((((_Bool)1) ? (1119906422) : (((/* implicit */int) arr_0 [i_0])))) : (min((((/* implicit */int) arr_0 [i_0])), (var_16)))));
        var_20 &= ((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), ((+(((/* implicit */int) arr_1 [i_0] [i_0]))))));
    }
}
