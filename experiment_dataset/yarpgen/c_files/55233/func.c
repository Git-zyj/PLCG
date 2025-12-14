/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55233
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
    var_10 = ((unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((((/* implicit */_Bool) 971489489687923455ULL)) ? (var_0) : (var_2))) : (var_9)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_11 = arr_5 [i_0] [i_0 - 1] [i_0 - 1];
                var_12 = arr_3 [i_0 + 1];
            }
        } 
    } 
}
