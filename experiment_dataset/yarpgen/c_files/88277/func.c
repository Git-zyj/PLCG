/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88277
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 24; i_1 += 3) 
        {
            {
                arr_4 [13] = ((/* implicit */short) ((max((((/* implicit */int) var_12)), (((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2)))))) <= (((/* implicit */int) var_1))));
                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-11446)) ? (((/* implicit */int) (short)11455)) : (((/* implicit */int) (short)13132)))))));
                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) var_5))));
                var_19 += ((/* implicit */unsigned int) ((var_7) < (((((/* implicit */_Bool) arr_1 [i_1 + 1] [i_1 + 1])) ? (((/* implicit */long long int) arr_0 [i_1 + 1] [i_1 + 1])) : (var_7)))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) var_6);
}
