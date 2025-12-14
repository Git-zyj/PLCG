/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91611
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
    var_18 = ((/* implicit */short) (((+(var_9))) > (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_5), ((!(((/* implicit */_Bool) var_15))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_2 [i_0] [i_1]))));
                arr_8 [i_0] = var_16;
            }
        } 
    } 
}
