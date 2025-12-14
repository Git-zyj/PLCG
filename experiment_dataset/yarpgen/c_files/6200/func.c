/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6200
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
    var_20 = ((/* implicit */unsigned short) max(((~(((/* implicit */int) ((signed char) (unsigned short)51971))))), (((/* implicit */int) var_8))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 23; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */unsigned char) min((((/* implicit */int) max((((/* implicit */unsigned short) var_14)), (arr_3 [i_0] [i_0])))), (((arr_1 [i_0 - 3]) ? (((/* implicit */int) arr_1 [i_0 - 2])) : (((/* implicit */int) arr_1 [i_0 + 1]))))));
                arr_4 [5U] [i_0 - 3] = ((/* implicit */unsigned char) ((min((((var_19) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)81)))), ((+(((/* implicit */int) var_14)))))) - (((/* implicit */int) (signed char)123))));
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */signed char) max(((!(((_Bool) var_17)))), ((!(((/* implicit */_Bool) ((unsigned char) var_10)))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_0))))))) ? ((+(((/* implicit */int) ((((/* implicit */int) var_7)) > (((/* implicit */int) var_14))))))) : (((/* implicit */int) ((((((/* implicit */int) var_16)) << (((((/* implicit */int) (signed char)123)) - (115))))) == (((/* implicit */int) max((var_12), (((/* implicit */unsigned short) var_14))))))))));
}
