/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (~(!10197491900062522501));
    var_17 = var_11;

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = (max((max(-3188501193874052491, 1570470188583738997)), ((((2618003280 - 47661) + (var_10 - 45686))))));

        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            arr_9 [i_1] = (((~(arr_2 [i_1 - 1]))));
            arr_10 [i_1] [i_1] [i_1] = var_9;
        }
        for (int i_2 = 1; i_2 < 13;i_2 += 1)
        {
            arr_14 [i_2 + 2] [i_0] = ((var_11 ? (((2147483647 ? 0 : 183))) : (((arr_5 [10] [i_2 + 1] [i_2 + 1]) ? (max(4765367148645273428, 65510)) : var_1))));
            arr_15 [i_0] [i_0] = ((4194303 >= (65523 < 10312)));
            arr_16 [12] = (max(1, (arr_5 [14] [i_0] [i_0])));
        }
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            arr_19 [10] = var_4;
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 13;i_5 += 1)
                {
                    {
                        arr_24 [i_5] [8] [i_3] [13] = ((arr_18 [i_0] [i_0]) ? 7016281937770829102 : 65535);
                        arr_25 [i_5 - 1] [i_4] [i_0] |= ((-(max(2068996268, -18177))));
                        arr_26 [i_0] [i_0] [i_0] [i_5] = (arr_12 [2]);
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
    {
        arr_30 [i_6] = 8019686159044952268;
        arr_31 [i_6] [i_6] = (!var_9);
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_9 = 2; i_9 < 13;i_9 += 1)
                {
                    for (int i_10 = 2; i_10 < 12;i_10 += 1)
                    {
                        for (int i_11 = 3; i_11 < 13;i_11 += 1)
                        {
                            {
                                arr_47 [i_7] = (((((~1637444202) > -1910)) ? (arr_44 [i_7] [i_10] [i_7] [i_11 + 1] [i_11]) : (max((arr_37 [i_7] [i_9 - 2] [i_11 - 3]), var_4))));
                                arr_48 [i_10] = (arr_22 [i_7] [i_7] [i_7] [i_10]);
                            }
                        }
                    }
                }
                arr_49 [i_7] [11] = 9223372036854775807;
            }
        }
    }
    var_18 = (!0);
    #pragma endscop
}
