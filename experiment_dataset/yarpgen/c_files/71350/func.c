/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71350
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (var_6) : (((/* implicit */unsigned int) var_7))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) var_10);
    }
    /* LoopSeq 2 */
    for (short i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */signed char) ((unsigned long long int) min((max((((/* implicit */short) (unsigned char)224)), ((short)21124))), (((/* implicit */short) ((((/* implicit */unsigned int) var_12)) < (var_0)))))));
        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) var_8))))))));
        arr_6 [i_1] [i_1] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_10)), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) & (var_3)))));
    }
    for (long long int i_2 = 2; i_2 < 21; i_2 += 3) 
    {
        var_17 ^= ((/* implicit */short) ((min((((/* implicit */unsigned long long int) min((-700443146691412661LL), (((/* implicit */long long int) (unsigned short)2047))))), (var_3))) + (((/* implicit */unsigned long long int) (+(var_6))))));
        arr_10 [i_2] [i_2] = (~(((/* implicit */int) (unsigned char)255)));
    }
}
