/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56332
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
    for (signed char i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned int) var_4));
        var_13 = arr_0 [i_0 + 1] [i_0 - 1];
    }
    var_14 = max((((/* implicit */long long int) var_10)), (max(((+(var_9))), (((/* implicit */long long int) var_11)))));
    var_15 = ((/* implicit */unsigned short) (((+(((0LL) * (((/* implicit */long long int) ((/* implicit */int) (signed char)108))))))) * (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) var_12)), ((short)-1)))))));
}
