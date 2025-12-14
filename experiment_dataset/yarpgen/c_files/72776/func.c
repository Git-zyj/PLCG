/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72776
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        arr_2 [(short)19] [18] = ((/* implicit */unsigned int) 13261560738670691237ULL);
        var_14 = ((/* implicit */_Bool) arr_1 [i_0]);
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 19; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) (-(arr_5 [i_2 + 3] [i_1 + 1])));
                    arr_7 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_0 + 2] [i_0 + 2] [i_1 + 1])) ? (((/* implicit */unsigned long long int) arr_3 [i_0 + 2] [i_0 - 2] [i_1 + 1])) : (arr_5 [i_0 - 3] [i_0 - 3])));
                }
            } 
        } 
    }
    for (int i_3 = 2; i_3 < 8; i_3 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (~(var_12))))))));
        arr_10 [i_3] = ((/* implicit */int) 13261560738670691237ULL);
    }
    var_17 = ((/* implicit */short) min((((((/* implicit */unsigned int) (~(((/* implicit */int) var_9))))) | (var_6))), (((/* implicit */unsigned int) 0))));
}
