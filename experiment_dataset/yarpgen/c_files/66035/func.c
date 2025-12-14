/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66035
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
    var_10 = ((/* implicit */_Bool) 474649060U);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                arr_5 [i_0] &= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)20701)) ? (((/* implicit */unsigned long long int) max((var_3), (min((((/* implicit */long long int) arr_1 [i_1])), (arr_3 [i_0] [i_1])))))) : (((min((((/* implicit */unsigned long long int) (_Bool)1)), (8388608ULL))) ^ (((/* implicit */unsigned long long int) (~(arr_1 [i_0]))))))));
                var_11 -= ((/* implicit */short) var_4);
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) var_4))));
}
