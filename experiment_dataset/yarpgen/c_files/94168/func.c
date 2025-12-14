/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94168
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
    var_12 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 2147483647)), (var_1)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))));
    var_13 = ((/* implicit */signed char) var_5);
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        var_14 -= ((_Bool) 2147483647);
        arr_4 [i_0] = ((/* implicit */short) var_1);
    }
}
