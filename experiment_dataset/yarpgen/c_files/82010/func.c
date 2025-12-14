/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82010
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            {
                arr_4 [i_1] [(signed char)10] = ((/* implicit */int) var_9);
                arr_5 [i_0] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 981497598700157344LL)), (arr_2 [i_1 - 2] [i_1 + 2] [i_1 - 1]))))));
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned int) var_2);
}
