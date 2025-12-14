/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66555
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
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_10 = arr_0 [i_0] [i_0];
                    var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) arr_0 [(unsigned char)4] [(unsigned char)4]))));
                    var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) arr_8 [i_0] [i_1]))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */_Bool) var_3);
}
