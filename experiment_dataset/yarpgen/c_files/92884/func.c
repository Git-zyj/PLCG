/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92884
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
    var_14 = ((/* implicit */short) var_12);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned long long int) var_0);
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (short i_2 = 2; i_2 < 14; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((unsigned int) arr_2 [i_0 + 2])))));
                    arr_6 [i_0] [i_0] [i_1] [i_2 + 1] &= ((/* implicit */signed char) 66584576);
                    var_17 = ((/* implicit */unsigned long long int) ((signed char) 3886686497U));
                }
            } 
        } 
    }
    var_18 = var_5;
}
