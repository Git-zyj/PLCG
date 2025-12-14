/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85479
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
    var_13 *= ((/* implicit */signed char) ((int) var_9));
    /* LoopSeq 3 */
    for (int i_0 = 4; i_0 < 17; i_0 += 3) 
    {
        arr_2 [(short)7] = ((/* implicit */unsigned long long int) (-2147483647 - 1));
        arr_3 [i_0 - 3] [(unsigned char)5] = arr_0 [i_0 + 1];
        var_14 = ((/* implicit */unsigned int) ((max((((unsigned long long int) -2909581864910306586LL)), (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (3616284925605856571ULL))))) + (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned short) (unsigned short)7864))))))));
    }
    for (unsigned short i_1 = 4; i_1 < 16; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1 - 1] = ((/* implicit */unsigned char) arr_0 [i_1 - 2]);
        var_15 += ((/* implicit */long long int) ((((/* implicit */_Bool) -2021806291)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_0 [13LL]))));
    }
    for (unsigned short i_2 = 4; i_2 < 16; i_2 += 1) /* same iter space */
    {
        var_16 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)88)) ? (45123300U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7876)))))) ? (((((/* implicit */_Bool) (unsigned short)49433)) ? (arr_8 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (short)-5063))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))) ? (max((arr_9 [i_2 - 2] [i_2]), (arr_9 [i_2 - 2] [i_2 - 2]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (-4484169541563924604LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)196)))))) ? (((/* implicit */unsigned int) arr_5 [i_2 - 4] [i_2])) : (arr_9 [i_2] [i_2])))));
        arr_10 [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_1 [i_2 - 4] [i_2 + 1]), (arr_1 [i_2 - 1] [i_2 - 2])))) ? (((((/* implicit */_Bool) -4484169541563924604LL)) ? (arr_1 [i_2 + 1] [i_2 + 2]) : (979074187U))) : (((((/* implicit */_Bool) arr_1 [i_2 - 1] [i_2 - 2])) ? (1992971018U) : (arr_1 [i_2 - 1] [i_2 - 4])))));
        arr_11 [i_2] [(unsigned short)11] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((short) (unsigned char)196)))));
        arr_12 [i_2] = ((long long int) -495103909783538141LL);
    }
}
