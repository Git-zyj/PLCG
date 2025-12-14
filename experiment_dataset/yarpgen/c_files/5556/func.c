/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5556
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
    var_19 = ((/* implicit */_Bool) var_18);
    var_20 = ((/* implicit */long long int) var_15);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) arr_0 [i_0]);
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_21 ^= ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_8)))) : ((+(543606279U)))));
                    var_22 ^= ((/* implicit */short) var_5);
                }
            } 
        } 
    }
}
