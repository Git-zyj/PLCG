/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;
    var_11 = (((((1 ? 1 : 1))) ? (((1 || var_4) ? (!4130054566) : var_8)) : var_2));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_1 [i_0] [i_0]) > ((((arr_1 [i_0] [i_0]) && (arr_1 [i_0] [i_0]))))));

        /* vectorizable */
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            arr_7 [i_0] [1] = (((((arr_6 [i_0]) && 2086420533)) ? (arr_6 [10]) : (arr_5 [i_1 + 1])));
            var_12 = (arr_1 [i_0] [i_1 - 3]);
            var_13 = (min(var_13, (arr_2 [i_0])));
        }
        for (int i_2 = 2; i_2 < 22;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 0;i_4 += 1)
                {
                    {
                        var_14 = var_2;

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_15 += (arr_14 [i_0]);
                            var_16 = (((38159 ? (arr_12 [1] [i_2] [i_2]) : 1144495059)));
                            var_17 = var_0;
                            arr_17 [i_3] = -6881893962422287882;
                            var_18 ^= -1;
                        }
                    }
                }
            }

            /* vectorizable */
            for (int i_6 = 1; i_6 < 22;i_6 += 1)
            {
                var_19 += (arr_14 [i_2 + 1]);
                arr_21 [i_6] [i_6] [i_6] = (((1 && 10) % ((var_7 ? (arr_6 [i_6]) : var_4))));
            }
            for (int i_7 = 2; i_7 < 23;i_7 += 1)
            {
                arr_24 [i_0] = (0 || -1144495060);
                arr_25 [i_0] [i_2] [i_2] [i_0] = var_1;
                var_20 &= ((!(arr_10 [i_0] [i_0] [1])));
            }
            for (int i_8 = 1; i_8 < 22;i_8 += 1)
            {
                var_21 = (arr_9 [i_0] [i_8]);
                var_22 = (arr_4 [i_8 - 1]);
            }
            for (int i_9 = 3; i_9 < 23;i_9 += 1)
            {
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 1;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 24;i_11 += 1)
                    {
                        {
                            var_23 = var_5;
                            var_24 = ((((((var_8 * var_0) * 65505))) ? (min((((arr_22 [i_11] [i_10] [i_9]) << (((arr_19 [12] [i_11] [i_9]) + 71)))), var_8)) : (1 == 1)));
                            var_25 = ((((((var_7 & 1) ? (arr_11 [i_9] [i_9 - 2] [i_9] [i_9 - 1]) : (((arr_6 [i_2]) ? (arr_11 [i_0] [i_11] [i_9] [i_10]) : 17752))))) ? ((min((max(var_1, (arr_36 [i_0] [i_2] [i_9] [i_10] [i_2] [1] [i_2]))), var_4))) : ((1 ^ ((min(var_2, var_0)))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    for (int i_13 = 1; i_13 < 21;i_13 += 1)
                    {
                        {
                            var_26 = (min(var_1, (min(((min(var_8, (arr_4 [i_13])))), ((1 ? 1 : 2147483647))))));
                            arr_41 [i_0] &= (min(1, (max((min((arr_19 [i_13] [i_2] [i_0]), -2070653387)), var_4))));
                            var_27 = (((((((arr_32 [i_0] [3] [i_2 + 2] [i_9] [i_12] [i_2 + 2]) / var_8))) ? (arr_26 [i_2] [i_2 - 2] [i_2 + 2]) : 1417410732798157967)) == ((((((arr_34 [i_0] [16] [i_9] [i_12] [i_13 + 2] [i_12] [i_0]) || 16256))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 24;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        {
                            var_28 = (((16247 >= 81) ? (((arr_36 [12] [i_0] [i_0] [i_2] [i_2 - 1] [i_9 + 1] [i_0]) | (arr_30 [i_2 - 1]))) : (((!(arr_36 [17] [i_2] [6] [i_2] [i_2 - 2] [i_9 - 3] [20]))))));
                            var_29 &= (!((((var_0 ? (arr_19 [i_0] [i_2] [i_9 - 2]) : 65535)))));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_16 = 0; i_16 < 1;i_16 += 1)
        {

            for (int i_17 = 0; i_17 < 1;i_17 += 1)
            {
                var_30 = var_9;
                var_31 = var_6;
            }
            var_32 = arr_52 [i_0] [i_16];
        }
    }
    var_33 -= var_6;
    #pragma endscop
}
