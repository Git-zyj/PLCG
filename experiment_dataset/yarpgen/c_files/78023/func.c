/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78023
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 18; i_2 += 3) 
            {
                {
                    var_18 = (+(var_16));
                    var_19 *= ((/* implicit */short) arr_5 [(signed char)10] [(signed char)10]);
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) min((((/* implicit */unsigned int) var_16)), (var_12))))));
}
