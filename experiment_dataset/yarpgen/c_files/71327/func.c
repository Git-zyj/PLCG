/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71327
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
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            {
                var_20 += ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 3141658571U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1456286434U)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [18U])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (short)21171))))) : (((((/* implicit */_Bool) (short)23803)) ? (2051108801U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-2121)))))))));
                var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-3))))) : (((/* implicit */int) arr_1 [i_1 + 1]))));
                arr_6 [i_0] = ((/* implicit */unsigned long long int) (short)-8192);
                arr_7 [i_0] [i_1] [i_0 + 3] = ((/* implicit */short) (!(((/* implicit */_Bool) (~(4398046511104LL))))));
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) var_9);
}
