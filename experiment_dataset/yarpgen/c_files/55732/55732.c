/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55732
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, ((min(((((min(0, var_3))) ? var_10 : (max(508, 1654976339)))), (max(((76 ? var_6 : var_5)), (min(1, -1654976339)))))))));

    for (int i_0 = 2; i_0 < 9;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (arr_0 [i_0] [i_0]);
        arr_3 [i_0] [i_0] = ((((((arr_1 [i_0]) ? var_4 : (~var_1)))) ? (!1489836522) : ((~(arr_1 [i_0])))));
        arr_4 [i_0] [i_0] = (arr_0 [i_0] [i_0]);

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 4; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_0] [i_0 - 1] [i_0] = (!-181);
                        var_20 = (max(var_20, ((min(43817, 65532)))));
                    }
                }
            }

            for (int i_4 = 1; i_4 < 9;i_4 += 1)
            {
                var_21 = (max(var_21, (((min((arr_1 [i_1]), 1654976330)) ^ (((!(arr_15 [i_1] [i_1] [1]))))))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        {
                            arr_21 [i_0] [i_0] [i_4] [i_5] [i_5] = (arr_0 [i_0] [i_6]);
                            var_22 &= ((~(max((min((arr_11 [i_0] [i_6] [i_0]), (arr_5 [i_0] [i_1] [i_1]))), (-1654976339 <= 1654976334)))));
                        }
                    }
                }
            }
            for (int i_7 = 1; i_7 < 10;i_7 += 1)
            {
                arr_24 [i_0] = (arr_23 [i_0 + 1] [i_0 + 1]);
                arr_25 [i_0] [i_1] [i_7 - 1] = ((-(((min((arr_8 [i_7] [5] [11]), (arr_7 [i_0] [i_1] [i_0])))))));
                arr_26 [i_7] [i_0] [i_0] = ((((((arr_14 [i_0] [i_0] [i_7 + 1] [8]) + (arr_14 [i_0] [11] [i_7 + 1] [i_7])))) ? (min(-2105336245461806570, -5214)) : var_17));
            }
        }
    }
    /* vectorizable */
    for (int i_8 = 2; i_8 < 9;i_8 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_9 = 3; i_9 < 10;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 10;i_10 += 1)
            {
                {
                    arr_35 [i_9] [i_9] [i_8] [i_9] = (((arr_16 [i_10] [2] [i_8 - 1] [i_8]) ? (arr_16 [i_9] [i_9] [i_9 + 1] [i_9 + 2]) : (arr_16 [i_10] [i_10 + 1] [i_10 + 1] [i_10])));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 12;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 0;i_12 += 1)
                        {
                            {
                                var_23 = (max(var_23, 20853));
                                arr_42 [i_10] [i_11] [i_10] [i_10] [i_9] = ((~(arr_29 [i_12] [i_8 + 2] [i_12])));
                                var_24 = (max(var_24, (((~((65535 ? 6144 : (arr_6 [0]))))))));
                            }
                        }
                    }
                    var_25 = (max(var_25, (((-1654976339 ? 24 : 96)))));
                }
            }
        }
        arr_43 [i_8] [i_8] &= (!(arr_20 [i_8] [8] [i_8] [i_8] [8]));
        var_26 = (((((arr_37 [i_8 - 1] [i_8 - 1] [i_8 - 1]) + 2147483647)) << (((arr_37 [i_8 - 1] [i_8] [i_8 - 1]) + 1072715726))));
    }
    for (int i_13 = 0; i_13 < 16;i_13 += 1)
    {
        /* LoopNest 2 */
        for (int i_14 = 2; i_14 < 14;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 16;i_15 += 1)
            {
                {
                    var_27 = ((!0) ? 244 : (-81 / 71));
                    var_28 ^= ((min(0, 44681)));
                    var_29 = ((((min((min(112, -8238242263191244807)), (var_11 / 32768)))) ? 1073741824 : (((arr_44 [i_14 + 2]) ? 3 : (arr_44 [i_14 - 2])))));
                }
            }
        }
        arr_52 [i_13] = (min((arr_47 [i_13]), (arr_47 [i_13])));
        arr_53 [i_13] = (max(((6410054863595655580 ? -1803537428305757185 : 2105336245461806545)), (((((var_5 ? (arr_47 [i_13]) : var_3)) < ((max((arr_51 [15] [i_13]), (arr_44 [i_13])))))))));
    }
    for (int i_16 = 0; i_16 < 20;i_16 += 1)
    {
        arr_56 [i_16] = (min((max(var_2, (arr_54 [i_16]))), (arr_54 [2])));

        for (int i_17 = 4; i_17 < 18;i_17 += 1) /* same iter space */
        {
            arr_59 [i_17] = var_16;
            arr_60 [i_16] [7] [15] = (((3024814244 / 50) ? (arr_58 [i_16] [i_16] [i_16]) : var_1));

            /* vectorizable */
            for (int i_18 = 0; i_18 < 20;i_18 += 1)
            {
                /* LoopNest 2 */
                for (int i_19 = 1; i_19 < 18;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 20;i_20 += 1)
                    {
                        {
                            var_30 = (arr_58 [i_17 - 1] [i_19 + 2] [i_19 + 1]);
                            var_31 = (max(var_31, ((((arr_68 [i_19] [i_17 - 1] [i_16]) - (arr_66 [i_19] [i_19 - 1] [i_18] [i_17 + 1]))))));
                            var_32 = var_0;
                        }
                    }
                }

                for (int i_21 = 1; i_21 < 1;i_21 += 1)
                {
                    arr_73 [i_16] [i_16] [i_18] = 242;
                    var_33 = (min(var_33, var_14));
                }
                for (int i_22 = 0; i_22 < 20;i_22 += 1)
                {
                    arr_76 [i_18] [i_18] [i_18] [i_18] = (arr_71 [i_16] [i_22] [i_17 + 2] [i_18]);
                    arr_77 [i_22] [i_22] [i_18] [i_18] [i_17] [i_22] &= var_16;
                    arr_78 [i_17 - 3] [i_18] [i_22] [i_22] = var_11;
                    var_34 = (min(var_34, (((var_17 ? (arr_61 [i_17 - 4]) : ((64 ? 41688 : (arr_72 [i_16]))))))));
                }
                var_35 = (max(var_35, 1099511627712));
                var_36 = (arr_72 [i_18]);
            }
        }
        for (int i_23 = 4; i_23 < 18;i_23 += 1) /* same iter space */
        {
            arr_82 [i_16] &= (((var_2 ^ (arr_65 [i_23] [i_23 - 2]))));
            arr_83 [i_23] = ((((max(2105336245461806538, -1))) ? (arr_79 [i_23]) : (72057594037927872 || 3)));
            arr_84 [i_23] = (max(0, 244));
        }
        /* vectorizable */
        for (int i_24 = 0; i_24 < 0;i_24 += 1)
        {
            arr_89 [i_24] = (arr_62 [i_16] [i_24]);
            var_37 = (arr_70 [i_16]);
            arr_90 [i_24] [i_16] &= (arr_71 [i_24 + 1] [i_24] [i_24] [i_16]);
        }
    }
    var_38 = (min(var_0, (6802053600764042044 < 0)));
    #pragma endscop
}
