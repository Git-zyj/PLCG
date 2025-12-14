/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76348
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned char) ((int) var_8));
        var_14 = ((/* implicit */long long int) min(((((_Bool)0) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13658))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_0])))))));
        arr_3 [i_0] = ((/* implicit */long long int) 11619835360418267500ULL);
    }
    for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 4) 
    {
        var_15 = ((/* implicit */long long int) var_7);
        var_16 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1 - 1] [i_1 + 1]))) & (8872427069987834384LL)))) ? (((/* implicit */int) ((((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 1])) < (((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 1]))))) : (((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 1]))));
    }
    var_17 = ((/* implicit */_Bool) var_6);
}
