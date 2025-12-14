/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59729
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
    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3)))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */short) min((((/* implicit */unsigned int) ((unsigned char) var_9))), (2481497684U)));
        arr_4 [i_0] = (((_Bool)1) ? (6164843768595582584LL) : ((-9223372036854775807LL - 1LL)));
    }
}
