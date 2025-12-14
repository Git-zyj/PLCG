/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67713
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
    var_14 = ((/* implicit */_Bool) min((((/* implicit */short) var_5)), (var_1)));
    var_15 = ((/* implicit */unsigned short) (-((+(((/* implicit */int) var_2))))));
    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) var_2))));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_0 - 2] [i_1] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)51352))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)14183)) < (((/* implicit */int) ((unsigned char) (unsigned char)220)))))) : (((((/* implicit */int) ((((/* implicit */_Bool) -1730735412)) || (((/* implicit */_Bool) arr_4 [i_0 + 1] [i_1] [i_0 + 1]))))) % (((/* implicit */int) ((short) arr_2 [i_2] [i_1] [i_2])))))));
                    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) arr_5 [i_0] [i_0] [i_2] [1U]))));
                }
            } 
        } 
    } 
}
