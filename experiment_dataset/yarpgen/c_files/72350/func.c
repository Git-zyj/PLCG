/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72350
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((/* implicit */short) arr_4 [i_1]);
                arr_7 [i_0] [i_1 - 1] [i_0] &= ((/* implicit */signed char) ((((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_0] [(short)12] [(unsigned char)10]))))) ? (max((var_16), (((/* implicit */unsigned long long int) (_Bool)0)))) : (var_9))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)19)))));
                arr_8 [i_1] = ((/* implicit */unsigned char) var_10);
                var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) var_8))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) var_7);
}
