/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94756
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 9; i_2 += 2) 
            {
                {
                    arr_9 [i_0] = ((/* implicit */signed char) arr_8 [i_0 - 1] [i_1 - 1]);
                    arr_10 [i_1] = (!(((/* implicit */_Bool) arr_7 [i_1])));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */long long int) var_7);
}
