/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72918
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_14 = ((/* implicit */_Bool) arr_1 [i_0]);
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
        var_15 ^= ((/* implicit */unsigned int) (signed char)12);
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)12))));
        arr_7 [i_1] = ((/* implicit */_Bool) var_13);
        var_17 = ((/* implicit */unsigned int) ((((((/* implicit */int) ((_Bool) var_4))) << ((((~(arr_6 [i_1]))) - (3791259422515159541LL))))) & (((/* implicit */int) var_6))));
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 19; i_2 += 4) 
    {
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_18 = ((/* implicit */unsigned int) (unsigned char)138);
            var_19 = ((/* implicit */short) (+(((/* implicit */int) arr_12 [i_2] [i_3] [i_2]))));
        }
        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((((/* implicit */unsigned long long int) var_7)) > (var_9))) || (((/* implicit */_Bool) (+(((/* implicit */int) (short)7168))))))))));
    }
    var_21 = ((/* implicit */unsigned int) (signed char)-24);
    var_22 -= ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-24)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((min(((signed char)-14), ((signed char)-23))), (((/* implicit */signed char) ((((/* implicit */_Bool) 3840641460189896357LL)) || (((/* implicit */_Bool) var_3))))))))) : (var_9)));
    var_23 = ((/* implicit */signed char) var_7);
}
