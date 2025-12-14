/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77188
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned char i_2 = 3; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_0] [i_2 - 3] [i_2] = var_5;
                    var_14 = ((/* implicit */unsigned int) min((var_14), (((((/* implicit */_Bool) var_4)) ? (((var_6) * (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))))) : (min((var_0), (((/* implicit */unsigned int) arr_3 [i_0]))))))));
                    var_15 &= arr_0 [i_1];
                    var_16 = arr_5 [i_2 - 1] [i_2 - 1] [i_2] [i_2 - 1];
                }
            } 
        } 
    } 
    var_17 = var_7;
    var_18 = ((/* implicit */unsigned char) min((((((/* implicit */unsigned int) ((/* implicit */int) var_5))) | (min((var_4), (((/* implicit */unsigned int) var_12)))))), (((/* implicit */unsigned int) (unsigned short)18))));
    var_19 = ((/* implicit */_Bool) var_9);
}
