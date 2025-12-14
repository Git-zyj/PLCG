/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80818
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
    var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) ((unsigned short) var_4)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32768))) : (arr_1 [1LL] [i_0]))))) ? (((/* implicit */int) (((+(3636833509126322362LL))) < (((/* implicit */long long int) 3656440543U))))) : (((/* implicit */int) ((max((arr_0 [i_0]), (arr_0 [2ULL]))) < (arr_0 [i_0])))))))));
        var_13 |= ((/* implicit */unsigned short) arr_1 [i_0] [12ULL]);
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((arr_1 [i_0] [i_0]) < (((/* implicit */unsigned long long int) (-(3636833509126322343LL)))))))) % (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
        var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) -3636833509126322362LL)) : (arr_1 [i_0] [i_0]))) < (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_2)) : (arr_1 [i_0] [5U]))))) ? (((long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (-3636833509126322340LL) : (((/* implicit */long long int) var_6))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((unsigned int) arr_1 [i_0] [i_0]))))))))));
        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */int) ((min((arr_1 [4] [8]), (((/* implicit */unsigned long long int) var_9)))) >= (((/* implicit */unsigned long long int) 35993612646875136LL))))) & (((/* implicit */int) ((unsigned short) ((3788634152U) << (((arr_1 [i_0] [i_0]) - (11740480553839488672ULL))))))))))));
    }
    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) 371992117227481837ULL)) && (((/* implicit */_Bool) var_6))))) < (((((/* implicit */_Bool) max((-2535680057364524613LL), (((/* implicit */long long int) var_6))))) ? (((/* implicit */int) (unsigned char)15)) : ((((-2147483647 - 1)) ^ (((/* implicit */int) (unsigned short)63)))))))))));
    var_18 = ((/* implicit */unsigned char) ((var_6) != (((/* implicit */unsigned int) 1291751335))));
}
