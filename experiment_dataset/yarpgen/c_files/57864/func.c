/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57864
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((int) (!(((/* implicit */_Bool) arr_0 [i_0]))))))));
                var_21 &= ((/* implicit */unsigned long long int) ((unsigned short) (!(((/* implicit */_Bool) var_16)))));
            }
        } 
    } 
    var_22 *= ((/* implicit */unsigned int) var_14);
}
