/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62165
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
    var_15 = ((/* implicit */unsigned long long int) var_5);
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_16 ^= ((/* implicit */unsigned int) (!(((((/* implicit */int) arr_0 [i_0 + 3] [i_1 + 1])) < (((/* implicit */int) arr_0 [i_0 - 2] [i_1]))))));
                arr_5 [i_0 + 2] [i_1] = ((/* implicit */short) ((((/* implicit */int) ((short) var_9))) | (((/* implicit */int) min((arr_2 [i_0 + 2]), (arr_2 [i_0 - 1]))))));
            }
        } 
    } 
}
