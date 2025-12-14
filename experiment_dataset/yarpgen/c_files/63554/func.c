/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63554
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
    var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) (+(var_11))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) var_4))));
        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)0)) >> (((((/* implicit */int) arr_0 [10U])) - (14098))))))));
        var_16 = ((/* implicit */long long int) min((var_16), (((((/* implicit */_Bool) 5242081755714189311ULL)) ? (var_10) : (var_11)))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 12; i_2 += 1) 
    {
        var_17 = ((/* implicit */long long int) 5U);
        arr_7 [i_2] [i_2] = (unsigned char)255;
    }
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? ((+(((/* implicit */int) var_7)))) : (((((/* implicit */int) (unsigned short)61949)) << (9U)))))) ? (max((((/* implicit */unsigned long long int) ((unsigned int) var_7))), (((var_5) / (((/* implicit */unsigned long long int) 4294967291U)))))) : (((/* implicit */unsigned long long int) 9223372036854775807LL))));
}
