/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76745
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
    for (short i_0 = 3; i_0 < 24; i_0 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */_Bool) ((var_9) ? (((int) max((var_11), (((/* implicit */unsigned char) (_Bool)1))))) : (((((/* implicit */_Bool) 5501688364596772378LL)) ? (-1045063379) : (((/* implicit */int) (short)19428))))));
        arr_4 [i_0 - 2] [i_0 - 2] = ((/* implicit */short) ((long long int) ((_Bool) var_17)));
        var_19 = ((/* implicit */_Bool) var_6);
    }
    /* vectorizable */
    for (short i_1 = 3; i_1 < 24; i_1 += 1) /* same iter space */
    {
        var_20 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_8))));
        arr_8 [i_1 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (short)-19412)))))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1))));
    }
    var_21 = ((((/* implicit */_Bool) ((unsigned char) var_9))) ? (((((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)0)), (var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) (short)4094))) : (((long long int) var_5)))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_17)))));
}
