/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67785
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
    var_15 = var_7;
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [i_0 - 2] [i_0 - 1]))));
            var_17 = ((((/* implicit */_Bool) arr_5 [i_0 - 1])) ? (((((/* implicit */_Bool) (signed char)124)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_10))) : (((/* implicit */long long int) (-(0U)))));
            var_18 = ((unsigned long long int) var_3);
        }
        var_19 = ((/* implicit */unsigned char) (+((~(arr_5 [i_0 + 1])))));
        arr_6 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) arr_3 [i_0] [i_0] [12LL]))) >> (((/* implicit */int) ((((var_4) | (var_7))) <= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-25146)))))))))));
    }
    for (unsigned char i_2 = 0; i_2 < 21; i_2 += 2) 
    {
        arr_9 [i_2] = ((/* implicit */unsigned short) ((((unsigned int) (-(((/* implicit */int) arr_7 [i_2]))))) < ((((!(((/* implicit */_Bool) var_10)))) ? (min((((/* implicit */unsigned int) arr_5 [i_2])), (3662266210U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_4 [i_2] [i_2]))))))));
        arr_10 [i_2] = ((/* implicit */int) ((arr_5 [i_2]) >= (((/* implicit */int) ((signed char) ((((/* implicit */unsigned long long int) arr_2 [i_2])) <= (2536773309681633736ULL)))))));
    }
    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 2) 
    {
        arr_13 [10LL] = ((/* implicit */long long int) ((unsigned int) (!(((/* implicit */_Bool) ((unsigned short) 2536983771957669309LL))))));
        arr_14 [i_3] = ((/* implicit */int) arr_4 [20ULL] [23U]);
    }
    var_20 = var_12;
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)41750)) + (((/* implicit */int) ((unsigned short) ((632701085U) - (var_4)))))));
}
