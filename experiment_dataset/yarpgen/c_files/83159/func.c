/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83159
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
    var_13 = ((/* implicit */unsigned char) (_Bool)1);
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            {
                var_14 ^= ((/* implicit */unsigned long long int) max((max((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (1023) : (var_1))), (((/* implicit */int) ((unsigned char) 368832797U))))), (((/* implicit */int) ((signed char) ((signed char) var_5))))));
                var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((((/* implicit */_Bool) max((arr_2 [i_0 + 1]), (arr_2 [i_0 - 1])))) ? (max((var_6), (((/* implicit */unsigned long long int) arr_2 [i_0 + 2])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) var_1)) : (arr_2 [i_0 - 1])))))))));
            }
        } 
    } 
}
