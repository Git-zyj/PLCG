/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55555
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
    var_10 &= (((!(((/* implicit */_Bool) ((signed char) var_0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_3));
    var_11 = ((/* implicit */signed char) var_7);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */signed char) (-(((/* implicit */int) arr_4 [i_0] [i_0] [i_1]))));
                var_13 *= ((arr_2 [(signed char)2] [(signed char)2]) ? (((arr_2 [i_0 + 4] [i_0 + 2]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 + 4] [i_0 + 2]))) : (var_5))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_0 [i_0] [(signed char)4]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_2 [i_0] [i_0]))))) ? ((-(((/* implicit */int) arr_2 [i_0] [i_1])))) : (((((/* implicit */_Bool) (signed char)-62)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)-54))))))));
                var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) ((signed char) arr_4 [i_1 - 1] [i_0] [i_0 + 2])))));
            }
        } 
    } 
}
