/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99631
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) var_15)) <= ((+(((/* implicit */int) arr_2 [i_0]))))));
        var_18 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_2 [(signed char)13])) : (var_1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))) : (((((/* implicit */_Bool) var_15)) ? (2952899876U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [(unsigned short)13] [i_0])) != (((/* implicit */int) arr_1 [i_0] [i_0]))));
        var_19 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0])) ? (1342067422U) : (2952899873U)));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) /* same iter space */
    {
        arr_9 [5ULL] |= ((/* implicit */_Bool) var_8);
        var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [i_1] [i_1]))));
    }
    var_21 = ((/* implicit */unsigned char) var_10);
}
