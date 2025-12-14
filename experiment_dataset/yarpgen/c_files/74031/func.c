/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74031
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
    var_15 = var_0;
    var_16 &= ((/* implicit */short) min((((/* implicit */int) var_3)), (var_11)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */int) var_10);
                var_18 = ((/* implicit */_Bool) max((var_18), (arr_3 [i_0])));
                var_19 = ((((/* implicit */_Bool) ((arr_3 [i_0]) ? (arr_5 [i_0]) : (arr_5 [i_0])))) ? (((/* implicit */int) ((arr_0 [i_1]) > (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1])))))) : (arr_5 [i_1]));
            }
        } 
    } 
}
