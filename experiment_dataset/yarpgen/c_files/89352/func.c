/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89352
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        var_11 ^= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_10)) / (arr_3 [i_0] [i_0]))))));
        var_12 = ((/* implicit */short) var_8);
        var_13 = ((((/* implicit */_Bool) arr_1 [(short)7] [i_0 + 2])) ? ((+(357415532855535994LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
        arr_4 [i_0] = ((/* implicit */_Bool) (unsigned short)29698);
    }
    for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        var_14 -= ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) | (var_1)))) ? (((/* implicit */unsigned long long int) arr_3 [i_1] [i_1])) : (((((/* implicit */_Bool) arr_0 [i_1])) ? (var_9) : (((/* implicit */unsigned long long int) 3442775860U)))))) >> ((((+(((/* implicit */int) arr_6 [7ULL] [i_1])))) - (10510))));
        var_15 = ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) + (((/* implicit */int) arr_2 [i_1]))))) ? (((/* implicit */int) ((signed char) var_0))) : (((/* implicit */int) ((var_9) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1])))))));
        arr_7 [i_1] = ((/* implicit */unsigned int) max((arr_3 [i_1] [i_1]), (max(((+(((/* implicit */int) (short)24585)))), (((/* implicit */int) arr_2 [i_1]))))));
        var_16 = ((/* implicit */short) (-((~(((unsigned long long int) (unsigned short)41358))))));
        var_17 = ((unsigned char) (+((-(((/* implicit */int) arr_0 [i_1]))))));
    }
    for (unsigned char i_2 = 1; i_2 < 20; i_2 += 2) 
    {
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-24585)) ? (-217775487) : (((/* implicit */int) (short)24584))))) ? (((((/* implicit */int) arr_0 [i_2])) & (((/* implicit */int) arr_9 [i_2 - 1])))) : (((/* implicit */int) var_4))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_0 [i_2])), (arr_1 [i_2] [i_2 - 1])))) ? ((-(arr_8 [i_2] [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2]))))))));
        arr_10 [i_2] |= ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_2]))))) : (max((var_9), (((/* implicit */unsigned long long int) var_8)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_2 + 2])) ? (((/* implicit */int) arr_0 [i_2 - 1])) : (((/* implicit */int) arr_0 [i_2 - 1])))))));
    }
    var_19 = ((/* implicit */unsigned char) var_7);
    var_20 = ((/* implicit */short) ((((((/* implicit */_Bool) ((var_2) + (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) : (var_2))) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)76)))));
}
