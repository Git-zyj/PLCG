/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63168
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            {
                arr_4 [i_0] [9U] [i_1] = ((/* implicit */_Bool) (signed char)-22);
                arr_5 [i_1] = ((/* implicit */unsigned long long int) ((unsigned int) max((((/* implicit */long long int) 0U)), (((-1926676585972516966LL) | (((/* implicit */long long int) ((/* implicit */int) var_0))))))));
            }
        } 
    } 
    var_10 = ((/* implicit */unsigned long long int) ((_Bool) 1926676585972516965LL));
}
