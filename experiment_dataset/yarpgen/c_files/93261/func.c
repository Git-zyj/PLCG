/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93261
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                arr_7 [i_0] = ((/* implicit */long long int) max(((short)22053), (((/* implicit */short) (_Bool)1))));
                var_11 ^= ((/* implicit */long long int) ((763322510U) != (((/* implicit */unsigned int) ((/* implicit */int) (short)-17023)))));
                var_12 ^= (!(((/* implicit */_Bool) arr_1 [i_0] [i_1])));
            }
        } 
    } 
    var_13 ^= ((/* implicit */unsigned long long int) var_5);
    var_14 = ((/* implicit */unsigned short) var_0);
}
