/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73299
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
    var_16 &= ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)61883)) ? (((/* implicit */int) (unsigned short)3653)) : (2147483647)))) || (((/* implicit */_Bool) var_6)))) && (((/* implicit */_Bool) var_5))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_17 = ((/* implicit */short) (-(((/* implicit */int) arr_1 [i_0] [i_0]))));
        arr_3 [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_13))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1])) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_1])) > (arr_2 [i_0])))) : (((/* implicit */int) arr_1 [i_1] [i_0]))));
            arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_1] [i_0]))) | (arr_2 [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (arr_5 [i_0] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))))))));
        }
    }
    for (int i_2 = 0; i_2 < 17; i_2 += 4) 
    {
        var_19 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_2])) ? (min((((((/* implicit */_Bool) arr_8 [(unsigned short)15])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2]))) : (4294967295U))), (((/* implicit */unsigned int) max((arr_8 [i_2]), (arr_8 [i_2])))))) : (((/* implicit */unsigned int) max((((arr_9 [i_2] [(signed char)9]) >> (((((/* implicit */int) var_6)) + (48))))), (((/* implicit */int) arr_8 [i_2])))))));
        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [(unsigned char)15])) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) arr_8 [i_2]))))) ? (max((var_12), (((/* implicit */unsigned int) (signed char)32)))) : ((+(1U))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_2])) * (min((((/* implicit */int) arr_8 [10U])), (arr_9 [11] [11]))))))));
        arr_10 [(unsigned char)0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((4294967295U) * (0U)))) ? (((((/* implicit */_Bool) var_0)) ? (255) : (((/* implicit */int) (unsigned char)85)))) : (((/* implicit */int) arr_7 [i_2]))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_2]))))) ? (((((/* implicit */_Bool) arr_8 [(unsigned char)5])) ? (((/* implicit */int) arr_7 [i_2])) : (((/* implicit */int) arr_8 [2U])))) : (((/* implicit */int) ((signed char) var_12))))) : (((((/* implicit */_Bool) arr_7 [i_2])) ? (((((/* implicit */_Bool) arr_8 [i_2])) ? (arr_9 [i_2] [i_2]) : (arr_9 [i_2] [i_2]))) : (((/* implicit */int) arr_7 [i_2]))))));
    }
}
