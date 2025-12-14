/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67098
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
    var_15 = ((/* implicit */signed char) var_7);
    var_16 = var_6;
    var_17 = ((/* implicit */signed char) var_2);
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        for (unsigned int i_1 = 4; i_1 < 14; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned short) var_2);
                arr_5 [i_0] = ((/* implicit */short) var_3);
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) var_10);
}
