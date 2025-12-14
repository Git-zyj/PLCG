/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56869
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
    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((int) var_16))) : (var_4)))) <= (min((-7399216679833080140LL), (((/* implicit */long long int) 899200810)))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 9; i_2 += 3) 
            {
                {
                    var_18 += ((/* implicit */unsigned int) (-(((unsigned long long int) arr_0 [i_2 - 2]))));
                    var_19 *= ((/* implicit */unsigned long long int) arr_2 [i_1]);
                }
            } 
        } 
    } 
    var_20 -= ((/* implicit */signed char) ((unsigned long long int) ((unsigned long long int) ((((/* implicit */int) var_6)) != (((/* implicit */int) var_14))))));
    var_21 = ((/* implicit */int) var_4);
}
