/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81706
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 13; i_1 += 4) 
        {
            {
                arr_8 [2] [(short)16] = arr_2 [i_0 + 1];
                arr_9 [(short)7] [13LL] = ((/* implicit */unsigned char) max((((((/* implicit */int) arr_1 [i_0 - 1] [i_0 + 1])) - ((~(((/* implicit */int) var_1)))))), ((-(((((/* implicit */_Bool) arr_0 [(unsigned short)15])) ? (((/* implicit */int) (unsigned char)86)) : (((/* implicit */int) arr_6 [8LL] [12LL]))))))));
                arr_10 [13LL] [15LL] [(unsigned short)1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) max((var_6), (max((((/* implicit */short) var_0)), ((short)-6878))))))) | ((+(min((arr_5 [(signed char)14] [15LL] [(unsigned char)8]), (((/* implicit */unsigned int) var_0))))))));
                arr_11 [(signed char)4] = ((/* implicit */long long int) ((((/* implicit */int) var_0)) & (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) == (var_3))))));
            }
        } 
    } 
    var_13 |= ((/* implicit */short) var_8);
}
