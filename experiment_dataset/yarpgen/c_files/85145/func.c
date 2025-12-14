/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85145
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned char) arr_2 [i_0] [i_1]);
                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) var_4))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) min((((/* implicit */int) var_5)), ((~(((/* implicit */int) (_Bool)1))))));
}
