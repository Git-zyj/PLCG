/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63129
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_1])) / (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned int) var_4)) : (((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_3 [i_0] [i_1] [(unsigned short)2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_6)))))));
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) arr_4 [i_0]);
            }
        } 
    } 
    var_12 ^= var_3;
}
