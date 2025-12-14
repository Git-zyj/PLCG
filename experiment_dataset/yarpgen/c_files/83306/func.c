/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83306
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
    var_15 = var_9;
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = (signed char)118;
        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0]))))) ? (min((((((((/* implicit */int) (signed char)-118)) + (2147483647))) << (((((((/* implicit */int) (signed char)-71)) + (75))) - (4))))), (((/* implicit */int) min(((signed char)127), ((signed char)89)))))) : (((/* implicit */int) ((signed char) ((signed char) var_5))))));
    }
}
