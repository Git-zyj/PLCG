/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85026
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
    for (int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 21; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */int) max((var_17), ((-(-885099949)))));
                var_18 = ((/* implicit */short) arr_4 [i_1]);
            }
        } 
    } 
    var_19 = (-(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)12109)) & (((/* implicit */int) (unsigned short)65528))))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (min((var_9), (((/* implicit */long long int) 3445211013U)))))));
}
