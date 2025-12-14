/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62662
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
    for (int i_0 = 4; i_0 < 15; i_0 += 2) 
    {
        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) ((unsigned char) arr_2 [i_0 - 3] [i_0 - 3])))) ? (((/* implicit */int) min((arr_0 [i_0]), (min((((/* implicit */unsigned char) arr_2 [1] [i_0])), (arr_0 [i_0 + 2])))))) : (((((((/* implicit */_Bool) arr_0 [(unsigned char)7])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) var_6)))) + (arr_1 [i_0 - 4])))));
        var_16 = ((((/* implicit */int) (unsigned char)207)) ^ (((/* implicit */int) (signed char)121)));
    }
    var_17 = ((/* implicit */signed char) min((((/* implicit */short) (unsigned char)228)), (var_5)));
    var_18 = var_9;
}
