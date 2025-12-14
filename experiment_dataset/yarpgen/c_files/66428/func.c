/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66428
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
    var_13 ^= ((/* implicit */signed char) max((var_6), (((/* implicit */long long int) 117131203))));
    var_14 = ((/* implicit */long long int) var_7);
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_6)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) * (((/* implicit */int) arr_1 [i_0 - 1]))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 13; i_1 += 3) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */unsigned short) var_8);
        arr_6 [i_1] [i_1] = var_8;
        var_16 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_4 [i_1] [i_1]))));
        arr_7 [i_1] [3ULL] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_1])) ^ (((/* implicit */int) var_3))));
    }
    for (signed char i_2 = 0; i_2 < 13; i_2 += 3) /* same iter space */
    {
        arr_11 [i_2] [i_2] = ((/* implicit */_Bool) max((((/* implicit */long long int) max((arr_3 [(_Bool)1]), (arr_3 [i_2])))), (((((/* implicit */long long int) ((/* implicit */int) var_4))) / (var_6)))));
        var_17 = ((/* implicit */unsigned char) ((unsigned short) var_7));
        arr_12 [6LL] [i_2] = ((/* implicit */long long int) (signed char)-108);
        var_18 = ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2]))) * (max((((/* implicit */long long int) var_9)), (var_6))));
        arr_13 [i_2] = ((/* implicit */long long int) (-(((((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)171))))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)14)) ? (((/* implicit */int) arr_10 [9ULL])) : (((/* implicit */int) var_5)))))))));
    }
}
