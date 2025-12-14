/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81063
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
    var_13 = ((/* implicit */unsigned int) var_7);
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_14 *= ((/* implicit */short) 12248965620918613345ULL);
                arr_4 [i_1] [i_1] [(_Bool)1] = ((/* implicit */short) arr_3 [i_0] [i_0]);
            }
        } 
    } 
    var_15 *= ((/* implicit */unsigned int) var_7);
}
