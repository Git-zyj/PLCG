/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73422
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
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                arr_6 [i_0 + 2] [i_0] = ((/* implicit */unsigned int) ((((((((/* implicit */int) var_8)) == (((/* implicit */int) var_5)))) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) (short)-28)))) - (((/* implicit */int) ((unsigned char) arr_3 [i_1] [i_0 + 1])))));
                var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0 - 1])) << (((-9223372036854775792LL) + (9223372036854775796LL)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_1))))) : (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)15883)) << (((((((/* implicit */long long int) ((/* implicit */int) (signed char)48))) ^ (arr_3 [i_0 + 2] [i_1]))) - (5866518166198048556LL)))))) : ((+(((((/* implicit */_Bool) (signed char)-63)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1]))) : (-9223372036854775792LL)))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_2 = 2; i_2 < 8; i_2 += 2) 
    {
        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((int) ((_Bool) ((arr_7 [i_2 + 1] [i_2 + 4]) / (((/* implicit */long long int) var_11)))))))));
        arr_10 [i_2 - 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((int) ((unsigned char) -9223372036854775792LL)))) : (var_1)));
    }
    var_15 = ((((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65533))) >= (-9223372036854775792LL))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) var_7)))) < (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)64189)) || (((((/* implicit */_Bool) (signed char)65)) && (((/* implicit */_Bool) var_5))))))));
}
