/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79113
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
    var_16 = var_9;
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 20; i_1 += 3) 
        {
            for (unsigned short i_2 = 3; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_8 [i_1] [14ULL] [i_1] [i_2 - 3] = ((/* implicit */short) (unsigned char)3);
                    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) max((33423360U), (33423360U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (1708443617689628898ULL)));
                }
            } 
        } 
    } 
}
