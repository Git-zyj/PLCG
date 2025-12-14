/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66325
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
    var_10 = ((/* implicit */int) var_8);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) (unsigned char)191))) ? (((/* implicit */unsigned int) max((arr_3 [i_0]), (((/* implicit */int) arr_2 [i_0] [i_1]))))) : (var_8)));
                var_12 = var_6;
            }
        } 
    } 
    var_13 = var_4;
}
