/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58003
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
    var_18 = ((/* implicit */_Bool) var_0);
    /* LoopNest 2 */
    for (short i_0 = 4; i_0 < 9; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */long long int) ((int) ((unsigned short) arr_5 [i_0 - 1] [i_0 + 4])));
                var_19 *= max(((+(((arr_1 [7LL]) / (arr_3 [i_0]))))), (((((((/* implicit */_Bool) arr_5 [(short)1] [(short)1])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_0])))) / ((+(arr_1 [i_0]))))));
            }
        } 
    } 
}
