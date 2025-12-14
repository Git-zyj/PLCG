/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80283
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
    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) var_15))));
    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) var_0))));
    var_21 = ((/* implicit */long long int) (unsigned char)56);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_22 -= ((long long int) max((((arr_1 [i_0]) <= (((/* implicit */int) var_2)))), (((_Bool) arr_3 [i_1]))));
                arr_6 [i_0] = ((/* implicit */_Bool) (+((+(((/* implicit */int) (unsigned char)56))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) max(((~(min((((/* implicit */long long int) (signed char)94)), (var_6))))), (((/* implicit */long long int) (!(var_8))))));
}
