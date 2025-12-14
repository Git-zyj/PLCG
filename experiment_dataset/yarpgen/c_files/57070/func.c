/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57070
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
    var_18 = ((/* implicit */unsigned char) var_3);
    var_19 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+(var_9)))) % (var_10)));
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */short) arr_2 [i_0]);
        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((int) var_0)))));
        var_22 = (~(((((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1])) ^ (((/* implicit */int) arr_3 [i_0] [i_0])))));
        arr_4 [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4107082284U)) ? (((/* implicit */int) (_Bool)0)) : (820362469)));
        arr_5 [i_0] [i_0] = ((/* implicit */long long int) arr_3 [i_0] [i_0]);
    }
    for (unsigned long long int i_1 = 3; i_1 < 8; i_1 += 4) 
    {
        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) arr_0 [i_1]))));
        var_24 |= ((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_3 [i_1] [i_1]))))) > (((/* implicit */int) arr_1 [i_1 - 1]))))), ((~((~(((/* implicit */int) arr_3 [i_1] [i_1]))))))));
        arr_10 [i_1] = ((/* implicit */unsigned short) ((_Bool) (+(min((1940190648), (((/* implicit */int) arr_0 [i_1])))))));
    }
}
