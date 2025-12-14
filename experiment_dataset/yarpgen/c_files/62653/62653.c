/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((-88 ? (1 >= var_18) : var_2));

    for (int i_0 = 1; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_21 = (~var_0);

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_22 = (min(var_22, (((((((151127584 ? 2436738062699834282 : var_16)) - 1)) <= 0)))));
            var_23 = -870882681;
            var_24 = (max(var_24, 0));
            var_25 = (max(var_25, 1));
        }

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_26 = var_2;
            var_27 += (~var_5);
        }
        var_28 = (min(var_28, (((17 < (((arr_7 [i_0] [i_0] [i_0]) ? 27 : (((!(arr_1 [i_0])))))))))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    {
                        var_29 &= var_3;
                        var_30 = ((min(((~(arr_5 [i_0] [i_0] [i_0]))), -121)));
                        var_31 = var_7;
                    }
                }
            }
        }
    }
    for (int i_6 = 1; i_6 < 14;i_6 += 1) /* same iter space */
    {
        var_32 = 410306451;
        var_33 = (min(var_33, var_16));
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 15;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    {
                        var_34 &= ((27 ? -31 : 1));
                        var_35 = ((!(5853921146248301334 > 1)));

                        for (int i_10 = 0; i_10 < 15;i_10 += 1)
                        {
                            var_36 = (min(var_36, (((((max(0, -5065))) ? 7668705392217867063 : (((var_13 ? 1 : 9223372036854775807))))))));
                            var_37 &= (((-22 < -11855) && 140728898420736));
                            var_38 = (min(var_38, (((~((0 ? var_14 : (arr_15 [i_6 - 1] [i_6 - 1] [i_6 - 1]))))))));
                            var_39 += -0;
                            var_40 = -126;
                        }
                    }
                }
            }
        }
        var_41 = ((!(!31)));
    }
    for (int i_11 = 0; i_11 < 10;i_11 += 1)
    {
        /* LoopNest 2 */
        for (int i_12 = 2; i_12 < 6;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                {
                    var_42 = var_5;
                    var_43 = var_11;
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 10;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 1;i_15 += 1)
                        {
                            {
                                var_44 = (min(var_44, 1));
                                var_45 = (-1 + -4100154983);
                                var_46 = (max(var_46, -849363018));
                            }
                        }
                    }
                }
            }
        }
        var_47 = (min(var_47, 11829));
    }
    var_48 = var_1;
    var_49 ^= var_15;
    #pragma endscop
}
