/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96478
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_11;
    var_20 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 6;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            arr_13 [i_2] [i_1] [i_2] [i_0] [i_2] [i_1] [i_0] = (min((max(15005009802359078814, 223)), (arr_0 [i_3])));
                            var_21 = (max((((((var_7 ? (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_3] [i_4]) : 223))) ? ((48805 ? 177 : (arr_6 [i_1]))) : (arr_5 [i_0] [i_0] [i_0]))), (((min(23918, (arr_7 [i_1])))))));
                            var_22 = 18446744073709551606;
                        }
                        var_23 = (max(var_23, (((((6 ? (!45633) : (-32767 - 1))) | ((-(((arr_2 [i_2] [i_1]) ? 3182 : var_12)))))))));
                        arr_14 [i_0] [i_2] [i_0] |= ((+((max((arr_11 [i_1] [i_1 - 1] [i_1] [i_1 - 1] [i_1] [i_0 + 1] [i_1 + 1]), (arr_11 [i_0] [i_0 + 1] [i_0] [i_1] [i_1] [i_3 + 1] [i_3]))))));

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            arr_17 [i_1] [i_2] [i_3] [i_2] [i_2] [i_0] [i_1] = (!18446744073709551609);
                            arr_18 [i_0] [i_0] [i_1] = (arr_8 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 + 1]);
                        }
                        arr_19 [i_1] [i_1] = (((~32763) < (max(9187343239835811840, 0))));
                    }
                    var_24 = (((arr_1 [i_0]) ? 9001582581493298063 : (((((87 ? 31068 : (arr_10 [i_1] [i_1] [i_0] [i_1] [i_0]))) % (((max((arr_7 [i_1]), 30334)))))))));

                    /* vectorizable */
                    for (int i_6 = 4; i_6 < 9;i_6 += 1)
                    {
                        var_25 = (((-9223372036854775807 - 1) ? -2311755556835358884 : 143));
                        var_26 = -200;
                    }
                    for (int i_7 = 4; i_7 < 7;i_7 += 1)
                    {
                        arr_24 [i_1] = (max((max(-9187343239835811841, 5587934058825861572)), (arr_15 [i_0] [i_0 + 1] [i_0] [i_0 - 1] [i_0 + 1])));
                        arr_25 [i_0] [i_0] [i_0] [i_1] [i_0] = (((((0 ? 18446744073709551615 : 5414))) ? -3665533741305897908 : (arr_15 [i_0] [i_0] [i_2] [i_7 + 3] [i_7 + 3])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
