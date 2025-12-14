/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64522
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
    var_15 = ((/* implicit */_Bool) ((((/* implicit */long long int) max((((/* implicit */int) var_13)), (min((var_8), (((/* implicit */int) var_6))))))) % ((~(((var_3) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)17191)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) arr_2 [i_0 + 4]);
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned short) var_3);
                var_16 ^= ((/* implicit */signed char) max((max((((arr_2 [i_0]) / (arr_2 [(short)15]))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))), (((/* implicit */long long int) ((short) arr_5 [(unsigned char)2] [i_1 + 1])))));
            }
        } 
    } 
}
