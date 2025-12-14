/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_14 = (arr_5 [22] [i_1] [i_2] [i_3]);
                                arr_14 [i_4] [i_3] [i_2] [i_4] = 1;
                                arr_15 [i_4] [i_4] [i_2] = var_4;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 22;i_6 += 1)
                        {
                            {
                                arr_22 [i_0] = ((((((((var_1 < (arr_16 [i_6 + 1] [i_5] [i_2] [i_0 + 1])))) / (43720 || var_5)))) < 18446744073709551607));
                                arr_23 [i_0] [i_1] = (1 / 1);
                                arr_24 [i_0] = var_8;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 20;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 22;i_8 += 1)
                        {
                            {
                                arr_30 [i_0] [19] [i_0] [i_0] [10] = (((18697 ^ 1) & ((26557 ^ (arr_25 [i_0] [i_0 - 2] [i_0 - 2] [i_8 + 1])))));
                                var_15 = 18667;
                                arr_31 [i_7] [i_2] [i_2] [i_7 + 2] [i_8] [i_2] = (-65526 > ((0 + (arr_8 [i_0 + 1] [i_0 - 2] [i_0]))));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_9 = 0; i_9 < 0;i_9 += 1)
    {
        /* LoopNest 3 */
        for (int i_10 = 1; i_10 < 21;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 22;i_11 += 1)
            {
                for (int i_12 = 1; i_12 < 19;i_12 += 1)
                {
                    {
                        var_16 = (arr_12 [18] [i_10 - 1]);
                        arr_43 [i_9] [i_9] [i_11] [i_11] [i_11] = 1518139673;
                    }
                }
            }
        }
        var_17 = ((~(((17056270116319957367 >= ((((1 || (arr_0 [i_9]))))))))));
    }
    for (int i_13 = 0; i_13 < 20;i_13 += 1)
    {
        arr_47 [i_13] = 2776827628;
        /* LoopNest 2 */
        for (int i_14 = 1; i_14 < 17;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 20;i_15 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_16 = 1; i_16 < 18;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 20;i_17 += 1)
                        {
                            {
                                arr_58 [i_16] [i_16] [i_16] [i_16] [13] = var_8;
                                var_18 = 4294967294;
                            }
                        }
                    }
                    arr_59 [i_14] [i_14] = (((!var_13) & var_9));
                    /* LoopNest 2 */
                    for (int i_18 = 1; i_18 < 1;i_18 += 1)
                    {
                        for (int i_19 = 1; i_19 < 18;i_19 += 1)
                        {
                            {
                                var_19 = (!(arr_6 [i_15] [i_18]));
                                arr_66 [7] [i_19] [i_15] = (7873545632205623533 / 181);
                            }
                        }
                    }
                    var_20 = (18140105037086631481 < 16384);
                }
            }
        }
    }
    var_21 = 0;
    /* LoopNest 3 */
    for (int i_20 = 0; i_20 < 21;i_20 += 1)
    {
        for (int i_21 = 1; i_21 < 17;i_21 += 1)
        {
            for (int i_22 = 1; i_22 < 19;i_22 += 1)
            {
                {
                    arr_76 [i_20] [i_21] [i_21] [4] = (var_4 > 6854221912287061240);
                    arr_77 [i_21] = (var_10 != 8677092884907595089);
                    var_22 = 0;
                    /* LoopNest 2 */
                    for (int i_23 = 2; i_23 < 19;i_23 += 1)
                    {
                        for (int i_24 = 1; i_24 < 18;i_24 += 1)
                        {
                            {
                                var_23 = var_0;
                                arr_83 [i_22] [10] [i_22] [i_22] [i_22] [i_21] = (arr_8 [1] [18] [12]);
                                arr_84 [i_21] = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
