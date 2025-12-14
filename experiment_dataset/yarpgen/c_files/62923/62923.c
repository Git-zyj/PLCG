/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_13 = (arr_1 [i_0]);
        arr_2 [i_0] = (arr_1 [12]);
    }
    for (int i_1 = 1; i_1 < 23;i_1 += 1)
    {
        arr_5 [i_1] = 5710514298317030022;
        var_14 = var_6;
        var_15 ^= (arr_3 [i_1 - 1] [i_1 + 1]);

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_8 [i_1] [i_2] [i_2] = (((!((min(var_0, var_0))))));
            arr_9 [i_1] = 1;
            arr_10 [i_1] [i_2] = 16;
        }
        for (int i_3 = 4; i_3 < 23;i_3 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_4 = 2; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 23;i_6 += 1)
                    {
                        {
                            arr_20 [i_1] [i_3 - 3] [i_4 + 1] [i_1] [i_6] = ((var_7 ? (((((((arr_16 [i_6]) || 12903457409133084943))) < ((min((arr_14 [i_1]), (arr_13 [i_1] [22] [i_5]))))))) : (~0)));
                            var_16 = ((!((min(2103942868773008760, var_3)))));
                            var_17 = min((min(228, ((118 ? 10907984063935490412 : (arr_16 [i_6]))))), -55);
                            var_18 = (arr_19 [i_1 - 1] [1] [1] [i_1 - 1] [1] [i_1 - 1] [i_1]);
                        }
                    }
                }
            }
            arr_21 [i_1] = var_4;
        }
        /* vectorizable */
        for (int i_7 = 4; i_7 < 23;i_7 += 1) /* same iter space */
        {
            arr_24 [i_1] [i_1] [i_1] = ((((((arr_16 [i_1]) | (arr_11 [i_1] [i_1])))) ? 1 : (arr_6 [i_7 - 2])));
            var_19 = (((arr_19 [i_7] [i_7 + 1] [i_7] [i_1 - 1] [i_1 - 1] [i_1] [i_1]) + (arr_19 [i_7] [i_7 + 1] [7] [i_1 - 1] [i_1] [1] [i_1])));
            arr_25 [i_1] [i_1] [i_1] = ((var_6 | (arr_13 [i_1] [i_1] [i_1])));
        }
    }
    for (int i_8 = 0; i_8 < 24;i_8 += 1)
    {
        arr_28 [i_8] = 8338;
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 23;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 23;i_10 += 1)
            {
                {
                    arr_37 [i_8] [i_9] [i_10] = (var_10 <= 16839314637778512844);
                    var_20 = (!var_5);
                }
            }
        }
    }
    for (int i_11 = 0; i_11 < 25;i_11 += 1)
    {
        var_21 = (min((!var_0), ((44900 ? (arr_41 [i_11] [i_11]) : 1))));
        arr_42 [i_11] = -var_6;
    }
    var_22 = var_6;
    var_23 = var_10;
    var_24 = ((var_0 ? (!var_3) : (((!((min(5543286664576466655, 1))))))));
    var_25 |= var_6;
    #pragma endscop
}
