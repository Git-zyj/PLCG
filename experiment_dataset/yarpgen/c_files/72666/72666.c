/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = min(1, ((6710597861944122343 != (arr_1 [i_0]))));
        arr_3 [i_0] = ((((~(((arr_1 [i_0]) ? (arr_0 [i_0] [i_0]) : var_11))))) ? (arr_1 [i_0]) : (((!(!3446891117295630356)))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_9 [i_1] [i_1] = ((6545586182782284539 ? 1309008853021857118 : ((1 ? (arr_8 [i_1] [i_1] [i_1]) : var_0))));
            arr_10 [i_1] [i_2] [i_1] = (((~(arr_7 [i_1] [i_1] [i_1]))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            arr_14 [i_1] [i_1] = (arr_4 [i_1] [i_3]);
            var_16 = (~4231613315);
            var_17 = (min(var_17, 1309008853021857110));
            var_18 = (((arr_6 [i_1]) / var_4));
            var_19 = (arr_11 [0] [i_3] [i_1]);
        }
        arr_15 [i_1] [i_1] = ((((~(arr_11 [i_1] [i_1] [i_1]))) >= 0));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            arr_20 [i_5] = ((var_9 * (arr_13 [i_4] [i_5])));
            var_20 = (min(var_20, (arr_8 [0] [i_5] [i_4])));
            var_21 = (min(var_21, (((var_1 ? (arr_19 [1] [i_5]) : var_5)))));
            arr_21 [i_5] = (arr_12 [i_4] [i_4]);
        }
        arr_22 [i_4] = 4231613315;
    }
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        arr_25 [i_6] = ((((!((((arr_23 [i_6]) * var_10))))) ? (arr_6 [12]) : ((var_1 ? var_4 : (((arr_8 [4] [6] [4]) ? 63353985 : -4645012075806922351))))));
        arr_26 [i_6] = var_4;
        var_22 += ((((min((arr_13 [8] [8]), (arr_13 [i_6] [0])))) && (((var_2 ? (arr_13 [22] [22]) : var_15)))));

        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            var_23 = (max(var_23, (((1 ? -715795339246401813 : 1)))));
            arr_31 [i_7] [i_6] [i_7] = (((-(arr_8 [i_7] [i_7] [i_7]))));
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 17;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        {
                            var_24 = (((((arr_7 [i_8] [i_9] [i_10]) ? (arr_28 [i_10] [i_8]) : (arr_13 [i_8] [i_8])))) ? var_0 : (arr_29 [i_8] [i_11]));
                            var_25 = ((-4299238379056692772 ? 27 : 7894377357858416929));
                        }
                    }
                }
            }
            arr_44 [i_8] = ((!(arr_34 [i_8])));
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 17;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 17;i_13 += 1)
                {
                    {
                        arr_49 [i_6] [i_8] = ((((((arr_24 [i_13]) ? var_10 : var_11))) && (((var_3 ? -32764 : (arr_24 [i_12]))))));
                        arr_50 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] = ((!((((arr_32 [i_13] [i_8] [i_6]) ? (arr_23 [i_6]) : 1)))));
                    }
                }
            }
        }
    }
    var_26 = (!var_15);
    var_27 = (((((var_3 ? var_9 : ((var_8 ? 1 : var_8))))) + ((-38358681 ? (1 ^ var_12) : (max(18446744073709551615, var_6))))));
    var_28 = var_15;
    #pragma endscop
}
