/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71895
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
    var_20 = ((/* implicit */unsigned char) var_2);
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 24; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1 - 2])) ? (((/* implicit */int) min((arr_2 [i_0] [i_0 + 3] [i_0]), ((_Bool)1)))) : (((/* implicit */int) (unsigned char)181)))) >> (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 + 1] [1U])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_2 [i_0 - 2] [i_1] [i_0]))))) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0 - 1] [3ULL]))))))))));
                arr_5 [i_0 + 1] [i_0] = 16558887773057293152ULL;
                var_22 *= ((/* implicit */_Bool) ((((/* implicit */long long int) 1206911888)) + ((+(min((((/* implicit */long long int) arr_4 [(short)0] [i_0])), (-1269029791561485771LL)))))));
            }
        } 
    } 
}
