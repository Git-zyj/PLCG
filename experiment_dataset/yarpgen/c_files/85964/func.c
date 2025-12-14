/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85964
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)127)) + (((/* implicit */int) var_14))))) ? (((((/* implicit */int) (signed char)118)) - (var_1))) : (((/* implicit */int) var_10))))) ? (((((((/* implicit */int) var_10)) + (((/* implicit */int) var_9)))) - (((/* implicit */int) var_8)))) : (((((/* implicit */int) ((short) var_9))) - (((/* implicit */int) var_9))))));
    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (!(((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_1)) ^ (451936338U)))) || (((/* implicit */_Bool) (unsigned short)18818)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 21; i_0 += 3) /* same iter space */
    {
        var_22 |= var_10;
        arr_4 [6ULL] &= ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (17248920567214078734ULL) : (var_11)));
    }
    for (short i_1 = 1; i_1 < 21; i_1 += 3) /* same iter space */
    {
        arr_7 [i_1] [i_1 + 1] = ((/* implicit */_Bool) ((signed char) (+(((var_16) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)46734))))))));
        arr_8 [i_1] = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? (((/* implicit */int) (unsigned short)20649)) : (((/* implicit */int) arr_0 [i_1 + 2])))));
        var_23 -= ((/* implicit */signed char) ((((/* implicit */int) (signed char)-98)) / (((/* implicit */int) (unsigned short)11288))));
        arr_9 [i_1 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((31U) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)6)))))) % ((+(((/* implicit */int) arr_1 [i_1] [i_1 - 1]))))));
    }
    var_24 = ((unsigned short) (-2147483647 - 1));
}
