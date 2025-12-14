/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83066
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
    var_13 = ((/* implicit */int) (-(4294967294U)));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned long long int) ((unsigned int) max((max((arr_1 [i_0] [i_0 - 1]), (((/* implicit */long long int) (_Bool)0)))), (((/* implicit */long long int) var_7)))));
        arr_2 [i_0] |= ((/* implicit */unsigned short) max((((/* implicit */long long int) (_Bool)1)), (((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)63))) : (arr_1 [i_0] [i_0])))));
    }
    var_15 = ((/* implicit */short) ((_Bool) (+(((int) var_3)))));
}
