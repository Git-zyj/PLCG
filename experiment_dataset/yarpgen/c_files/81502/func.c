/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81502
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
    for (unsigned char i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        var_11 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_8) == (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))) * (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (3371486376U)))))) ? (((((((/* implicit */int) var_3)) + (2147483647))) << (((max((((/* implicit */unsigned int) arr_1 [i_0 - 3])), (3371486376U))) - (3371486376U))))) : (((2147483647) - ((+(((/* implicit */int) arr_0 [i_0 - 1] [(unsigned short)8]))))))));
        var_12 *= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 + 1])) || (((/* implicit */_Bool) max(((short)1), (arr_0 [i_0] [i_0 - 1])))))))) & (((var_8) >> (((arr_1 [i_0 - 1]) - (1264256250)))))));
        var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((unsigned long long int) (((+(((/* implicit */int) var_5)))) != (arr_1 [i_0])))))));
    }
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) (short)1)) ? (max((1546840931241628051ULL), (((/* implicit */unsigned long long int) (unsigned short)32341)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
}
