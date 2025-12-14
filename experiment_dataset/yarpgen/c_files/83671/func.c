/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83671
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
    var_10 = ((/* implicit */int) var_5);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((_Bool) ((arr_1 [i_0] [i_0]) ? (112644991U) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_1), (((/* implicit */unsigned char) arr_1 [i_0] [i_0])))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) (signed char)-24);
    }
}
