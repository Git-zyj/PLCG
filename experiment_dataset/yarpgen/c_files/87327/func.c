/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87327
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
    for (unsigned long long int i_0 = 2; i_0 < 18; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) arr_0 [i_0 + 4])) ? (((/* implicit */int) arr_0 [i_0 - 2])) : (((/* implicit */int) arr_0 [i_0 + 1])))));
        arr_3 [i_0] = ((/* implicit */int) min((((/* implicit */long long int) arr_0 [i_0])), (((long long int) arr_0 [i_0]))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 2; i_1 < 18; i_1 += 2) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */long long int) ((arr_4 [i_1 + 4]) >= (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1 + 1])))));
        arr_7 [i_1 + 2] [i_1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1 - 2]))) : (var_5))) == (arr_4 [i_1 - 1])));
    }
    for (unsigned long long int i_2 = 2; i_2 < 18; i_2 += 2) /* same iter space */
    {
        var_14 = ((/* implicit */int) ((unsigned int) arr_4 [i_2 + 2]));
        arr_10 [i_2 + 2] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((var_12) > (min((var_10), (arr_4 [i_2]))))))) ^ (((arr_4 [i_2]) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2])))))));
        var_15 -= ((/* implicit */unsigned long long int) max((((((/* implicit */long long int) ((/* implicit */int) var_13))) % (arr_4 [i_2 - 2]))), (((/* implicit */long long int) (~(((/* implicit */int) ((unsigned short) var_5))))))));
        var_16 = ((/* implicit */unsigned char) ((long long int) arr_9 [i_2 + 1]));
        arr_11 [(_Bool)1] [i_2] = ((/* implicit */unsigned long long int) ((var_6) / (min((arr_1 [i_2] [i_2]), (((/* implicit */int) ((unsigned short) var_10)))))));
    }
    var_17 = ((/* implicit */unsigned long long int) (~(var_12)));
    var_18 = ((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_11) : (((/* implicit */int) var_13))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_1)))))) : (((((/* implicit */long long int) var_2)) / (var_10)))))));
}
