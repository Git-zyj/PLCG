/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99303
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
    var_18 = ((/* implicit */unsigned int) var_16);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] [(short)1] = ((/* implicit */_Bool) var_11);
                arr_6 [i_0] [i_1] = ((arr_3 [i_0] [i_1] [i_0]) >= (arr_4 [i_0] [i_1]));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) var_5);
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((var_4) ? (max((var_5), (((/* implicit */unsigned int) var_4)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))));
}
