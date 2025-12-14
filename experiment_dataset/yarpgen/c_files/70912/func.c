/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70912
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
    var_10 = ((/* implicit */_Bool) min((var_10), (((/* implicit */_Bool) ((2582109665313038749ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55283))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */short) max((2582109665313038765ULL), (((/* implicit */unsigned long long int) ((_Bool) 17179869183ULL)))));
                arr_6 [i_0] [(signed char)11] = ((/* implicit */_Bool) ((unsigned short) (unsigned char)56));
                var_12 *= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (short)31457)), (min((arr_4 [i_0 + 1]), (arr_4 [i_0 + 1])))));
                var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) - (arr_2 [i_0 - 2])))))));
                var_14 ^= ((/* implicit */int) (unsigned short)65535);
            }
        } 
    } 
}
