/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6241
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
    var_20 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (5443864047257749822LL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) && (((/* implicit */_Bool) (signed char)(-127 - 1)))))) : (var_15)));
    var_21 = ((/* implicit */short) (signed char)121);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        var_22 = ((/* implicit */_Bool) arr_1 [i_0 + 1]);
        var_23 = ((/* implicit */unsigned char) arr_1 [i_0]);
        var_24 = ((/* implicit */_Bool) min((((/* implicit */int) max((arr_0 [i_0 + 1]), (((/* implicit */short) (_Bool)1))))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_1 [i_0 - 2])) : (((/* implicit */int) arr_1 [i_0]))))));
        var_25 *= ((/* implicit */signed char) 31LL);
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        arr_4 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)2447))) * (530162878U)));
        arr_5 [i_1] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_1])))));
        arr_6 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 2126959284)) && (((/* implicit */_Bool) 4294967273U))));
    }
}
