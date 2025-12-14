/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61829
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
    for (unsigned int i_0 = 4; i_0 < 20; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_10 *= ((/* implicit */signed char) var_5);
                var_11 = ((/* implicit */signed char) min((var_11), (var_7)));
            }
        } 
    } 
    var_12 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((21813253U) / (((/* implicit */unsigned int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_8)))))))) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)166)) + (((/* implicit */int) (unsigned char)155)))))));
    var_13 *= ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)3)))))));
}
