/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            var_14 = (arr_4 [i_1]);
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 13;i_4 += 1)
                    {
                        {
                            var_15 = (max((max(var_13, ((-94 ? var_10 : var_9)))), var_0));
                            var_16 = -94;
                        }
                    }
                }
            }
            var_17 = ((((94 ? (~-91) : (arr_4 [i_1]))) >= (((max(87, (arr_5 [i_0] [8])))))));
        }
        var_18 -= (arr_9 [i_0] [i_0] [i_0] [0] [i_0] [i_0]);

        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 0;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        {
                            var_19 = ((!((((((94 ? -94 : 94))) ? (arr_18 [i_8] [i_8] [i_8]) : ((1388575916 ? (arr_9 [i_0] [i_0] [i_0 + 2] [i_0] [i_0 + 2] [i_0]) : (arr_1 [i_0]))))))));
                            var_20 -= 65535;
                        }
                    }
                }
            }
            var_21 = (arr_0 [i_5]);
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {

            for (int i_10 = 0; i_10 < 14;i_10 += 1)
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 14;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 14;i_12 += 1)
                    {
                        {
                            var_22 = (arr_9 [i_12] [i_12] [i_0] [i_0] [i_9] [i_0]);
                            var_23 -= (arr_32 [i_0]);
                            var_24 = -121;
                        }
                    }
                }
                var_25 = (arr_26 [i_0 + 3] [i_0 + 4]);
            }
            var_26 = (((((arr_21 [i_9] [i_9] [i_0] [i_0]) && var_2)) || (arr_17 [i_9] [i_0] [i_0] [i_0])));
            var_27 = (max(var_27, (arr_4 [i_0])));
        }
        /* LoopNest 3 */
        for (int i_13 = 3; i_13 < 13;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 14;i_15 += 1)
                {
                    {
                        var_28 = (min(var_28, (((var_13 ? 1 : (max(2906391379, -94)))))));
                        var_29 = ((+(max((arr_2 [i_0 + 2]), ((var_1 ? var_9 : 0))))));
                        var_30 = ((-(max(((-(arr_6 [i_0] [i_14] [i_14]))), (((arr_13 [i_0] [i_13 - 2] [i_13 - 1] [i_15] [i_0 + 1] [i_15]) ? -89 : (arr_34 [i_0] [4] [i_14] [i_15])))))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_16 = 0; i_16 < 1;i_16 += 1)
    {
        var_31 = (~var_3);
        var_32 = (max(var_32, (((-(arr_43 [i_16]))))));
        var_33 = (!13135);
        var_34 = (max(var_34, 2147483631));
    }
    for (int i_17 = 0; i_17 < 19;i_17 += 1)
    {
        var_35 -= ((((min((arr_44 [i_17] [i_17]), -121))) ? (arr_44 [i_17] [i_17]) : 9595));
        var_36 = min(120, (((!((var_2 && (arr_44 [i_17] [i_17])))))));
        var_37 = (arr_45 [i_17]);
    }
    var_38 = var_10;
    #pragma endscop
}
