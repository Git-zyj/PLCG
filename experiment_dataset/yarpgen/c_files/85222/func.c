/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85222
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
    var_13 = ((/* implicit */signed char) -8271085347253362052LL);
    var_14 = ((/* implicit */unsigned short) max((((/* implicit */int) var_11)), ((~(((/* implicit */int) var_6))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = max((((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_0 [i_0 - 1] [i_0 - 2]), (((/* implicit */unsigned int) arr_2 [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)63))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)706)))))))), ((+(((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (short)4253))) : ((-9223372036854775807LL - 1LL)))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) (+(arr_0 [i_0 + 2] [i_0 - 2])))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) arr_0 [i_0] [i_0])) : (4468415255281664LL)))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_15 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)65472))));
        arr_9 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((((/* implicit */int) (unsigned char)96)) * (((/* implicit */int) arr_6 [i_1])))) : (((/* implicit */int) ((signed char) arr_6 [i_1])))));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 1; i_2 < 15; i_2 += 2) 
    {
        var_16 = ((/* implicit */signed char) ((((/* implicit */int) var_7)) == (((((/* implicit */int) arr_1 [i_2] [i_2])) / (((/* implicit */int) (signed char)-1))))));
        arr_12 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_2 + 1])) ? (((((/* implicit */int) (signed char)87)) ^ (((/* implicit */int) var_9)))) : (((/* implicit */int) arr_6 [i_2 - 1]))));
    }
}
