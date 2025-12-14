/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85557
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
    for (signed char i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */int) max((min((var_1), ((signed char)0))), (max((var_1), ((signed char)0)))));
        arr_3 [i_0] = (~(((((/* implicit */_Bool) 360034653)) ? (1924046755219283647LL) : (var_13))));
        arr_4 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)-8))))), (var_2))))));
    }
    var_15 = ((/* implicit */signed char) max((((((/* implicit */_Bool) (unsigned short)4029)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)-1)))), (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && ((!(((/* implicit */_Bool) var_9)))))))));
}
