/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91358
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_13 = (min(var_13, ((min(var_10, (((arr_1 [i_0]) | var_7)))))));
        var_14 = (min(((-(((arr_0 [i_0] [i_0]) ? -49 : -233988099)))), (!var_4)));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_15 = (max(var_15, ((((arr_4 [i_1]) ? (arr_4 [i_0]) : (arr_4 [i_1]))))));
            arr_5 [i_1] [i_1] = (arr_4 [15]);
        }
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            arr_8 [i_2] [i_2] [i_0] = ((((((-((var_3 << (-1300381318165762395 + 1300381318165762418))))) + 2147483647)) << (((!1665) << ((((1 ? 63872 : 64131)) - 63845))))));
            arr_9 [1] [i_2] [i_2] = ((((var_9 / (((arr_6 [i_2]) ? 1300381318165762366 : (arr_0 [i_2] [i_2]))))) >> (arr_6 [i_0])));
            arr_10 [i_0] [i_0] = (arr_0 [i_0] [i_2]);
        }
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            arr_15 [i_3] = ((var_10 ? (arr_14 [i_3] [i_4]) : (max(var_6, var_4))));
            arr_16 [i_3] [i_3] [i_4] = 1300381318165762356;
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            var_16 = (min(var_16, (((64114 << (1300381318165762389 - 1300381318165762386))))));
            var_17 = (max(var_17, ((((!9223372036854775807) != 3936334087)))));
            var_18 = (~var_0);
            var_19 = (((arr_19 [i_3] [i_5]) ? var_6 : var_7));
        }

        /* vectorizable */
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                var_20 = (((arr_21 [i_3] [i_6] [i_7]) >= (arr_21 [i_3] [i_6] [i_7])));
                var_21 = ((-(arr_18 [i_3] [i_6])));
                var_22 = ((-(arr_18 [i_6] [i_6])));

                for (int i_8 = 0; i_8 < 22;i_8 += 1) /* same iter space */
                {
                    arr_26 [i_8] [i_7] [i_6] [i_3] = (((!var_10) ? var_7 : var_1));
                    var_23 = var_8;
                    var_24 = ((!((((arr_19 [i_8] [i_6]) ? var_7 : var_2)))));
                }
                for (int i_9 = 0; i_9 < 22;i_9 += 1) /* same iter space */
                {
                    arr_29 [i_3] [11] [i_6] [i_3] [i_3] [i_3] = ((39 ? (arr_11 [i_9]) : var_4));
                    var_25 = var_2;
                    arr_30 [i_3] [i_9] [10] [i_9] [i_3] = ((arr_23 [i_3] [i_6] [i_7]) ^ (((arr_13 [i_3] [4]) ? var_10 : var_7)));
                    var_26 = (!var_8);
                }
            }
            var_27 = ((~var_1) >> (((arr_17 [19] [i_3] [i_6]) & var_2)));
            var_28 = (((!var_0) ? (arr_13 [i_6] [i_3]) : (((24679 ? var_0 : var_10)))));
            var_29 = ((!(((var_4 >> (var_9 - 41302))))));
        }
        /* vectorizable */
        for (int i_10 = 2; i_10 < 19;i_10 += 1)
        {
            arr_34 [i_3] [i_10] = var_6;
            var_30 -= (~var_4);
        }
        /* vectorizable */
        for (int i_11 = 2; i_11 < 21;i_11 += 1)
        {
            var_31 -= (~var_2);
            var_32 = 5428957404376766069;
            var_33 = (((52898 ? var_5 : 12641)) - var_5);
        }
    }
    for (int i_12 = 0; i_12 < 10;i_12 += 1)
    {
        var_34 = ((-((-(arr_38 [i_12])))));
        arr_40 [i_12] = ((((min((arr_35 [16]), var_9))) ? (arr_35 [0]) : -var_12));
        arr_41 [i_12] = (((arr_0 [i_12] [i_12]) ? (arr_38 [8]) : (max((((arr_39 [i_12]) ? (arr_18 [i_12] [i_12]) : var_10)), (min(var_7, var_4))))));
    }
    var_35 = (min(var_35, var_11));
    var_36 -= (((~108) ^ (min((!1), (max(var_12, var_1))))));
    var_37 = var_0;
    var_38 = (max(var_38, ((((((204 ? 12641 : 1649))) && ((((52907 ? 12638 : 12657)))))))));
    #pragma endscop
}
