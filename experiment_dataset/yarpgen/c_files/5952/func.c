/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5952
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
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                arr_5 [i_0] = max((max((arr_3 [6] [i_1]), (((/* implicit */int) ((short) 1984U))))), (arr_0 [i_0]));
                var_11 += ((/* implicit */short) arr_0 [i_0]);
                var_12 = ((/* implicit */unsigned int) max((var_12), (1979U)));
                var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) 14574126831860471814ULL))));
            }
        } 
    } 
    var_14 = ((/* implicit */short) var_4);
}
