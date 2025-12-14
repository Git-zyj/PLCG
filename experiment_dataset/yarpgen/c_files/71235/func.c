/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71235
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (long long int i_2 = 4; i_2 < 14; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */_Bool) max((1614547545), (((/* implicit */int) (_Bool)0))));
                    arr_6 [i_0] [i_1] [i_2] [(short)6] &= ((long long int) arr_4 [i_2 - 3] [(unsigned short)10] [i_2 - 4] [i_2 - 4]);
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned char) max((((var_4) ? (((var_13) + (((/* implicit */unsigned long long int) 4194304)))) : (((((/* implicit */_Bool) var_10)) ? (var_7) : (((/* implicit */unsigned long long int) 777355803U)))))), (((/* implicit */unsigned long long int) (_Bool)1))));
}
