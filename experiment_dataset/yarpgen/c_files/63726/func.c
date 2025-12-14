/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63726
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
    var_10 = ((long long int) var_2);
    var_11 = ((/* implicit */short) var_5);
    var_12 = var_5;
    var_13 ^= ((/* implicit */long long int) var_4);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((var_0) - (var_8))), (arr_3 [i_0] [i_0]))))));
                var_15 = min((((/* implicit */long long int) (short)18024)), (-8446057000173450684LL));
                var_16 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [(short)11] [i_0]))) / (-2800190114119754888LL)));
                var_17 ^= arr_6 [i_0] [i_0];
                var_18 = ((var_0) >> (((((((/* implicit */_Bool) (~(var_6)))) ? (min((((/* implicit */long long int) var_4)), (var_7))) : ((~(var_2))))) + (8497706288430145226LL))));
            }
        } 
    } 
}
