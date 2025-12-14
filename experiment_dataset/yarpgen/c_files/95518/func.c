/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95518
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
    for (signed char i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) arr_2 [i_0 - 1]);
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) max((4173962289U), (((/* implicit */unsigned int) (_Bool)1))));
    }
    var_15 -= ((/* implicit */unsigned long long int) 1061674390U);
}
