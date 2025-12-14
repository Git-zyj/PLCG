/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56193
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
    var_15 &= ((/* implicit */unsigned char) (_Bool)1);
    var_16 |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                arr_7 [i_1] = ((/* implicit */unsigned long long int) ((short) 6488623608685610189LL));
                var_17 &= ((/* implicit */unsigned short) (short)32767);
            }
        } 
    } 
}
