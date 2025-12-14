/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97819
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        arr_10 [18] [2] [18] [i_3] [i_0] = -4096;
                        arr_11 [i_0] [i_0] [i_0] [i_3] [i_0] [i_1] = 4600;
                        var_17 = (max(var_17, -4096));
                    }
                }
            }
            arr_12 [9] |= max((max(-2787, 8291)), 14352);
            var_18 = (max(var_18, (-4519 | -27432)));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            var_19 = 7911;
            arr_16 [i_0] = -32748;
        }

        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            arr_19 [i_0] [i_5] = -15317;
            arr_20 [6] [i_5] [i_5] = (min((4084 & 31510), -4095));
            arr_21 [i_5] = -32748;
        }
        arr_22 [i_0] = ((-22835 != (-32767 - 1)));
        arr_23 [i_0] = 2046;
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                {
                    var_20 = min((max((-22155 > -1), 27253)), 4095);
                    var_21 = -9110;
                    arr_31 [i_7] = (min(8376, 14347));
                    var_22 = (max(var_22, 7469));
                }
            }
        }
    }
    var_23 -= (max(-4081, 3968));
    #pragma endscop
}
