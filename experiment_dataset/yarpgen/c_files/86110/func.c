/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86110
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
    var_16 = ((/* implicit */unsigned char) var_13);
    var_17 -= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10))))), (((unsigned long long int) 4119895912U))));
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) (~(var_0))))) || (((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)-14992)) ? (((/* implicit */int) (short)-14993)) : (((/* implicit */int) var_11)))), (var_5))))));
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_19 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((var_1) - (((/* implicit */unsigned int) ((/* implicit */int) (short)-14983))))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0])))))) ? (arr_2 [i_0]) : (((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)-14972)) : (((/* implicit */int) var_10))))) - (arr_2 [1LL])))));
        var_20 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_0])), (var_8)))) != (((/* implicit */int) arr_1 [i_0] [i_0])))))) >= (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) arr_2 [16U])) : (((((/* implicit */_Bool) 3113544124U)) ? (562675075514368LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)105)))))))));
    }
    for (unsigned int i_1 = 2; i_1 < 21; i_1 += 2) /* same iter space */
    {
        var_21 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (arr_5 [i_1]) : (((/* implicit */int) arr_4 [i_1 - 1] [i_1]))));
        var_22 = ((/* implicit */_Bool) arr_5 [(unsigned short)1]);
        var_23 = ((/* implicit */int) min((var_23), (arr_5 [i_1 - 1])));
    }
    /* vectorizable */
    for (unsigned int i_2 = 2; i_2 < 21; i_2 += 2) /* same iter space */
    {
        arr_9 [12ULL] = ((/* implicit */unsigned short) ((arr_6 [(signed char)14]) <= (((/* implicit */unsigned long long int) var_7))));
        arr_10 [i_2] = ((/* implicit */long long int) ((arr_7 [i_2 + 2] [i_2 + 2]) - (arr_7 [i_2 - 1] [i_2 - 1])));
    }
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 15; i_3 += 2) 
    {
        arr_15 [3ULL] [i_3] = ((/* implicit */short) (~(((/* implicit */int) ((var_6) != (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_3] [(unsigned short)2]))))))));
        arr_16 [(short)3] = ((/* implicit */int) ((((/* implicit */_Bool) 562675075514363LL)) || (((/* implicit */_Bool) arr_1 [i_3] [i_3]))));
    }
}
