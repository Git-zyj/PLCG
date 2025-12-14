/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63260
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
    var_14 = ((/* implicit */short) (unsigned short)52602);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_0])) != (((/* implicit */int) ((_Bool) (_Bool)1)))));
        arr_3 [i_0] = (-(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) var_5)))))));
        var_15 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) min((arr_0 [0LL] [0LL]), (((/* implicit */unsigned short) (_Bool)1))))) : (((/* implicit */int) arr_0 [16] [16]))))) != (max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7))))), (max((((/* implicit */unsigned int) 438511337)), (var_3)))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_5 [i_1]))));
        arr_6 [i_1] = max((((unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_1 [i_1])) : (var_1)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)3285)) ^ (var_6)))) ? ((~(((/* implicit */int) (_Bool)1)))) : (min((((/* implicit */int) (_Bool)1)), (var_1)))))));
    }
}
