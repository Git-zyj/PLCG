/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58155
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
    var_12 = ((/* implicit */long long int) var_3);
    var_13 = ((/* implicit */short) var_4);
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_11 [i_0] [(short)0] [(unsigned short)0] [(short)0] |= ((/* implicit */unsigned char) arr_9 [i_0] [i_1] [i_2 + 2]);
                    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) var_1))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */signed char) ((unsigned char) (~(((/* implicit */int) var_8)))));
}
