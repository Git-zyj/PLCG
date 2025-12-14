/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95196
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
    var_14 ^= ((/* implicit */unsigned short) (~(max((((/* implicit */int) var_6)), (var_10)))));
    var_15 = ((/* implicit */unsigned int) (((-(var_8))) - (((/* implicit */long long int) ((/* implicit */int) ((((var_0) & (var_0))) != (((/* implicit */long long int) var_13))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_16 = ((2919019375389739510LL) * (((/* implicit */long long int) 0)));
                var_17 = ((/* implicit */short) arr_3 [i_0] [i_0] [i_1]);
            }
        } 
    } 
}
