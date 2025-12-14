/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62297
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = var_10;
        var_13 = ((!(arr_2 [i_0])));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = -1;
        var_14 = ((~((~((1 & (arr_1 [i_1])))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        arr_11 [5] = 1;

        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            arr_14 [i_2] [i_3] = arr_12 [i_2];
            var_15 = ((~(arr_2 [i_2])));
        }
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                var_16 = (((arr_7 [i_2]) ? (arr_7 [i_4]) : (arr_7 [i_2])));
                var_17 = var_1;
                var_18 = (min(var_18, (arr_13 [i_2] [i_2] [i_2])));
            }
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                arr_26 [i_2] [i_2] = var_0;
                arr_27 [i_2] [i_2] [13] [i_2] = -25;
                arr_28 [1] [i_6] [i_4] [4] = ((((arr_17 [i_2] [i_4]) ? (arr_7 [i_2]) : var_0)));
            }
            for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
            {
                var_19 = (1 ^ ((-1586752617 ? 1 : 1)));
                var_20 = (((arr_19 [i_7] [i_4] [i_2]) | (arr_19 [i_2] [12] [i_7])));
            }
            for (int i_8 = 0; i_8 < 16;i_8 += 1) /* same iter space */
            {
                arr_35 [2] [i_4] [2] [i_8] = (arr_23 [i_2] [i_2] [i_2]);
                var_21 = (max(var_21, ((((arr_32 [i_4]) & 1)))));
                var_22 ^= 9007199254736896;
            }
            /* LoopNest 2 */
            for (int i_9 = 1; i_9 < 15;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 16;i_10 += 1)
                {
                    {
                        var_23 = (~18437736874454814715);
                        var_24 = (arr_29 [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9 - 1]);
                        var_25 *= 18261203572543097506;
                        var_26 = (!var_5);
                    }
                }
            }
            arr_41 [i_2] [i_4] = -1;
        }
    }
    for (int i_11 = 0; i_11 < 25;i_11 += 1)
    {
        arr_44 [i_11] = 1;
        var_27 = (arr_43 [i_11] [2]);
        arr_45 [i_11] |= (max((min(((-(arr_43 [i_11] [i_11]))), (1 >= var_9))), ((-(28672 - var_6)))));
        var_28 = (min(var_28, ((max((~-1), ((min((arr_43 [i_11] [i_11]), (arr_43 [i_11] [i_11])))))))));
        var_29 = (max(var_29, ((max((arr_43 [i_11] [i_11]), ((~(arr_43 [i_11] [i_11]))))))));
    }
    var_30 = var_8;
    #pragma endscop
}
