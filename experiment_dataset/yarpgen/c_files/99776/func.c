/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99776
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
    var_20 = ((/* implicit */signed char) max((var_20), (((signed char) ((((((/* implicit */int) var_13)) - (((/* implicit */int) var_18)))) + (((/* implicit */int) max((var_0), (var_7)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    arr_8 [i_0] [i_2] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_0]))))) || (((((/* implicit */_Bool) (signed char)125)) || (((/* implicit */_Bool) ((signed char) (signed char)-28)))))));
                    var_21 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_1] [i_2])) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_0] [i_0])) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])))), (((/* implicit */int) min((arr_6 [i_2] [i_2] [i_2] [i_2]), (arr_6 [i_0] [i_0] [i_0] [i_0]))))));
                    arr_9 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) arr_5 [i_2])) : (((/* implicit */int) arr_5 [i_0])))))));
                }
                arr_10 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) var_2)) % (((/* implicit */int) arr_1 [i_0]))));
                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((((/* implicit */_Bool) ((((((/* implicit */int) var_4)) + (2147483647))) >> (((/* implicit */int) var_5))))) ? (((/* implicit */int) max((arr_0 [(signed char)4]), (arr_2 [(signed char)10])))) : (((/* implicit */int) arr_0 [(signed char)6])))) & (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])))))))))))));
            }
        } 
    } 
}
