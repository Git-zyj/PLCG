/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56755
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
    var_19 = ((/* implicit */signed char) var_15);
    var_20 = ((/* implicit */short) var_12);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_2 [i_0] [i_0]))))) ? (arr_2 [i_0] [i_0]) : (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned int) max((-2147483644), (((/* implicit */int) arr_1 [i_0]))))) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (var_14)))))));
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) var_4))));
    }
    for (unsigned short i_1 = 2; i_1 < 15; i_1 += 2) 
    {
        var_22 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_11)), (1379856214731230761LL)));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) arr_5 [i_1]);
        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1379856214731230761LL)) ? (1357312703U) : (((/* implicit */unsigned int) (-2147483647 - 1)))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_4)) + (((/* implicit */int) arr_6 [i_1] [i_1]))))) ? (((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) var_6)) : (var_15))) : (((/* implicit */unsigned long long int) min((var_11), (((/* implicit */int) var_12))))))))))));
    }
}
