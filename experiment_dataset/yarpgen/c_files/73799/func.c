/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73799
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
    var_20 -= ((/* implicit */unsigned int) (-(((/* implicit */int) var_13))));
    var_21 = ((/* implicit */unsigned short) min((((/* implicit */int) var_13)), (((((/* implicit */_Bool) (-(-1302665394)))) ? ((~(((/* implicit */int) (short)-22089)))) : (((/* implicit */int) min((var_17), ((unsigned short)8192))))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 17; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_11))))) + (((/* implicit */int) max((((/* implicit */short) arr_1 [i_0 - 4] [i_1])), (var_4))))));
                var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) (short)-9037))));
                var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_10) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (((((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 4])) >> (((((/* implicit */int) arr_2 [i_0 - 3] [i_0 - 3])) - (123))))) : ((-(((/* implicit */int) arr_2 [i_0 + 1] [i_0 - 4]))))));
                var_24 = ((/* implicit */_Bool) var_3);
            }
        } 
    } 
    var_25 = ((min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)22089)))), (((/* implicit */int) var_1)))) | (((((/* implicit */_Bool) (short)22080)) ? (((/* implicit */int) max(((unsigned short)65523), (((/* implicit */unsigned short) (short)22089))))) : (((/* implicit */int) var_13)))));
}
