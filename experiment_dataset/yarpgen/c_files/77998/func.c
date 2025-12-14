/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77998
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
    var_20 *= ((/* implicit */short) var_16);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (!(arr_0 [i_0] [i_1]))))));
                var_22 -= ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)100))) >= (var_18)))) >> (((/* implicit */int) ((((/* implicit */int) var_15)) > (((/* implicit */int) arr_0 [i_0] [i_0]))))));
                var_23 = (+(max((268427264U), (((/* implicit */unsigned int) (unsigned short)52189)))));
            }
        } 
    } 
    var_24 = ((/* implicit */short) (((!(((/* implicit */_Bool) ((int) (unsigned short)4550))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 1029175751)) ? (((/* implicit */int) (unsigned short)31695)) : (((/* implicit */int) (unsigned short)18408)))))));
}
