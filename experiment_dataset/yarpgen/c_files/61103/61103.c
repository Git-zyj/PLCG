/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_15 || var_0);

    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0 - 1] = var_0;
        var_20 = (max(var_7, (min(52991, 11))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 23;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_21 = var_15;

            for (int i_3 = 2; i_3 < 22;i_3 += 1)
            {
                var_22 = var_6;
                var_23 = (79 && 13835058055282163712);
                arr_13 [i_2] [i_1] = var_11;
                arr_14 [i_1] [i_3] = var_10;
                arr_15 [i_1] = (((var_17 << var_8) >= (437881408 + -129435663)));
            }
            for (int i_4 = 2; i_4 < 24;i_4 += 1)
            {
                arr_18 [i_4] [i_2] [i_1] = var_16;
                var_24 += ((13835058055282163721 || (64 & 242)));
            }

            for (int i_5 = 2; i_5 < 23;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 24;i_7 += 1)
                    {
                        {
                            arr_30 [i_5] [i_2] [i_2] [i_2] [i_6] [i_7 + 1] [i_7] = var_18;
                            arr_31 [i_1] [i_2] [i_5] [i_6] [i_2] [i_5] &= (13835058055282163715 && -17);
                            var_25 += -91;
                        }
                    }
                }
                arr_32 [6] [i_5] = (var_1 - 4611686018427387880);
                var_26 ^= 11;
                var_27 += var_3;
                var_28 = var_6;
            }
            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                var_29 = (min(var_29, var_0));
                arr_37 [i_8] [i_8] [i_8] [0] = var_2;
            }
            for (int i_9 = 3; i_9 < 23;i_9 += 1)
            {

                for (int i_10 = 0; i_10 < 25;i_10 += 1)
                {
                    var_30 = (var_15 <= var_14);
                    arr_43 [i_9] [i_2] [i_2] [11] = (4896 && -17);
                }
                arr_44 [i_9] [16] = 1248078078;
                arr_45 [i_1] [i_9] [i_9] [i_9 - 3] = (0 <= -129435663);
                var_31 = (1036254062 ^ var_17);
                var_32 += var_10;
            }
            for (int i_11 = 0; i_11 < 25;i_11 += 1)
            {
                var_33 = 15;
                arr_48 [i_2] = var_16;
                var_34 = var_2;
            }

            for (int i_12 = 0; i_12 < 25;i_12 += 1)
            {
                var_35 += 63717;
                var_36 += var_8;
                var_37 = ((0 || (-127 - 1)));
                arr_51 [i_1] [i_1] [i_12] [21] = (3488080272 % 406525053);
                arr_52 [1] [i_2] [i_2] [1] = (-17 || 4055390117);
            }
        }
        for (int i_13 = 0; i_13 < 25;i_13 += 1)
        {
            var_38 = (min(var_38, 18));
            var_39 = (min(var_39, 65506));
            var_40 ^= 1774653036;
        }
        arr_56 [i_1] &= -52;
        var_41 = (min(var_41, var_11));
    }
    for (int i_14 = 0; i_14 < 16;i_14 += 1)
    {
        var_42 ^= var_0;
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 16;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 16;i_16 += 1)
            {
                {

                    for (int i_17 = 1; i_17 < 15;i_17 += 1)
                    {
                        arr_67 [i_14] [i_15] [i_16] [i_15] [i_15] = var_1;
                        arr_68 [i_17 - 1] [i_14] [i_14] = (((126 || 1968) % (var_9 * 3634)));
                    }
                    for (int i_18 = 4; i_18 < 12;i_18 += 1)
                    {

                        for (int i_19 = 0; i_19 < 16;i_19 += 1)
                        {
                            arr_74 [i_16] [9] [i_16] [9] = (max((min(-24, var_6)), 6));
                            var_43 = (min(var_43, ((min(66060288, 5273532626928548140)))));
                        }
                        var_44 = var_1;
                        arr_75 [3] [i_14] [i_14] [3] = (min(var_15, (min(824633720832, -3))));
                    }
                    for (int i_20 = 2; i_20 < 12;i_20 += 1)
                    {

                        for (int i_21 = 0; i_21 < 16;i_21 += 1)
                        {
                            arr_82 [i_14] [i_15] [6] [i_16] [i_15] [i_16] = (min((max(var_5, 34)), (min(-14, 0))));
                            var_45 += 101;
                            var_46 = (-758781056 >= 1020921443);
                        }
                        arr_83 [i_14] [i_14] [i_14] = (min(1024, (((max(1526947333, var_3)) + var_2))));
                    }

                    for (int i_22 = 4; i_22 < 13;i_22 += 1)
                    {
                        arr_86 [i_14] [i_14] [12] = ((var_11 || (63568 + 4068469065)));
                        arr_87 [i_15] [i_15] [i_16] [i_22] [i_22] [i_15] = 222;
                    }
                }
            }
        }
        arr_88 [i_14] [i_14] = 2574032527;
    }
    for (int i_23 = 0; i_23 < 18;i_23 += 1)
    {
        arr_92 [i_23] [i_23] = (max(var_15, (max(var_16, var_3))));
        var_47 = var_11;
    }
    var_48 = 0;
    #pragma endscop
}
