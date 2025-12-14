/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78224
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
    var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) min(((signed char)-73), ((signed char)-89)))) : (((/* implicit */int) max(((signed char)-67), (var_1))))))));
    var_12 = ((signed char) ((((/* implicit */_Bool) min((var_7), (var_9)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) min((var_0), ((signed char)-3))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_13 = var_1;
        var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_1 [(signed char)7]))));
    }
    var_15 = (signed char)38;
}
