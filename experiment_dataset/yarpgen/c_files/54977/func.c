/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54977
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
    var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_1))));
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 8; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */signed char) (-(((/* implicit */int) arr_3 [i_0] [i_0 + 2]))));
                var_22 = ((/* implicit */int) max((var_22), ((~(((/* implicit */int) (signed char)127))))));
                var_23 = ((/* implicit */unsigned short) min((var_23), (((unsigned short) ((((/* implicit */_Bool) (short)-29959)) ? (-4188318341992220367LL) : (((/* implicit */long long int) ((/* implicit */int) (short)0))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((int) (signed char)63)) : (var_7)));
    var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) (short)-10423)) ? (4854587506418904143LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)88))))))));
}
