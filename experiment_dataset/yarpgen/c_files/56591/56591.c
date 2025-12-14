/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56591
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 6;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 9;i_3 += 1)
                {
                    {
                        var_17 = ((((!(arr_6 [i_3 + 1] [i_1] [i_0]))) ? ((((!(((23953 ? var_10 : 41582))))))) : (arr_5 [i_0] [i_0] [1])));
                        arr_12 [i_0] [i_1] [6] = (arr_8 [i_0] [i_1] [i_2 + 3] [i_3 - 1]);
                    }
                }
            }
        }
        var_18 = (min(var_18, (arr_11 [i_0])));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_19 ^= (arr_14 [i_4] [i_4]);
        var_20 = (arr_13 [i_4] [i_4]);
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 22;i_7 += 1)
            {
                {
                    arr_25 [i_5] [i_6 - 1] [i_7 + 1] [i_7] = arr_16 [i_6 + 1];
                    var_21 = (~((18446744073709551607 ? (arr_23 [i_6 - 1] [i_6] [i_6] [i_7]) : (arr_23 [i_5] [i_6] [4] [i_6 - 1]))));
                }
            }
        }
    }
    var_22 = ((!(((-11659263921483748114 ? var_10 : ((max(var_1, 1))))))));
    #pragma endscop
}
