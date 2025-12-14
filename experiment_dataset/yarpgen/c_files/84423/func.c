/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84423
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
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) min((((18446744073709551615ULL) | (var_0))), (((/* implicit */unsigned long long int) var_15)))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */short) -913540909);
        var_19 = ((/* implicit */unsigned short) (!(((arr_0 [(signed char)0]) > (arr_0 [i_0 + 1])))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 4) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_2 [i_1 - 1])))) >> (((var_0) - (6819639848523206678ULL)))));
        var_20 *= var_12;
    }
    var_21 = ((/* implicit */unsigned char) (short)12623);
    var_22 = ((/* implicit */short) min((min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) >= (((/* implicit */int) var_1))))), (max((((/* implicit */unsigned long long int) (unsigned short)7242)), (var_13))))), (((/* implicit */unsigned long long int) var_11))));
}
