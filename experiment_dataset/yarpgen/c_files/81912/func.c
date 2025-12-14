/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81912
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
    var_18 = ((/* implicit */int) ((unsigned int) (+((~(var_5))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (long long int i_1 = 4; i_1 < 17; i_1 += 4) 
        {
            {
                var_19 *= ((/* implicit */short) max((arr_3 [i_0] [i_1] [i_1]), (((/* implicit */signed char) var_15))));
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) 1807294526U)) : (var_6))) > (((/* implicit */unsigned long long int) max((var_8), (var_5))))))) >> (((min((arr_2 [i_0]), (((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551607ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_3)))))) - (4294967227LL)))));
            }
        } 
    } 
}
