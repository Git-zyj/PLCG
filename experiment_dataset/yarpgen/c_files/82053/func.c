/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82053
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
    var_20 = ((/* implicit */_Bool) var_8);
    var_21 = ((/* implicit */int) var_9);
    var_22 = ((/* implicit */unsigned short) ((_Bool) ((var_6) - (((/* implicit */unsigned int) (-(((/* implicit */int) var_3))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_23 = ((/* implicit */unsigned short) arr_3 [i_1]);
                    var_24 = ((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_2 - 1] [i_1])) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1])))))));
                }
            } 
        } 
    } 
}
