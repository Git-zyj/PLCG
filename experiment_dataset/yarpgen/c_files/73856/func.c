/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73856
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
    var_12 &= ((/* implicit */unsigned long long int) var_3);
    var_13 = ((/* implicit */unsigned long long int) ((int) var_4));
    var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned short) 2412275887U)))));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            for (signed char i_2 = 2; i_2 < 21; i_2 += 1) 
            {
                {
                    var_15 = var_2;
                    var_16 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (short)23380)) ? (((/* implicit */int) (short)-23377)) : (((/* implicit */int) (short)-6636))))));
                    arr_9 [i_2 + 2] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 511981622U)) ? (((/* implicit */int) (signed char)-1)) : (1742097047)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) var_8)), (var_5))))))) : (((/* implicit */int) var_6))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) var_1))));
}
