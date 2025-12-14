/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69401
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
    for (signed char i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            {
                var_20 = ((_Bool) (!(((/* implicit */_Bool) ((short) arr_0 [i_1 + 4])))));
                var_21 = ((/* implicit */short) ((unsigned long long int) ((int) arr_3 [i_1 - 2])));
                var_22 = ((/* implicit */signed char) ((_Bool) min((arr_2 [i_1 - 1]), (arr_2 [i_1 + 4]))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) var_0);
}
