/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81196
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
                    {
                        var_11 = (arr_0 [i_0] [6]);
                        var_12 = (min(var_12, ((max((((var_7 ^ ((~(arr_8 [i_1])))))), (((arr_8 [i_0]) ? (min(1073741823, (arr_8 [i_1]))) : (1073741826 ^ var_10))))))));
                        var_13 = (((((var_9 % ((var_3 ? 31 : 1073741826))))) ? 25304 : (((arr_0 [i_3] [i_1]) ? -1073741823 : var_3))));
                    }
                    for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
                    {

                        for (int i_5 = 1; i_5 < 20;i_5 += 1)
                        {
                            var_14 = -3092912780012091218;
                            arr_14 [i_2] [i_2] [i_2] = -6677679147477694055;
                            arr_15 [i_0 + 3] [i_2] [i_5] [i_4] = ((((((~(arr_8 [i_5 + 4]))) + 2147483647)) >> (var_4 - 18446744073709521605)));
                            var_15 -= (((((((25304 ? 0 : var_3))) ? ((1909342680 ? var_5 : 0)) : (((3590211451331820307 >> (var_2 - 4143870863415519435)))))) * ((((arr_7 [i_0 - 1] [i_1] [i_2 + 2] [i_2 + 2] [i_5 + 1]) >> (var_9 + 7020749255321073190))))));
                            var_16 = var_9;
                        }
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            var_17 = var_0;
                            arr_19 [i_2] [i_4] = (((((arr_16 [i_0 + 1] [i_0 + 1] [i_2] [13] [i_6]) ? (arr_18 [18] [i_2] [i_2 - 1] [i_4] [i_2] [13] [i_0 - 4]) : (arr_10 [i_0 + 1] [i_2] [i_6] [i_6])))) ? (arr_10 [i_0 - 2] [i_2] [i_6] [i_6]) : ((28672 ? (arr_0 [i_0 - 4] [i_0 - 3]) : (arr_16 [i_0 - 2] [i_1] [i_2] [i_0 - 2] [i_4]))));
                            arr_20 [i_0] [i_0] [i_0 - 4] [i_0] [i_2] [i_0] [1] = (arr_3 [i_2 + 1] [i_2 - 1] [i_2 + 1]);
                        }
                        var_18 = (((((2147483647 ? var_5 : var_9))) ? var_5 : (arr_9 [i_2] [i_2])));
                    }
                    /* vectorizable */
                    for (int i_7 = 2; i_7 < 22;i_7 += 1)
                    {
                        var_19 += (((-1909342680 + 2147483647) >> (((arr_3 [i_0 - 4] [i_0 - 1] [i_2 + 1]) - 91))));
                        arr_23 [i_2] [i_2] [4] = ((var_2 ^ ((209 ? var_9 : (arr_0 [i_0 + 4] [i_1])))));
                        arr_24 [i_0] [i_2] [i_7] = (var_9 - var_1);
                        arr_25 [i_0 + 1] [i_1] [i_2] [1] = 40;
                    }
                    var_20 = (min(var_20, ((((((!(arr_10 [i_1] [i_0] [i_1] [i_1]))))) ^ (min((arr_17 [i_0] [i_0] [16]), var_1))))));
                    var_21 = ((((min((arr_11 [i_0] [i_0] [i_0 + 2] [i_2] [i_0] [i_2 + 1]), 1))) ? (arr_4 [i_0] [1] [i_2] [i_1]) : (var_10 % 31819)));
                }
            }
        }
    }

    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        var_22 = var_5;
        var_23 = (min(var_23, (arr_13 [8] [i_8] [i_8] [i_8] [i_8] [2])));
    }
    var_24 += (((var_5 ? (1 % var_0) : (var_8 % var_0))));
    #pragma endscop
}
