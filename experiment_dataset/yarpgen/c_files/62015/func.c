/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62015
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
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */int) arr_2 [i_0]);
                var_10 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_5 [i_1]) : (arr_5 [i_0]))) - (min((arr_5 [i_0]), (arr_5 [i_0])))));
            }
        } 
    } 
    var_11 = ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (var_3)))) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -4850030392276582248LL)) && (((/* implicit */_Bool) var_3)))))))), (var_9)));
}
