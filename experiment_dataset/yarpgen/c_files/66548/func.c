/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66548
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) arr_0 [i_0]))));
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (((+(var_16))) << (((/* implicit */int) arr_2 [i_0]))))) || ((!(((/* implicit */_Bool) arr_1 [i_0])))))))));
    }
    var_20 = ((((/* implicit */_Bool) max((var_12), (((/* implicit */int) (_Bool)0))))) && (((/* implicit */_Bool) var_5)));
}
