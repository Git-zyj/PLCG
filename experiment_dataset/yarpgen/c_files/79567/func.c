/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79567
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
    var_15 = min((((/* implicit */int) (!(((/* implicit */_Bool) 11331343532061378390ULL))))), (min(((+(((/* implicit */int) var_4)))), (var_1))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_16 -= 16383;
        var_17 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)-8))));
    }
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) 7115400541648173249ULL)) || (((/* implicit */_Bool) var_4))));
}
