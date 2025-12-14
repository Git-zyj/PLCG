/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59477
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((1645505714U) ^ (((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_0] [i_0]))))))) != (((((/* implicit */_Bool) (+(((/* implicit */int) var_13))))) ? (((unsigned int) (unsigned short)36546)) : (((/* implicit */unsigned int) (~(arr_1 [i_0]))))))));
        arr_3 [(unsigned short)18] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)50793)) ? (((/* implicit */int) (short)-14)) : (((/* implicit */int) (short)-1))));
    }
    var_18 = var_15;
}
