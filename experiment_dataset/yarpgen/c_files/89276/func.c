/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89276
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
    var_18 |= ((/* implicit */signed char) 2147483648U);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            {
                var_19 = arr_1 [i_0];
                var_20 |= ((/* implicit */int) min((min((var_4), (var_10))), (4227858432U)));
                var_21 = 4227858432U;
                arr_6 [6U] [i_0] = ((/* implicit */_Bool) var_8);
                arr_7 [i_0] [i_0] = ((/* implicit */signed char) var_6);
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) var_9);
}
