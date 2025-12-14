/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98648
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
    var_17 = var_7;
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */int) max((((/* implicit */unsigned char) var_1)), ((unsigned char)17)));
        var_18 = ((max((((/* implicit */int) (short)6279)), (((((/* implicit */int) arr_0 [i_0])) << (((((/* implicit */int) (unsigned short)39675)) - (39671))))))) + (((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) 11534743300351222065ULL)))))));
    }
}
