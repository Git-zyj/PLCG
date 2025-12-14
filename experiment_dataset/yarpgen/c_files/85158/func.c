/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85158
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((((((/* implicit */int) var_4)) >> (((((/* implicit */int) var_17)) - (160))))) * (((/* implicit */int) var_11))))) : (((var_12) & (((/* implicit */long long int) var_14))))));
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 7; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */int) ((arr_1 [i_0] [i_0]) + (((/* implicit */long long int) ((/* implicit */int) var_2)))));
        arr_4 [i_0] = ((/* implicit */short) min((-1), (-1)));
    }
    for (int i_1 = 1; i_1 < 7; i_1 += 3) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */unsigned char) ((arr_2 [i_1] [i_1]) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1] [i_1])) && (((/* implicit */_Bool) arr_1 [i_1] [i_1]))))) != (((/* implicit */int) var_11))))))));
        arr_8 [i_1] = ((/* implicit */unsigned char) ((max((((arr_5 [i_1] [i_1 - 1]) >> (((arr_5 [i_1] [i_1]) - (13822487518787887532ULL))))), (((arr_5 [i_1] [i_1]) >> (((var_10) + (7456390146925244374LL))))))) >= (arr_5 [i_1 + 3] [i_1 + 3])));
    }
    var_20 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) var_16)) : (((((/* implicit */_Bool) var_4)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_18))))))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8)))))))))));
    var_21 = ((/* implicit */int) ((((/* implicit */unsigned int) (~(((((/* implicit */int) var_17)) & (var_9)))))) % (min((((/* implicit */unsigned int) min((var_14), (var_9)))), (var_16)))));
}
