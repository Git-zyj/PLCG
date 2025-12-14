/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63219
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
    var_17 = ((/* implicit */unsigned short) ((((min(((~(((/* implicit */int) var_11)))), (((/* implicit */int) var_16)))) + (2147483647))) >> (((((((/* implicit */int) (unsigned char)12)) & (((/* implicit */int) (unsigned short)49065)))) >> (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_15)) : (var_0)))))));
    var_18 = var_6;
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)107))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_19 = ((/* implicit */long long int) (~(((/* implicit */int) arr_3 [7LL] [i_1]))));
            arr_6 [i_1] = ((/* implicit */unsigned short) -3078630643946887426LL);
            arr_7 [i_1] [i_1] = ((((-3078630643946887426LL) < (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 2]))))) ? (((/* implicit */int) arr_4 [i_0] [i_1])) : (var_6));
            var_20 = ((/* implicit */long long int) min((var_20), (((((/* implicit */long long int) var_4)) + (((((/* implicit */_Bool) (unsigned char)148)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) -162500557))))))));
        }
        for (short i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            var_21 = ((arr_0 [i_0 - 1]) + (arr_0 [i_0 - 1]));
            arr_10 [16LL] [16LL] [i_2] = ((/* implicit */short) (+(var_14)));
        }
        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */int) var_9))));
        arr_11 [i_0] [i_0] = ((/* implicit */short) (-(((/* implicit */int) arr_4 [i_0] [i_0]))));
    }
    for (long long int i_3 = 0; i_3 < 23; i_3 += 4) 
    {
        arr_14 [i_3] [i_3] = ((/* implicit */_Bool) (+(min((arr_12 [i_3] [i_3]), (arr_13 [i_3])))));
        var_23 ^= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (+((-2147483647 - 1))))) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) arr_8 [i_3] [i_3]))))) : (max((var_7), (((/* implicit */long long int) (unsigned char)94))))))));
        arr_15 [i_3] [i_3] = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6106726092888588753LL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)0))))) ? (8918475380759187378LL) : (min((((/* implicit */long long int) arr_4 [i_3] [i_3])), (4535369198077298445LL))))));
    }
}
