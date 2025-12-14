/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7275
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */signed char) ((unsigned int) ((signed char) arr_2 [i_0] [i_0])));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) var_5);
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 11; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) arr_9 [i_1]);
                    arr_10 [i_0] [i_1] [i_1] = ((/* implicit */long long int) arr_6 [i_1 + 2] [i_2]);
                    arr_11 [i_1] = ((/* implicit */_Bool) min((((unsigned long long int) arr_8 [i_2 + 3] [i_2 + 3] [i_1] [i_2])), (((/* implicit */unsigned long long int) var_0))));
                    arr_12 [i_1] [i_1 - 1] = ((/* implicit */signed char) arr_5 [i_0] [i_1] [i_0]);
                }
            } 
        } 
    }
    var_17 = ((/* implicit */unsigned int) var_0);
}
