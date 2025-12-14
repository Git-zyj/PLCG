/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59803
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_12 ^= ((/* implicit */unsigned char) ((short) (short)-9041));
        arr_2 [i_0] = ((/* implicit */long long int) var_7);
        var_13 = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [0LL])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)9041))) : (arr_1 [6LL] [i_0])))), ((~(-5249492487514416750LL)))));
        var_14 ^= (((+(arr_1 [4U] [i_0]))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (short)-9042)) : (((/* implicit */int) (unsigned char)68))))));
        var_15 = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (2041241456514437038LL) : (((/* implicit */long long int) (+(var_2)))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 1; i_1 < 9; i_1 += 2) 
    {
        var_16 = ((/* implicit */unsigned int) (~(((/* implicit */int) (short)-9036))));
        var_17 = ((((/* implicit */_Bool) (+(var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (((0LL) >> (((var_1) + (1104386933))))));
    }
    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) var_10))));
}
