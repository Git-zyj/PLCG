/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93021
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
    var_15 = ((/* implicit */unsigned short) var_12);
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) max((var_13), (var_5)))) : (((/* implicit */int) var_0))))) && (((/* implicit */_Bool) 3223980397U))));
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) var_4))) ? (var_10) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (var_9)))) ? (var_1) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (9190882812749710251LL))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */signed char) var_1);
        var_18 ^= ((/* implicit */unsigned short) var_1);
        arr_5 [i_0] = ((/* implicit */_Bool) arr_1 [i_0]);
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((3412161746U) * (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))));
        var_20 = ((/* implicit */unsigned int) ((-6844655778754490768LL) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (arr_7 [i_1] [i_1]))))));
    }
}
