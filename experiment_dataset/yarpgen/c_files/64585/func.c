/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64585
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
    var_19 = ((/* implicit */unsigned short) (~(var_12)));
    var_20 = ((/* implicit */unsigned short) max((((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) % (var_12))), (4294967295U)));
    var_21 = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) (unsigned short)44587))))), (((953206320U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65427)))))))) ? (min((((/* implicit */unsigned int) var_10)), (var_14))) : (var_16));
    var_22 = ((/* implicit */unsigned int) ((var_15) == (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) var_2))) + (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            {
                var_23 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */int) var_0)) + (((/* implicit */int) var_4))))) ? (((/* implicit */int) ((unsigned short) 4294967295U))) : ((-(((/* implicit */int) (unsigned short)40932)))))) != (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63805))) >= (arr_3 [i_1 + 2] [i_1]))))));
                arr_5 [i_1] = ((arr_1 [18U] [18U]) & (((/* implicit */unsigned int) (-(((/* implicit */int) arr_2 [i_1 - 1]))))));
            }
        } 
    } 
}
