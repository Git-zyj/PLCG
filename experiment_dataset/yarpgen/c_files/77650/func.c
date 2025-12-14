/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77650
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)251)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_0 [i_0] [i_0])))) : (((1618745678U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1)))))));
        arr_2 [i_0] = ((/* implicit */short) max(((-(((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)59))) : (arr_1 [i_0] [i_0]))))), (((/* implicit */unsigned int) (short)6228))));
    }
    var_15 = ((/* implicit */short) var_10);
    var_16 = (~(min((((/* implicit */long long int) var_10)), (min((var_4), (((/* implicit */long long int) var_2)))))));
    var_17 = ((/* implicit */short) min((((var_1) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_7))))), ((+(var_8)))));
}
