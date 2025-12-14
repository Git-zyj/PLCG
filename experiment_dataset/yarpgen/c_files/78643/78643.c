/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78643
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_16 = (((-1242050493413351967 == var_5) % -4));
        var_17 = var_0;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            var_18 = ((~(arr_8 [i_0 + 3] [i_2] [i_2 - 1])));
                            var_19 = (((var_6 ? (arr_9 [i_0]) : (arr_14 [i_0 + 3] [i_0] [i_1] [i_2 + 3] [i_1]))));
                        }
                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            var_20 = (max(var_20, ((var_15 ? var_14 : (arr_0 [0])))));
                            var_21 = (arr_10 [13]);
                            var_22 = (((arr_8 [i_0] [i_0] [i_0 - 2]) ? (arr_0 [i_0]) : ((((arr_16 [i_0 + 3] [i_0] [i_2] [i_0 + 3] [i_3] [i_5]) == (arr_7 [i_0]))))));
                        }
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            var_23 |= (arr_6 [i_1] [12]);
                            var_24 = (max(var_24, (arr_2 [0])));
                        }
                        for (int i_7 = 2; i_7 < 17;i_7 += 1)
                        {
                            var_25 = (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                            var_26 = ((0 ? var_1 : (arr_5 [i_0 - 1] [i_3])));
                            var_27 = (((arr_20 [i_3] [i_2 - 1] [i_0] [i_0] [15]) <= (arr_12 [i_0] [i_2] [i_3] [i_7])));
                        }
                        var_28 = 1242050493413351966;
                        var_29 *= var_15;

                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            var_30 = (min(var_30, ((((((var_14 ? var_15 : var_7))) ? 2462467857346542193 : (arr_26 [i_2 - 2] [i_8] [i_0] [i_8] [14]))))));
                            arr_29 [i_0 + 3] [i_1] [i_0] [i_3] = (arr_15 [i_2] [i_0] [i_0 - 2] [i_0] [i_0]);
                            arr_30 [i_8] [i_0] [i_2] [i_0] [i_0] = (((16 & var_6) ? (arr_21 [i_0 - 1] [i_0 + 3] [i_0 - 1] [i_0 + 2]) : ((var_2 ? -1763168652836830943 : (arr_12 [i_1] [i_2] [12] [i_8])))));
                            var_31 += 1;
                        }
                        for (int i_9 = 1; i_9 < 16;i_9 += 1)
                        {
                            arr_33 [16] [i_3] [i_2] [i_1] [16] |= (((arr_32 [i_0 + 3] [i_0] [i_0] [i_0] [i_0]) | (arr_9 [12])));
                            var_32 = (max(var_32, (arr_23 [i_1] [i_1] [i_1])));
                            var_33 = (min(var_33, ((((17139 + (arr_11 [i_9 + 2] [i_3] [10] [i_1] [i_0])))))));
                            var_34 = ((((arr_3 [i_0]) && var_9)));
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_10 = 1; i_10 < 13;i_10 += 1)
    {
        var_35 = var_3;
        var_36 = (((((!(arr_27 [i_10] [i_10] [7] [i_10 - 1] [i_10] [i_10] [i_10])))) >= (~var_6)));
        var_37 = var_4;
    }
    var_38 = (~var_9);
    var_39 = ((((min((min(-1926205105240683372, var_9)), var_11))) ? (min(var_9, -2681326243)) : var_6));
    var_40 = (((!var_15) && var_10));
    #pragma endscop
}
