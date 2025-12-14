/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63780
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((1880924642 ? var_5 : -35));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_17 = 33;

        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        var_18 = ((25 ? (arr_6 [i_0] [i_0] [i_1]) : 1));
                        arr_11 [i_3] [i_3] [i_2] [i_1] [i_0] [15] = (((-22230 ? ((-1294807882 ? 13231163629946171779 : (arr_3 [i_0]))) : -22244)));
                    }
                }
            }
            var_19 = -3284383429235636057;
            var_20 = 22221;
        }
        /* vectorizable */
        for (int i_4 = 3; i_4 < 21;i_4 += 1)
        {
            var_21 = (arr_10 [i_4] [i_4] [i_4]);
            arr_15 [i_4] [i_4] [i_4] = arr_6 [i_0] [1] [i_4];
            arr_16 [i_0] [i_4] [4] &= (arr_14 [16] [i_4 - 2]);
            var_22 = 7615097648326759333;
            var_23 = (arr_13 [i_0]);
        }
    }
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        var_24 = ((((-127 - 1) ? (arr_17 [i_5]) : (arr_17 [i_5]))));
        var_25 -= (arr_18 [8]);
    }
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        arr_21 [i_6] = (arr_19 [4] [i_6]);
        arr_22 [i_6] = 1;
        arr_23 [4] &= (((((7615097648326759335 ? 1859100597 : ((-22244 ? (arr_7 [i_6] [i_6] [i_6] [i_6]) : -35))))) ? -832525309 : -305164305));
        var_26 = (min(var_26, (((((arr_3 [20]) ? (arr_12 [i_6]) : (arr_4 [i_6])))))));
        arr_24 [12] &= 6664;
    }
    var_27 -= 1880924642;
    var_28 = 22245;
    #pragma endscop
}
