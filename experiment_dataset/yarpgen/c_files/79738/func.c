/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79738
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */int) min((((/* implicit */short) (((_Bool)1) || (((/* implicit */_Bool) 2951779124U))))), (min(((short)-32758), (((/* implicit */short) (_Bool)1))))));
                    var_17 = ((/* implicit */signed char) ((var_7) + (((/* implicit */unsigned long long int) -730842803))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) min(((short)-21588), ((short)-22889)));
}
