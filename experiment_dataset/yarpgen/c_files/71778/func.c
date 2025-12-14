/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71778
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
    var_15 = ((/* implicit */unsigned int) (unsigned char)102);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = arr_1 [i_0];
        var_16 ^= 201326592;
    }
    for (int i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        var_17 = ((/* implicit */short) (((+(arr_0 [i_1]))) + (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
        arr_8 [i_1] = ((/* implicit */int) min((((((arr_2 [i_1] [i_1]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))))) + (((((/* implicit */unsigned int) var_2)) + (arr_7 [i_1]))))), (((unsigned int) (_Bool)1))));
    }
    var_18 ^= ((/* implicit */int) max((((short) (+(2171503097U)))), (var_11)));
    var_19 = var_3;
}
