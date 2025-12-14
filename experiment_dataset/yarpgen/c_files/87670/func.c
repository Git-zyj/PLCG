/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87670
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
    var_20 = ((/* implicit */long long int) var_12);
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 17; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) (unsigned short)59552))) || (((/* implicit */_Bool) arr_0 [i_0 - 2])))))));
                    var_22 ^= ((/* implicit */int) var_19);
                    arr_7 [i_1] [i_1] [i_1] = ((/* implicit */signed char) min((min((((/* implicit */unsigned short) (signed char)-55)), (min(((unsigned short)59551), (((/* implicit */unsigned short) (signed char)7)))))), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_2 [i_0] [i_1] [i_2]), (996382682)))) && (((/* implicit */_Bool) ((signed char) arr_3 [i_0]))))))));
                }
            } 
        } 
    } 
    var_23 = var_14;
    var_24 = ((/* implicit */int) var_15);
    var_25 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (signed char)3)) : (((/* implicit */int) var_0)))))))));
}
