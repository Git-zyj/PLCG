/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99902
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
    var_15 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_2 [4U] = ((/* implicit */short) ((unsigned char) max((((((/* implicit */_Bool) (signed char)26)) ? (((/* implicit */int) (signed char)26)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */int) (signed char)-27)) >= (((/* implicit */int) (signed char)-27))))))));
        var_16 = ((/* implicit */short) arr_0 [i_0]);
        var_17 = ((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) arr_1 [(short)5])), (arr_0 [i_0]))) & (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) -1)) || (((/* implicit */_Bool) (short)-22240)))) && ((!(((/* implicit */_Bool) (unsigned char)232))))))))));
        var_18 = ((/* implicit */long long int) min((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) == (var_4))) ? ((-(504ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_3))) ^ (var_1)))) ? (((((((/* implicit */int) var_3)) + (2147483647))) << (((((/* implicit */int) var_7)) - (145))))) : (((/* implicit */int) var_3)))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)-7796)) & (((/* implicit */int) (short)22239))))) : (((((/* implicit */_Bool) arr_5 [1LL])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (443642125U))))))));
        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_4 [i_1] [i_1]))))) ? (((/* implicit */unsigned int) ((((((/* implicit */int) var_3)) + (2147483647))) >> (((var_0) + (347420734)))))) : (((unsigned int) arr_5 [i_1]))));
    }
}
