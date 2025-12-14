/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74728
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_11 = 0;
        var_12 = (((arr_0 [i_0 - 2]) ? (((arr_0 [i_0 + 1]) - 281474976710655)) : -1));
        var_13 -= (((((((1 ? 1 : 63))) && (arr_1 [i_0 - 2]))) && var_3));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 9;i_2 += 1)
            {
                {
                    var_14 |= var_2;
                    arr_8 [i_2] [i_2] [i_2] [i_2 - 2] = (arr_3 [i_0] [i_2]);
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        arr_12 [i_3] [i_3] = 0;
        var_15 = (((((-((max(1, 1)))))) * 4294967278));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 0;i_6 += 1)
            {
                {
                    arr_19 [i_4] [i_4] [i_6 + 1] = ((var_9 > (arr_18 [i_4] [i_6 + 1] [i_6])));
                    var_16 = (min(var_16, -12));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            {
                                var_17 = ((!(arr_25 [i_7] [i_6 + 1])));
                                var_18 = (162 > 33751);
                            }
                        }
                    }
                }
            }
        }
        var_19 = (((arr_9 [i_4]) == (arr_9 [i_4])));
        arr_26 [i_4] [i_4] = (arr_24 [9] [i_4]);
        arr_27 [i_4] = -3447548566;
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        var_20 = (max(var_20, var_4));
        arr_31 [i_9] [i_9] = (min((min((arr_21 [i_9] [9] [i_9] [i_9]), (arr_21 [i_9] [i_9] [i_9] [i_9]))), (arr_16 [i_9])));
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 14;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 14;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    {
                        var_21 = ((((~(arr_36 [i_9] [i_9] [i_9] [0] [0]))) * (((((!(arr_32 [i_9] [i_10])))) + (!127)))));
                        arr_40 [8] [i_9] [2] = -127;
                    }
                }
            }
        }
    }
    #pragma endscop
}
