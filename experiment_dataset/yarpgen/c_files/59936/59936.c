/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_17 = 1;

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_5 [i_0] [i_1] [i_1] = ((var_10 ? var_1 : (~var_8)));
            var_18 = 38;
        }
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            var_19 ^= (((arr_2 [i_0 + 1] [i_0 - 2]) & (arr_2 [i_0 + 1] [i_0 - 2])));
            arr_8 [i_0] = (var_1 | (((var_2 ? (arr_1 [i_2]) : var_10))));
            var_20 = (arr_3 [i_0] [i_0] [i_0]);
        }
        for (int i_3 = 1; i_3 < 9;i_3 += 1)
        {
            arr_12 [i_0] [i_0] = (((!var_6) >> (var_11 - 14310)));
            var_21 ^= 0;

            for (int i_4 = 3; i_4 < 9;i_4 += 1)
            {
                var_22 = (arr_9 [i_4] [3]);
                arr_15 [i_0] [i_0] [i_0] [i_0] = -4681;
            }
            for (int i_5 = 1; i_5 < 8;i_5 += 1)
            {
                var_23 = 23810;
                var_24 &= (var_0 && 23815);
            }
        }

        for (int i_6 = 3; i_6 < 8;i_6 += 1)
        {
            var_25 = var_6;
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                for (int i_8 = 4; i_8 < 7;i_8 += 1)
                {
                    {
                        var_26 = (arr_10 [i_6 + 2] [i_6 - 3] [i_6 - 2]);

                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            var_27 = ((~(arr_19 [i_7] [i_7] [i_7] [i_7])));
                            var_28 = (arr_26 [i_8 + 3] [i_8 + 3] [i_8 - 3] [i_8 + 1]);
                            arr_31 [i_0] [i_0] = ((12513180526452387037 ? (arr_30 [i_0]) : (arr_1 [i_0 - 2])));
                            var_29 = ((var_12 ? (arr_22 [i_0 - 2] [i_6 - 1] [i_6 - 1]) : (arr_22 [i_0 - 1] [i_6 - 2] [i_0 - 1])));
                        }
                        for (int i_10 = 0; i_10 < 10;i_10 += 1)
                        {
                            arr_36 [i_0] [i_0] = 1;
                            var_30 = ((arr_16 [i_0] [i_0]) > var_11);
                        }
                        arr_37 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] = 1;
                    }
                }
            }

            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                var_31 = (((((((arr_33 [i_6]) + 2147483647)) << (var_8 - 12978345267319130441))) >> (((arr_33 [i_0 - 1]) + 151))));
                arr_40 [i_0] [i_11] [i_0] [i_0] = ((!(arr_0 [i_0 - 2])));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    for (int i_13 = 1; i_13 < 7;i_13 += 1)
                    {
                        {
                            var_32 = -3;
                            var_33 = 23789;
                        }
                    }
                }
                arr_45 [i_0] [i_0] = (((arr_0 [i_0 + 1]) / 127));
                var_34 = 1;
            }
        }
        var_35 = (!(arr_21 [i_0]));

        for (int i_14 = 0; i_14 < 10;i_14 += 1)
        {

            for (int i_15 = 1; i_15 < 8;i_15 += 1)
            {
                arr_50 [8] [i_0] [i_0] = var_13;

                for (int i_16 = 1; i_16 < 7;i_16 += 1)
                {
                    var_36 = ((var_13 & (arr_1 [i_16])));
                    var_37 = (var_3 ? 11793750039419327350 : (arr_28 [i_0 - 2] [i_16 + 3] [i_15 + 1] [i_0 - 2] [i_0 - 2]));
                    arr_53 [i_0] [i_0] [i_14] [i_0] [i_16] = -16454;
                    var_38 = var_14;
                }
                for (int i_17 = 4; i_17 < 9;i_17 += 1)
                {
                    var_39 = (max(var_39, -101));
                    arr_58 [i_0] [i_0] [i_0 - 1] [i_0] = -1437447044253304903;
                    var_40 = -83;
                }
                arr_59 [i_0] [i_0] [i_0] [i_0] = 239;
                arr_60 [i_14] [i_14] [i_0] = 32750;
            }
            arr_61 [i_0 - 2] [i_0] = (arr_41 [i_0]);
        }
        for (int i_18 = 0; i_18 < 10;i_18 += 1)
        {
            var_41 = (max(var_41, (((~((((arr_48 [i_0] [i_18] [2] [i_18]) != (arr_7 [i_0])))))))));
            var_42 = -var_13;
            var_43 = ((((arr_23 [i_0] [i_0] [i_0] [i_18]) ? 5693440471712806802 : var_4)) << (var_9 + 17771938));
            var_44 = (arr_41 [i_0]);
            arr_66 [i_0] = 0;
        }
        for (int i_19 = 0; i_19 < 10;i_19 += 1)
        {
            arr_69 [i_0] [i_0] = ((((arr_67 [i_0] [i_0]) ? var_13 : var_14)));
            arr_70 [i_0] [i_0] [i_0 - 1] = ((((arr_62 [i_0 - 2]) ? 17919487472215449058 : 45571)));
            var_45 = (((arr_63 [i_0] [i_19] [i_0]) - 8430));
            arr_71 [i_0] [i_19] = (((arr_16 [i_0] [i_0 - 1]) << (16452 - 16401)));
            arr_72 [i_0] [i_19] = var_15;
        }
    }
    var_46 = (min(((min(var_12, (min(var_7, 76))))), ((((min(16452, 4024032180))) / 3296302114923838221))));
    #pragma endscop
}
