/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76855
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = (max(var_13, (((!((max(64, 47049))))))));
        var_14 = min((arr_2 [i_0]), (min(var_0, (max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 23;i_3 += 1)
            {
                {
                    var_15 += ((-(arr_3 [i_2] [14])));
                    var_16 = (max(var_16, (arr_5 [i_3 - 1] [i_3 + 1] [10])));
                }
            }
        }
        arr_9 [i_1] [i_1] = var_8;

        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            arr_12 [i_1] [i_4] = 1;
            var_17 = (max(var_17, var_2));
            arr_13 [i_1] [18] = (arr_7 [i_1] [i_4] [i_1]);
        }
        for (int i_5 = 1; i_5 < 22;i_5 += 1)
        {
            var_18 -= 54;
            arr_16 [i_5] [i_1] [i_1] = var_2;
            arr_17 [i_1] [i_1] = var_10;
            var_19 = var_2;
        }
        for (int i_6 = 3; i_6 < 23;i_6 += 1)
        {
            var_20 += (arr_15 [i_6 - 3] [i_6 - 3]);

            for (int i_7 = 1; i_7 < 20;i_7 += 1)
            {

                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    arr_24 [i_1] [i_1] [i_6 - 1] [i_1] [i_7] [i_8] = (arr_11 [i_1]);
                    arr_25 [i_1] [i_6 - 2] [i_6 - 2] [i_1] = var_4;
                    var_21 |= 45655757;
                }
                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {

                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        arr_30 [i_1] [i_6] [i_7 + 3] [i_6] [i_10] = var_2;
                        arr_31 [i_7] [i_7] [i_7 + 3] [i_9] [i_1] = 3306572357626671463;
                    }
                    for (int i_11 = 0; i_11 < 24;i_11 += 1)
                    {
                        var_22 = (arr_35 [i_7 - 1] [i_7] [i_7] [i_7] [i_7 + 2]);
                        arr_36 [i_1] [i_1] [i_1] = (arr_35 [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_6] [i_6 - 1]);
                        var_23 *= 1;
                    }
                    var_24 -= var_3;
                    arr_37 [1] [i_1] [i_1] = 0;
                    var_25 -= ((~(arr_23 [i_1] [i_6 + 1] [i_7 - 1] [i_7 - 1])));
                }
                var_26 -= (~45655746);

                for (int i_12 = 0; i_12 < 24;i_12 += 1)
                {
                    var_27 = (max(var_27, -1031908733784760369));
                    arr_40 [i_1] [i_6] [i_7 + 2] [i_1] = var_0;
                    var_28 = (max(var_28, var_5));
                    var_29 = 1;
                    arr_41 [i_1] [i_1] [i_1] [i_12] = var_7;
                }
                for (int i_13 = 2; i_13 < 22;i_13 += 1)
                {
                    arr_44 [i_1] [i_6 - 3] [i_1] [2] [5] = (arr_6 [i_6 + 1] [i_6 - 3] [i_7 + 4]);

                    for (int i_14 = 2; i_14 < 22;i_14 += 1)
                    {
                        arr_48 [i_14] [i_1] [i_7 + 3] [i_1] [i_1] = 0;
                        var_30 = (max(var_30, 2462565879856765105));
                    }
                    for (int i_15 = 3; i_15 < 23;i_15 += 1)
                    {
                        arr_51 [i_1] [i_1] = (~var_8);
                        arr_52 [i_1] [i_6] [i_6] [i_7] [i_13] [i_15] = var_12;
                        var_31 = (max(var_31, (arr_29 [i_1] [i_1] [2] [i_1] [i_1])));
                        var_32 = (max(var_32, -1031908733784760369));
                    }
                    var_33 = 51638;
                }
                for (int i_16 = 3; i_16 < 22;i_16 += 1)
                {
                    var_34 = var_6;

                    for (int i_17 = 0; i_17 < 24;i_17 += 1) /* same iter space */
                    {
                        var_35 = ((-(!6)));
                        var_36 = ((~(arr_23 [i_17] [i_6 - 1] [i_17] [i_6 - 1])));
                        arr_57 [i_1] [i_1] = ((~(arr_29 [i_1] [i_1] [i_1] [i_1] [i_1])));
                        arr_58 [i_1] [i_6] [i_16 + 2] = (~var_5);
                    }
                    for (int i_18 = 0; i_18 < 24;i_18 += 1) /* same iter space */
                    {
                        var_37 = (+-184);
                        arr_63 [i_1] [i_6 - 1] = 1;
                        var_38 = (arr_28 [i_1] [i_1]);
                    }
                    var_39 = var_11;
                }
            }
            var_40 = (min(var_40, -var_8));
        }
        for (int i_19 = 0; i_19 < 24;i_19 += 1)
        {
            var_41 = 253;
            var_42 = (max(var_42, 3306572357626671452));
        }
        arr_67 [i_1] = ((-(arr_7 [i_1] [i_1] [i_1])));
        var_43 = (max(var_43, (arr_60 [i_1] [i_1] [i_1])));
    }
    var_44 = var_1;
    #pragma endscop
}
