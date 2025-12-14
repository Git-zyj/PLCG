/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58298
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
    var_15 = ((/* implicit */int) 4184466444U);
    var_16 = ((int) min((min((4184466444U), (var_3))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 110500851U)) ? (((/* implicit */int) var_2)) : (var_8))))));
    var_17 *= ((/* implicit */int) (!(((((/* implicit */_Bool) 3417695461U)) || (((/* implicit */_Bool) 3926521440U))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */signed char) 190747506);
                var_18 ^= ((((/* implicit */_Bool) ((905738491U) / (3417695447U)))) ? (4044131432U) : (((/* implicit */unsigned int) arr_0 [i_0] [i_1])));
                var_19 = ((/* implicit */int) min((3417695461U), (4184466449U)));
                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 363373503)) && (((4184466432U) <= (3417695448U))))) || (((((((/* implicit */unsigned int) -195073215)) / (1330123876U))) == (min((4184466446U), (var_10))))))))));
            }
        } 
    } 
}
