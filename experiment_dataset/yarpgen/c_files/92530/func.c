/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92530
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
    var_13 -= ((/* implicit */unsigned long long int) var_1);
    var_14 = ((/* implicit */int) var_12);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_0]))));
        var_15 &= ((((/* implicit */_Bool) (+(arr_1 [18U] [i_0])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (2147483636) : (1048575)))) : (((((/* implicit */_Bool) var_12)) ? (var_1) : (arr_1 [9] [i_0]))));
    }
}
