/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95781
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
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((((/* implicit */int) var_12)) <= (((/* implicit */int) (unsigned short)0)))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned short) min((((((/* implicit */int) ((_Bool) var_6))) | (((/* implicit */int) var_0)))), (((/* implicit */int) min((((/* implicit */unsigned short) var_4)), (arr_1 [(unsigned short)2]))))));
        var_15 = ((/* implicit */short) max((arr_1 [i_0]), (((/* implicit */unsigned short) ((_Bool) ((unsigned int) var_6))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) /* same iter space */
    {
        arr_5 [(unsigned short)4] = ((/* implicit */signed char) var_10);
        arr_6 [i_1] [i_1] = ((((/* implicit */int) arr_1 [i_1])) > (((/* implicit */int) arr_2 [i_1])));
    }
    var_16 = var_3;
}
