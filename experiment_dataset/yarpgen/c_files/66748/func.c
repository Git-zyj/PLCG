/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66748
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
    var_10 = ((/* implicit */signed char) min((var_10), (((/* implicit */signed char) (~(var_6))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                var_11 -= ((/* implicit */unsigned int) (_Bool)1);
                var_12 += ((/* implicit */unsigned int) max((max((((/* implicit */signed char) ((((/* implicit */int) arr_3 [i_0] [i_0])) > (((/* implicit */int) var_3))))), (arr_1 [i_1]))), (arr_1 [12])));
            }
        } 
    } 
}
