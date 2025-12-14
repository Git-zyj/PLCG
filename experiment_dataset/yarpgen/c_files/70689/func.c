/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70689
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
    var_19 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1180434203)) ? (((((/* implicit */int) (signed char)127)) % (((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((9203415920007921694LL) > (((/* implicit */long long int) 1310869240U))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
    var_20 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) 1180909298)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_21 = (~((~(((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 2])))));
                var_22 = ((/* implicit */int) (~(min((((((/* implicit */_Bool) 2567966066U)) ? (((/* implicit */unsigned int) arr_6 [(unsigned char)1] [(unsigned char)1])) : (4039048871U))), (min((2145530700U), (var_12)))))));
            }
        } 
    } 
    var_23 = ((/* implicit */short) var_7);
}
