/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93139
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
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 3] [i_0]))) : (var_5)))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) arr_0 [i_0 - 1] [i_0]))))) - (((long long int) (+(((/* implicit */int) var_7)))))));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (-4748347183870647043LL) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)64297))))))) ? (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) var_1)) ? (var_14) : (((/* implicit */int) var_13)))))) : (var_12)));
    }
    for (unsigned char i_1 = 1; i_1 < 17; i_1 += 3) /* same iter space */
    {
        var_16 ^= ((/* implicit */short) var_12);
        arr_9 [i_1] = ((/* implicit */unsigned long long int) arr_3 [i_1]);
    }
    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) var_6))));
    var_18 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_0))));
    var_19 = ((((/* implicit */int) (!(((/* implicit */_Bool) ((var_8) ? (var_10) : (((/* implicit */int) var_4)))))))) - (((((/* implicit */_Bool) (-(var_12)))) ? (min((((/* implicit */int) var_2)), (var_14))) : (var_10))));
    var_20 = ((/* implicit */signed char) (unsigned char)1);
}
