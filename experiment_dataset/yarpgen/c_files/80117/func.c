/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80117
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
    var_10 |= ((/* implicit */unsigned short) ((2097151U) == (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
    var_11 = ((/* implicit */unsigned short) var_7);
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_0))) + (((((/* implicit */long long int) ((/* implicit */int) var_6))) + (((1119083287165121439LL) - (-1119083287165121440LL)))))));
    var_13 = ((/* implicit */unsigned long long int) 1090960172);
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned short) var_3);
        arr_3 [i_0] = ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
    }
}
