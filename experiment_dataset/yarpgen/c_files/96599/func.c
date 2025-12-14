/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96599
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_12 ^= arr_0 [i_2];
                    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((((/* implicit */_Bool) ((var_7) & (((/* implicit */unsigned long long int) arr_4 [10U] [i_2] [i_2] [i_2]))))) ? (((/* implicit */unsigned long long int) (~(arr_4 [i_1] [i_1] [i_2] [i_1])))) : (((((/* implicit */_Bool) -701184187)) ? (((/* implicit */unsigned long long int) arr_5 [i_0 + 1] [i_2])) : (arr_3 [i_0 - 1])))))));
                    var_14 &= ((((((/* implicit */unsigned int) ((int) var_5))) & ((+(1594477225U))))) - (var_8));
                }
            } 
        } 
    } 
    var_15 ^= ((/* implicit */int) var_2);
}
