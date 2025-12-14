/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74618
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
    var_20 = ((/* implicit */unsigned short) var_11);
    var_21 = (~(var_18));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        arr_2 [i_0] = var_18;
        var_22 *= ((((/* implicit */_Bool) (~(min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_12)))) ? (arr_0 [i_0] [i_0]) : (((((/* implicit */_Bool) var_6)) ? (var_14) : (((/* implicit */unsigned int) arr_1 [i_0])))))) : (((unsigned int) arr_0 [i_0] [i_0])));
    }
    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) | (((/* implicit */int) ((unsigned short) (~(-25LL)))))));
}
