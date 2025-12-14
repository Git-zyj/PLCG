/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70678
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
    var_15 = ((/* implicit */unsigned int) 8953797226950394354ULL);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)2)) >> (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_0]))))) : (arr_3 [i_0] [i_0] [i_0])))));
                arr_4 [18LL] = ((/* implicit */long long int) (+((-(((/* implicit */int) (unsigned short)31001))))));
                var_17 ^= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-25454)) ? (((/* implicit */int) (unsigned char)232)) : (((/* implicit */int) arr_1 [i_0]))))), (-8062690408437119561LL)));
            }
        } 
    } 
    var_18 ^= ((/* implicit */unsigned long long int) var_11);
}
