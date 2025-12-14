/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95764
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
    for (unsigned short i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_13 |= ((/* implicit */unsigned char) arr_2 [i_0 + 1] [i_0 + 2]);
                var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((unsigned char) var_7)))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) var_11);
    var_16 = ((/* implicit */unsigned int) (unsigned short)42921);
}
