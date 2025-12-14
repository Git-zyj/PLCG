/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74084
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
    for (int i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            {
                arr_5 [i_0 + 3] [i_1] = ((/* implicit */signed char) arr_0 [i_0 - 1]);
                var_12 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) var_9))))) ? ((-(var_8))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)241)))))));
            }
        } 
    } 
    var_13 = ((/* implicit */short) -355067632016587186LL);
}
