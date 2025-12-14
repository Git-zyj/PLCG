/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61285
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        var_12 = (max(var_12, (((1 ? ((max(var_1, (max(var_9, 407317271))))) : ((((max(var_4, var_10))) + -8452545373229414787)))))));

        for (int i_1 = 2; i_1 < 15;i_1 += 1) /* same iter space */
        {
            var_13 = (max(var_13, -24));
            arr_5 [i_0] [i_0] = (min((arr_0 [i_0]), var_4));
            arr_6 [0] [i_1] = 9552338656020488466;
            var_14 = (min(var_14, var_5));
        }
        for (int i_2 = 2; i_2 < 15;i_2 += 1) /* same iter space */
        {
            arr_9 [10] = (max((((var_11 / (var_9 & 66)))), ((14335 ? -var_10 : var_2))));
            /* LoopNest 3 */
            for (int i_3 = 1; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 13;i_5 += 1)
                    {
                        {
                            var_15 = var_10;
                            var_16 = (max(var_5, (arr_1 [i_4])));
                            arr_18 [i_0] [i_0] [2] = (((var_2 != var_9) ? ((((((arr_12 [14] [i_4] [i_0] [7] [i_0] [7]) << (var_1 - 57642472)))) ? (arr_17 [i_5] [i_5] [i_5] [i_5] [i_5]) : (((arr_3 [13] [i_2]) & var_9)))) : ((var_2 ? 4294967295 : (((((arr_16 [i_0] [4] [i_3] [i_2] [i_5] [14]) <= (arr_14 [i_0] [i_2] [i_3] [i_4] [3])))))))));
                        }
                    }
                }
            }
            arr_19 [i_0] [i_2] = ((((var_3 ? var_2 : ((max(var_11, var_0))))) & ((((arr_0 [i_0 - 3]) ? (arr_0 [i_0 - 4]) : (arr_0 [i_0 - 2]))))));
            arr_20 [6] |= 1223305901;
            arr_21 [i_0] [i_2] |= var_1;
        }
        for (int i_6 = 2; i_6 < 15;i_6 += 1) /* same iter space */
        {
            var_17 = 2769393438;
            var_18 |= ((((!(-127 - 1)))));

            /* vectorizable */
            for (int i_7 = 2; i_7 < 15;i_7 += 1)
            {
                var_19 = (max(var_19, (((((((arr_7 [i_7]) | 728247580))) ? (((arr_2 [i_6] [i_6]) ? var_8 : (arr_25 [i_0] [1] [i_0] [6]))) : var_0)))));
                var_20 = (min(var_20, 386341052));
            }
            for (int i_8 = 2; i_8 < 15;i_8 += 1)
            {
                var_21 = (max((min((((arr_27 [i_0]) - 3827996274)), 5248397684058651907)), var_8));
                arr_29 [1] [i_6] [i_8] = (((-2147483647 - 1) ? (arr_17 [i_0] [i_0] [i_0 + 1] [i_0] [i_0]) : (!2769393438)));
                arr_30 [i_0] [i_6] [i_8] = var_11;
            }
            /* vectorizable */
            for (int i_9 = 1; i_9 < 13;i_9 += 1)
            {

                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    var_22 += 728247577;
                    arr_36 [i_0] [4] [i_6] [i_10] = var_2;
                }
                var_23 += var_0;
                var_24 = (16508062600014087233 && (arr_35 [9] [i_6] [i_6] [i_6] [i_6] [i_6]));
                arr_37 [i_0] [i_6] [i_6] [i_9] = ((((var_7 ? 9223372036854775807 : 913803775219501291)) > var_4));
            }
        }
        var_25 = (max(var_25, ((max(17804, var_3)))));
    }
    for (int i_11 = 1; i_11 < 22;i_11 += 1)
    {
        arr_41 [14] &= 47703;
        var_26 = (max(var_26, (((3423424182 << (-1831483211 + 1831483224))))));
    }
    for (int i_12 = 0; i_12 < 1;i_12 += 1)
    {
        arr_45 [i_12] [i_12] = (arr_42 [i_12] [5]);
        arr_46 [i_12] [i_12] = (((max(var_5, var_10)) <= (((var_0 ? (arr_42 [i_12] [i_12]) : (arr_42 [i_12] [i_12]))))));
    }
    var_27 = var_9;
    #pragma endscop
}
