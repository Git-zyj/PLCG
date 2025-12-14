/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74319
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= 25980;
    var_20 |= (~var_0);
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {

                    for (int i_3 = 4; i_3 < 20;i_3 += 1)
                    {
                        arr_9 [i_0] [i_0] = 56432;
                        var_21 = ((((min(var_15, (arr_2 [i_0] [i_3 - 3])))) && (((var_12 ? (arr_2 [i_0] [i_3 - 3]) : (arr_2 [i_0] [i_3 - 4]))))));
                    }
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        var_22 = (min(var_22, ((min((min((arr_2 [i_1] [i_1]), var_11)), var_0)))));
                        var_23 &= ((-((min(21072, -25954)))));
                    }
                    var_24 = var_4;
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        var_25 ^= (max((!61087), (((arr_3 [i_5]) ? (arr_1 [i_5]) : ((~(arr_0 [i_5])))))));
        var_26 = var_18;
        arr_15 [10] [i_5] &= (arr_11 [i_5] [i_5] [i_5] [1] [i_5]);
    }
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 23;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 22;i_8 += 1)
            {
                {
                    var_27 = var_6;

                    for (int i_9 = 2; i_9 < 24;i_9 += 1)
                    {
                        arr_28 [i_9 - 2] [i_9 + 1] [i_7] [i_9 - 2] [i_7] = var_9;
                        var_28 = (max(1, (((arr_21 [i_7 - 1]) & (arr_21 [i_7 + 1])))));
                        var_29 = ((~(((arr_23 [i_8 + 3] [i_8] [i_9 + 1] [1]) ? (arr_23 [i_8 + 3] [i_8 - 1] [i_9 - 1] [i_9 - 2]) : 2))));
                        arr_29 [i_7] = ((!(arr_18 [i_7 + 2] [i_7 + 1])));
                        var_30 = (max(var_30, 22194));
                    }
                    var_31 = var_2;
                    var_32 = ((+((((arr_24 [i_6] [i_7 + 1] [i_8 + 1] [i_6]) <= (arr_24 [i_6] [i_7 + 2] [i_8 + 1] [5]))))));
                }
            }
        }

        for (int i_10 = 0; i_10 < 25;i_10 += 1)
        {
            var_33 = (((((((arr_25 [i_6] [i_10] [i_10]) && (arr_25 [i_10] [i_10] [i_6]))))) - (((arr_25 [i_6] [i_10] [i_10]) ? (arr_25 [i_6] [i_6] [i_6]) : 112))));
            arr_32 [i_6] = (!var_16);
            var_34 = (((arr_24 [1] [6] [i_10] [i_10]) ? 448 : (((~8) / var_0))));
        }
        /* vectorizable */
        for (int i_11 = 2; i_11 < 24;i_11 += 1)
        {
            var_35 = -4;
            arr_35 [i_11] &= (((!var_7) || (arr_34 [i_6] [i_11 - 1] [i_11 - 1])));
            var_36 = -1762672098;
        }
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 25;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                {
                    var_37 = (max((arr_23 [i_6] [i_6] [i_13] [i_13]), -1));
                    var_38 = (min(var_38, (((((min((min(61062, 61062)), (max(448, var_7))))) - ((var_13 ? var_14 : (arr_33 [21] [i_12] [i_13]))))))));
                }
            }
        }
    }
    var_39 = (min(var_39, (((var_16 * ((14968 ? ((1 ? 916642964 : 1077561863)) : 6)))))));
    #pragma endscop
}
