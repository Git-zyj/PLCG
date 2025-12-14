/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91485
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
    var_17 |= ((/* implicit */unsigned char) ((((/* implicit */int) var_11)) * (var_5)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned int) ((unsigned long long int) var_8));
        arr_2 [i_0 - 1] [i_0] = ((/* implicit */int) ((unsigned int) (~(53330557U))));
        arr_3 [i_0 - 1] [i_0] = ((/* implicit */unsigned long long int) var_2);
        arr_4 [i_0 + 1] = ((/* implicit */unsigned int) (short)32767);
    }
}
