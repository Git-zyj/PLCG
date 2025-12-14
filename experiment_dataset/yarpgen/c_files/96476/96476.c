/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96476
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_13 = (max(var_13, ((((arr_1 [i_0]) - (arr_1 [i_0]))))));
        var_14 = (min(((-((~(arr_1 [7]))))), ((min((arr_1 [i_0]), (arr_1 [i_0]))))));
        var_15 = (max(var_15, ((((!var_0) ^ (((-23636 + 2147483647) << (((-17316 + 17334) - 18)))))))));
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 12;i_1 += 1)
    {
        var_16 = (arr_0 [i_1 - 2]);
        var_17 += ((19660 ^ (arr_2 [i_1 - 4])));

        for (int i_2 = 4; i_2 < 14;i_2 += 1)
        {
            var_18 = (!var_5);

            for (int i_3 = 2; i_3 < 14;i_3 += 1)
            {
                var_19 = ((30813 ? (arr_8 [i_1] [i_2 - 4]) : var_10));
                var_20 = arr_10 [i_1 + 3] [i_2 - 2] [i_3 - 2];
                arr_11 [i_3] |= arr_6 [i_1];

                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    var_21 = arr_7 [i_1];
                    var_22 += arr_10 [i_1 + 1] [i_2] [i_3 - 2];
                    var_23 = (max(var_23, ((((arr_4 [i_2 - 4]) * (arr_4 [i_1 - 3]))))));
                }
                arr_15 [i_1 + 3] [i_2 - 1] [i_1] = (~var_1);
            }
            arr_16 [i_1] [i_1] = (((arr_13 [i_1] [i_1] [i_1] [i_1 - 1] [i_1] [i_2 - 1]) - (arr_12 [i_1 + 2] [i_1 - 4] [i_1 - 1] [i_2 - 4])));
        }
        var_24 += 12262;
        /* LoopNest 3 */
        for (int i_5 = 2; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 12;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    {
                        arr_25 [i_5] [0] [i_1] [i_1] [i_5] [12] = -26743;
                        arr_26 [i_1] [i_5] [7] [i_1] = var_2;
                    }
                }
            }
        }
    }
    var_25 = var_12;
    var_26 = var_6;
    var_27 = var_8;
    #pragma endscop
}
