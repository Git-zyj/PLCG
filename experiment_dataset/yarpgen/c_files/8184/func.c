/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8184
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                arr_4 [i_1 - 1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 - 2] [i_1 - 1])) || (((/* implicit */_Bool) arr_1 [i_0 + 1] [i_1 + 1])))))));
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned int) arr_0 [i_0]);
            }
        } 
    } 
    var_17 = ((/* implicit */short) var_5);
    var_18 += ((/* implicit */short) var_5);
}
