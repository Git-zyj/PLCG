/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72219
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 4; i_1 < 18; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 19; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) ((arr_8 [i_2] [i_1] [i_0]) >= (((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_2]))) <= (arr_2 [i_0])))), (((((/* implicit */int) arr_4 [i_0] [i_1])) | (((/* implicit */int) var_4)))))))));
                    var_17 = ((/* implicit */signed char) arr_5 [i_2 - 2] [i_1] [i_0]);
                    var_18 += (!(((/* implicit */_Bool) (short)30489)));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) var_15))));
}
