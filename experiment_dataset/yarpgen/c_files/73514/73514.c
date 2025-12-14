/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((!(!var_13)))) * (((!((min(var_0, 3450801743)))))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {

                        for (int i_4 = 2; i_4 < 17;i_4 += 1)
                        {
                            var_18 = (!var_2);
                            var_19 = 4095;
                            var_20 += ((((((arr_14 [6] [6] [i_4 - 2] [i_3] [i_3] [i_0]) | var_10))) ? (arr_13 [i_2] [i_1] [i_4 + 1] [i_3] [i_4] [i_0]) : (arr_13 [i_0] [6] [i_4 - 1] [i_0] [i_4] [i_1])));
                        }
                        var_21 = (!1452359012);
                    }
                }
            }
            var_22 = (var_16 / var_9);
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 16;i_6 += 1)
                {
                    {
                        arr_20 [i_0] [2] [i_6] = -1452359006;
                        arr_21 [i_0] [i_0] [2] [i_0] = 1452358990;
                        var_23 = (max(var_23, (((!(((var_4 ? var_7 : (min((arr_11 [i_5] [i_1] [i_5] [i_6] [i_0]), 1105078793))))))))));
                        arr_22 [i_0] [i_1] [i_1] [i_5] [i_1] [i_6 - 1] = (arr_9 [i_1] [i_6]);
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            arr_25 [1] [1] [i_0] = (((arr_10 [i_0] [i_0] [i_7] [i_7]) & ((((((arr_5 [i_7] [i_0] [i_0]) ? (arr_3 [i_0]) : var_15)) == ((min((arr_13 [0] [i_7] [6] [i_0] [8] [i_0]), 250))))))));
            var_24 ^= var_6;
        }
        for (int i_8 = 0; i_8 < 18;i_8 += 1) /* same iter space */
        {

            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                var_25 = ((4591783925883582459 >> (821933301808821881 - 821933301808821855)));
                var_26 &= 51422;
                arr_33 [i_0] [i_8] [i_9] = var_0;
                var_27 -= (-1452359006 == 1452359006);
            }
            for (int i_10 = 2; i_10 < 15;i_10 += 1)
            {
                arr_37 [7] [7] = (max(((var_2 * (arr_17 [i_10 + 3] [i_10 - 1] [i_10 + 2] [i_10] [i_10 + 1] [i_10 + 2]))), (((-(!var_10))))));
                arr_38 [i_0] [i_0] [16] [i_0] = var_13;
            }
            var_28 ^= -1452359006;
        }
        for (int i_11 = 0; i_11 < 18;i_11 += 1) /* same iter space */
        {
            var_29 += (((max(var_3, 13854960147825969169))) / (arr_32 [i_0] [i_11]));
            arr_41 [i_0] [i_0] [i_0] = arr_19 [i_11] [i_11] [i_11] [i_0];
            var_30 = (arr_3 [i_0]);
            var_31 = (!1452359029);
            arr_42 [i_0] = (max(3840575263936975377, (var_9 != 82)));
        }

        for (int i_12 = 1; i_12 < 14;i_12 += 1)
        {
            arr_46 [i_0] [i_12] [i_12] = (min(46724, -var_10));
            arr_47 [i_0] [i_12] = arr_36 [i_12] [i_12] [i_12 + 1] [i_0];
            arr_48 [i_0] [i_0] [i_0] &= ((min(((var_15 ? -7927842495324825107 : var_15), 2316445418084763274))));
            var_32 = ((-(((arr_36 [i_12 - 1] [i_12 + 1] [i_12 + 4] [11]) ? (arr_30 [i_12] [i_12 + 4]) : var_14))));
        }
        var_33 += var_13;
        var_34 = (arr_5 [i_0] [5] [i_0]);
    }
    for (int i_13 = 0; i_13 < 18;i_13 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_14 = 0; i_14 < 18;i_14 += 1)
        {
            arr_56 [i_13] [i_14] [i_13] = (!var_8);
            var_35 &= ((-(~-3157825177665234499)));
            var_36 = ((var_0 ? (arr_12 [10] [i_13] [i_13] [i_13] [i_13]) : (arr_34 [i_13] [i_13] [i_14])));
        }
        var_37 &= (min((((~(arr_40 [i_13])))), var_3));
        var_38 = var_6;
    }
    for (int i_15 = 0; i_15 < 23;i_15 += 1)
    {
        arr_60 [i_15] = 49914;
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 23;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 23;i_17 += 1)
            {
                {
                    var_39 = (((arr_61 [i_15] [i_15] [i_17]) ? -var_2 : ((-(min(var_3, 27405))))));
                    var_40 ^= var_8;
                }
            }
        }
    }

    for (int i_18 = 0; i_18 < 13;i_18 += 1)
    {
        var_41 = (max(var_41, (((((-(arr_64 [i_18]))) >> ((((-3225501299277395121 / (arr_64 [i_18]))) - 2530349663)))))));
        var_42 = (max(var_42, (min(((~(arr_59 [i_18] [i_18]))), -var_8))));
        var_43 = ((~(arr_5 [i_18] [i_18] [i_18])));
    }
    for (int i_19 = 1; i_19 < 15;i_19 += 1)
    {
        var_44 = (max(var_44, (((-((-(arr_4 [i_19 + 1] [i_19 + 3] [i_19 + 1]))))))));
        var_45 = (~(arr_40 [i_19 + 1]));
    }
    #pragma endscop
}
