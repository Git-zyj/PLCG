/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74667
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
    var_14 = ((/* implicit */_Bool) var_0);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned char) (-(max((arr_0 [i_0 + 1]), (arr_0 [i_0 + 1])))));
        var_16 &= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_3 [i_0 - 2] [i_0 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_3 [i_0 + 2] [i_0 + 2]))) << (((((((/* implicit */long long int) ((var_8) >> (((arr_1 [i_0 - 2]) - (17301965131540509352ULL)))))) ^ (arr_0 [i_0 + 2]))) - (8018270127118004444LL)))));
    }
}
