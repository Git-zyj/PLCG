/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97973
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
    var_10 ^= max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_9)) << (((/* implicit */int) var_1)))))))), (var_9));
    var_11 = ((/* implicit */signed char) -1LL);
    var_12 = ((/* implicit */short) ((((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned long long int) var_2))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))) - (((/* implicit */int) (((-(var_0))) != (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)6380))));
        var_13 = ((/* implicit */signed char) arr_1 [i_0] [i_0]);
    }
    for (long long int i_1 = 0; i_1 < 18; i_1 += 2) /* same iter space */
    {
        var_14 |= ((/* implicit */unsigned int) (~((-(4LL)))));
        var_15 = ((/* implicit */int) (unsigned char)255);
        arr_7 [(short)8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) (signed char)-81)))) : (((/* implicit */int) ((arr_0 [i_1]) && (arr_0 [i_1]))))))) ? (max(((~(((/* implicit */int) arr_0 [i_1])))), (((/* implicit */int) arr_5 [i_1] [i_1])))) : (((/* implicit */int) arr_5 [i_1] [i_1]))));
        var_16 = ((/* implicit */_Bool) ((arr_0 [i_1]) ? (((/* implicit */int) ((arr_0 [i_1]) || (((/* implicit */_Bool) ((-19LL) + (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1]))))))))) : (((int) arr_0 [(unsigned short)7]))));
    }
}
