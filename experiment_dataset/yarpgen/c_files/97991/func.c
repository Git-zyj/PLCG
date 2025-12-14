/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97991
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-56)) ? (466032334U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [(short)8])))))) ? (var_4) : (((/* implicit */unsigned long long int) arr_1 [i_0 + 1]))));
        arr_3 [i_0 - 1] &= ((/* implicit */short) ((((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1])) / (((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 1]))));
    }
    var_11 += ((/* implicit */unsigned char) (short)-31811);
    var_12 = ((/* implicit */int) var_4);
    var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) - (var_5))))));
}
