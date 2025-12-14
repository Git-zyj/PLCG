/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93900
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
    var_11 = ((/* implicit */unsigned int) max(((unsigned char)129), (((/* implicit */unsigned char) (_Bool)1))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */int) 2073263013U);
                var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) arr_0 [i_0 + 2]))));
            }
        } 
    } 
    var_14 = ((/* implicit */int) var_8);
}
