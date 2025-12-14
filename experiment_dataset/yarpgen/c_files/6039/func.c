/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6039
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
    var_20 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) var_4)) ? (var_7) : ((-2147483647 - 1)))) >> (((((((/* implicit */int) var_13)) - (((/* implicit */int) var_15)))) + (209))))) + ((~(((/* implicit */int) var_15))))));
    var_21 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_8) : (((/* implicit */int) var_18))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483642)) ? (var_1) : (((/* implicit */int) var_4))))) : (var_11))) % (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)60))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned char)95)))) : (var_11)))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 3) /* same iter space */
    {
        arr_3 [(unsigned char)16] [(unsigned char)16] &= ((/* implicit */unsigned long long int) var_4);
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0]))));
        var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_12))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) /* same iter space */
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) (((+(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (signed char)-61)) : (((/* implicit */int) arr_4 [i_1])))))) + (((((((/* implicit */int) var_3)) * (((/* implicit */int) var_3)))) & (((/* implicit */int) var_9))))));
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [8] [i_1]))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))) : (arr_5 [i_1] [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(unsigned short)15])))));
    }
}
