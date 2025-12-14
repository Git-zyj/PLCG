/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73339
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
    var_16 = ((/* implicit */short) var_2);
    var_17 = var_15;
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 7; i_1 += 3) 
        {
            {
                arr_7 [i_0] = var_5;
                arr_8 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((-(var_0))), (var_7)))) || (((/* implicit */_Bool) var_0))));
                var_18 = ((/* implicit */long long int) min((var_18), (arr_2 [i_0])));
                var_19 ^= (-(var_4));
            }
        } 
    } 
}
