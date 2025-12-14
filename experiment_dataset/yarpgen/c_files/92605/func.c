/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92605
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
    var_18 = var_13;
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0 - 1] [i_0] = ((/* implicit */long long int) ((unsigned long long int) (unsigned char)255));
        arr_3 [i_0] = min((((unsigned int) arr_0 [i_0 - 1] [i_0])), (((/* implicit */unsigned int) ((unsigned short) arr_0 [i_0 - 1] [i_0 - 1]))));
    }
    var_19 = ((/* implicit */unsigned int) var_3);
}
