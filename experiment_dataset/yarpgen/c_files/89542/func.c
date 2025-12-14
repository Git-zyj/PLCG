/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89542
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
    var_20 = ((/* implicit */int) (signed char)104);
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (short i_2 = 2; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_7 [i_0 + 1] = ((/* implicit */unsigned int) max((max((var_19), (((/* implicit */long long int) var_5)))), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)8)) ? (((/* implicit */int) (short)-31250)) : (((/* implicit */int) (short)-31250)))))));
                    arr_8 [i_0 - 2] [i_0 - 2] = ((/* implicit */short) max((((/* implicit */long long int) var_13)), (((((/* implicit */long long int) ((/* implicit */int) (signed char)0))) | (-8830537602623077373LL)))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */int) (signed char)(-127 - 1));
    var_22 = ((/* implicit */unsigned short) ((((((/* implicit */int) (signed char)-39)) + (2147483647))) << (((((/* implicit */int) (unsigned short)48899)) - (48899)))));
}
