/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7954
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
    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) var_1))));
    var_21 &= ((/* implicit */long long int) var_3);
    var_22 = ((/* implicit */signed char) var_17);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */short) arr_3 [i_1] [i_1] [i_0]);
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned long long int) (short)-8791);
            }
        } 
    } 
}
