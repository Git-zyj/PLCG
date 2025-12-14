/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89183
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
    for (unsigned short i_0 = 4; i_0 < 24; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_4) : (var_4)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_0)) : (var_10))) : (((/* implicit */int) ((unsigned char) var_2)))));
                    arr_7 [i_0] [i_1] [1U] [i_1] = var_3;
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((int) var_6));
                    arr_9 [i_0 - 3] [i_1] [(unsigned short)8] = ((/* implicit */unsigned int) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_7)))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */int) var_0);
    var_13 = ((/* implicit */int) var_8);
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (var_4) : (((int) var_4))));
}
