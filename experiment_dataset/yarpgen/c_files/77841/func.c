/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77841
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */unsigned short) max((var_10), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_0 [i_0] [i_1])))))));
                var_11 = (~((-(arr_1 [i_1] [i_0]))));
                arr_5 [i_1] = ((/* implicit */unsigned short) arr_0 [i_0] [i_1]);
            }
        } 
    } 
    var_12 = ((/* implicit */short) ((((((((/* implicit */int) var_3)) != (((/* implicit */int) var_7)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) : ((-(var_9))))) & ((-(var_9)))));
}
