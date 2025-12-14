/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82473
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
    var_10 = var_7;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            {
                var_11 = ((((/* implicit */int) min((((/* implicit */unsigned short) arr_2 [i_1 - 1])), (arr_1 [i_1 - 2] [(unsigned char)7])))) | (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)0)))));
                var_12 = ((/* implicit */unsigned short) ((var_9) ^ (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_3 [i_1 + 1])), (var_1))))));
            }
        } 
    } 
}
