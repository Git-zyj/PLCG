/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99496
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
    var_18 = ((/* implicit */short) var_0);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((((((/* implicit */unsigned long long int) (-(arr_1 [i_0] [i_0])))) - (((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])) * (arr_0 [i_0] [i_0]))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_1 [i_0] [18LL])) : (arr_0 [i_0] [(unsigned char)20])))))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [(_Bool)1])) ? (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])) : (arr_0 [i_0] [i_0])))) || ((!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))))))));
        var_19 = ((/* implicit */short) (+(arr_0 [i_0] [i_0])));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [0LL] [0LL])) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))) || (((/* implicit */_Bool) arr_0 [i_0] [i_0])))) ? (arr_1 [i_0] [i_0]) : (((/* implicit */int) ((((/* implicit */_Bool) (~(arr_1 [i_0] [i_0])))) || (((/* implicit */_Bool) ((arr_1 [i_0] [i_0]) / (arr_1 [i_0] [(short)8])))))))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        var_20 = ((((/* implicit */_Bool) (~(arr_1 [i_1] [i_1])))) ? (((/* implicit */unsigned int) arr_7 [i_1])) : (((((/* implicit */_Bool) (signed char)52)) ? (65535U) : (4294901776U))));
        var_21 = ((/* implicit */unsigned char) ((arr_0 [i_1] [i_1]) >> (((arr_7 [i_1]) + (1625521230)))));
    }
    var_22 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5))))) ? (var_10) : (((var_15) ? (var_10) : (var_9))))) == (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_12))))))))));
    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-((-(((/* implicit */int) var_17))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (((var_15) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_14)))) : (((/* implicit */int) ((var_0) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))))) : (((((/* implicit */_Bool) ((var_17) ? (var_0) : (((/* implicit */unsigned long long int) var_9))))) ? (((var_9) + (((/* implicit */unsigned int) ((/* implicit */int) var_15))))) : (var_12))))))));
    var_24 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((var_15) ? (var_10) : (var_10)))) : (var_16)))));
}
