/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80862
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
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((279100591U) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) != (((/* implicit */int) ((var_8) > (var_8)))))))))))));
                arr_5 [(short)8] = ((/* implicit */short) (!((!(((/* implicit */_Bool) 4015866704U))))));
                var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_3 [i_0]))));
                var_19 = ((/* implicit */int) 4015866725U);
            }
        } 
    } 
    var_20 = ((/* implicit */short) var_15);
    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) var_1))));
}
