/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89696
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= var_0;

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = 4294967278;
        arr_3 [i_0] = ((-((-(arr_1 [i_0])))));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
        {
            var_16 = -var_5;
            var_17 = ((~(var_7 + var_13)));
        }
        for (int i_2 = 1; i_2 < 1;i_2 += 1) /* same iter space */
        {
            var_18 = (max(2938689605, (-2147483647 - 1)));
            var_19 = 255;

            /* vectorizable */
            for (int i_3 = 1; i_3 < 18;i_3 += 1) /* same iter space */
            {
                var_20 = (min(var_20, ((((arr_4 [i_0] [i_2 - 1] [i_3 - 1]) ? (arr_4 [i_0] [i_2 - 1] [16]) : 1)))));
                var_21 = 242;
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_22 = (arr_7 [i_0] [i_2 - 1] [i_2 - 1]);
                            var_23 = (max(var_23, 255));
                            arr_18 [i_0] [i_2] [3] [i_2] = (arr_1 [i_4]);
                            arr_19 [i_2] [i_2] [i_2] [i_2] [13] [i_2] = var_11;
                        }
                    }
                }
            }
            for (int i_6 = 1; i_6 < 18;i_6 += 1) /* same iter space */
            {
                var_24 += 1;
                var_25 *= (arr_17 [2] [5] [5] [i_0] [i_0]);
            }
            var_26 = ((-(max((var_6 - 29), 2139221707))));
        }
        for (int i_7 = 1; i_7 < 1;i_7 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                arr_29 [i_7] = var_7;
                arr_30 [i_0] [i_7] [i_0] = var_7;
                arr_31 [i_7] [i_7] = (var_7 + 226);
            }
            var_27 = (min((~-var_13), (max((max(-1812391723, -1812391727)), 1891990627))));
        }

        for (int i_9 = 3; i_9 < 18;i_9 += 1) /* same iter space */
        {
            var_28 = 1737317138;
            var_29 = var_5;
            var_30 = ((((max(14, var_4))) / ((min((2504488509 || var_6), 1)))));
            var_31 = (max(var_31, ((max(1790478787, ((min((arr_26 [i_9 - 1] [i_9 - 1] [i_9 - 3]), var_1))))))));
        }
        for (int i_10 = 3; i_10 < 18;i_10 += 1) /* same iter space */
        {
            var_32 = (arr_25 [i_0] [i_10]);
            var_33 = max(((-1 ? 1 : 1)), (((arr_8 [i_10 + 1] [i_10]) ? 1 : var_4)));
            arr_37 [14] [i_0] [i_0] = max((((min(var_4, (arr_7 [i_0] [i_0] [i_0]))) | 632760882)), ((~(max(1, 1812391700)))));
        }
        for (int i_11 = 3; i_11 < 18;i_11 += 1) /* same iter space */
        {
            var_34 = ((((min(1812391722, (arr_27 [i_11] [i_11 - 3] [i_0] [i_0])))) ? var_4 : (arr_7 [i_0] [6] [i_11])));
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 19;i_12 += 1)
            {
                for (int i_13 = 2; i_13 < 15;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        {
                            var_35 = ((+(((arr_12 [i_11] [i_11 - 2] [i_11 + 1] [i_11]) ? 48 : (arr_12 [i_11] [i_11 - 1] [i_11 - 1] [i_11])))));
                            var_36 ^= ((-var_2 / (max(18, (((var_10 ? var_11 : var_9)))))));
                            var_37 = (min(((min(var_0, 3))), -3002364834902361065));
                            arr_48 [18] [7] [i_11] [i_12] [i_11] [i_13 + 2] [i_14] = var_0;
                            arr_49 [i_11] = arr_14 [i_0] [1] [i_11] [i_13 - 2] [1];
                        }
                    }
                }
            }
        }
    }
    for (int i_15 = 0; i_15 < 19;i_15 += 1) /* same iter space */
    {
        arr_52 [i_15] = (!1);
        /* LoopNest 2 */
        for (int i_16 = 1; i_16 < 17;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 19;i_17 += 1)
            {
                {
                    arr_59 [i_17] [i_16] [i_17] [i_17] = (min(var_2, 1));
                    /* LoopNest 2 */
                    for (int i_18 = 1; i_18 < 15;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 19;i_19 += 1)
                        {
                            {
                                var_38 ^= (min((min(1737317138, 1717195356)), (((128 << (4294967273 - 4294967273))))));
                                var_39 = (max(var_39, 231));
                                var_40 += (min(29, 24));
                                var_41 = (min(var_41, ((min(255, -var_3)))));
                                arr_65 [7] [1] [i_17] [12] [i_19] = (arr_35 [i_19]);
                            }
                        }
                    }
                    var_42 *= var_12;
                    var_43 *= var_12;
                }
            }
        }
        arr_66 [i_15] = (min(var_4, -1712382662));
        /* LoopNest 2 */
        for (int i_20 = 0; i_20 < 19;i_20 += 1)
        {
            for (int i_21 = 0; i_21 < 19;i_21 += 1)
            {
                {
                    var_44 |= (((3414889448 ? var_6 : 144)));
                    var_45 = var_6;

                    for (int i_22 = 0; i_22 < 1;i_22 += 1) /* same iter space */
                    {
                        arr_76 [i_15] [i_15] [i_20] [i_21] [i_21] = ((193 || (-2147483647 - 1)));
                        arr_77 [i_21] [i_15] [i_21] = 1737317138;
                        var_46 *= (472972853 & 139);
                    }
                    for (int i_23 = 0; i_23 < 1;i_23 += 1) /* same iter space */
                    {
                        var_47 = ((var_5 && ((min(0, (max(18, 29)))))));
                        var_48 ^= var_13;
                        var_49 = (max(214, (min(var_0, var_9))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
