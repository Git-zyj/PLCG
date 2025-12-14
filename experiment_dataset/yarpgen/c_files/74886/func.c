/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74886
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
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_13), (((/* implicit */long long int) (short)0))))) ? (((((/* implicit */_Bool) var_5)) ? (11222687091512721660ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))) : (var_5)))) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_17 = ((/* implicit */long long int) (~(max((arr_1 [i_0 + 1] [i_0 + 1]), (arr_1 [i_0 + 1] [i_0])))));
        var_18 *= ((/* implicit */unsigned short) max((((arr_1 [4LL] [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) arr_1 [i_0] [i_0])) > (var_6))))))), (((/* implicit */unsigned int) arr_0 [i_0]))));
        arr_2 [i_0] = ((/* implicit */short) (-(arr_1 [i_0] [i_0])));
    }
    var_19 = ((/* implicit */_Bool) (((+(((/* implicit */int) (unsigned short)65533)))) >> (((max((((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_14))), (((var_9) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (var_1))))) - (8552238878153674160LL)))));
}
