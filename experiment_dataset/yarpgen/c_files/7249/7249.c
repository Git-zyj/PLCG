/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 10689;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
        {
            var_20 = ((-((0 ? 0 : 1))));
            arr_6 [8] [i_0] [i_0 - 2] = ((~(arr_1 [i_0 - 2] [i_0 - 2])));
            arr_7 [i_0] = (((arr_5 [i_0] [i_0]) ? var_13 : var_6));
            var_21 -= (((((arr_4 [10]) ? var_6 : 54))) && (!var_7));
        }
        for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
        {
            arr_10 [i_0] [i_2] [i_2] = (arr_4 [i_0]);
            var_22 = ((var_5 ? 206 : var_8));
            var_23 &= (((((-8715360091510802536 ? var_12 : var_18))) ? (((-8715360091510802525 ? -8715360091510802525 : 4103941695))) : 17625127971482765219));
            arr_11 [i_0] [i_0] = (-32 == var_3);
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 17;i_4 += 1)
                {
                    {
                        arr_19 [1] [i_0] [1] [1] [i_0] = (arr_18 [i_0 - 1]);

                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            var_24 = -var_7;
                            var_25 = ((var_10 ? (!9) : ((1 ? -4140715098597767134 : 13627))));
                            var_26 = 1099511627775;
                        }
                    }
                }
            }
        }

        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            arr_26 [i_0] [i_6] [i_6] = (((arr_13 [i_0 + 3] [i_0] [0] [0]) ? (!-8581950403585732598) : 12));
            arr_27 [i_0] [i_0] [i_0] = (((~var_18) ? (var_3 | 8201048225010161833) : var_7));
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 17;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 17;i_8 += 1)
                {
                    {
                        arr_33 [i_0] [1] [1] [i_0] = 8201048225010161813;

                        for (int i_9 = 4; i_9 < 16;i_9 += 1)
                        {
                            arr_37 [11] [i_0] [i_0] [16] [i_9] = ((60302 ? 283982709 : (~10485)));
                            arr_38 [i_7] [i_7] [i_7] [i_0] [i_0] [i_7 + 1] = ((-32748 ? 17768 : 111));
                            var_27 = ((var_13 != (((!(arr_2 [3]))))));
                        }
                        for (int i_10 = 0; i_10 < 18;i_10 += 1)
                        {
                            var_28 -= (~var_1);
                            var_29 *= ((!(arr_4 [i_10])));
                            var_30 = (((arr_28 [i_7 + 1] [i_7 + 1] [i_7] [i_7]) ? (arr_20 [i_7 - 1] [i_7 - 1] [i_0] [i_7]) : var_5));
                            var_31 = (((arr_30 [i_0] [10] [i_8 + 1] [i_7 - 1] [i_0]) ? ((-17779 ? var_5 : (arr_29 [i_0]))) : -var_0));
                            arr_41 [i_0] = 8581950403585732624;
                        }
                        var_32 = (!8201048225010161833);
                    }
                }
            }
        }
    }

    for (int i_11 = 0; i_11 < 25;i_11 += 1)
    {
        var_33 = (-(((var_12 < (var_13 - 0)))));
        var_34 -= ((((min(var_17, (-32767 - 1)))) / (arr_43 [20] [i_11])));
        var_35 = (((((((((arr_42 [i_11] [i_11]) ? (arr_42 [i_11] [i_11]) : 0))) ? ((min(10485, 898133857))) : (((arr_43 [i_11] [i_11]) ? var_12 : var_13))))) ? (arr_42 [3] [3]) : var_15));
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 25;i_12 += 1)
    {
        arr_47 [i_12] = (((((var_8 ? var_3 : var_5))) ? var_5 : var_16));

        for (int i_13 = 1; i_13 < 24;i_13 += 1)
        {
            var_36 = (((arr_49 [i_13 - 1] [i_13 - 1]) < var_6));
            var_37 = (var_15 ? (arr_43 [i_12] [10]) : (arr_43 [i_13 - 1] [i_13 - 1]));
            var_38 = (-5337564907776882935 < 160);
            var_39 = (min(var_39, (((!(arr_43 [i_13 - 1] [i_13]))))));
        }
    }
    var_40 = ((!(-1626500827 | 51489)));
    #pragma endscop
}
