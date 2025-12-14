/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66657
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) ((unsigned short) ((unsigned short) var_8))))));
                var_12 = ((/* implicit */unsigned char) ((max((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (var_6))), (((/* implicit */unsigned long long int) var_7)))) + ((+(var_5)))));
            }
        } 
    } 
    var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) var_9))));
}
