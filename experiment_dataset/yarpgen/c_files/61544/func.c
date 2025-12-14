/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61544
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
    var_13 = ((/* implicit */unsigned short) var_6);
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 8; i_1 += 4) 
        {
            {
                var_14 += var_0;
                var_15 = ((/* implicit */short) arr_3 [i_0] [6LL]);
                var_16 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17820617146917049609ULL)) ? (var_6) : (((/* implicit */long long int) arr_2 [i_0 - 2] [i_1 - 1] [i_1 - 3]))))) ? (max((arr_2 [i_0 - 1] [i_1 - 3] [i_1 + 2]), (643362853U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_2))))));
                var_17 = ((/* implicit */_Bool) max((var_5), (arr_0 [4])));
                arr_4 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 4980283192283363770LL)) ? (((/* implicit */int) (signed char)24)) : (var_8)))))) : (((unsigned long long int) ((((/* implicit */int) (unsigned short)16399)) != (((/* implicit */int) var_5))))));
            }
        } 
    } 
}
