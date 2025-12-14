/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55441
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_16 -= var_7;

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_17 += (arr_0 [0]);
            var_18 = (min(var_18, ((((((-1272353314 ? 58806 : -115))) ? ((((arr_1 [8]) >= 1832284545))) : ((min(239, (-127 - 1)))))))));
        }

        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                var_19 = (min(var_19, (((!((max(455727064, 1))))))));
                var_20 &= (min(1272353333, -1192376544353251388));
                arr_9 [i_0] [i_0] [i_3] |= -1832284517;
            }
            /* vectorizable */
            for (int i_4 = 1; i_4 < 19;i_4 += 1)
            {
                var_21 = (1 - 16324);
                arr_13 [i_0] = ((((((arr_3 [i_0] [i_2]) ? 125841296 : (arr_11 [i_0 + 1] [i_0] [i_0 + 2])))) || 26331));
                arr_14 [i_0] [i_2] [0] [i_0] = 125841296;

                for (int i_5 = 1; i_5 < 18;i_5 += 1)
                {

                    for (int i_6 = 3; i_6 < 20;i_6 += 1)
                    {
                        arr_21 [i_2] [20] [i_5 + 3] [i_6 - 2] &= -1272353314;
                        arr_22 [6] |= (((arr_0 [4]) ? var_2 : (arr_0 [2])));
                    }
                    for (int i_7 = 4; i_7 < 20;i_7 += 1)
                    {
                        arr_25 [i_0] [i_2] [i_4] [1] [i_7] = (56675 + 255);
                        var_22 -= (arr_19 [i_7 - 1] [i_7 - 2] [i_7] [i_7] [i_5] [i_4 + 2]);
                        arr_26 [i_0] = -1272353303;
                        arr_27 [i_0] = (arr_23 [i_0] [i_7]);
                    }
                    for (int i_8 = 1; i_8 < 19;i_8 += 1)
                    {
                        arr_30 [i_0 + 1] [i_2] [i_4] [i_4] [i_0] [i_5 + 3] [i_8] = 5132855205765662000;
                        arr_31 [i_5] [i_5] [i_5] [i_5 + 2] [i_5] [i_0] = 1;
                    }
                    var_23 = (min(var_23, (arr_3 [2] [i_2])));
                    var_24 = (max(var_24, (((67385939 ? (arr_29 [i_0 - 1] [2]) : (arr_29 [i_0 - 1] [18]))))));

                    for (int i_9 = 0; i_9 < 21;i_9 += 1) /* same iter space */
                    {
                        arr_36 [i_0] [i_4] [i_4] [i_0] [i_5 - 1] = (i_0 % 2 == zero) ? ((((arr_6 [i_0 - 1] [i_4] [i_5 - 1]) << (((arr_16 [i_0 + 1] [i_4] [i_4 + 2] [i_0]) - 1890364526))))) : ((((arr_6 [i_0 - 1] [i_4] [i_5 - 1]) << (((((arr_16 [i_0 + 1] [i_4] [i_4 + 2] [i_0]) - 1890364526)) - 3662914784)))));
                        var_25 -= (((2147483647 % (arr_8 [4]))));
                        arr_37 [i_0] [i_2] [8] [i_5 + 1] [2] [i_5] &= var_2;
                    }
                    for (int i_10 = 0; i_10 < 21;i_10 += 1) /* same iter space */
                    {
                        var_26 ^= ((((41180 ? 3 : 1)) != (arr_8 [1])));
                        arr_40 [i_0] = (arr_23 [i_0] [i_5 + 3]);
                    }
                }
                for (int i_11 = 0; i_11 < 21;i_11 += 1)
                {
                    arr_44 [i_0] [10] [i_11] = -2140911434;

                    for (int i_12 = 0; i_12 < 21;i_12 += 1)
                    {
                        arr_47 [i_0] = var_0;
                        var_27 = 4294967295;
                        arr_48 [i_12] [i_11] [i_0] [i_2] [i_0] = ((2462835720 ? 124 : 246));
                    }

                    for (int i_13 = 1; i_13 < 18;i_13 += 1)
                    {
                        arr_51 [i_0] [10] = (((arr_38 [i_13] [i_13] [i_13] [4] [i_13] [i_13 + 3] [i_13 + 3]) || (arr_45 [i_0 + 1] [i_0] [i_0] [i_13 + 1] [i_4 - 1])));
                        arr_52 [i_11] &= 125841296;
                    }
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        var_28 = (max(var_28, 16));
                        var_29 = (max(var_29, 1));
                        var_30 = (max(var_30, 0));
                    }
                }
            }
            arr_55 [i_0] = (arr_3 [i_0] [i_2]);
        }
    }
    var_31 = (max(var_31, var_4));
    var_32 = (max(var_32, ((max((((1 || var_1) ? (var_1 * 3858648434) : (((var_7 ? 383170757 : var_15))))), var_7)))));
    #pragma endscop
}
