/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((2021850483 + (max((54018 + 2779750687), ((min(var_3, var_6)))))));

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_15 = ((var_9 + var_1) > (max(var_0, (174891665 < 2779750680))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_16 &= var_12;
                    arr_7 [i_2] [i_0] [i_0 - 1] = ((((max(-27699, 43085))) % (-2308601468848293507 ^ 491105908)));
                    arr_8 [i_2] [i_1] [i_2] |= (arr_1 [i_2] [i_1]);
                    var_17 = (arr_5 [i_0 - 1] [i_1] [i_1] [i_1]);
                    var_18 += (((((((((arr_5 [i_0] [i_0] [i_1] [i_2]) & var_9))) ? (arr_2 [i_2]) : (((arr_6 [i_0] [i_0] [i_2]) ^ var_9))))) || -2021850484));
                }
            }
        }
        var_19 = (max(var_3, (arr_1 [i_0] [i_0 - 1])));
    }
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        var_20 = (max(var_20, var_0));
        arr_13 [i_3] = var_10;
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 18;i_5 += 1)
            {
                {
                    arr_19 [i_5] [i_4] [18] = (max((arr_16 [i_3]), (arr_17 [i_5 - 3] [i_4 + 2] [i_3])));

                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        var_21 = ((+(min((-1561748688480951447 + 115), 1))));
                        var_22 = (max(var_22, (((-27686 ^ 755677933) | (arr_20 [i_5 + 1] [i_4 - 1] [i_4 + 2] [i_4 - 1] [i_3 - 1])))));
                        arr_22 [i_3 - 1] [i_3] [i_4 - 1] [i_5] [i_5] [i_6] = (((((((arr_10 [i_3]) ? var_8 : var_1))) != (min(var_4, (arr_9 [i_3]))))));
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        for (int i_8 = 4; i_8 < 18;i_8 += 1)
                        {
                            {
                                arr_28 [i_3] [i_3] [i_3] [i_7] [i_3] = (arr_17 [i_8] [8] [i_4 + 2]);
                                var_23 = (max(var_23, ((min((((var_13 || var_11) ? (var_4 && var_12) : var_10)), ((((1342592946 && (-9223372036854775807 - 1))))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_9 = 1; i_9 < 22;i_9 += 1)
    {
        var_24 = (max(var_24, 83));
        arr_31 [i_9] = ((var_5 == (((((var_10 & (arr_30 [i_9] [i_9])))) ? (arr_30 [i_9] [i_9]) : (arr_29 [i_9])))));
        var_25 = (max(var_25, (arr_30 [2] [2])));
    }
    var_26 *= var_0;
    #pragma endscop
}
