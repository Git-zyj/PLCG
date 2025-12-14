/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92205
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
    var_13 = ((/* implicit */unsigned int) ((((((/* implicit */int) max((var_12), (((/* implicit */unsigned char) var_8))))) / (((/* implicit */int) var_7)))) - (var_5)));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 *= ((/* implicit */unsigned long long int) min(((~(var_5))), ((~(((/* implicit */int) var_4))))));
                    arr_7 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0))))) * (min((((/* implicit */unsigned long long int) min((((/* implicit */int) var_11)), (arr_5 [i_1 + 1])))), (min((18446744073709551610ULL), (((/* implicit */unsigned long long int) var_1))))))));
                }
            } 
        } 
    } 
}
