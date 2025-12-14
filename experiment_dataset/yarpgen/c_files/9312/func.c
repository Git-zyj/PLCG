/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9312
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
    for (unsigned char i_0 = 2; i_0 < 22; i_0 += 3) /* same iter space */
    {
        var_20 -= ((/* implicit */_Bool) (~((+(((/* implicit */int) var_8))))));
        var_21 = ((/* implicit */long long int) (signed char)28);
    }
    for (unsigned char i_1 = 2; i_1 < 22; i_1 += 3) /* same iter space */
    {
        var_22 += ((/* implicit */unsigned int) (~(1152921504606846975LL)));
        var_23 = ((/* implicit */unsigned int) (+((+(((/* implicit */int) ((((/* implicit */int) (unsigned short)58018)) < (((/* implicit */int) arr_3 [i_1] [i_1])))))))));
        var_24 ^= ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) max((((/* implicit */int) arr_0 [i_1 + 1] [i_1 + 1])), (((((/* implicit */int) (signed char)-4)) ^ (((/* implicit */int) var_19))))))) : ((~(var_11))));
    }
    var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) var_19))) ? (((/* implicit */unsigned long long int) var_5)) : ((((!(((/* implicit */_Bool) (unsigned short)58018)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_1) >= (((/* implicit */unsigned long long int) 3675964481U)))))) : (var_9)))));
}
