/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, var_12));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_20 = ((8191 ? (8168 / 8150) : 3083426125));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_21 = 412035612;
                    var_22 = 1;
                    arr_6 [i_0] [5] [i_0] = (arr_5 [i_0] [8] [i_0] [8]);
                }
            }
        }

        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {

            for (int i_4 = 1; i_4 < 8;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 6;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 6;i_6 += 1)
                    {
                        {
                            var_23 = (arr_16 [i_4] [i_5 + 3] [i_5] [i_5] [i_5 - 1]);
                            var_24 = ((57349 ? 31 : -976772950));
                        }
                    }
                }
                var_25 = (8183 * var_7);

                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    var_26 = (arr_13 [i_4 + 2] [i_4] [i_4 + 2]);
                    var_27 = ((51443 ? ((-10025 ? 2507632784 : 412035617)) : 8168));
                    var_28 = 2386760364;
                    var_29 = (arr_8 [i_4]);
                }
                var_30 = (!-31);
                var_31 = ((var_3 ? ((250082894 ? (arr_1 [i_0]) : 8666235339356439450)) : (62 - 8191)));
            }
            for (int i_8 = 1; i_8 < 8;i_8 += 1)
            {
                var_32 = var_15;
                arr_21 [i_8] [7] [i_8 + 2] = ((57341 ? (arr_15 [i_0] [i_3] [i_3] [i_8] [3] [i_8 - 1] [i_8]) : 1));
            }
            var_33 -= (1913955940 ? (arr_8 [i_0]) : (arr_8 [i_0]));
            var_34 = ((-((((arr_8 [i_3]) || 127)))));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 10;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 9;i_10 += 1)
                {
                    {
                        var_35 = (arr_25 [i_0] [i_10 - 1] [i_0] [i_0] [i_10] [i_10]);
                        var_36 -= ((2634911055 ? -9223372036854775804 : 33));
                        var_37 = -1746631464104265797;
                        var_38 = (min(var_38, (arr_5 [i_10 - 1] [i_10 - 1] [i_10 + 1] [i_10 - 1])));
                        var_39 = ((arr_0 [i_10 - 1]) ? var_14 : var_16);
                    }
                }
            }
        }
        var_40 = (((4058770021 ? (arr_13 [i_0] [i_0] [i_0]) : 0)));
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 15;i_11 += 1)
    {
        arr_31 [i_11] = (~30);
        var_41 = ((8666235339356439450 ? ((-106 ? (arr_28 [4]) : 0)) : var_6));
        var_42 ^= (arr_28 [i_11]);
    }
    var_43 = (((min(var_13, 52461))) ? ((var_4 ? var_3 : ((1 ? var_7 : var_0)))) : ((((var_15 ? -127 : var_0)))));
    #pragma endscop
}
