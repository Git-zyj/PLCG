/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70091
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
    var_14 = max((((/* implicit */long long int) ((unsigned int) (-(var_7))))), (((long long int) var_13)));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) arr_4 [i_0] [i_0] [i_0]);
                    var_16 ^= ((/* implicit */long long int) var_0);
                }
            } 
        } 
    } 
    var_17 = ((((/* implicit */_Bool) var_12)) ? (max((((/* implicit */long long int) (_Bool)0)), (8017587743434247380LL))) : ((+(max((((/* implicit */long long int) var_5)), (8017587743434247380LL))))));
}
