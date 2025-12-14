/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75645
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
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            {
                arr_5 [i_1] [i_0] = ((/* implicit */unsigned long long int) -1911418505);
                var_18 -= arr_2 [i_1];
                arr_6 [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((short) var_10))), (arr_3 [9LL] [9LL] [9LL])));
                arr_7 [i_0] [i_1 - 1] [i_0] = ((/* implicit */unsigned short) (unsigned char)124);
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) var_12);
}
