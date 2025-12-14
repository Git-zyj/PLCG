/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62897
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, 97));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 4; i_1 < 8;i_1 += 1)
        {
            var_11 = ((-((1762 ? var_6 : var_4))));
            var_12 = var_5;
        }
        var_13 = (((((var_6 ? -2662330665342578424 : ((max(var_8, 26218)))))) ? (((max(var_9, var_0)))) : (max(((-13221 ? (arr_5 [1] [4]) : (arr_6 [i_0]))), 26229))));
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            var_14 = (((((var_1 ? 1 : 14277287051810994255))) ? ((14 ? 34045 : 0)) : ((3933703123 ? 0 : 19468))));
            arr_13 [i_2] [i_3] = (max((min((((2662330665342578444 ? 1 : 62355))), ((92 ? 14277287051810994255 : -36)))), 744042685));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            var_15 = (arr_10 [i_2]);

            for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
            {
                var_16 = var_4;

                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    var_17 = var_8;

                    for (int i_7 = 2; i_7 < 18;i_7 += 1)
                    {
                        var_18 = ((-744042686 ? var_8 : (arr_19 [i_5] [i_4] [i_5] [i_5])));
                        var_19 = (((arr_22 [i_7] [i_7 - 1] [i_7 - 2] [i_4] [i_4]) ? (arr_14 [7] [i_2] [i_7 - 2]) : -30));
                    }
                    var_20 += ((427731867 ? 31495 : 1));

                    for (int i_8 = 0; i_8 < 0;i_8 += 1)
                    {
                        arr_27 [i_2] [i_2] [i_2] [i_2] [i_2] = (((((97 ? var_6 : (arr_11 [i_2] [i_2] [i_2])))) ? ((var_1 ? -3274993773355423576 : 14753623658420650532)) : (arr_16 [i_2] [i_4] [i_5])));
                        arr_28 [i_2] [i_2] [16] [i_6] [16] [i_2] = 97;
                        var_21 = (min(var_21, (((107 ? 110 : 137)))));
                    }
                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        arr_33 [i_4] [i_4] [i_5] [i_5] [i_9] [i_5] = ((((1 ? 4186 : 122))) ? var_8 : ((var_8 ? var_2 : 1)));
                        var_22 = var_2;
                        var_23 = -1;
                    }
                    var_24 = -var_0;
                }
            }
            for (int i_10 = 0; i_10 < 19;i_10 += 1) /* same iter space */
            {
                var_25 = (!(arr_25 [i_10] [6] [3] [i_2] [i_2]));
                arr_36 [i_2] = -10444596868528078;
            }
            for (int i_11 = 0; i_11 < 19;i_11 += 1) /* same iter space */
            {
                var_26 = (max(var_26, (((244 ? (arr_32 [i_2] [i_4] [i_4] [i_11]) : 86)))));
                var_27 = (max(var_27, (((1 ? (arr_24 [i_2]) : (arr_24 [i_4]))))));
            }
            var_28 = (max(var_28, ((4178421988455215104 ? var_1 : 8841886869910582618))));
            var_29 = (~-2662330665342578446);
        }
        var_30 |= (arr_12 [i_2] [i_2]);
    }
    for (int i_12 = 1; i_12 < 17;i_12 += 1)
    {
        var_31 = ((var_7 ? 107 : var_4));
        var_32 = ((12 ? (((((((arr_39 [i_12]) ? 4919574642021149932 : (arr_34 [i_12 + 1] [i_12 + 1] [i_12 - 1] [i_12 + 1])))) ? (((var_6 ? var_8 : 251))) : ((30306 ? var_2 : var_0))))) : var_5));
    }
    var_33 = var_1;
    #pragma endscop
}
