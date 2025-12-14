/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95524
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
    var_18 = ((/* implicit */unsigned char) max(((-((~(((/* implicit */int) (unsigned char)49)))))), (((/* implicit */int) (unsigned char)140))));
    var_19 = (unsigned short)11053;
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 14; i_0 += 2) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */short) var_0);
        var_20 ^= ((/* implicit */unsigned int) ((var_14) <= (((((/* implicit */long long int) ((/* implicit */int) var_16))) | (var_7)))));
        arr_5 [i_0] = ((/* implicit */_Bool) (-(((((/* implicit */int) (unsigned short)54483)) - (((/* implicit */int) (short)19919))))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 14; i_1 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 131163502U)) % (var_11)));
        var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) var_9))));
        var_23 *= ((/* implicit */short) (+((-9223372036854775807LL - 1LL))));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_24 = ((/* implicit */unsigned long long int) var_10);
        arr_12 [i_2] [(signed char)6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)-46)) : (((/* implicit */int) var_17))));
        var_25 ^= ((/* implicit */_Bool) var_15);
    }
    var_26 = ((/* implicit */int) var_3);
}
