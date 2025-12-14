/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98810
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
    for (unsigned char i_0 = 4; i_0 < 8; i_0 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned short) arr_1 [i_0 + 1] [i_0 + 1]);
        var_17 ^= ((/* implicit */unsigned short) ((((/* implicit */int) (((~(1350535005))) < (((/* implicit */int) arr_1 [i_0 - 4] [9ULL]))))) - (((/* implicit */int) var_3))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 4; i_1 < 8; i_1 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_11))) | (arr_2 [i_1 + 2]))))));
        var_19 &= ((long long int) ((((/* implicit */_Bool) var_15)) ? (arr_2 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
    }
    var_20 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) & (var_12)));
}
