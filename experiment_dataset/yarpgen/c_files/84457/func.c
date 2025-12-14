/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84457
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                arr_7 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-((~(((/* implicit */int) arr_3 [(short)1]))))))) ? (((arr_4 [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)3))) : (((((/* implicit */_Bool) (short)-1948)) ? (((/* implicit */long long int) arr_1 [i_0])) : (268435455LL))))) : (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))));
                arr_8 [(short)4] [(short)4] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (short)-29829)) : (((/* implicit */int) arr_3 [i_1]))))), ((-(arr_1 [i_0])))));
            }
        } 
    } 
    var_10 ^= ((/* implicit */long long int) max((((/* implicit */unsigned int) (_Bool)1)), (612796902U)));
    var_11 = ((/* implicit */short) (-(max((((/* implicit */long long int) (_Bool)1)), (((((/* implicit */_Bool) 402653184U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_1)))))));
}
