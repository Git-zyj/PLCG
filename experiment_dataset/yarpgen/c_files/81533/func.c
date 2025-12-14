/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81533
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
    var_10 = ((/* implicit */unsigned char) var_6);
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_11 = ((/* implicit */short) ((int) ((signed char) var_3)));
        arr_3 [i_0] = var_1;
        var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((unsigned int) 1746503823U))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) + (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned long long int) ((((var_3) + (9223372036854775807LL))) << (((((var_9) << (((((/* implicit */int) arr_1 [(unsigned char)2])) - (102))))) - (6815305340707691404LL)))))))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) ((1746503833U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)124)))))) & (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_5 [i_1]))))));
        var_13 &= ((/* implicit */unsigned short) (~(((/* implicit */int) var_8))));
        arr_7 [i_1] = arr_4 [i_1 - 1];
    }
    /* vectorizable */
    for (long long int i_2 = 1; i_2 < 14; i_2 += 1) 
    {
        var_14 ^= ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) & (arr_8 [(_Bool)1] [i_2 + 1]))));
        var_15 = (+(((((/* implicit */int) arr_9 [i_2 + 1])) >> (((/* implicit */int) (_Bool)1)))));
    }
    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) 
    {
        var_16 = ((/* implicit */long long int) ((arr_8 [i_3] [i_3]) * (max((arr_8 [i_3] [i_3]), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8)))))))));
        arr_12 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) << (((/* implicit */int) ((arr_9 [i_3]) && (((/* implicit */_Bool) var_2)))))));
    }
}
