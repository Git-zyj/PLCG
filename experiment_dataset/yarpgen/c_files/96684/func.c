/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96684
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
    var_10 = ((/* implicit */int) var_1);
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        var_11 = ((/* implicit */long long int) arr_0 [i_0]);
        var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) ((((/* implicit */_Bool) 33554431ULL)) && (((/* implicit */_Bool) 3034055345197033097ULL)))))));
        var_13 = arr_2 [i_0];
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        var_14 = ((/* implicit */signed char) arr_4 [i_1]);
        var_15 = ((/* implicit */_Bool) var_7);
        var_16 |= ((/* implicit */int) arr_4 [6ULL]);
        var_17 = ((((((/* implicit */_Bool) 1048575)) ? (((/* implicit */unsigned long long int) 2062326646)) : (9007199246352384ULL))) * (((/* implicit */unsigned long long int) 451076115)));
    }
}
