/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99889
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
    var_10 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) var_9)) ? (3U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned int) (_Bool)1)))))));
    var_11 = ((/* implicit */unsigned int) var_7);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) (signed char)43))));
                    var_13 |= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_4)))))))), (((((/* implicit */unsigned long long int) var_2)) & (var_3)))));
                }
            } 
        } 
    } 
}
