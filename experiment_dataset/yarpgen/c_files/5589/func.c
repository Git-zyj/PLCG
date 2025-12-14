/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5589
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
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_19)) : ((-(var_9)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16828759323826662879ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (445288313U)))) ? (((/* implicit */int) min(((signed char)-120), ((signed char)4)))) : (((/* implicit */int) var_8))))) : (var_9)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) arr_2 [i_0]))) ? (((arr_1 [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (3849679001U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
        var_22 = ((/* implicit */short) (!(((18446744073709551600ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
    }
    for (unsigned int i_1 = 2; i_1 < 19; i_1 += 3) /* same iter space */
    {
        var_23 = ((/* implicit */long long int) min((var_23), (((((arr_5 [i_1]) ? (max((((/* implicit */long long int) var_7)), (4171128689259890321LL))) : (min((arr_3 [i_1]), (((/* implicit */long long int) arr_5 [i_1])))))) - (((((/* implicit */_Bool) arr_4 [i_1 - 1])) ? (arr_3 [i_1]) : (((arr_3 [i_1 - 2]) | (arr_3 [i_1 + 1])))))))));
        var_24 = ((/* implicit */unsigned short) (~((-(max((18LL), (var_5)))))));
        var_25 ^= ((_Bool) (-(arr_3 [i_1 + 1])));
    }
    /* vectorizable */
    for (unsigned int i_2 = 2; i_2 < 19; i_2 += 3) /* same iter space */
    {
        var_26 = ((((((/* implicit */_Bool) var_11)) ? (14656176110195977821ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2 + 1]))));
        arr_9 [i_2] = ((/* implicit */unsigned long long int) (!(arr_8 [i_2 - 2])));
    }
    var_27 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (2460844727U)));
    var_28 = ((var_5) == (((/* implicit */long long int) (~(2460844727U)))));
}
