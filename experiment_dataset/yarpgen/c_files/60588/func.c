/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60588
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
        arr_2 [i_0 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4514840698805569454LL)) || (((/* implicit */_Bool) (unsigned char)63))));
        arr_3 [i_0] = ((/* implicit */int) ((((unsigned long long int) arr_0 [i_0])) <= (((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 1])) ? (((/* implicit */unsigned long long int) -4514840698805569454LL)) : (arr_1 [(unsigned short)10] [i_0])))));
        var_14 = ((/* implicit */signed char) (~((-2147483647 - 1))));
        var_15 = ((/* implicit */unsigned char) arr_1 [7LL] [i_0 - 1]);
    }
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_13))));
}
