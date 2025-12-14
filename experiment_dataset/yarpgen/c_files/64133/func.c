/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64133
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) (+(arr_2 [i_0])));
        var_17 = (-(((/* implicit */int) var_14)));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_18 += ((/* implicit */short) ((((/* implicit */_Bool) 1LL)) && ((_Bool)0)));
        arr_7 [i_1] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (2204322395384534536LL)));
    }
    var_19 &= ((/* implicit */signed char) ((((/* implicit */_Bool) max((max((var_7), (((/* implicit */unsigned int) var_0)))), (((unsigned int) var_9))))) ? (((/* implicit */long long int) (((_Bool)1) ? ((~(((/* implicit */int) (_Bool)1)))) : (((int) (_Bool)1))))) : (((var_3) + (((/* implicit */long long int) ((/* implicit */int) var_16)))))));
    var_20 = ((/* implicit */unsigned int) ((((min((((/* implicit */long long int) var_8)), ((-(var_13))))) + (9223372036854775807LL))) >> (((((unsigned int) (+(((/* implicit */int) var_6))))) - (7335U)))));
    var_21 = ((/* implicit */short) var_5);
}
