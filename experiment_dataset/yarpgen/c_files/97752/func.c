/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97752
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
    for (long long int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        var_15 = (+(((/* implicit */int) ((var_6) > (((/* implicit */long long int) var_9))))));
        arr_4 [i_0] = ((((/* implicit */_Bool) arr_1 [i_0 + 3] [i_0 + 1])) ? (arr_1 [i_0 + 2] [i_0 + 1]) : (var_2));
    }
    var_16 = ((/* implicit */long long int) var_9);
    var_17 = ((/* implicit */long long int) (-(-54116622)));
}
