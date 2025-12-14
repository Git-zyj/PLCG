/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74010
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
    var_16 ^= ((/* implicit */unsigned char) var_15);
    var_17 += ((/* implicit */signed char) var_0);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) var_2);
                    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) var_10))));
                    arr_8 [i_0] [i_1] [i_1] = var_0;
                    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) var_13))));
                }
            } 
        } 
    } 
    var_21 |= var_11;
    var_22 = ((/* implicit */short) var_1);
}
