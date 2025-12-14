/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57071
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
    var_19 = ((/* implicit */signed char) var_14);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))))) <= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [(_Bool)1] [i_1])))))))))));
                var_21 ^= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (signed char)97)) ? (((/* implicit */int) (signed char)-98)) : (((/* implicit */int) (signed char)-76))))));
                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0] [i_1]))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 3238943903U)))))))) : (max((arr_0 [i_0] [3U]), (((/* implicit */unsigned int) arr_3 [i_1] [i_0]))))));
            }
        } 
    } 
}
