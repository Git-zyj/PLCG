/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9694
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
    var_11 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_2))));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        arr_3 [i_0] [i_0 - 1] = ((/* implicit */unsigned int) var_4);
        var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)198)) && (((/* implicit */_Bool) -8007452893903412820LL)))))));
        var_13 = arr_0 [i_0] [i_0];
    }
}
