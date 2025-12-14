/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87112
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_13 = 1;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            var_14 = var_1;
                            var_15 = -5098402281390542885;
                            arr_12 [i_0] [i_1] [i_0] [i_3] [i_4] [i_4] = var_6;
                            arr_13 [i_0] [i_1] [i_0] [i_3] [i_4] = -107;
                            var_16 = var_8;
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            var_17 = -6085924585497487002;
                            var_18 = 6085924585497487005;
                        }
                        var_19 = var_2;

                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            arr_19 [i_0] [i_1] [i_2] [i_2] [8] [i_3] [i_6] |= 1103840443;
                            var_20 = 139;
                        }
                        var_21 = var_8;
                    }
                }
            }
        }
        var_22 &= 182;
        arr_20 [i_0] = var_3;
        var_23 = var_1;
    }
    for (int i_7 = 2; i_7 < 9;i_7 += 1)
    {
        arr_24 [i_7 - 1] = -6085924585497487006;

        /* vectorizable */
        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            arr_27 [i_7] [i_8] = 49;
            var_24 = (min(var_24, 18446744073709551589));
        }
        arr_28 [i_7 - 1] = var_10;
        arr_29 [i_7 + 2] &= var_8;
        var_25 = var_5;
    }
    for (int i_9 = 0; i_9 < 21;i_9 += 1)
    {
        var_26 -= 12370195937522215784;
        arr_34 [i_9] = 1179896739;
        arr_35 [i_9] [i_9] = var_4;
    }
    for (int i_10 = 0; i_10 < 13;i_10 += 1)
    {
        var_27 = var_5;
        var_28 = var_2;
        var_29 = var_1;
        var_30 |= var_7;
    }

    for (int i_11 = 0; i_11 < 25;i_11 += 1)
    {
        var_31 = (max(var_31, var_4));
        var_32 = (max(var_32, 3845328329));
        var_33 = var_12;
    }
    for (int i_12 = 0; i_12 < 11;i_12 += 1)
    {

        for (int i_13 = 0; i_13 < 11;i_13 += 1)
        {
            var_34 = (min(var_34, var_12));
            arr_45 [i_12] [i_12] [i_13] = var_8;
            var_35 = var_2;
            var_36 = 1;
        }

        /* vectorizable */
        for (int i_14 = 0; i_14 < 11;i_14 += 1)
        {
            arr_48 [i_12] [i_12] [10] = var_7;
            var_37 = var_7;
        }
        arr_49 [i_12] = var_9;
        var_38 = var_9;
        var_39 = var_6;
    }
    var_40 = 7188252085869517624;
    var_41 = (max(var_41, 62745));
    var_42 = var_8;
    #pragma endscop
}
