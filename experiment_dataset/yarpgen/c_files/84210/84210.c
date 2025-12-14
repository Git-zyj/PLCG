/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, var_2));

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] = (arr_2 [i_0] [i_0]);
        var_11 = max((arr_0 [i_0]), (((((!(arr_0 [i_0])))) / (arr_1 [i_0 - 1]))));
        arr_4 [7] = min((((!(arr_0 [i_0 + 1])))), ((9223372036854775807 ? 35305 : 30236)));
        var_12 = (max((arr_1 [i_0 - 2]), ((max((arr_1 [i_0 - 2]), (arr_1 [i_0 - 2]))))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_13 = (max(((((max((arr_6 [i_1] [i_1]), (arr_5 [i_1] [i_1])))) ? ((((arr_7 [i_1] [i_1]) ? (arr_6 [i_1] [i_1]) : 30245))) : (~-262670116385027315))), (arr_6 [i_1] [i_1])));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    {
                        var_14 = (min(var_14, (35294 - -2118767607128440055)));
                        var_15 |= ((235 ? (min(-385435437, (arr_8 [i_2] [8] [i_3]))) : (!10094905514689805209)));
                    }
                }
            }
        }
        var_16 = (((arr_11 [i_1] [4] [i_1]) ? (((min(385435417, (arr_11 [i_1] [i_1] [i_1]))) + (arr_9 [1]))) : (arr_2 [i_1] [i_1])));
        /* LoopNest 3 */
        for (int i_5 = 2; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    {
                        var_17 = (max(var_17, 385435411));
                        arr_28 [i_1] [i_5] [i_5] [i_6] [i_7] = -3678386023259318133;
                        arr_29 [i_5] [i_7] = (max(30228, 34642));
                        var_18 = 190;
                        var_19 = (max(35305, 30199));
                    }
                }
            }
        }
        arr_30 [i_1] [i_1] &= (max((((arr_10 [i_1]) ? (arr_13 [i_1]) : (arr_13 [i_1]))), ((min((arr_13 [i_1]), (arr_10 [i_1]))))));
    }
    for (int i_8 = 2; i_8 < 18;i_8 += 1)
    {
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 20;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 17;i_10 += 1)
            {
                for (int i_11 = 2; i_11 < 17;i_11 += 1)
                {
                    {
                        var_20 = 30228;
                        var_21 = var_8;
                        var_22 = (arr_33 [i_8 + 2]);
                        var_23 = (!30242);
                        arr_44 [i_8 + 2] = var_2;
                    }
                }
            }
        }
        var_24 = (arr_39 [i_8] [i_8 - 2] [i_8]);
        arr_45 [i_8] = (((((max(63299, 241)))) ? 72 : ((max((max(35315, 149)), 220)))));
        var_25 = (max(var_25, (((-(((arr_34 [i_8] [i_8 + 1] [i_8]) - var_6)))))));
    }
    #pragma endscop
}
