/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55182
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
    for (short i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        arr_2 [i_0] = (!(((/* implicit */_Bool) (unsigned short)39378)));
        arr_3 [i_0] = ((/* implicit */unsigned short) (-(arr_1 [i_0 - 1])));
    }
    var_10 = ((/* implicit */unsigned int) min((max((min((var_4), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) & (((/* implicit */int) var_3))))))), (((/* implicit */unsigned long long int) var_9))));
}
