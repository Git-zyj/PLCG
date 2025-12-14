/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9445
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
    var_10 = ((/* implicit */unsigned short) ((((/* implicit */int) var_2)) >= (((/* implicit */int) ((((6807832987442166039ULL) / (((/* implicit */unsigned long long int) 1123937499)))) == (((/* implicit */unsigned long long int) -2043448671)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) var_0)) & (((/* implicit */int) arr_3 [i_0]))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            arr_8 [i_1] = ((/* implicit */unsigned int) (~(-1123937501)));
            var_11 = ((/* implicit */long long int) ((((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) (signed char)62)))) >> (((-1123937500) + (1123937504)))));
            var_12 ^= ((/* implicit */signed char) ((unsigned long long int) arr_1 [i_1 - 1] [i_1 + 1]));
            var_13 = ((/* implicit */short) ((((/* implicit */_Bool) 2885390233U)) ? (1736392059) : (((/* implicit */int) var_2))));
        }
        for (signed char i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            arr_13 [i_0] [(short)11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)88)) : (((/* implicit */int) var_2))));
            var_14 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) 27U)))) + (arr_1 [i_0] [i_0])));
            arr_14 [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_10 [i_0] [i_0]))));
            arr_15 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_0 [i_2]))));
        }
        var_15 = ((/* implicit */unsigned short) ((short) (unsigned short)14509));
    }
}
