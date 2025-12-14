/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88555
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [(unsigned short)4] [(unsigned short)4] &= ((/* implicit */_Bool) (-(((/* implicit */int) (short)32765))));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((long long int) (unsigned short)16113));
    }
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) / (max((((((/* implicit */unsigned int) ((/* implicit */int) (short)-32766))) - (1879021488U))), (((/* implicit */unsigned int) (unsigned char)242))))));
}
