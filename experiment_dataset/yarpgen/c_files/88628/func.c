/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88628
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
    var_11 = ((/* implicit */long long int) var_0);
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        arr_2 [i_0] [i_0 + 1] = ((/* implicit */long long int) (short)-17);
        var_12 = ((/* implicit */unsigned int) max((var_12), (292242843U)));
    }
    for (int i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        var_13 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((max((var_7), (((/* implicit */unsigned char) (signed char)-46)))), (((/* implicit */unsigned char) ((arr_0 [i_1]) <= (((/* implicit */unsigned long long int) arr_4 [i_1])))))))) ? (-1010934247) : (((/* implicit */int) arr_3 [i_1]))));
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned int) arr_3 [i_1]);
    }
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 25; i_2 += 1) 
    {
        arr_8 [i_2] = ((unsigned long long int) (+(((/* implicit */int) var_1))));
        /* LoopSeq 2 */
        for (long long int i_3 = 0; i_3 < 25; i_3 += 1) /* same iter space */
        {
            arr_11 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((arr_10 [i_2] [i_2]) ? (((/* implicit */int) arr_10 [i_2] [i_3])) : (((/* implicit */int) arr_10 [i_3] [i_2]))));
            arr_12 [i_2] [i_3] = ((/* implicit */unsigned short) ((arr_10 [i_2] [i_2]) && (((((/* implicit */_Bool) 2147483647)) || (((/* implicit */_Bool) -1010934247))))));
            var_14 ^= ((((/* implicit */_Bool) ((short) arr_7 [i_2] [i_2]))) ? (((/* implicit */int) ((arr_9 [i_2] [i_3]) >= (((/* implicit */unsigned long long int) 1010934247))))) : (1010934246));
        }
        for (long long int i_4 = 0; i_4 < 25; i_4 += 1) /* same iter space */
        {
            arr_15 [i_2] [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_14 [i_2] [i_2] [i_2])))) ? (((/* implicit */int) ((((/* implicit */_Bool) 15429994410484811344ULL)) && (((/* implicit */_Bool) (unsigned short)28))))) : (var_2)));
            var_15 *= ((arr_6 [i_2] [i_4]) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2] [i_4]))) & (arr_13 [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_2] [i_4] [i_4])) && (arr_6 [i_2] [i_2]))))));
            arr_16 [i_4] [i_2] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_7 [i_2] [i_4]))));
            arr_17 [i_4] [i_4] [i_4] = ((/* implicit */short) ((unsigned int) arr_13 [i_2]));
            var_16 = ((/* implicit */short) arr_9 [i_2] [i_4]);
        }
        arr_18 [i_2] |= ((/* implicit */unsigned short) ((short) ((var_9) ? (arr_13 [i_2]) : (((/* implicit */unsigned long long int) arr_14 [i_2] [i_2] [i_2])))));
    }
}
