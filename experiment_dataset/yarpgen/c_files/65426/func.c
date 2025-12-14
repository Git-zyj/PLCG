/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65426
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
    var_15 = ((unsigned short) ((signed char) var_1));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            for (unsigned char i_2 = 3; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_8 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((unsigned long long int) arr_4 [i_2 - 2] [i_2 - 2] [i_1])) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_2 - 2] [i_2 + 1] [i_1])) | (((/* implicit */int) arr_6 [i_2 - 1] [i_2 - 2] [i_1] [i_2 - 1])))))));
                    arr_9 [i_1] [i_2] [i_1] [i_2] = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_1] [i_1] [i_1]))))) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_1])) : (((/* implicit */int) ((unsigned char) arr_6 [i_0] [i_1 + 4] [i_1] [i_2 - 2]))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned int) var_0);
}
