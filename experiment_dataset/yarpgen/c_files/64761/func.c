/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64761
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
    var_13 ^= ((/* implicit */_Bool) (((((~(((/* implicit */int) var_0)))) + (2147483647))) << (((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) /* same iter space */
    {
        var_14 ^= ((/* implicit */_Bool) (~(((/* implicit */int) var_4))));
        var_15 ^= ((/* implicit */_Bool) ((((/* implicit */int) var_3)) * ((~(((/* implicit */int) (_Bool)1))))));
    }
    for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) /* same iter space */
    {
        arr_4 [(_Bool)1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((/* implicit */int) arr_1 [i_1])) : (((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) arr_1 [i_1]))))))) ? (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_2 [i_1]))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) var_7)))))))));
        var_16 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) >= (((/* implicit */int) var_8))));
        var_17 += ((/* implicit */unsigned short) (~(((/* implicit */int) min(((_Bool)1), ((_Bool)1))))));
        arr_5 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (signed char)11)) : (max((((/* implicit */int) (_Bool)0)), (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_10))))))));
        arr_6 [(_Bool)1] [(_Bool)1] = ((/* implicit */_Bool) var_12);
    }
    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) var_0))));
    var_19 = ((/* implicit */unsigned short) ((_Bool) var_6));
}
