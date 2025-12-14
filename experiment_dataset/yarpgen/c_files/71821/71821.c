/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71821
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_11 ^= (~var_0);
                arr_6 [i_1] [i_1] [i_1] = (arr_2 [9]);
                arr_7 [i_1] [i_1] = 122;

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    arr_11 [i_1] = 2147483647;
                    var_12 = (((((((max(var_6, 126))) || (arr_4 [0] [i_1] [5])))) >= 1));
                    var_13 = (max(var_1, ((((arr_8 [i_1 + 3] [i_1]) ? var_9 : (arr_8 [i_1 + 2] [i_1]))))));

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        var_14 = (min(var_14, 104));
                        var_15 = (min(var_15, (((!(var_9 / var_3))))));
                    }
                    for (int i_4 = 2; i_4 < 16;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            arr_19 [i_1] [i_4] [i_4 + 1] [i_2] [i_1 + 1] [i_1] = var_1;
                            var_16 = (max(var_16, var_8));
                            arr_20 [6] [i_1] = ((((max((var_6 >= var_10), var_0))) && 1));
                            var_17 = max((min(var_10, var_1)), 0);
                        }
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            arr_23 [i_6] [i_1] [i_4 - 1] [i_2] [i_1] [i_0] = ((~(max((102 - 255), ((max(154, 245)))))));
                            arr_24 [i_1] [i_4 - 1] [i_2] [i_2] [4] [i_1] = ((((((-3866176417084863025 || 1) ? (~243) : ((min(65535, var_7)))))) ? -380632615 : (max((arr_22 [i_1] [1] [i_0] [i_2] [i_1] [i_1]), var_3))));
                        }
                        arr_25 [i_2] [i_1] = (min((min(var_4, (max(var_9, 255)))), (((!(arr_15 [i_0] [i_1] [i_1] [i_2] [i_0] [i_0]))))));
                        var_18 = (((arr_1 [i_1 + 2] [i_1]) ? (((min(107, (arr_8 [i_1 + 3] [i_1 + 2]))))) : (max(var_1, var_9))));
                        arr_26 [i_0] [i_1 - 2] [i_1] = (min((((~(~-171269254)))), ((var_0 ? var_8 : (arr_13 [i_0] [i_1] [i_4])))));
                        var_19 = (min(3534288277, (max(((max(var_0, (arr_0 [1])))), (min((-127 - 1), 18446744073709551606))))));
                    }
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        arr_29 [i_7] [i_1] [i_1] [i_0] = ((~(~32752)));
                        var_20 = (max(var_20, ((max(var_7, (max(18446744073709551601, ((min(187, var_5))))))))));
                        arr_30 [i_0] [i_1] [1] [i_0] [16] [i_0] = var_0;
                    }
                }
                var_21 += (((((4294967295 ? (arr_27 [10] [i_1] [i_1 - 1]) : var_3))) ? (min(-1, 1)) : (~11540)));
            }
        }
    }
    var_22 ^= var_4;
    var_23 = ((var_1 ? (max(2633589945, var_0)) : (((max(0, -21))))));
    #pragma endscop
}
