/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        arr_4 [i_0 - 4] [i_0 - 4] = ((min(((894990651 ? 1973933349 : 1973933349)), var_3)));
        arr_5 [i_0] = ((0 ? 332691574 : -86));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                arr_11 [i_2] = (1 ^ 1670399380375638065);
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            var_10 = ((((((arr_15 [i_0] [i_0] [14] [i_0 - 4]) | (arr_2 [i_0])))) ^ ((~(arr_8 [i_0] [i_0] [i_0] [i_0 - 3])))));
                            var_11 = max(-86, (((!((((arr_0 [18]) ? var_7 : (arr_10 [i_0] [i_1] [i_4]))))))));
                        }
                    }
                }
            }
            var_12 = (((((arr_12 [i_0] [i_0] [9] [i_0]) ? (((arr_7 [i_0 + 1] [i_0 + 1]) ? 1325811278 : var_0)) : (arr_2 [i_0])))));
        }
        var_13 = (arr_15 [9] [9] [i_0] [i_0]);

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 4; i_8 < 20;i_8 += 1)
                    {
                        {
                            var_14 = max(1, (min(85, ((986833486 ? var_0 : var_4)))));
                            var_15 = (max((((var_2 != 1) | ((max(-24, 75))))), 120));
                            arr_28 [i_0] [i_5] [i_5] [18] [i_5] [i_6] [i_5] = 78;
                            arr_29 [i_0] [i_5] [i_5] [i_6] [i_6] [i_6] [i_8 - 1] = 3693464737;
                            arr_30 [i_0] [i_5] [i_0] [i_5] [1] [i_5] = 10375;
                        }
                    }
                }
            }
            arr_31 [i_5] [i_5] [i_0] = ((~100) ? (min((arr_9 [i_0 - 3] [i_0] [i_0 - 1]), (arr_9 [i_0 - 3] [i_0] [i_0]))) : ((((arr_22 [18] [i_0 + 4] [i_5] [i_5] [i_5] [i_5]) ? var_2 : 1))));
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 15;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 15;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 15;i_11 += 1)
            {
                {
                    arr_38 [i_10] [i_10] [i_11] = (!0);
                    arr_39 [i_10] [i_10] = 2620617160;
                }
            }
        }
    }
    #pragma endscop
}
