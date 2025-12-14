/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6740
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 6;i_2 += 1)
            {
                {
                    arr_8 [0] [i_1] [i_1] &= (((1 ? 1 : -1)));
                    arr_9 [i_0] = var_1;
                    arr_10 [i_0] [i_0] [i_0] [i_2 - 1] = (arr_6 [i_1] [8] [i_2 + 3] [i_2 + 2]);

                    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                    {
                        arr_13 [i_0] [i_0] [i_2] [6] = (max(((((~var_8) && -1))), (((((min((arr_11 [i_0] [i_1] [i_3]), var_5)))) + (arr_7 [i_0] [i_0] [i_0] [i_0])))));
                        arr_14 [i_0] [i_0] [i_0] [i_0] = (1966226171 >= 7822089608673979177);
                        var_17 = ((~(arr_2 [i_1])));
                        var_18 = (9769517605448681608 % 2378493168);
                        arr_15 [i_0] = ((~(((!((min(var_0, 1966226171))))))));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                    {
                        var_19 += ((+(min((arr_18 [i_1] [i_1] [i_2]), (max((arr_0 [i_1]), var_6))))));

                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            arr_23 [i_0] [i_5] [i_4] [i_4] [i_0] [i_0] [i_1] = (63 + 14234525605118181171);
                            arr_24 [i_0] [i_1] [i_1] [i_2] [i_1] [i_5] &= (max(((((arr_4 [3] [i_4] [i_5]) ? 1 : 1))), -var_8));
                        }
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                    {

                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            var_20 = ((var_15 / ((353282469 ? 13930 : -1159616098))));
                            var_21 = ((((var_16 ? var_16 : var_7)) & (((arr_16 [i_2 + 3] [i_2 + 1] [i_2] [i_2] [i_0] [i_6]) ? (arr_16 [i_2 + 3] [i_2 + 3] [i_2 + 3] [i_2 + 3] [i_0] [7]) : (arr_16 [i_2 + 3] [i_2] [i_2] [3] [i_0] [i_6])))));
                        }
                        arr_30 [i_0] [i_0] = (arr_20 [3] [3] [3]);
                    }
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        arr_34 [i_0] = 61381431;
                        arr_35 [i_0] [7] [i_0] [1] = ((~((((arr_3 [i_0]) > (arr_33 [i_0]))))));
                        var_22 ^= (min(702638486, 2889321404));
                        arr_36 [i_0] [9] [i_0] = (arr_20 [i_2 - 1] [i_2 + 3] [i_2 + 1]);
                    }
                }
            }
        }
    }
    var_23 = (((((var_13 ? ((min(71, 4233585865))) : var_9))) ? var_2 : (min((((72710871 ? var_12 : 26592))), var_6))));
    #pragma endscop
}
