/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77428
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
    var_10 = ((/* implicit */unsigned char) var_8);
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (unsigned int i_1 = 4; i_1 < 14; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_7 [i_0 - 1] [i_1] [i_0 - 2] [i_0 - 1] = ((/* implicit */unsigned short) arr_1 [i_0] [i_0]);
                    var_11 = ((/* implicit */long long int) arr_0 [1U]);
                }
            } 
        } 
    } 
}
