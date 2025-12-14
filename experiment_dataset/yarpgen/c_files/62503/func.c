/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62503
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
    var_16 -= ((/* implicit */unsigned int) var_2);
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        var_17 &= ((/* implicit */unsigned int) arr_2 [i_0 + 1]);
        var_18 -= ((/* implicit */short) max((min((max((((/* implicit */unsigned int) var_5)), (arr_0 [i_0]))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_4)), (var_15)))))), (((/* implicit */unsigned int) max((((/* implicit */int) ((short) 2147483648U))), (((((/* implicit */int) arr_1 [(unsigned short)7] [i_0])) & (((/* implicit */int) arr_1 [i_0] [i_0])))))))));
        var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) < (((((/* implicit */_Bool) arr_0 [i_0])) ? (min((((/* implicit */unsigned int) var_11)), (arr_0 [i_0 + 1]))) : (arr_0 [i_0 + 2])))));
    }
}
