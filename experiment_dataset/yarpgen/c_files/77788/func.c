/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77788
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
    var_15 = ((/* implicit */unsigned int) var_5);
    var_16 = ((var_5) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-8245))) - (var_14)))), (var_12))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) max(((-((+(((/* implicit */int) arr_3 [i_1] [i_0])))))), ((((-(((/* implicit */int) (short)-25187)))) ^ (((/* implicit */int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) (short)-8245))))))))))));
                var_18 = max((((/* implicit */unsigned long long int) (-(2344949551U)))), (arr_0 [i_0]));
            }
        } 
    } 
}
