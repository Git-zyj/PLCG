/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80595
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 2; i_0 < 23; i_0 += 3) /* same iter space */
    {
        var_13 -= ((/* implicit */unsigned char) (-(-3724760705293043082LL)));
        var_14 *= ((/* implicit */signed char) 3724760705293043081LL);
    }
    /* vectorizable */
    for (unsigned char i_1 = 2; i_1 < 23; i_1 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned char) ((-1) & (((/* implicit */int) (short)-9452))));
        var_16 = ((/* implicit */signed char) (unsigned short)18486);
    }
    for (unsigned char i_2 = 2; i_2 < 23; i_2 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */_Bool) ((signed char) ((((/* implicit */long long int) 3997324608U)) <= (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (short)11203)))))));
        arr_9 [i_2] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) != (var_4))))));
    }
    var_18 -= ((/* implicit */_Bool) ((3724760705293043081LL) / (((/* implicit */long long int) (-(((/* implicit */int) var_6)))))));
}
