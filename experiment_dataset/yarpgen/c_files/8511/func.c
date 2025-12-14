/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8511
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
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)540))))) ? (min((629001201), (((/* implicit */int) (unsigned short)58314)))) : (-629001198)))) ? (((/* implicit */long long int) ((var_12) - (((/* implicit */int) var_0))))) : (var_1)));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = arr_0 [i_0] [i_0];
        var_15 ^= ((/* implicit */unsigned int) arr_0 [i_0] [i_0]);
        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) min((17607846631793324926ULL), (((/* implicit */unsigned long long int) (unsigned char)162))))) ? (3724439744U) : (((/* implicit */unsigned int) arr_0 [i_0] [i_0]))));
    }
    for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        arr_5 [i_1] &= ((/* implicit */long long int) arr_4 [i_1] [i_1]);
        arr_6 [1U] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) min((((/* implicit */short) ((signed char) arr_4 [i_1] [i_1]))), ((short)566)))), ((unsigned short)65080)));
    }
}
