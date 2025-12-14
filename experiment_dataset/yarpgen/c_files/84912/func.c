/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84912
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
    var_20 = ((/* implicit */int) var_0);
    var_21 = ((int) (-(((/* implicit */int) (unsigned char)51))));
    var_22 = ((/* implicit */unsigned int) var_18);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            {
                arr_8 [i_1] = ((/* implicit */unsigned char) var_13);
                arr_9 [i_1] = ((/* implicit */signed char) var_3);
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) var_19);
}
