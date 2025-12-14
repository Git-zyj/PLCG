/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75812
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned int) var_0);
        var_17 = ((/* implicit */short) arr_2 [i_0]);
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        arr_5 [i_1] [i_1 - 1] = ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) < (arr_4 [i_1] [i_1])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_3 [i_1])) : (var_6)))) ? (((/* implicit */int) ((var_6) > (var_6)))) : (var_6)))));
        arr_6 [i_1 - 1] = ((/* implicit */signed char) ((((min((((/* implicit */int) var_14)), (var_12))) * (((((/* implicit */int) arr_3 [i_1])) & (((/* implicit */int) var_3)))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_1 [i_1])) : (var_15)))))))));
        var_18 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_4)), (var_9)))) && ((!(arr_3 [i_1]))))) ? (((((/* implicit */_Bool) (+(var_0)))) ? (((((/* implicit */int) arr_1 [i_1 - 1])) | (((/* implicit */int) var_3)))) : (var_12))) : (((/* implicit */int) var_4))));
    }
    var_19 -= var_12;
    var_20 = var_12;
}
