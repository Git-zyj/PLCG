/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96268
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
    var_19 = ((/* implicit */long long int) ((((/* implicit */int) var_17)) + ((-(((/* implicit */int) (!(((/* implicit */_Bool) 476222901144376456LL)))))))));
    var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : ((-(var_14))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */_Bool) arr_2 [i_0]);
        arr_4 [i_0] = ((/* implicit */_Bool) ((var_5) >> (((((/* implicit */int) ((signed char) var_15))) + (61)))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) max((max((arr_5 [i_1] [i_1]), (var_12))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (-3530724551359344330LL) : (((/* implicit */long long int) arr_0 [i_1] [i_1]))))) ? (((((/* implicit */int) arr_6 [i_1] [i_1])) << (((/* implicit */int) var_10)))) : (((/* implicit */int) arr_6 [i_1] [i_1])))))));
        arr_8 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) ((long long int) -1627362224731165615LL)))) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (var_2) : (((/* implicit */int) var_18))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) | (arr_5 [i_1] [i_1])))) : (((var_14) & (((/* implicit */unsigned long long int) var_12))))))));
    }
}
