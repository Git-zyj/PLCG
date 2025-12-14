/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8090
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
    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) var_13))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)6))))) ? (((long long int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_5))))) : (((/* implicit */long long int) arr_1 [i_0])));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) var_5);
    }
    for (short i_1 = 0; i_1 < 23; i_1 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) (unsigned short)34593))));
        var_17 *= ((/* implicit */unsigned short) max((((((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) var_6)) : (var_3))) % (((/* implicit */int) var_4)))), ((-(((/* implicit */int) var_6))))));
    }
}
