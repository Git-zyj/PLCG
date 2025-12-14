/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8041
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) (((_Bool)0) ? (1372575931U) : (((/* implicit */unsigned int) 53846778)))))));
                arr_6 [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) (((+(((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_1])) : (((/* implicit */int) arr_3 [i_0] [i_0] [6])))))) / (((/* implicit */int) arr_1 [i_1]))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */int) var_6)) + ((-(((/* implicit */int) ((short) var_9)))))));
    var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned short) 1372575931U))))))));
}
