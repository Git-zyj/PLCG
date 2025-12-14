/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86185
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
    var_10 = ((/* implicit */signed char) var_1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (~(-1570631582)))) > (387126720U))))));
                var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) var_5))));
            }
        } 
    } 
    var_13 |= ((/* implicit */short) 3907840588U);
}
