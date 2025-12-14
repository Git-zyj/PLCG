/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73458
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_11 = min((((min(var_5, var_7)))), (arr_2 [i_0] [i_0]));
        arr_3 [i_0] = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_12 = (arr_6 [i_1] [i_1]);
        var_13 = (-((max((arr_5 [i_1]), (arr_4 [i_1] [i_1])))));
        var_14 = (arr_4 [i_1] [i_1]);
    }
    var_15 &= (min(-3272453426459432820, -var_5));
    var_16 = var_6;

    for (int i_2 = 1; i_2 < 17;i_2 += 1)
    {
        var_17 = (arr_8 [9]);
        var_18 = var_4;
        var_19 = (max((arr_7 [i_2]), (arr_5 [i_2 + 1])));
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        var_20 = (arr_8 [i_3]);
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 18;i_5 += 1)
            {
                {

                    for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                    {
                        var_21 = var_1;
                        var_22 = (max(2644148512893487060, (arr_18 [i_5 + 2] [i_5] [i_5] [i_5 + 2] [8] [i_5 + 1])));
                    }
                    for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
                    {
                        var_23 ^= (~-8887859962796566438);
                        var_24 ^= (arr_18 [i_3] [9] [i_3] [i_3] [i_3] [i_3]);
                    }
                    for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
                    {
                        var_25 = (max((arr_18 [i_3] [5] [i_3] [i_8] [i_3] [i_5 + 1]), (arr_18 [i_3] [7] [i_5 + 1] [i_3] [i_3] [i_5 + 1])));
                        arr_28 [i_5] = var_8;
                        var_26 = (((-(arr_27 [i_4] [i_5] [i_5 + 2]))));
                        var_27 ^= (min((arr_24 [i_5 - 1] [i_4] [i_4] [i_5 + 1]), ((max(var_6, var_7)))));
                        var_28 = (arr_25 [i_3] [i_3] [i_3] [i_3] [i_3]);
                    }
                    arr_29 [i_3] [i_5] = var_8;
                }
            }
        }
    }
    var_29 = var_5;
    #pragma endscop
}
