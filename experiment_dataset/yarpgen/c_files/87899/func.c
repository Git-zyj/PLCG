/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87899
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
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (short)15)) ? (2885853014U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)63))))), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (unsigned char)56)))))));
        arr_2 [i_0 + 2] &= ((/* implicit */signed char) (+(((/* implicit */int) ((min((arr_1 [i_0]), (((/* implicit */int) arr_0 [i_0] [i_0])))) > (max((((/* implicit */int) (signed char)-33)), (arr_1 [i_0 + 2]))))))));
    }
    var_15 += ((/* implicit */signed char) ((((((/* implicit */int) ((((/* implicit */_Bool) (signed char)-1)) || ((_Bool)1)))) << (((((/* implicit */int) ((unsigned char) (signed char)-24))) - (204))))) - ((((-(((/* implicit */int) var_1)))) - ((-(((/* implicit */int) (unsigned char)171))))))));
    var_16 |= ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned int) var_7))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)171)) ? (((/* implicit */unsigned long long int) var_9)) : (var_3))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))) : ((+(((((/* implicit */_Bool) 14680064U)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))))));
}
