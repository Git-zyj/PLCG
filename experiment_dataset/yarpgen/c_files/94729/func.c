/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94729
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        var_12 = ((/* implicit */short) var_2);
        var_13 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(12292500486461421039ULL))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 1; i_1 < 19; i_1 += 1) 
    {
        arr_4 [i_1 + 1] [i_1] = ((/* implicit */short) ((unsigned long long int) arr_2 [i_1] [i_1]));
        arr_5 [i_1] = ((/* implicit */unsigned short) 2147483647);
        arr_6 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_1 - 1])) != (((/* implicit */int) arr_2 [i_1 - 1] [i_1]))));
        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_4))) ? (((/* implicit */int) arr_3 [i_1 + 1])) : (((/* implicit */int) arr_3 [i_1 + 2]))));
    }
    var_15 ^= ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_0))));
}
