/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81562
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
    var_17 = var_12;
    var_18 = ((/* implicit */int) var_8);
    var_19 = (~(((4294967276U) - (((/* implicit */unsigned int) ((/* implicit */int) (short)-3228))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */int) ((unsigned short) var_0))) : (((((/* implicit */_Bool) -3335046057904212397LL)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) var_14);
    }
}
