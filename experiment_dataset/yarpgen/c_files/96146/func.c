/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96146
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-121)) ^ (((/* implicit */int) (signed char)-122))));
        arr_4 [i_0] = arr_2 [i_0];
    }
    var_13 = ((/* implicit */signed char) max((((/* implicit */int) (signed char)28)), (((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) var_5))))));
}
