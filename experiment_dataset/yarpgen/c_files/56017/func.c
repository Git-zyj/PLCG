/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56017
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
    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((signed char) max((((((/* implicit */int) var_6)) ^ (((/* implicit */int) (unsigned short)4207)))), (((((/* implicit */int) (unsigned short)51531)) * (((/* implicit */int) (unsigned short)4216))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */short) arr_1 [i_1]);
                var_18 = ((/* implicit */long long int) (unsigned short)4211);
            }
        } 
    } 
}
