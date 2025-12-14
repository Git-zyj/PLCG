/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= (max(((var_13 ? ((var_8 ? var_8 : var_15)) : (!var_7))), ((min(var_12, 19892)))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_18 = var_15;
                var_19 = (min(var_19, var_9));
                arr_5 [i_0] = (((((max(var_2, 0)))) | (arr_3 [i_0])));
                var_20 = ((-(arr_4 [i_1] [i_0])));
            }
        }
    }
    var_21 = (max(var_6, (((var_3 && (((23 ? var_12 : var_3))))))));
    var_22 &= max((min((-6339856117983412156 / 65535), var_3)), (((((max(233, 65530))) ? -var_16 : ((var_3 ? var_8 : var_2))))));
    #pragma endscop
}
