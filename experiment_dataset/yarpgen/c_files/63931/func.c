/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63931
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
    var_16 = ((/* implicit */signed char) ((((/* implicit */int) var_9)) < ((-(((((/* implicit */int) (signed char)-23)) / (((/* implicit */int) var_9))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_17 -= ((/* implicit */short) ((((((/* implicit */int) ((((/* implicit */_Bool) (signed char)-60)) || (((/* implicit */_Bool) var_2))))) | (((/* implicit */int) arr_2 [i_0] [i_1])))) >= (((/* implicit */int) arr_3 [i_0]))));
                arr_6 [(signed char)20] [(short)24] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)68)) ? (((/* implicit */int) ((short) arr_3 [i_0]))) : (((/* implicit */int) min((((short) arr_1 [i_1])), (var_8))))));
                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)32750)) >> (((((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */int) arr_5 [i_0] [i_1])) : (((/* implicit */int) arr_2 [i_0] [i_1])))) + (120)))))) ? (((((/* implicit */_Bool) (signed char)-42)) ? (((/* implicit */int) (signed char)77)) : (((/* implicit */int) (signed char)(-127 - 1))))) : (((((/* implicit */int) (signed char)(-127 - 1))) / (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((/* implicit */int) (signed char)-60))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) ((((((/* implicit */int) var_10)) - (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6)))))) | (((/* implicit */int) ((((/* implicit */int) var_7)) != (((/* implicit */int) var_8)))))));
    var_20 = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) var_12))) != (((/* implicit */int) max((((/* implicit */short) var_7)), (((short) var_4)))))));
}
