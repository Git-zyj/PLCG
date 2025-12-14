/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70360
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_14 = ((3787070701 ? var_0 : 1333425462));
        arr_2 [i_0] = min(var_4, var_7);
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                {
                    arr_12 [i_1] [i_3] = arr_6 [i_1];
                    var_15 = (max(var_15, ((~(min(349537769, 4193280))))));

                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        var_16 = var_1;
                        var_17 = min(((~(arr_9 [i_1] [i_1] [i_1]))), var_0);
                    }
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        var_18 = var_8;

                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            arr_19 [i_1] [i_1] [i_3] [12] [6] [i_1] = arr_11 [i_1] [i_5] [4] [i_1];
                            var_19 += ((arr_14 [i_6] [i_5]) ? (arr_10 [i_1] [i_2] [4]) : ((var_0 ? (arr_4 [i_2]) : (arr_3 [i_1]))));
                        }
                        var_20 = arr_10 [i_1] [i_3] [i_3];
                    }
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        var_21 = (min(var_21, (min((arr_8 [i_2]), var_2))));
                        arr_22 [i_1] = arr_13 [i_1] [i_1] [i_3] [6];
                    }
                }
            }
        }
        arr_23 [i_1] = var_2;
        var_22 -= ((!((min((min(var_11, (arr_20 [i_1]))), (!var_0))))));
    }
    for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
    {
        var_23 = (max(var_23, (arr_25 [14])));
        var_24 = var_8;
    }
    var_25 += var_6;
    var_26 = var_5;
    var_27 = var_1;
    #pragma endscop
}
