/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69860
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
    var_12 = ((/* implicit */unsigned long long int) var_1);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) arr_2 [2ULL])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (-468790168909487067LL)))))));
                    arr_11 [(signed char)14] [16] [(signed char)2] |= (short)14932;
                    var_14 += ((/* implicit */int) var_7);
                }
            } 
        } 
    } 
}
