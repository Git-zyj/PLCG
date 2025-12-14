/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70676
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
    var_10 = ((/* implicit */int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_7))))), (var_2)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        var_11 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_3 [4LL] [4LL])) ? ((~(9223372036854775801LL))) : (((/* implicit */long long int) var_4)))) | (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_9))))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_3)) + (((((/* implicit */_Bool) arr_0 [i_0] [i_0 + 1])) ? (arr_2 [i_0]) : (var_1)))));
    }
}
