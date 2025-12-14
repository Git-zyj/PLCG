/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70916
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        var_13 ^= ((((/* implicit */_Bool) (unsigned short)19478)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) var_3)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)35413))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) (-((-(((/* implicit */int) (unsigned short)21336))))));
    }
    var_14 = ((/* implicit */unsigned short) var_2);
}
