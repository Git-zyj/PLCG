/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81509
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
    var_12 = ((/* implicit */short) var_11);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1]))));
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */int) (_Bool)1)) >> (((-9223372036854775792LL) - (-9223372036854775797LL))))), (((/* implicit */int) (unsigned short)16595))))) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) min((((/* implicit */short) (unsigned char)11)), (var_2))))));
                var_15 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-19))))) ? (((/* implicit */long long int) max((-1880664656), (((/* implicit */int) (unsigned short)48940))))) : (arr_1 [i_0]))) / (((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 - 1]))) & (arr_1 [i_0])))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) max((((unsigned int) var_9)), (((/* implicit */unsigned int) var_1))));
}
