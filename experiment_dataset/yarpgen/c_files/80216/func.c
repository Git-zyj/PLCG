/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80216
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
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) var_15)) : (max((2285299651U), (((/* implicit */unsigned int) var_15))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        arr_2 [i_0] = ((((((int) (-(2136884236041468578ULL)))) + (2147483647))) >> (((max((((((/* implicit */_Bool) arr_1 [(short)1] [(_Bool)0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0])))), (((((/* implicit */_Bool) 2383776302U)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0])))))) - (110))));
        var_20 += ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_1 [4LL] [i_0 - 1])) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0 + 1])) ? (((/* implicit */int) arr_0 [1ULL])) : (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) arr_0 [i_0 + 1])))), (((/* implicit */int) ((_Bool) arr_1 [i_0 + 1] [i_0 - 2])))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 1) 
    {
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_3 [(_Bool)1])) ? (((/* implicit */int) arr_0 [i_1 - 1])) : (((/* implicit */int) arr_0 [i_1 + 1])))))))));
        arr_6 [i_1] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) arr_1 [i_1 + 1] [i_1])) ? (((/* implicit */int) arr_1 [i_1 + 1] [(signed char)22])) : (((/* implicit */int) arr_1 [i_1 - 1] [i_1])))));
    }
    for (short i_2 = 2; i_2 < 14; i_2 += 2) 
    {
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) max((((((/* implicit */int) ((unsigned short) arr_0 [i_2]))) == (((/* implicit */int) arr_8 [i_2] [i_2 - 1])))), (((arr_5 [i_2]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2 + 1]))))))))));
        arr_10 [i_2 - 2] [i_2] = ((((/* implicit */_Bool) (~(arr_3 [i_2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2] [i_2 - 1]))) : (arr_3 [i_2]));
        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_2 - 2])) >> (((((/* implicit */int) arr_1 [i_2 - 2] [i_2])) - (123)))))) ? (((arr_8 [i_2 + 1] [i_2]) ? (((/* implicit */int) arr_4 [i_2])) : (((/* implicit */int) arr_9 [i_2 - 2])))) : (((((/* implicit */int) arr_4 [i_2])) & (((/* implicit */int) arr_8 [i_2 + 1] [i_2 + 1]))))));
    }
}
