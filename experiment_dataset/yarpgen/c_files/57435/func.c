/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57435
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */short) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_9))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((arr_4 [i_1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (0ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_1)) != (arr_3 [i_0] [i_1 + 3])))))))))));
                var_14 = ((/* implicit */short) (-((-(((/* implicit */int) (unsigned short)0))))));
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((unsigned short) var_11)))));
    var_16 = ((/* implicit */int) (short)(-32767 - 1));
}
