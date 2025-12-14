/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55145
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
    for (int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = 63;
        var_14 = ((/* implicit */unsigned int) max((var_14), (((((/* implicit */_Bool) max((arr_2 [i_0]), (var_5)))) ? ((~(2763786732U))) : (((/* implicit */unsigned int) var_13))))));
    }
    var_15 = ((/* implicit */short) min((max((min((var_2), (1003261429U))), (((((/* implicit */_Bool) var_2)) ? (2524540564U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32740))))))), (((/* implicit */unsigned int) (+(max((var_4), (((/* implicit */int) var_9)))))))));
    var_16 = ((/* implicit */unsigned char) 46660669U);
}
