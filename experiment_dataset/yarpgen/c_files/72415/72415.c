/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72415
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= (min(-var_11, (var_7 + var_6)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_0] [16] [i_0] = (~-1765516923121069936);

                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    arr_8 [i_0] [5] [i_0] [i_0] = (((arr_4 [i_0]) - (arr_0 [i_0 + 1])));
                    var_18 = ((~((var_5 % (~-1765516923121069935)))));
                    var_19 = (min(var_19, 223));
                }
                /* vectorizable */
                for (int i_3 = 3; i_3 < 15;i_3 += 1)
                {
                    var_20 *= var_16;
                    arr_13 [i_0] [i_0] = (~var_10);
                }
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    var_21 = (min(var_21, 27582));
                    arr_16 [i_0] [i_1] [i_0] = (arr_10 [i_0 + 1] [i_0 + 1] [i_0] [i_4]);
                    arr_17 [i_0] [16] &= (arr_0 [i_1 + 3]);
                }
                var_22 = (arr_2 [i_0]);
            }
        }
    }
    var_23 = (var_14 && var_11);
    var_24 += (~-1740965037);
    #pragma endscop
}
