/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9584
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
    var_10 &= ((/* implicit */signed char) ((((/* implicit */int) var_0)) % ((+(((((/* implicit */_Bool) (signed char)-9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)116))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_11 *= (signed char)-126;
        var_12 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)73)) / (((((/* implicit */int) (signed char)-108)) % (((/* implicit */int) (signed char)-72))))));
    }
    for (signed char i_1 = 2; i_1 < 11; i_1 += 1) 
    {
        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((~(((/* implicit */int) arr_0 [i_1] [i_1 + 2])))), (((((/* implicit */_Bool) (signed char)-126)) ? (((/* implicit */int) arr_0 [(signed char)16] [i_1 + 3])) : (((/* implicit */int) arr_0 [i_1 + 2] [i_1]))))))) ? (((/* implicit */int) min((arr_3 [i_1 + 3]), (arr_3 [i_1 + 3])))) : (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_3 [i_1 - 2])) : (((/* implicit */int) (signed char)-12))))));
        arr_4 [i_1] [i_1] = (signed char)116;
    }
}
