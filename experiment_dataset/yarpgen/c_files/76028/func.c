/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76028
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */short) min((2808003288439571773LL), (arr_1 [i_0])));
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((20LL) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_0 [i_0] [i_0]) & (arr_0 [i_0] [i_0]))))))))));
        arr_3 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_0 [i_0] [i_0])))) : (arr_1 [i_0])))) ? ((-(((var_17) >> (((((/* implicit */int) var_15)) + (12740))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))));
    }
    for (long long int i_1 = 0; i_1 < 21; i_1 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)32767)), ((unsigned short)61440)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [i_1]))) : (arr_0 [i_1] [i_1])))));
        arr_7 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+(((/* implicit */int) arr_6 [i_1] [i_1]))))) <= (((((/* implicit */_Bool) arr_6 [13LL] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32738))) : (9223372036854775807LL)))));
    }
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) var_5)) * (((/* implicit */int) var_16))));
    var_21 = ((/* implicit */unsigned char) var_4);
    var_22 = ((/* implicit */long long int) min(((~(((/* implicit */int) (signed char)123)))), (((/* implicit */int) var_10))));
}
