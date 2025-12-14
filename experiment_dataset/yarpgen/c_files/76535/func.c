/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76535
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
    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) var_11))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_4 [i_0] &= ((/* implicit */signed char) (-(((/* implicit */int) var_17))));
        var_19 ^= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((arr_3 [i_0] [i_0]) + (2147483647))) >> (((arr_3 [i_0] [i_0]) + (1373499897)))))) <= ((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (-8114372617465833692LL)))));
    }
    for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        arr_8 [i_1] = 18446744073709551602ULL;
        var_20 = ((/* implicit */int) ((((/* implicit */int) arr_7 [i_1])) >= (((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) (unsigned short)27750)) : (((/* implicit */int) arr_6 [i_1]))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 3) 
    {
        arr_11 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2])) ? (((((/* implicit */_Bool) -8114372617465833692LL)) ? (arr_9 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) arr_10 [i_2]))))) ? (var_2) : (((((/* implicit */_Bool) ((((/* implicit */long long int) var_0)) / (4948361195544076538LL)))) ? (-4332174305533440264LL) : (min((((/* implicit */long long int) (unsigned short)32402)), (arr_10 [i_2])))))));
        var_21 ^= ((/* implicit */unsigned long long int) var_8);
    }
    var_22 -= ((/* implicit */unsigned short) ((var_14) & (((/* implicit */unsigned int) ((int) var_15)))));
}
