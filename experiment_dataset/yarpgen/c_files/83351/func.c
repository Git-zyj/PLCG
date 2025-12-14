/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83351
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
    var_20 = ((/* implicit */long long int) var_14);
    var_21 = var_18;
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_22 = ((/* implicit */unsigned char) (-9223372036854775807LL - 1LL));
        var_23 = var_6;
        var_24 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)57446))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 4) 
    {
        arr_6 [i_1 - 1] [i_1 - 1] |= ((/* implicit */unsigned short) ((arr_2 [i_1 - 1]) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
        var_25 = ((/* implicit */unsigned char) arr_4 [i_1]);
    }
    var_26 = ((/* implicit */unsigned char) (-9223372036854775807LL - 1LL));
}
