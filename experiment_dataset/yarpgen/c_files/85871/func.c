/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85871
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 19; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */int) min((((/* implicit */long long int) ((unsigned short) max((var_2), (((/* implicit */long long int) arr_1 [i_0])))))), (((arr_0 [i_2] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
                    var_14 = max(((~(arr_2 [i_0 - 1] [i_2]))), (((/* implicit */unsigned long long int) ((long long int) ((short) var_11)))));
                }
            } 
        } 
    } 
    var_15 = max((var_1), (var_5));
}
