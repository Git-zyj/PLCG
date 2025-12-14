/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            var_20 -= (min(23, -21));
            var_21 = -4282080081321818833;
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        arr_11 [i_2] [i_1] [i_2] [21] = (max(((min((arr_3 [i_1 + 1] [i_1 - 2] [i_1 - 2]), (arr_3 [i_1] [i_1 - 2] [i_1 + 1])))), (arr_9 [i_2] [i_2])));
                        var_22 = (min((0 != 679352153), (208 == 0)));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    {

                        for (int i_6 = 1; i_6 < 22;i_6 += 1)
                        {
                            arr_21 [i_4] [i_1 - 2] [i_4] [i_5] [i_4] &= (max((max(((max(117, (arr_4 [i_0] [i_4] [i_5] [i_5])))), (min(var_16, 2425187747)))), 117));
                            var_23 = -4356901859761723496;
                        }

                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            var_24 = ((-(233 == -4356901859761723496)));
                            var_25 = (min(((((!27) < var_1))), (30422 ^ 117)));
                        }
                    }
                }
            }
            arr_24 [i_0] = (arr_7 [i_0] [18] [6] [i_1]);
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            var_26 = (arr_19 [i_0] [16] [i_0] [15] [i_0] [i_0] [0]);

            for (int i_9 = 2; i_9 < 20;i_9 += 1)
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 23;i_11 += 1)
                    {
                        {
                            var_27 = arr_33 [i_0] [i_8] [15] [i_0] [i_0] [13] [i_9 + 3];
                            var_28 *= 679352146;
                            var_29 *= (603291518 % 1869779539);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_12 = 2; i_12 < 21;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 23;i_13 += 1)
                    {
                        {
                            var_30 = -17;
                            var_31 -= (1327810487 * var_2);
                        }
                    }
                }
            }
            for (int i_14 = 0; i_14 < 23;i_14 += 1)
            {
                arr_44 [15] [15] [i_14] = 169;
                var_32 = (var_13 / 1);
                var_33 = (max(var_33, (-127 - 1)));
            }
            var_34 = (max(var_34, (arr_28 [i_8])));
        }
        for (int i_15 = 0; i_15 < 23;i_15 += 1)
        {
            var_35 = (max(var_35, (((~((min(var_16, 0))))))));
            arr_47 [i_0] [i_15] [i_0] = ((224 < (-167 ^ 3525720376)));
        }
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 23;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 1;i_17 += 1)
            {
                {
                    var_36 = -3270;

                    for (int i_18 = 0; i_18 < 23;i_18 += 1)
                    {
                        var_37 = (max(var_37, (max(((max(161, (arr_5 [i_18] [i_17] [i_16] [i_0])))), (max(1438358072, ((min((arr_16 [i_17] [i_18]), 30422)))))))));
                        var_38 = (min(var_38, -21986));
                    }
                    for (int i_19 = 1; i_19 < 19;i_19 += 1)
                    {
                        arr_61 [2] [2] [i_16] [i_19] [i_16] [i_0] = 127;
                        var_39 = (arr_49 [i_0]);
                        var_40 = min((arr_31 [i_0] [i_0] [4] [i_17] [i_19]), (min(((((arr_27 [i_0] [11] [i_17] [i_19]) < (arr_39 [i_0] [i_16] [i_17] [i_17] [i_17] [i_19])))), (arr_57 [i_16] [i_16]))));
                        arr_62 [i_16] [i_16] = -1;
                        var_41 = (((min((arr_54 [i_0] [i_0] [i_19 + 4] [i_0]), 0)) - (((arr_54 [i_16] [i_16] [i_19 + 1] [i_19]) & (arr_54 [i_0] [i_16] [i_19 + 2] [i_19])))));
                    }
                    arr_63 [i_0] [i_16] [i_17] [11] = 524272;
                    var_42 = (min(var_42, 1));
                }
            }
        }
    }
    var_43 &= -117;
    #pragma endscop
}
