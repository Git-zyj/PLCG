/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94379
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_20 = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((short) arr_1 [(short)2] [(short)2]))) ? (((/* implicit */int) arr_2 [i_0])) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_8)) : (var_7))))), (((((/* implicit */int) arr_2 [i_0])) / (((/* implicit */int) max((var_8), (arr_2 [i_0]))))))));
        var_21 = ((/* implicit */short) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (-1LL))))))), (((unsigned char) min((((/* implicit */unsigned long long int) arr_2 [i_0])), (var_13))))));
        var_22 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((var_12) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [5LL])))))) ? ((+(var_7))) : (((/* implicit */int) ((signed char) arr_0 [i_0]))))), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0])) >> (((var_13) - (11481215970631642463ULL)))))) || ((!(((/* implicit */_Bool) arr_0 [i_0])))))))));
        var_23 = ((/* implicit */unsigned int) ((((var_10) > (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((((((/* implicit */int) var_3)) > (((/* implicit */int) arr_2 [i_0])))) ? (((/* implicit */int) arr_0 [i_0])) : (var_14))) : (((/* implicit */int) max((arr_0 [i_0]), (((/* implicit */unsigned char) ((((/* implicit */int) var_9)) <= (((/* implicit */int) (signed char)1))))))))));
        arr_3 [i_0] [(short)5] = ((/* implicit */int) ((((unsigned long long int) arr_0 [i_0])) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))));
    }
    for (int i_1 = 1; i_1 < 20; i_1 += 1) 
    {
        var_24 &= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_6 [i_1 - 1] [i_1 - 1])) <= (((/* implicit */int) arr_6 [i_1 + 1] [i_1 - 1])))))) ^ (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 - 1]))) : (((var_1) / (((/* implicit */long long int) ((/* implicit */int) var_11)))))))));
        var_25 = ((/* implicit */_Bool) (+((((-(((/* implicit */int) arr_6 [i_1 - 1] [i_1 - 1])))) - (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_6 [9ULL] [i_1])) : (((/* implicit */int) var_11))))))));
        var_26 = ((/* implicit */long long int) ((((/* implicit */int) min((arr_4 [i_1 - 1]), (arr_4 [i_1 - 1])))) <= (((/* implicit */int) (!(((/* implicit */_Bool) ((short) var_15))))))));
    }
    var_27 |= ((/* implicit */short) min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_10))), (((/* implicit */long long int) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) var_11))) ^ (var_1)))))));
}
