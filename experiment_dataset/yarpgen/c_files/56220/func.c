/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56220
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
    var_10 = ((/* implicit */unsigned long long int) var_7);
    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((-(var_2))) / (max((var_0), (var_6)))))) ? (min((((((/* implicit */_Bool) 1094007183)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)36))))), (var_4))) : ((-(((unsigned long long int) var_2))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((9223372036854775807LL) - (((/* implicit */long long int) ((/* implicit */int) (short)24476)))));
        arr_3 [i_0] = ((/* implicit */int) (-(((var_5) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)28)))))));
        var_12 = ((/* implicit */unsigned char) var_2);
        arr_4 [i_0] [i_0] = ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((((/* implicit */int) var_8)) * (((/* implicit */int) var_7)))));
        /* LoopSeq 2 */
        for (short i_1 = 3; i_1 < 14; i_1 += 3) /* same iter space */
        {
            arr_7 [i_0] = ((/* implicit */long long int) ((var_7) ? (((/* implicit */int) arr_0 [i_0] [i_1 + 2])) : (((/* implicit */int) arr_0 [(_Bool)1] [i_1 + 2]))));
            var_13 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_5 [i_1 + 1] [i_1]))));
        }
        for (short i_2 = 3; i_2 < 14; i_2 += 3) /* same iter space */
        {
            var_14 = (i_0 % 2 == 0) ? (((/* implicit */unsigned short) ((((/* implicit */int) arr_8 [i_2 - 1] [i_2 - 2] [i_2 - 2])) / (((/* implicit */int) arr_9 [i_0] [i_0]))))) : (((/* implicit */unsigned short) ((((/* implicit */int) arr_8 [i_2 - 1] [i_2 - 2] [i_2 - 2])) * (((/* implicit */int) arr_9 [i_0] [i_0])))));
            arr_10 [i_0] = ((/* implicit */signed char) ((unsigned char) arr_5 [i_2] [i_2 - 3]));
        }
    }
    var_15 = ((/* implicit */int) var_4);
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)1475)) | (((/* implicit */int) (unsigned char)220))))) ? (var_9) : (var_2)));
}
