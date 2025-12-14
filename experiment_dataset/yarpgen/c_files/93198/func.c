/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93198
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
    var_17 = ((/* implicit */long long int) ((((/* implicit */int) var_4)) <= ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))));
    var_18 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)0))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) var_13);
        arr_4 [i_0] = (~(((((/* implicit */_Bool) min((((/* implicit */short) (signed char)7)), (arr_0 [i_0] [i_0])))) ? (arr_1 [i_0]) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65514))))))));
        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) (~((+(var_2)))))), (((unsigned long long int) arr_0 [i_0] [i_0])))))));
        arr_5 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_1 [i_0]), (arr_1 [i_0])))) ? (((((/* implicit */_Bool) var_14)) ? (var_13) : (var_0))) : (((/* implicit */unsigned long long int) arr_1 [i_0])))))));
    }
}
