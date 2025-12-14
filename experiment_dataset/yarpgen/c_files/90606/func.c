/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90606
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) (+((+(((/* implicit */int) (_Bool)1))))));
        arr_3 [i_0] [i_0] &= var_9;
    }
    for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */signed char) var_7);
        arr_8 [i_1] = ((/* implicit */int) var_10);
        var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((var_7) & (var_7))) : (var_7)))) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) ((((/* implicit */int) ((var_0) < (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) == (((/* implicit */int) var_9))))))))));
        arr_9 [i_1] = ((/* implicit */unsigned short) var_2);
    }
    var_13 = ((/* implicit */unsigned int) ((var_7) ^ (((/* implicit */unsigned long long int) (~(((var_9) ? (var_4) : (var_11))))))));
    var_14 = var_11;
}
