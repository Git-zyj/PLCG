/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60324
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned int) ((unsigned long long int) (!((!(((/* implicit */_Bool) var_6)))))));
                var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) var_0))));
                arr_6 [i_1] = ((/* implicit */signed char) min(((+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_0)))))), ((~((+(((/* implicit */int) (unsigned short)48183))))))));
            }
        } 
    } 
    var_17 = (-(((/* implicit */int) var_10)));
}
