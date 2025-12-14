/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9115
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
    var_19 = ((/* implicit */unsigned short) var_13);
    var_20 = ((/* implicit */int) ((unsigned char) ((int) ((((/* implicit */_Bool) (unsigned char)74)) ? (((/* implicit */int) (unsigned char)74)) : (((/* implicit */int) (unsigned char)87))))));
    var_21 = ((/* implicit */long long int) (unsigned char)169);
    /* LoopSeq 2 */
    for (int i_0 = 4; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((unsigned char) ((((int) 3450255626U)) & (((/* implicit */int) (unsigned char)173)))));
        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) min((min((((/* implicit */int) ((var_13) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))), (((int) arr_1 [(unsigned char)6])))), (((/* implicit */int) min((((/* implicit */unsigned short) ((short) var_10))), (((unsigned short) var_16))))))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 1; i_1 < 21; i_1 += 3) 
    {
        var_23 = ((/* implicit */unsigned int) ((((((var_12) + (9223372036854775807LL))) >> (((((/* implicit */int) (signed char)127)) - (84))))) / ((~(9223372036854775807LL)))));
        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1 - 1])) && (((/* implicit */_Bool) var_4)))))) >= (((unsigned long long int) 12145163547112928084ULL)))))));
    }
}
