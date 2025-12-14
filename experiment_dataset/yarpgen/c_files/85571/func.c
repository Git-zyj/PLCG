/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85571
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
    var_20 = ((/* implicit */short) (unsigned char)39);
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) 2566318620U))));
        var_22 |= ((/* implicit */unsigned char) (_Bool)1);
        var_23 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)62)) / (((/* implicit */int) arr_1 [i_0]))));
    }
}
