/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71380
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
    var_17 = ((/* implicit */signed char) var_3);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] &= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5))))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)63))) : (arr_0 [i_0])))));
        var_18 = (+(((/* implicit */int) (signed char)-71)));
    }
    for (signed char i_1 = 0; i_1 < 23; i_1 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned char) min(((~(((/* implicit */int) (signed char)-86)))), (((/* implicit */int) max(((signed char)-74), (((/* implicit */signed char) (_Bool)1)))))));
        var_20 *= ((/* implicit */_Bool) var_11);
        var_21 *= ((/* implicit */long long int) min((((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_3 [i_1]) == (((/* implicit */unsigned long long int) -1915307554)))))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_5 [i_1])), (var_14))))));
    }
    var_22 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned long long int) (short)1033))))) ? (((/* implicit */int) (unsigned char)253)) : (((((/* implicit */int) (unsigned char)169)) >> (0LL)))))));
    var_23 = ((/* implicit */long long int) var_7);
    var_24 = ((/* implicit */long long int) (_Bool)0);
}
