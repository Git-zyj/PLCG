/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77009
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_0] [(_Bool)1] = ((/* implicit */unsigned char) (((((_Bool)1) && (arr_3 [i_0] [i_1] [i_0]))) || (((/* implicit */_Bool) ((arr_3 [i_0] [i_1] [i_0]) ? (arr_7 [i_0] [i_1] [(short)2] [i_2]) : (-4716724519916246561LL))))));
                    arr_10 [i_0] = ((/* implicit */int) (((((+(var_10))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_2]))))) + (((/* implicit */unsigned long long int) 4716724519916246560LL))));
                }
            } 
        } 
    } 
    var_18 = var_6;
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? ((+(var_9))) : (((/* implicit */long long int) var_16))));
}
