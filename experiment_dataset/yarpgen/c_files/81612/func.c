/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81612
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
    var_18 = ((/* implicit */_Bool) ((1850121241403177787ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5925)))));
    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) max(((~(((/* implicit */int) var_17)))), (((/* implicit */int) var_10)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */int) ((unsigned short) arr_1 [i_0]));
        arr_4 [i_0] [i_0] = ((signed char) var_11);
    }
}
