/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80479
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
    for (int i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */int) (short)-8658)), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (short)-8643)) : (((/* implicit */int) (short)-8658))))));
                var_18 -= ((/* implicit */short) var_5);
            }
        } 
    } 
    var_19 = var_9;
    var_20 += ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)8658)) << (((((/* implicit */int) (short)8662)) - (8650)))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)65535))))), (var_12)))));
}
