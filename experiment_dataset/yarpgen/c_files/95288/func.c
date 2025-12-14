/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95288
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
    var_19 |= ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_14)))) ? (((int) var_9)) : (((((/* implicit */int) var_12)) >> (((((/* implicit */int) var_7)) - (53332)))))));
    var_20 = ((/* implicit */unsigned long long int) var_4);
    var_21 &= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_0)), (var_11)));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_22 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) min(((signed char)37), (((/* implicit */signed char) arr_1 [i_0] [i_0]))))) ? (min((1835819369), (((/* implicit */int) (unsigned short)65528)))) : (((/* implicit */int) arr_2 [i_0] [i_0]))))));
        arr_3 [15] |= max((((/* implicit */long long int) ((unsigned short) (+(((/* implicit */int) arr_1 [i_0] [i_0])))))), (((var_16) - (((/* implicit */long long int) min((arr_0 [i_0] [i_0]), (((/* implicit */int) var_4))))))));
        arr_4 [i_0] = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))) : (((/* implicit */int) ((67100672) > (((/* implicit */int) var_2))))))));
    }
    for (int i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        arr_8 [i_1] [(short)4] = ((/* implicit */int) max((((unsigned short) ((((/* implicit */int) arr_2 [i_1] [i_1])) ^ (((/* implicit */int) arr_1 [i_1] [i_1]))))), (((/* implicit */unsigned short) min((arr_2 [i_1] [i_1]), (((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) arr_7 [i_1] [i_1]))))))))));
        arr_9 [i_1] [i_1] = ((min((((((/* implicit */int) var_12)) - (arr_0 [i_1] [i_1]))), (var_8))) - (max((((/* implicit */int) min((((/* implicit */signed char) var_2)), (var_12)))), (max((arr_0 [i_1] [i_1]), (((/* implicit */int) arr_7 [1LL] [i_1])))))));
    }
    for (unsigned short i_2 = 0; i_2 < 21; i_2 += 1) 
    {
        var_23 = ((/* implicit */signed char) arr_11 [i_2] [i_2]);
        arr_13 [i_2] = min(((+(((arr_11 [i_2] [i_2]) - (arr_12 [i_2] [i_2]))))), (arr_11 [i_2] [i_2]));
    }
    var_24 ^= max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (-147739317248693483LL) : (((/* implicit */long long int) -67100673))))) ? (((/* implicit */int) (unsigned char)205)) : (((/* implicit */int) (_Bool)0)))), (((((/* implicit */int) var_5)) - ((+(((/* implicit */int) var_2)))))));
}
