/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91236
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
    var_13 *= ((/* implicit */short) (-((~(1040540491541522564LL)))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned short) ((max((((/* implicit */long long int) (unsigned char)25)), (1040540491541522564LL))) + (((/* implicit */long long int) ((/* implicit */int) (short)-12800)))));
        var_15 -= ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (arr_1 [1U] [i_0]) : (min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) 7038028903423006550LL))))));
    }
    var_16 = ((/* implicit */unsigned char) var_0);
}
