/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66569
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            for (signed char i_2 = 4; i_2 < 13; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */int) max(((~(min((4ULL), (7172300584747890093ULL))))), (min(((~(7172300584747890093ULL))), (((/* implicit */unsigned long long int) (short)1008))))));
                    arr_8 [i_1] [i_2] |= ((/* implicit */unsigned short) ((_Bool) max((((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0] [1ULL])), (var_10))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */int) (~(min((var_0), (((/* implicit */unsigned int) (unsigned short)17497))))));
}
