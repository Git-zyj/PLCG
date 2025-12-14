/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62184
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
    var_10 = ((/* implicit */short) max((var_10), (((/* implicit */short) 17ULL))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned long long int) max((var_11), (var_6)));
                arr_7 [i_0] [i_1] = (+(((9979643303117092905ULL) << (((18014398241046528ULL) - (18014398241046466ULL))))));
            }
        } 
    } 
    var_12 = var_9;
}
