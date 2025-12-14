/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76189
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
    var_10 = ((/* implicit */int) (short)32767);
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        arr_2 [i_0 + 3] [i_0] = ((/* implicit */short) ((var_5) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) arr_0 [i_0 + 1]))));
        var_11 = ((/* implicit */unsigned short) var_2);
        var_12 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (2147483647) : (((/* implicit */int) (short)(-32767 - 1)))));
        var_13 *= ((/* implicit */int) ((unsigned char) var_3));
    }
    for (unsigned short i_1 = 2; i_1 < 12; i_1 += 4) 
    {
        arr_7 [i_1 + 2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_1 + 2] [i_1]))));
        arr_8 [i_1] = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) max((arr_5 [i_1 + 2] [i_1]), (arr_5 [i_1] [i_1])))) && (((/* implicit */_Bool) arr_5 [i_1 + 1] [i_1])))));
    }
}
