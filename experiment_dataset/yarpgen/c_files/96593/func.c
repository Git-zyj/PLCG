/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96593
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
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 4; i_1 < 17; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [4U] [12U] |= ((/* implicit */_Bool) (+(var_10)));
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */long long int) var_11);
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned char) var_14);
    var_17 = ((/* implicit */long long int) var_0);
}
