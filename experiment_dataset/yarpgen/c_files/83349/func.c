/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83349
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        var_19 = (~((+((~(((/* implicit */int) arr_0 [i_0])))))));
        arr_2 [0ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-11280))))) ? (((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? ((+(((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_3)), (var_12)))))) : (((((/* implicit */_Bool) arr_0 [5ULL])) ? (((arr_1 [i_0 + 1]) + (var_0))) : (((/* implicit */int) var_11))))));
        arr_3 [(short)10] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? ((+(arr_1 [i_0 - 1]))) : (((/* implicit */int) var_5))));
        arr_4 [i_0] = ((/* implicit */short) ((var_1) - (((/* implicit */unsigned int) ((/* implicit */int) (((~(arr_1 [i_0 + 1]))) <= (((((/* implicit */int) (short)27181)) * (((/* implicit */int) (short)-32751))))))))));
        var_20 = ((/* implicit */unsigned short) max((min((arr_1 [i_0 + 1]), (arr_1 [i_0 - 2]))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 - 1])))))));
    }
    var_21 -= ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_3)), (var_16)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : ((((!(((/* implicit */_Bool) var_12)))) ? (min((7605380130851208895LL), (((/* implicit */long long int) var_3)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5)))))))));
}
