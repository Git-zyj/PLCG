/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70006
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
    var_15 += ((/* implicit */unsigned long long int) ((unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3210905350230252004LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_4)))))));
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        var_16 = ((/* implicit */short) arr_0 [i_0 + 1]);
        var_17 = ((/* implicit */unsigned long long int) ((int) max((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) arr_1 [i_0 - 1] [i_0 - 2])) : (arr_0 [i_0 + 2]))), (((/* implicit */long long int) ((unsigned int) arr_1 [i_0] [i_0]))))));
        var_18 = ((/* implicit */signed char) ((((((/* implicit */int) var_12)) < (((/* implicit */int) (signed char)62)))) ? (arr_1 [i_0 + 3] [i_0 + 1]) : (((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */int) var_3)) : (arr_1 [i_0 + 2] [i_0 + 1])))));
    }
    var_19 = ((/* implicit */unsigned long long int) var_12);
    var_20 = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) ((var_13) << (((((/* implicit */int) var_12)) + (140)))))) ? (max((((/* implicit */unsigned long long int) var_3)), (9061230014391095529ULL))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_13))))));
    var_21 = ((/* implicit */unsigned char) var_8);
}
