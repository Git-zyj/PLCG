/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79399
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
    var_18 = var_10;
    var_19 &= ((/* implicit */unsigned int) (~(562949953421308LL)));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */long long int) min((var_20), (((((arr_0 [i_0] [i_1]) + (9223372036854775807LL))) >> (((((((-562949953421322LL) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) var_9)) ? (-562949953421291LL) : (((/* implicit */long long int) 2217256971U)))) + (562949953421316LL))))) - (274861129727LL)))))));
                arr_4 [i_0] [i_0] = ((/* implicit */signed char) ((long long int) arr_2 [i_1]));
                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (~(min((((/* implicit */long long int) var_8)), (arr_0 [i_1] [i_0 - 2]))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) -5777527212427386628LL);
}
