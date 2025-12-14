/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56946
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
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (+(((/* implicit */int) (signed char)41)));
        var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? ((-(((/* implicit */int) (signed char)63)))) : (((/* implicit */int) (signed char)-63))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = min((min((arr_4 [i_1 - 1] [i_1 - 1]), (((/* implicit */unsigned int) var_4)))), (((/* implicit */unsigned int) (unsigned short)53240)));
        var_11 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((unsigned int) (signed char)-37)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1])))));
        var_12 = arr_4 [i_1] [i_1];
    }
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) /* same iter space */
    {
        arr_12 [i_2] = ((/* implicit */int) arr_6 [i_2]);
        arr_13 [i_2] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (signed char)-56)) ? (((/* implicit */int) (signed char)37)) : (((/* implicit */int) (signed char)46))))));
        var_13 = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */unsigned long long int) 9)) >= (min((13615340939391647607ULL), (((/* implicit */unsigned long long int) (signed char)3))))))), (((int) (!(((/* implicit */_Bool) var_8)))))));
    }
    var_14 = ((/* implicit */signed char) var_1);
}
