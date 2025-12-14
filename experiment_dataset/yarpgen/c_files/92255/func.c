/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92255
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
    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)10)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_3))) <= (var_4)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 16; i_0 += 4) /* same iter space */
    {
        var_12 += ((/* implicit */long long int) ((unsigned char) arr_0 [i_0]));
        var_13 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)9))) < (arr_0 [i_0]));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-16))) + (arr_0 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-101)))))));
        var_15 = ((((/* implicit */_Bool) (signed char)5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (((3444104001656920096ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)9))))));
    }
    for (short i_1 = 0; i_1 < 16; i_1 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */short) arr_0 [i_1]);
        var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-5440)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_5 [i_1])))))));
    }
    var_18 = (+((~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (9223372036854775807LL))))));
}
