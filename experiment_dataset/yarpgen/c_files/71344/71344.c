/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71344
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= var_14;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] = (((arr_5 [i_0] [i_0 - 2] [i_1 + 2]) != (((arr_5 [i_1] [i_0 + 1] [i_1 + 1]) - 10483))));

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    arr_9 [i_2] [i_1] [i_2] = ((((((arr_4 [i_2]) ? var_7 : (~35219)))) ? ((15383 ? (max(28962, 1668794204)) : (((-(arr_2 [i_0])))))) : (((((-1314944101 && var_17) == 71))))));
                    arr_10 [i_0] [i_0] [i_2] = (max((max(1707402831, -29283)), -14836));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_17 [i_2] [i_2] [i_4] = 13208;
                                var_20 = (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                            }
                        }
                    }
                    arr_18 [i_1] [i_1] [i_2] = (min(2954581134, -7953));
                }

                /* vectorizable */
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    var_21 = (arr_8 [i_0]);
                    var_22 = 24035;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            {
                                var_23 = (max(var_23, 0));
                                arr_26 [i_0] [i_1] [i_5] [i_6] [i_7] = 0;
                                var_24 = 2954581155;
                                arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] = arr_7 [i_1 + 2] [i_0 - 2] [i_5] [i_6];
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            {
                                arr_33 [i_0] [i_0] [i_0] [i_0] = -15384;
                                var_25 = var_1;
                                var_26 = 1;
                            }
                        }
                    }
                    var_27 = (arr_4 [i_0 - 4]);
                }
                for (int i_10 = 0; i_10 < 14;i_10 += 1) /* same iter space */
                {
                    arr_37 [i_0] [i_1] [i_10] [i_10] = ((((0 ? 2966764584 : ((((!(arr_5 [i_0] [i_1] [i_10]))))))) > (((48 % (arr_19 [i_0] [i_0] [i_0 - 1]))))));
                    var_28 = (max(var_28, (1328202720 ^ 7)));
                    arr_38 [i_10] = ((max((arr_32 [i_0] [i_10] [i_0 - 3] [i_1] [i_0]), (arr_32 [i_10] [i_1] [i_0 - 2] [i_10] [i_10]))));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 14;i_12 += 1)
                        {
                            {
                                arr_44 [i_10] [i_0] [i_10] [i_11] [i_12] = (arr_28 [i_12] [i_1 + 2] [i_0 - 4] [i_0]);
                                var_29 = (min(var_29, var_9));
                                var_30 = var_12;
                            }
                        }
                    }
                }
                for (int i_13 = 0; i_13 < 14;i_13 += 1) /* same iter space */
                {
                    var_31 = arr_24 [i_13] [i_1] [i_0];
                    var_32 = (max(var_32, (arr_20 [i_0] [i_0] [i_0])));
                }
            }
        }
    }
    #pragma endscop
}
