/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99353
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
    for (long long int i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((int) (~(var_9))));
        arr_3 [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_4)))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) + (arr_0 [i_0 - 2] [i_0 - 2])))));
    }
    var_13 -= ((/* implicit */short) var_5);
}
