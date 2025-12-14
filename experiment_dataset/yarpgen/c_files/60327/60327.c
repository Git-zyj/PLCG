/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60327
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((1 ? ((var_12 ? (max(1, 5747592429319740992)) : 4289861274)) : ((min(((-1387112657427247383 ? -1387112657427247383 : 1402783070)), 1402783086)))));

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_4 [i_0 + 1] = (min((((((var_12 ? var_10 : var_12))) ? ((var_2 ? var_1 : var_2)) : ((var_7 ? var_2 : var_7)))), ((max(var_13, (min(var_5, var_13)))))));
        var_17 = var_10;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_18 = (min(var_18, 1387112657427247408));
        var_19 = ((var_10 ? ((max(var_11, var_7))) : 0));
    }
    var_20 = (max(var_20, ((((((var_3 ? (max(1387112657427247400, 1)) : (((var_14 ? var_11 : var_14)))))) ? ((var_3 ? var_11 : var_2)) : ((((max(var_6, var_11))) ? ((var_3 ? var_11 : var_7)) : var_5)))))));

    for (int i_2 = 1; i_2 < 17;i_2 += 1)
    {
        arr_10 [i_2] = ((var_13 ? var_14 : var_15));
        var_21 *= (min(-7413944967888849324, 530764300));
        var_22 = (max(var_4, ((-1387112657427247405 ? 1952141546 : 5106028))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        var_23 = (min(var_23, (((var_0 ? var_1 : var_9)))));
        arr_14 [i_3] = var_12;
    }
    for (int i_4 = 1; i_4 < 11;i_4 += 1)
    {
        arr_18 [i_4] = var_13;
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 10;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 1;i_7 += 1)
                {
                    {
                        var_24 = (min(var_3, var_11));
                        arr_27 [i_7] [i_5] [i_6 + 1] [i_7] = ((((((((0 ? 1 : 3444))) ? 549204682 : -549204686))) ? var_7 : (max(((var_10 ? var_9 : var_0)), (((var_9 ? var_6 : var_10)))))));
                    }
                }
            }
        }
        var_25 = ((((min(((var_4 ? 6723159477507760618 : 112)), 10344))) ? (((((2892184220 ? var_1 : 24))) ? (((min(var_11, var_3)))) : ((-870698278 ? 576531352 : 5106009)))) : var_13));

        for (int i_8 = 1; i_8 < 11;i_8 += 1)
        {
            arr_31 [i_4 + 2] [i_8] = var_5;
            var_26 = ((var_2 ? (min(0, -1387112657427247416)) : ((54 ? 1 : -7413944967888849318))));
        }
        /* vectorizable */
        for (int i_9 = 2; i_9 < 12;i_9 += 1)
        {

            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {

                for (int i_11 = 0; i_11 < 13;i_11 += 1)
                {
                    arr_42 [i_4] [i_9] [i_9] [10] [i_11] = ((var_12 ? var_8 : var_0));
                    arr_43 [i_11] = 3449613864;
                }
                arr_44 [i_4 + 2] [i_4] [i_4 + 1] = ((1 ? 1387112657427247400 : -12949));
                var_27 = var_8;
                arr_45 [i_4] [i_4] [10] = var_9;
            }
            var_28 = (((((8643676645495371267 ? 4221 : 1914325595))) ? var_7 : var_11));
            var_29 = (((((var_10 ? var_12 : var_0))) ? ((-1387112657427247417 ? -19004 : 3)) : var_8));
            /* LoopNest 3 */
            for (int i_12 = 3; i_12 < 11;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 13;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 13;i_14 += 1)
                    {
                        {
                            arr_54 [i_4] [1] [i_12] [i_14] [1] = (((((var_0 ? var_8 : var_0))) ? var_0 : (((var_10 ? var_4 : var_11)))));
                            var_30 = var_9;
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_15 = 0; i_15 < 1;i_15 += 1)
        {
            var_31 = var_14;
            var_32 = ((((5106024 ? 2340597150 : 530764295))) ? (((var_15 ? var_10 : var_1))) : var_14);
        }
    }
    #pragma endscop
}
