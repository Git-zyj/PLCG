/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63590
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_0;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_13 = (arr_1 [i_0]);
        var_14 -= (min((arr_1 [i_0]), (((!3890396530) ? 404570757 : ((((404570757 && (arr_1 [2])))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    arr_8 [5] [i_1] [i_2] [i_2 + 1] = (arr_3 [i_2 + 1] [i_2 + 1]);
                    var_15 = 1570490627;
                    arr_9 [i_2] [i_2] [i_2 + 1] = 32768;
                }
            }
        }
        var_16 = ((-593034393 & (((!((((arr_1 [i_0]) ? -2623 : (arr_7 [i_0] [i_0] [i_0] [1])))))))));
    }
    #pragma endscop
}
