/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60456
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
    var_13 ^= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min((var_6), (((/* implicit */long long int) ((unsigned int) var_4)))))), (((((/* implicit */unsigned long long int) ((((var_8) + (9223372036854775807LL))) << (((var_4) - (7055031464789313482ULL)))))) | (15735300219575352032ULL)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) 3ULL))));
                var_15 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min((((long long int) var_10)), (((/* implicit */long long int) arr_0 [i_0]))))), (var_4)));
            }
        } 
    } 
}
