/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82760
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
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0 + 1] [12U] [i_1] |= ((/* implicit */unsigned long long int) 2624049394U);
                var_19 = (!(((/* implicit */_Bool) ((arr_2 [i_0 - 1] [i_0 - 1] [i_0 + 1]) ^ (arr_2 [i_0 + 1] [i_0 + 1] [i_0 - 1])))));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) var_4);
    var_21 = min((((var_3) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_14)) == (var_1))))))), (var_18));
    var_22 = ((/* implicit */unsigned short) var_15);
    var_23 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_6)), (((max((var_18), (((/* implicit */unsigned long long int) 2624049400U)))) >> (((/* implicit */int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) var_12)))))))));
}
