/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67468
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_2] = ((((max(-17736, 31319))) >= ((((min((arr_2 [i_2]), (arr_4 [i_0] [i_1] [i_0])))) * (arr_0 [i_0] [i_1])))));
                    arr_10 [i_2] = ((((var_8 || ((((arr_5 [i_0] [i_2]) ? -31305 : 18909383))))) || ((!(-31319 || var_7)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_12 -= (max(((max(var_7, (arr_2 [i_3])))), (((arr_11 [i_1]) ? (arr_11 [i_0]) : (arr_11 [i_1])))));
                                var_13 = (min(var_13, var_9));
                                var_14 = (~187);
                            }
                        }
                    }
                    arr_15 [i_0] [i_1] [i_2] [i_2] = 94;
                }
            }
        }
        var_15 = ((((31319 == (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]))) ? (min((arr_12 [i_0] [i_0] [i_0] [1]), var_4)) : var_4));
        arr_16 [i_0] [i_0] = (((var_0 + (arr_6 [i_0] [i_0] [i_0] [i_0]))));
    }
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        var_16 = var_3;
        var_17 = (!(~var_7));
        arr_21 [i_5] = 0;
    }
    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        var_18 -= (((((var_8 ? (arr_20 [i_6]) : -2))) ? ((((((arr_24 [i_6]) ? (arr_24 [i_6]) : (arr_18 [i_6] [i_6])))) ^ ((var_2 / (arr_19 [i_6]))))) : (max(var_8, (arr_19 [i_6])))));
        var_19 = (min(var_19, 31298));
        arr_25 [i_6] = ((((((min(var_1, (arr_23 [i_6])))) < (128 < 128))) ? (((max((arr_20 [i_6]), (arr_20 [i_6]))))) : ((((var_11 ? (arr_17 [13]) : var_4)) - var_5))));
        arr_26 [0] [i_6] |= 223;
        var_20 = (!1);
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        arr_29 [i_7] = var_5;
        var_21 = (((arr_27 [i_7] [i_7]) + ((-94 - (arr_28 [i_7])))));
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        for (int i_9 = 1; i_9 < 1;i_9 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_10 = 4; i_10 < 13;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {
                        {
                            var_22 += (arr_8 [i_8] [i_10] [i_10] [i_11]);
                            var_23 = (~var_10);
                        }
                    }
                }
                var_24 = (((1 >= -var_6) && ((((arr_34 [i_8] [i_9 - 1]) / (arr_34 [i_9 - 1] [i_8]))))));
                var_25 = 38;
            }
        }
    }
    var_26 *= var_2;
    var_27 = ((var_3 * ((max((var_7 || var_6), (var_0 && var_4))))));
    #pragma endscop
}
