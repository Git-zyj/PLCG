/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70295
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
    var_18 = ((/* implicit */signed char) ((int) ((max((((/* implicit */int) var_2)), (var_5))) >> (((((/* implicit */int) var_13)) - (3330))))));
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        var_19 -= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_1 [i_0 - 2] [i_0]) < (arr_1 [i_0] [i_0]))))) > ((+(arr_1 [i_0 - 1] [i_0 + 3])))));
        arr_2 [(unsigned short)11] [(_Bool)1] = ((/* implicit */int) arr_0 [i_0]);
    }
}
