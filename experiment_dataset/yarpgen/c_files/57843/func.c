/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57843
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
    for (short i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */long long int) ((_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */int) arr_3 [i_0 + 2])) : (((/* implicit */int) var_10))))), (((1LL) * (((/* implicit */long long int) 1681838305)))))));
                var_18 = ((/* implicit */short) -2LL);
            }
        } 
    } 
    var_19 += ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
}
