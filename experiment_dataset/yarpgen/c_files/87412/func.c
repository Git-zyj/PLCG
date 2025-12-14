/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87412
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_14 ^= ((/* implicit */signed char) var_12);
                var_15 = ((/* implicit */int) ((unsigned int) (-(8865286095858933880LL))));
                arr_4 [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0]))))) ? (8865286095858933888LL) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(-8865286095858933887LL)))), (var_12)));
    var_17 = ((/* implicit */long long int) var_7);
    var_18 ^= ((/* implicit */unsigned long long int) 2131913877);
}
