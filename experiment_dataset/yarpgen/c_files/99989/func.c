/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99989
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
    for (short i_0 = 2; i_0 < 22; i_0 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */int) ((((/* implicit */unsigned int) min((((/* implicit */int) arr_0 [i_0 + 1])), (((((/* implicit */int) arr_0 [i_0])) & (var_12)))))) - ((((!(((/* implicit */_Bool) arr_3 [i_0])))) ? (min((((/* implicit */unsigned int) (_Bool)1)), (2680518449U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 - 1])))))));
        arr_4 [(short)6] &= ((/* implicit */signed char) min((min((arr_0 [i_0 + 2]), (arr_0 [i_0 - 1]))), (max((arr_0 [i_0 - 2]), (arr_0 [i_0 + 1])))));
    }
    for (short i_1 = 2; i_1 < 22; i_1 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_1 + 2]))))) < (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_13))))) ? (min((((/* implicit */unsigned int) var_8)), (var_0))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-81)) ? (((/* implicit */int) arr_2 [i_1 + 2])) : (((/* implicit */int) arr_0 [i_1])))))))));
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_6 [i_1 + 2]), (((/* implicit */int) (unsigned short)47353))))) || (((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_1 + 1] [i_1 + 1])))))));
        arr_7 [i_1] = ((/* implicit */unsigned short) (+(((16543194437165008586ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-44)))))));
        arr_8 [i_1] [6U] = min((var_6), (((_Bool) arr_5 [i_1] [i_1 + 3])));
    }
    var_19 = ((/* implicit */short) ((var_14) || (((/* implicit */_Bool) (signed char)-80))));
}
