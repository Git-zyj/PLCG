/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75811
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
    var_10 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? ((~(((/* implicit */int) min((var_0), (((/* implicit */short) var_7))))))) : (min((((/* implicit */int) (signed char)-69)), (-447913732)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) (-(((/* implicit */int) arr_0 [i_0]))));
        var_11 = ((/* implicit */short) ((((arr_1 [i_0] [i_0]) + (2147483647))) << (((((arr_1 [i_0] [i_0]) + (2098905344))) - (22)))));
        var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) arr_0 [i_0]))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        var_13 = ((/* implicit */short) ((((/* implicit */int) arr_0 [(_Bool)0])) <= (((/* implicit */int) arr_0 [i_1]))));
        var_14 = ((/* implicit */signed char) (+(((/* implicit */int) arr_3 [i_1]))));
        var_15 = ((/* implicit */unsigned char) ((unsigned long long int) ((var_8) >> (((((/* implicit */int) (signed char)-3)) + (64))))));
    }
    var_16 = ((/* implicit */unsigned short) max((var_6), (((/* implicit */unsigned long long int) var_7))));
}
