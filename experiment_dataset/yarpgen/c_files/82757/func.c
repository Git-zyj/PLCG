/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82757
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 8; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_9 [i_2] [i_2] = ((/* implicit */signed char) (~(arr_6 [i_2])));
                    var_20 = ((/* implicit */long long int) var_19);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) var_18);
    var_22 = ((/* implicit */unsigned char) var_17);
}
