/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73597
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
    var_18 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) >= (var_10)));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) /* same iter space */
    {
        var_19 |= ((/* implicit */_Bool) min(((+(((/* implicit */int) (signed char)114)))), (((/* implicit */int) var_9))));
        var_20 = ((/* implicit */unsigned short) (+(((((/* implicit */int) (signed char)-114)) * (((/* implicit */int) (unsigned short)45068))))));
    }
    for (long long int i_1 = 0; i_1 < 24; i_1 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) max((((/* implicit */unsigned int) (unsigned short)24270)), (1408364965U))))));
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)46)))))) % (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (arr_3 [i_1])))));
        var_23 *= ((/* implicit */short) max(((~(((/* implicit */int) (unsigned char)210)))), ((~(((/* implicit */int) arr_4 [i_1]))))));
        var_24 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)8184))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)87)), ((unsigned char)46))))) : (((long long int) (unsigned char)46)))), (((/* implicit */long long int) ((short) min((((/* implicit */unsigned short) (short)14339)), ((unsigned short)7166)))))));
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 24; i_2 += 4) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned long long int) ((int) arr_2 [i_2]));
        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_2])) ? (((((/* implicit */_Bool) (unsigned short)7160)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-14339))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)57352)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9))))))))));
    }
}
