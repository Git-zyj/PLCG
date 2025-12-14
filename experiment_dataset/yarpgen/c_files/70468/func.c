/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70468
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
    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((long long int) max((((/* implicit */unsigned long long int) (signed char)78)), (7647150441443267298ULL)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (-(881032029))))));
                var_22 = arr_2 [i_0];
            }
        } 
    } 
}
