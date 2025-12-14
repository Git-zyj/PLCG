/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81903
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {

                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            var_17 *= ((var_8 ? ((8655949861764898475 ? 0 : var_5)) : (((-1 ? var_6 : 4294967292)))));
                            arr_12 [i_0] [i_1] [i_0] [i_1] [i_4] = (-23766 + -23776);
                        }
                        var_18 = var_16;
                    }
                }
            }
        }
        arr_13 [i_0] [i_0] = (var_13 ^ 7670104954175150198);
        arr_14 [12] [i_0] = ((((var_4 ? var_11 : 22905)) | (((1543591269 ? -22905 : var_12)))));

        for (int i_5 = 3; i_5 < 21;i_5 += 1)
        {
            arr_17 [i_5] [18] [18] &= (((arr_3 [i_0] [i_5 + 1] [i_0]) < 4294967294));
            arr_18 [19] [i_0] = (arr_11 [16] [i_5] [8] [i_5] [9] [i_0] [i_0]);
        }
        arr_19 [i_0] &= (((arr_1 [i_0]) ? var_8 : 4294967290));
    }
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {

        for (int i_7 = 3; i_7 < 16;i_7 += 1)
        {
            var_19 = min(var_14, var_14);
            var_20 = (min(var_20, var_12));
            arr_27 [i_6] [i_6] [i_6] = 23765;
        }
        for (int i_8 = 1; i_8 < 15;i_8 += 1)
        {
            arr_30 [1] = ((((max((arr_16 [i_8] [i_8 + 4] [i_8]), -8655949861764898480))) ? (((((arr_8 [i_8 + 2] [i_8 + 4] [i_8 + 4] [i_8] [i_8 + 4]) || -23613)))) : (max(var_6, var_9))));
            var_21 = 32291;
            var_22 = var_10;
        }
        var_23 = (max(var_23, 85));
        arr_31 [i_6] = (min((((((390992752441408344 ? 20526 : var_3))) ? ((max(var_3, var_4))) : 18055751321268143246)), (arr_26 [i_6])));
        arr_32 [i_6] = ((var_14 ? -1 : ((((max(-8655949861764898454, 17))) ? (((max(144, (arr_7 [i_6] [i_6] [i_6]))))) : var_3))));
    }
    for (int i_9 = 0; i_9 < 14;i_9 += 1)
    {
        arr_35 [i_9] [i_9] = (min(((7381289154909936357 ? -32755 : (arr_25 [i_9]))), (max((arr_25 [i_9]), (arr_22 [i_9])))));
        var_24 = ((((max((arr_24 [i_9]), (arr_2 [i_9])))) << (7381289154909936352 - 7381289154909936338)));
        var_25 = (min(var_25, 255));

        for (int i_10 = 0; i_10 < 14;i_10 += 1)
        {
            var_26 = var_3;
            var_27 = (max(((114 | (min(1890715747, var_14)))), ((max((arr_23 [i_9] [i_10]), ((3487 ? 4 : 227)))))));
        }
        for (int i_11 = 0; i_11 < 14;i_11 += 1)
        {

            for (int i_12 = 0; i_12 < 14;i_12 += 1) /* same iter space */
            {
                var_28 *= var_9;
                arr_45 [i_9] [i_9] [i_12] = ((((var_3 || (arr_7 [i_12] [i_12] [i_9]))) ? (((((31488 / (arr_25 [i_9]))) < (32 % var_1)))) : var_2));
            }
            /* vectorizable */
            for (int i_13 = 0; i_13 < 14;i_13 += 1) /* same iter space */
            {
                arr_48 [i_9] [i_9] [i_13] [i_11] = 763290214;
                var_29 = ((((var_9 ? 17622568654247455719 : 116))) ? (var_9 != var_7) : ((var_16 ? var_0 : 7381289154909936357)));
            }
            /* vectorizable */
            for (int i_14 = 1; i_14 < 13;i_14 += 1)
            {
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 14;i_15 += 1)
                {
                    for (int i_16 = 2; i_16 < 13;i_16 += 1)
                    {
                        {
                            var_30 = -4014471123391298432;
                            arr_55 [12] [i_11] [i_14] [2] [i_14] [i_15] [i_9] = (var_5 - 1483920609);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 14;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 14;i_18 += 1)
                    {
                        {
                            var_31 = (arr_34 [i_9]);
                            arr_60 [i_11] [i_14] [i_17] [i_18] = (((3464 ^ 33) ? (((-5287426365411505359 <= (arr_21 [i_9])))) : 47));
                        }
                    }
                }
                var_32 *= 0;
            }
            /* LoopNest 2 */
            for (int i_19 = 0; i_19 < 14;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 14;i_20 += 1)
                {
                    {
                        var_33 *= (((((-(18446744073709551615 & var_11)))) || (((var_1 ? (~var_15) : (arr_61 [i_9] [i_20]))))));
                        var_34 *= 42;
                    }
                }
            }
            arr_66 [i_9] = ((~(arr_42 [i_9])));
        }
    }
    var_35 = ((var_9 | (((((min(-29071, var_7))) ? ((127 << (var_13 + 25878))) : var_8)))));
    var_36 = 13988505379961387194;
    #pragma endscop
}
