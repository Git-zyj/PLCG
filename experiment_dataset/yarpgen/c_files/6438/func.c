/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6438
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((/* implicit */signed char) (((_Bool)1) ? (2512498898U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                arr_7 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? ((+(((/* implicit */int) var_2)))) : (((/* implicit */int) var_4)))) | (((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) arr_5 [i_0] [i_1])))))));
                var_16 ^= ((/* implicit */_Bool) var_11);
            }
        } 
    } 
    var_17 |= ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_8) : (var_8)))) ? (var_15) : (var_15))) + (2147483647))) << (((var_6) - (2762415466U)))));
}
