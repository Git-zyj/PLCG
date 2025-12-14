/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94475
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
    for (int i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 4; i_1 < 17; i_1 += 1) 
        {
            {
                arr_7 [i_1 + 1] [i_0] = ((/* implicit */long long int) (-(((((/* implicit */unsigned int) ((/* implicit */int) (short)-16))) ^ (var_9)))));
                var_20 = ((/* implicit */unsigned long long int) min((var_20), (var_1)));
            }
        } 
    } 
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3665171865U)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_5))))) % (var_6)))) ? (max((((((/* implicit */long long int) ((/* implicit */int) var_10))) / (9007199254724608LL))), (((/* implicit */long long int) var_7)))) : (((/* implicit */long long int) (~((+(((/* implicit */int) var_11)))))))));
    var_22 = ((/* implicit */short) var_0);
}
