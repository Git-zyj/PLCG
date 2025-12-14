/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        var_18 = (min(var_18, (((~(max(-731335606, var_17)))))));
        arr_3 [i_0] &= min(((min(-731335614, 731335614))), var_4);
        arr_4 [i_0] = ((((!(arr_2 [i_0 - 2] [i_0 + 1])))));
        var_19 = (min(var_19, (arr_1 [i_0])));
    }
    for (int i_1 = 1; i_1 < 24;i_1 += 1)
    {
        var_20 = ((!(((var_8 ? (arr_1 [i_1]) : -1813791719)))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                {
                    arr_14 [i_1] [i_2 - 1] [i_3] = arr_2 [i_2] [i_1];
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 23;i_5 += 1)
                        {
                            {
                                arr_21 [i_1] [8] &= (min(((min(7030, (arr_13 [4] [i_5 - 1])))), (arr_16 [i_1] [10] [i_3] [i_4] [i_5 + 1])));
                                var_21 ^= -731335604;
                                var_22 = (min(var_22, (arr_1 [i_3])));
                                var_23 += (!var_16);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            {
                                var_24 = (min(var_24, var_13));
                                arr_27 [i_1] [i_2] [i_1] [i_6] [i_1] = ((!((1813791703 == ((1813791711 ? -8231769957682380360 : 143))))));
                            }
                        }
                    }
                }
            }
        }
        arr_28 [i_1] = (min(var_10, var_13));
    }
    for (int i_8 = 1; i_8 < 16;i_8 += 1)
    {
        var_25 = (max(3139574458, 3));
        arr_32 [i_8] [i_8] = (arr_18 [i_8 - 1] [i_8 - 1] [i_8] [4] [i_8] [i_8 - 1]);
        arr_33 [13] = var_1;
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 16;i_9 += 1)
    {
        for (int i_10 = 1; i_10 < 12;i_10 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 16;i_11 += 1)
                {
                    for (int i_12 = 3; i_12 < 14;i_12 += 1)
                    {
                        {
                            arr_45 [1] [i_12] [i_11] [i_12] = 262143;
                            var_26 ^= (min(((min((arr_15 [14] [i_10] [i_10] [i_9] [i_10 - 1]), -7030))), (min(-7045, (arr_23 [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_12 + 1] [i_9])))));
                            var_27 = (((-14954 ? 4294705153 : -54)));
                            arr_46 [i_12] [i_12] [i_9] = (arr_23 [i_9] [i_9] [i_10] [i_9] [i_12]);
                        }
                    }
                }
                var_28 += (arr_13 [i_9] [i_10 + 4]);
                var_29 |= ((!(!var_5)));
            }
        }
    }

    for (int i_13 = 1; i_13 < 18;i_13 += 1)
    {
        /* LoopNest 2 */
        for (int i_14 = 1; i_14 < 20;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 22;i_15 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 22;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 1;i_17 += 1)
                        {
                            {
                                var_30 = (!var_12);
                                var_31 ^= (((min((arr_19 [i_13] [22] [i_14] [2] [i_13] [2] [i_17]), var_0))) ? (arr_13 [6] [i_14 + 2]) : ((1813791681 ? -1813791719 : 262143)));
                            }
                        }
                    }
                    var_32 = var_8;
                }
            }
        }
        var_33 |= (max(((min(-763976756, 1340327146))), (min(13015632711431338448, var_2))));
    }
    var_34 ^= (~32767);
    var_35 = var_15;
    #pragma endscop
}
