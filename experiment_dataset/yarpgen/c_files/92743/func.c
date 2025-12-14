/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92743
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 18; i_2 += 3) 
            {
                {
                    var_11 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1 + 2] [i_2]))));
                    var_12 = ((/* implicit */unsigned long long int) arr_2 [i_0]);
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) var_0);
}
