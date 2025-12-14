/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66429
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_9;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = (min(-var_9, (arr_1 [18] [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        var_17 = 1882233685;
                        var_18 -= -381249565;
                    }
                }
            }
        }
        arr_12 [i_0] = ((var_3 ? ((+(((arr_7 [i_0] [i_0] [i_0] [i_0]) ? var_11 : (arr_9 [i_0] [i_0] [i_0] [i_0]))))) : var_10));
        var_19 = (max(((min((~var_12), (((arr_3 [i_0] [i_0] [i_0]) | (arr_11 [i_0] [4] [i_0] [i_0] [i_0] [i_0])))))), (((arr_8 [i_0] [i_0] [i_0] [i_0]) ? ((max(var_7, (arr_11 [i_0] [i_0] [i_0] [15] [i_0] [17])))) : var_10))));
        var_20 = (max((max((arr_9 [i_0] [i_0] [i_0] [i_0]), ((var_3 ? (arr_9 [i_0] [i_0] [i_0] [i_0]) : 1)))), (!var_9)));
    }
    #pragma endscop
}
