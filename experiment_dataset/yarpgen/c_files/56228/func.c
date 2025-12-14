/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56228
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (short)26143)) - (26141)))));
        var_11 = ((/* implicit */unsigned char) min((((short) (~(((/* implicit */int) arr_0 [i_0]))))), (((/* implicit */short) (_Bool)1))));
    }
    var_12 *= ((/* implicit */_Bool) (~(((unsigned int) 368998952))));
}
