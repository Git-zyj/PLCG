/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55050
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) (-(arr_2 [i_0] [i_0]))));
        var_18 = ((/* implicit */unsigned long long int) max((var_18), ((-(((((/* implicit */unsigned long long int) ((var_16) / (((/* implicit */long long int) arr_2 [i_0] [i_0]))))) | (((((/* implicit */unsigned long long int) var_16)) % (var_17)))))))));
        arr_4 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-92))));
    }
    var_19 = ((/* implicit */unsigned int) 7123587532171547035LL);
}
