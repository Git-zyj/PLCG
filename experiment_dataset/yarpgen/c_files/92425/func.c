/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92425
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
    var_18 = ((/* implicit */_Bool) (-(((/* implicit */int) max((((/* implicit */signed char) var_9)), (var_13))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) max((max((arr_4 [i_1 - 1] [i_1]), (arr_4 [i_1 - 1] [i_1 + 1]))), (((/* implicit */signed char) (!(((/* implicit */_Bool) 65535U))))))))));
                var_20 |= arr_1 [i_0] [i_1];
                arr_7 [i_0] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_5 [i_1 - 2] [10ULL]))) ? (65564U) : (((65535U) << (((65535U) - (65516U)))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) var_16);
}
