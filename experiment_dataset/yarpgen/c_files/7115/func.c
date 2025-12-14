/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7115
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) /* same iter space */
    {
        var_20 *= ((/* implicit */unsigned char) arr_1 [i_0]);
        var_21 -= (-(((long long int) arr_2 [i_0])));
    }
    for (signed char i_1 = 0; i_1 < 25; i_1 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */_Bool) arr_4 [i_1]);
        arr_5 [i_1] [i_1] = ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [18]))) : (((((/* implicit */_Bool) -8258546198211259968LL)) ? (-8258546198211259968LL) : (-8258546198211259968LL))));
        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)8330)))))));
    }
    var_24 *= ((/* implicit */short) ((((/* implicit */_Bool) (short)25004)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)57205))) : (-8258546198211259968LL)));
}
