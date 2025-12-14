/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93456
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
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */int) ((unsigned short) (~((~(((/* implicit */int) var_5)))))));
                    var_16 = ((/* implicit */long long int) arr_4 [i_1] [i_1]);
                }
            } 
        } 
    } 
    var_17 -= ((/* implicit */int) ((short) var_5));
}
