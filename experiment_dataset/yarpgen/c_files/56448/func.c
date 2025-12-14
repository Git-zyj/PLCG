/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56448
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
    var_19 = ((/* implicit */unsigned int) var_16);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((var_16) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) var_13)))) : (((/* implicit */long long int) (+(((/* implicit */int) var_15)))))));
        var_21 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16152137190726656103ULL)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) var_11))))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_3 [i_0]), (arr_3 [i_0]))))) : ((+((-9223372036854775807LL - 1LL))))));
    }
    for (unsigned short i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            for (short i_3 = 0; i_3 < 11; i_3 += 3) 
            {
                {
                    var_22 |= ((/* implicit */short) (+(min((arr_2 [i_1]), (((/* implicit */int) var_15))))));
                    var_23 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) arr_4 [i_1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1]))))) : (((/* implicit */int) arr_10 [i_2] [i_3] [i_3]))));
                    var_24 = ((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_2]))))), (((((/* implicit */_Bool) arr_6 [i_3])) ? (((/* implicit */int) ((unsigned short) (-9223372036854775807LL - 1LL)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_9 [i_1] [i_1] [i_2] [i_2]))))))));
                }
            } 
        } 
        var_25 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)177)) ? (var_5) : (2998722724199843642LL)))) ? (((arr_3 [i_1]) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1])))));
        arr_11 [i_1] = ((/* implicit */short) var_11);
    }
}
