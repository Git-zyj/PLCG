/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64766
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
    var_11 = ((/* implicit */unsigned int) min((min(((short)-1), (((/* implicit */short) (signed char)-57)))), (((/* implicit */short) (signed char)-17))));
    var_12 = var_2;
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)22))) & (391021436U))))));
                arr_6 [i_0] [5U] [i_0] = ((/* implicit */signed char) arr_4 [4U] [i_0] [(signed char)1]);
                arr_7 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (-(3903945859U)))) ? (((((/* implicit */_Bool) ((((((/* implicit */int) arr_0 [i_0] [i_0])) + (2147483647))) << (((((/* implicit */int) (signed char)67)) - (67)))))) ? ((+(((/* implicit */int) arr_0 [(short)1] [(signed char)8])))) : ((~(((/* implicit */int) (short)-1)))))) : (((/* implicit */int) (signed char)-67))));
            }
        } 
    } 
    var_14 = var_8;
}
