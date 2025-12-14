/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72134
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
    var_13 = ((/* implicit */signed char) (-(((/* implicit */int) var_6))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = arr_0 [i_0];
        arr_3 [i_0] [i_0] |= ((/* implicit */_Bool) ((min((var_12), (var_2))) ? (((/* implicit */long long int) (+(max((235309849), (((/* implicit */int) arr_0 [i_0]))))))) : (((((/* implicit */_Bool) 235309840)) ? (max((((/* implicit */long long int) arr_0 [i_0])), (-3197332971227477559LL))) : (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0] [i_0])) % (((/* implicit */int) arr_1 [i_0] [i_0 + 1])))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) ((min((((var_8) / (((/* implicit */int) arr_0 [i_0])))), ((+(((/* implicit */int) var_7)))))) / (((arr_1 [i_0 + 1] [i_0 + 1]) ? (((/* implicit */int) (signed char)77)) : (((/* implicit */int) (_Bool)1))))));
    }
    for (unsigned char i_1 = 2; i_1 < 16; i_1 += 4) 
    {
        var_14 = ((/* implicit */unsigned int) min((var_14), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? ((~(((/* implicit */int) (_Bool)1)))) : ((~(((/* implicit */int) (_Bool)1))))))) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (short)-32746))))))))));
        arr_7 [(signed char)11] [i_1 - 2] = ((/* implicit */short) arr_5 [i_1 + 2]);
        var_15 = ((/* implicit */unsigned char) var_6);
    }
}
