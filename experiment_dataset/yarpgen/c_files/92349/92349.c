/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92349
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_16 = -1;
        var_17 = (min(var_17, (arr_1 [i_0])));
        var_18 = ((1 ? (arr_0 [i_0]) : 2807822240659006630));
        arr_2 [i_0] = (!2807822240659006630);
        arr_3 [i_0] = 33;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_19 = (~2807822240659006630);
            arr_9 [i_1] = ((arr_8 [i_2] [i_2] [i_1]) ? 1 : (arr_8 [i_1] [i_2] [i_2]));
        }
        for (int i_3 = 4; i_3 < 22;i_3 += 1)
        {
            arr_13 [i_1] [i_3] = (arr_8 [i_3 - 1] [i_3 + 1] [i_3]);
            arr_14 [i_1] [i_1] = (((arr_7 [i_3 - 4]) ? (arr_11 [i_3 - 1] [i_3 - 1]) : (((arr_10 [i_1] [i_1] [i_1]) | 33))));
            arr_15 [i_1] [i_3 + 1] [i_3] = (!1);
            /* LoopNest 3 */
            for (int i_4 = 2; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 21;i_6 += 1)
                    {
                        {
                            arr_26 [i_1] [i_3] [i_3] [i_5] [i_6] |= (arr_1 [i_6 - 2]);
                            arr_27 [14] [14] [i_4] [i_4] = (((arr_25 [i_1] [i_1]) / -2807822240659006631));
                            var_20 |= var_2;
                        }
                    }
                }
            }
            arr_28 [i_1] [i_1] [i_1] = ((2807822240659006609 ? (arr_5 [i_1] [i_1]) : (arr_4 [i_3 - 2])));
        }
        arr_29 [i_1] [i_1] = 2807822240659006656;
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
    {
        arr_33 [i_7] = (((2807822240659006643 - var_2) & 840597350));
        var_21 = (min(var_21, (64 & 1)));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 12;i_8 += 1)
    {
        var_22 &= ((2807822240659006611 + var_5) ? (arr_37 [i_8] [i_8]) : 1);
        var_23 = (((-840597351 / -1648208281989423884) >> (-2107568934 + 2107568960)));
        arr_38 [1] = (((arr_22 [18] [i_8] [5] [10] [i_8]) ? (arr_31 [8]) : (arr_1 [i_8])));
    }
    var_24 *= min((((var_9 ? var_4 : var_5))), var_11);
    var_25 = ((((((!1) % 840597354))) ? 2372957467 : var_6));
    #pragma endscop
}
