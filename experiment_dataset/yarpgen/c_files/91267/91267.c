/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91267
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_9 || var_6);

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_20 = ((!((!(((var_5 ? var_7 : 60)))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_21 = (arr_4 [i_0] [i_1]);
            var_22 = (!var_12);
            arr_8 [i_1] = (1 / 1);
        }
        for (int i_2 = 3; i_2 < 10;i_2 += 1)
        {
            arr_11 [i_0] [i_2] = ((-((9043 ? 0 : 1339493660))));
            var_23 = (arr_0 [i_0]);
            var_24 = (min((((((229376 ? 195 : 61)) + -var_7))), ((91 ? 18014398509416448 : (max(17357240550198433669, var_9))))));
        }
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            var_25 = (((arr_6 [i_0] [i_0] [i_0]) ? (((-(min(var_1, var_4))))) : (min(((1 ? var_11 : 234)), (!1052820422)))));
            var_26 = ((~((var_5 ? (((arr_2 [i_0]) ? (arr_12 [i_0] [i_3]) : 223856658720443197)) : (((min(1, (arr_6 [i_3] [i_0] [8])))))))));

            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                var_27 *= var_13;
                var_28 = (arr_13 [11] [11]);
                var_29 = (arr_13 [i_4] [i_4]);

                for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
                {
                    var_30 = var_12;
                    arr_19 [i_0] [i_0] [1] [i_3] [i_3] [i_3] = (((((2139095040 * ((var_12 / (arr_14 [1] [i_3] [8] [i_3])))))) ? (~8001) : (min(var_2, ((min(var_0, var_17)))))));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
                {
                    arr_23 [i_0] [i_0] [i_6] [i_6] [i_6] = ((71 ? (arr_22 [i_4] [i_4] [i_4]) : var_6));
                    var_31 = var_5;
                    arr_24 [i_6] [i_6] [i_4] = (var_8 != (((-(arr_5 [i_0])))));

                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        var_32 = 4126613398;
                        arr_27 [i_0] [i_3] [7] [i_6] [i_6] [i_4] = (!3611766086);
                        var_33 = (min(var_33, (536870896 / 266813199)));
                    }
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        var_34 = ((1 || (((var_1 ? 18222887414989108419 : 50)))));
                        var_35 = (((arr_17 [i_0] [i_3] [i_3] [i_3] [i_6] [i_8]) ? (arr_0 [i_4]) : (((arr_17 [10] [i_3] [i_4] [i_6] [i_8] [8]) ? var_11 : var_6))));
                        arr_32 [i_0] [i_0] [i_0] [i_6] [i_0] = ((-((255 ? var_13 : 30462))));
                        var_36 = 188369714;
                    }
                }
                for (int i_9 = 0; i_9 < 12;i_9 += 1) /* same iter space */
                {
                    arr_35 [i_3] = ((((52 ? 185 : var_9)) / (min((max(-123, 4190266359)), (((19 ? -30475 : -7685)))))));
                    var_37 = (min(var_12, -0));
                    var_38 = ((!((min(var_1, (((-(arr_33 [i_4] [i_4] [i_4] [i_4] [i_4])))))))));
                    arr_36 [i_0] [i_3] [i_4] [i_9] = var_9;
                    var_39 = (((((32766 ? 0 : -200861518))) | ((min(var_5, (arr_10 [i_0]))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 12;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 12;i_11 += 1)
            {
                {
                    var_40 = -818663198;
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 12;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            {
                                var_41 = ((!(arr_13 [i_0] [i_12])));
                                var_42 = (min((3 - -818663199), (((var_3 ? var_3 : (arr_17 [i_0] [i_10] [i_10] [i_12] [i_0] [i_13]))))));
                                var_43 = (~var_3);
                                var_44 = (min(var_44, 2237607200));
                            }
                        }
                    }

                    for (int i_14 = 0; i_14 < 12;i_14 += 1)
                    {
                        arr_50 [i_0] = ((arr_48 [i_0] [10] [1] [i_14] [i_14]) ? (arr_40 [4] [i_14] [i_14]) : (arr_34 [4] [4] [i_0] [i_14]));
                        var_45 = var_12;
                        var_46 += (min(((!(arr_4 [i_10] [i_10]))), (!-7008)));
                    }
                    var_47 = ((((-(arr_25 [i_11] [i_0] [i_10] [i_0] [i_0] [i_0]))) / (((arr_25 [i_11] [i_11] [i_10] [i_11] [i_11] [i_0]) ? var_7 : (arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
                }
            }
        }
    }
    var_48 = var_14;
    var_49 -= (min((min(((var_0 ? var_12 : var_1)), var_1)), var_12));
    #pragma endscop
}
