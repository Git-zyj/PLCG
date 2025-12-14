/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82581
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
    for (int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_8), (arr_0 [(short)20] [i_0])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((short) (unsigned char)248))) << ((((~(var_6))) - (2207356684753354334ULL)))))) : ((~(var_5)))));
        arr_3 [i_0] = ((/* implicit */unsigned short) var_1);
        var_14 = ((/* implicit */int) var_1);
    }
    var_15 -= ((/* implicit */unsigned int) min(((unsigned short)4955), (((/* implicit */unsigned short) ((486596451) > (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) > (var_3)))))))));
}
