/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89690
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
    for (long long int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 20; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */short) arr_3 [(unsigned short)19]);
                arr_8 [i_1] [i_1 + 1] |= ((/* implicit */long long int) min((((/* implicit */int) arr_5 [4ULL] [i_1])), (var_11)));
            }
        } 
    } 
    var_16 = ((/* implicit */short) ((unsigned short) var_3));
    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) var_10))));
    var_18 += ((/* implicit */signed char) var_9);
}
