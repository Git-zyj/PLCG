/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92547
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
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) max((((/* implicit */int) arr_1 [i_0])), (((((/* implicit */int) arr_2 [i_0 - 1])) | (((/* implicit */int) (signed char)127))))));
        arr_4 [i_0] [i_0] = (signed char)41;
    }
    for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
    {
        arr_9 [i_1] = var_3;
        var_14 = ((/* implicit */signed char) max((var_14), (arr_2 [i_1])));
        var_15 = var_12;
    }
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (signed char)-127)) : (((((((/* implicit */int) (signed char)-119)) != (((/* implicit */int) (signed char)126)))) ? (((/* implicit */int) (signed char)-80)) : (((/* implicit */int) max(((signed char)-73), ((signed char)59))))))));
    var_17 = ((/* implicit */signed char) (+(((/* implicit */int) var_13))));
    var_18 = max((((/* implicit */signed char) ((((/* implicit */int) (signed char)125)) == (((/* implicit */int) max(((signed char)-63), ((signed char)126))))))), ((signed char)-127));
}
