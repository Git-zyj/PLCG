/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68430
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
    var_19 = ((/* implicit */long long int) var_18);
    var_20 = var_15;
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned char i_1 = 4; i_1 < 11; i_1 += 4) 
        {
            {
                arr_6 [i_0] |= ((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)-81)) + (2147483647))) >> (((((arr_4 [i_0] [i_0] [i_0]) - (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))) + (4980870085985236056LL)))));
                var_21 = ((/* implicit */short) 173904338);
                arr_7 [i_0] [i_1] [i_0] = ((/* implicit */int) arr_5 [i_0] [i_0]);
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) var_9);
}
