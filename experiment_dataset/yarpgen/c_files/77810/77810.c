/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77810
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_3;

    /* vectorizable */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0] = (((((var_5 + 2147483647) >> (var_5 + 28191))) == ((97 >> (((((-2147483647 - 1) - -2147483625)) + 37))))));

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            arr_8 [i_0 + 1] = var_9;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        arr_16 [i_0] [i_1] [i_2] [i_2] = (((((arr_10 [11] [i_1] [i_0 - 2]) || var_3)) ? 25165824 : var_4));
                        var_13 *= var_1;
                        arr_17 [i_0] [i_0 - 1] [i_0] [i_0] [11] = ((var_9 & (arr_12 [i_0 - 1] [i_0] [i_0 - 4])));
                    }
                }
            }
            arr_18 [i_1] [i_1] [i_0] = (((((-127 - 1) + 2147483647)) >> (105 - 103)));
        }
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 4; i_5 < 19;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    {
                        arr_27 [i_6] [i_5 - 4] [i_4] [i_0 - 1] = ((var_8 - (arr_12 [i_0 - 2] [i_0 - 2] [i_5 - 2])));
                        var_14 *= var_11;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 18;i_8 += 1)
            {
                {
                    arr_34 [i_0] [i_0] [i_0] [i_0 - 3] = ((var_10 - ((((arr_14 [i_0 + 1] [i_0 + 1] [i_0] [i_7]) ? var_0 : var_9)))));
                    arr_35 [i_7] [i_7] = (arr_21 [i_0 - 1]);
                    var_15 = (((arr_6 [i_0] [i_7]) & (arr_20 [10] [i_7] [i_0])));
                }
            }
        }
    }
    var_16 *= (-14 < 0);
    var_17 = ((-1049 <= 1811631025) ? var_11 : ((((max(var_6, var_0))) & var_1)));
    var_18 = (((((((min(105, -55))) ? 268173312 : var_11))) || var_2));
    #pragma endscop
}
