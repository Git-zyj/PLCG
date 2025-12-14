/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70078
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
    var_11 *= ((/* implicit */unsigned int) max((((/* implicit */int) var_9)), (var_0)));
    var_12 = ((/* implicit */unsigned long long int) min((var_8), (((/* implicit */long long int) var_6))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 23; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((/* implicit */signed char) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-6))) ^ (arr_3 [i_1 + 1] [i_1 + 1] [3]))), (((/* implicit */unsigned long long int) var_1))));
                arr_7 [i_0] [18] [i_0] &= ((unsigned int) min((((/* implicit */unsigned long long int) var_1)), (((((/* implicit */unsigned long long int) arr_0 [i_0] [i_1])) & (3072ULL)))));
            }
        } 
    } 
}
