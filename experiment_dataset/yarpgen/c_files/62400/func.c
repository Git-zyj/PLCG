/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62400
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
    var_10 = (!(((/* implicit */_Bool) ((((/* implicit */int) var_6)) & (((var_6) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4))))))));
    var_11 ^= ((/* implicit */long long int) var_8);
    var_12 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_7) / (((/* implicit */int) var_9))))) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (var_7))) + (((/* implicit */int) max((var_2), (var_5)))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned long long int) min((var_13), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-12122)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-89))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) / (arr_2 [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)233)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)233))))) : (((((/* implicit */_Bool) (short)-16404)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)23))) : (16529264679814236456ULL)))))))));
        var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) arr_1 [i_0]))));
    }
    for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_3 [i_1])))), (((/* implicit */int) max((arr_3 [i_1]), (((/* implicit */short) var_6)))))));
        arr_7 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)16401)) ? (((/* implicit */int) (unsigned char)233)) : (((((/* implicit */_Bool) (unsigned char)35)) ? (((/* implicit */int) (short)-20322)) : (((/* implicit */int) (short)20322))))))) ? (var_7) : (((((/* implicit */int) arr_3 [i_1])) & (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_4 [i_1]))))))));
        var_15 |= max((((/* implicit */long long int) 443480344U)), (-5LL));
        /* LoopSeq 1 */
        for (signed char i_2 = 1; i_2 < 21; i_2 += 2) 
        {
            arr_12 [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1] [i_1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1]))) : ((~(arr_11 [23U] [i_2] [i_1]))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_1])) || (((/* implicit */_Bool) arr_11 [i_2 + 3] [23] [i_2 + 3]))))))));
            var_16 = ((/* implicit */unsigned char) max((var_16), (var_8)));
            arr_13 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) var_4)) / ((~(((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) var_4)) : (arr_10 [i_1])))))));
        }
    }
}
