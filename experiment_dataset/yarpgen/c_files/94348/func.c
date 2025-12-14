/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94348
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
    for (long long int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) arr_1 [i_0 + 1]))))) ^ ((~(arr_0 [i_0] [i_0 + 1])))));
                arr_4 [i_0 + 1] [i_0 + 1] = ((/* implicit */short) arr_2 [i_0] [i_0] [i_0 + 1]);
            }
        } 
    } 
    var_17 = min((var_3), (min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8)))), (((/* implicit */int) var_14)))));
}
