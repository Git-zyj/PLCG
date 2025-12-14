/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57082
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
    var_11 = ((/* implicit */int) max((7U), (((/* implicit */unsigned int) 2147483646))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_7 [3U] [1] [(short)18] [(short)18] = ((/* implicit */unsigned int) (+(((((/* implicit */int) var_9)) * (1448119225)))));
                    var_12 = ((short) (!(((/* implicit */_Bool) 1226898714U))));
                    var_13 = arr_5 [i_0];
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned int) (~((~(((/* implicit */int) var_2))))));
}
