/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62506
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) (!((_Bool)1)));
                arr_7 [i_1] = ((/* implicit */unsigned int) ((signed char) max((arr_5 [i_1 - 2] [i_1 - 2]), (arr_5 [i_1 + 3] [i_1 + 2]))));
                arr_8 [i_1] = ((/* implicit */unsigned int) ((int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_2 [i_0]))))) & (min((arr_0 [i_0] [i_1]), (((/* implicit */long long int) var_19)))))));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) (-(var_15)));
}
