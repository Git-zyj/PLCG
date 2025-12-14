/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99628
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
    var_10 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) var_0))) ? (((/* implicit */unsigned long long int) (~(var_7)))) : (((((/* implicit */_Bool) ((short) var_9))) ? (((/* implicit */unsigned long long int) var_5)) : (var_0)))));
    var_11 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((max((((/* implicit */unsigned long long int) var_7)), (var_4))) >= (((/* implicit */unsigned long long int) var_3)))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned long long int) max((var_12), (((((unsigned long long int) arr_0 [i_0])) / (((/* implicit */unsigned long long int) ((long long int) arr_0 [i_0])))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        var_13 &= ((/* implicit */unsigned int) max((((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) * (((arr_1 [i_0]) / (((/* implicit */long long int) ((/* implicit */int) arr_2 [(unsigned char)14]))))))), (((/* implicit */long long int) min((4294967291U), (((/* implicit */unsigned int) (short)-1)))))));
    }
    for (long long int i_1 = 0; i_1 < 21; i_1 += 4) /* same iter space */
    {
        var_14 += min((min((((/* implicit */unsigned long long int) var_6)), (min((4556408310474313782ULL), (18446744073709551615ULL))))), (((/* implicit */unsigned long long int) arr_5 [(unsigned char)20] [(unsigned char)1])));
        arr_6 [(unsigned char)3] = ((/* implicit */short) 3027192297U);
        arr_7 [0LL] &= ((/* implicit */unsigned long long int) 660124225U);
        arr_8 [(unsigned short)16] |= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 1267774994U)) ? (((((/* implicit */_Bool) 4028136016U)) ? (16777215) : (16777218))) : (var_3)))) + (arr_1 [i_1])));
    }
}
