/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56584
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_15 = var_6;

            for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
            {
                var_16 = (max(var_8, (((var_8 * 140600049401856) | -5))));
                var_17 &= (min((arr_3 [i_0] [i_0] [i_2]), (((var_7 >> (((arr_1 [i_0]) - 1520810579180800338)))))));
            }
            for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 19;i_5 += 1)
                    {
                        {
                            arr_16 [i_0] [i_4] [i_1] [i_3] [i_3] [i_1] [19] = min((-9223372036854775807 - 1), (((((((arr_0 [i_5]) * (arr_11 [14] [14] [i_3] [i_3] [i_3] [i_4])))) >= -5363796872109372392))));
                            arr_17 [i_5] [i_4] [i_3] [i_1] [i_1] [i_4] [i_0] = (min((((arr_11 [i_5 + 2] [i_5 + 1] [i_5] [i_5 + 3] [i_5 + 1] [i_4]) - var_8)), ((max((min(var_6, 8192)), var_4)))));
                        }
                    }
                }

                /* vectorizable */
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    var_18 = ((((var_12 ^ (arr_2 [i_3] [i_6]))) ^ ((3623801450 ? 0 : 1))));
                    var_19 = (max(var_19, var_13));
                    arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] = (var_3 == (arr_12 [i_0] [i_1]));
                    arr_22 [i_0] [i_1] [i_1] [i_3] [i_3] = (arr_0 [i_0]);
                    arr_23 [i_0] [i_0] [i_0] [i_3] [i_6] [i_6] = var_8;
                }
            }
        }
        var_20 = ((arr_12 [i_0] [i_0]) ? ((((((arr_18 [i_0] [i_0] [i_0] [i_0]) ? var_14 : (-2147483647 - 1)))) ? var_6 : (arr_15 [i_0] [i_0] [i_0] [i_0]))) : (~var_3));
        /* LoopNest 3 */
        for (int i_7 = 3; i_7 < 19;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 18;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    {
                        var_21 = (((min(127342780, -7022632293482923904))));
                        var_22 *= (arr_7 [i_0] [i_0] [i_0]);
                    }
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 22;i_10 += 1) /* same iter space */
    {
        var_23 = var_3;
        var_24 = (arr_27 [i_10] [i_10] [i_10]);
        var_25 *= ((((max(((14763923688756031 - (arr_3 [i_10] [i_10] [i_10]))), ((min(var_9, 14677)))))) ? (min((((var_0 + (arr_0 [i_10])))), var_10)) : 2147483647));
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 22;i_11 += 1) /* same iter space */
    {

        for (int i_12 = 0; i_12 < 22;i_12 += 1)
        {
            var_26 = 2147483647;
            var_27 = -14677;
        }
        arr_39 [i_11] = ((arr_20 [i_11] [i_11] [i_11] [i_11]) ? 57339 : (arr_20 [i_11] [i_11] [i_11] [i_11]));
        var_28 += (((arr_31 [i_11]) + 0));
    }
    var_29 = (min(var_29, (((var_11 << ((((min(57344, -13946))) - 51582)))))));
    #pragma endscop
}
