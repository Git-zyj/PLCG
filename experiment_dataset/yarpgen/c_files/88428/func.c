/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88428
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
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        arr_2 [i_0] = max((((/* implicit */unsigned int) (unsigned char)133)), (2540055999U));
        var_15 = ((/* implicit */unsigned char) max((var_15), (arr_1 [(short)4] [(short)4])));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) max(((-(arr_0 [i_0 + 3]))), (((/* implicit */int) var_14))));
        var_16 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [8] [8])) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_1 [2] [i_0])) : (((/* implicit */int) var_14))))), (var_13))) : (((/* implicit */unsigned long long int) var_7))));
    }
    for (unsigned int i_1 = 1; i_1 < 14; i_1 += 3) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((short) var_13))) ? (53048921) : (((/* implicit */int) arr_4 [i_1 + 2])))), (((int) (-(((/* implicit */int) var_6)))))));
        arr_7 [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))));
        arr_8 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) arr_0 [i_1 + 2])) ? (var_7) : (((/* implicit */int) arr_1 [22ULL] [i_1 + 1])))) : (((/* implicit */int) var_5))));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_17 = ((/* implicit */_Bool) ((unsigned char) var_12));
        var_18 = ((/* implicit */unsigned int) max((var_18), (((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 5464683116824995981ULL)))) - (((((/* implicit */_Bool) arr_10 [i_2] [i_2])) ? (4294967295U) : (((/* implicit */unsigned int) arr_0 [3]))))))));
    }
    var_19 = ((/* implicit */unsigned long long int) var_4);
    var_20 = ((((/* implicit */int) (short)1023)) << (((/* implicit */int) (_Bool)0)));
}
