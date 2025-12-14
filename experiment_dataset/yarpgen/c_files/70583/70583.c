/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_6, var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = -var_1;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_12 = (min(var_12, (((var_9 | ((((var_10 ? 1 : var_3)) ^ (798002222 | -798002222))))))));
                            var_13 = ((!((((arr_2 [i_3 + 3]) ? (((arr_3 [i_0] [i_1] [i_2]) << (var_1 + 6476857659914032029))) : ((max(-798002222, 798002227))))))));
                            var_14 = (((min((min((arr_8 [i_3] [i_3] [i_3] [i_3]), 798002222)), (arr_8 [i_3 + 3] [i_3 + 3] [i_3 + 4] [i_3 + 2])))) && (((max(var_5, var_9)) && (arr_1 [i_1]))));
                            var_15 = (((((var_4 ? 1 : ((max(1, var_6)))))) || (max((var_10 && var_3), var_9))));
                            arr_9 [i_0] = (arr_3 [i_2] [i_1] [i_0]);
                        }
                    }
                }
                var_16 = (((((arr_3 [i_0] [i_0] [i_0]) << (arr_2 [i_0]))) & (max(var_3, ((33554431 ^ (arr_3 [i_0] [i_1] [i_1])))))));
            }
        }
    }
    var_17 = (max(var_17, (((!(((-(var_5 ^ 0)))))))));

    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                {
                    arr_17 [i_4] [i_5] [i_6] = (((arr_11 [i_4] [i_5 - 2]) || (((arr_11 [i_4] [i_5 - 2]) && (arr_11 [i_6] [i_5 - 2])))));
                    arr_18 [i_4] [i_4] [i_4] = ((!((max(var_2, (min(-798002220, (arr_10 [i_4]))))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 2; i_7 < 21;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                {

                    for (int i_9 = 1; i_9 < 1;i_9 += 1)
                    {
                        arr_26 [i_4] [i_7] [i_7] [i_7] [i_8] [i_9] = (arr_16 [i_4] [i_7] [i_4]);
                        arr_27 [i_8] = (max((min(((max(var_2, -1837916968))), (max((arr_16 [i_9] [i_7 + 1] [i_4]), (arr_20 [i_8]))))), (arr_25 [i_8] [i_7] [i_8] [i_4] [i_4] [i_7])));
                        arr_28 [i_4] [i_4] [i_4] [i_4] [i_4] [i_8] = (arr_12 [i_7]);
                        arr_29 [i_4] [i_4] [i_8] [i_8] [i_9] [i_4] = ((((max(var_2, 1069547520))) + (((-(arr_14 [i_4]))))));
                    }
                    var_18 = (max(var_18, ((((((var_0 ? (arr_13 [i_7 + 4]) : var_10)) & ((~(arr_20 [i_4])))))))));
                }
            }
        }
        var_19 = arr_13 [i_4];
    }
    for (int i_10 = 0; i_10 < 24;i_10 += 1)
    {
        var_20 = (arr_16 [i_10] [i_10] [i_10]);
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 24;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 24;i_12 += 1)
            {
                {
                    var_21 = (((((-((max(var_8, (arr_36 [i_11]))))))) && (((30 ? 798002235 : 0)))));
                    var_22 -= ((1 ? ((var_9 | (arr_33 [i_10]))) : ((~(arr_10 [i_10])))));
                    arr_37 [i_10] [i_10] = (((min((((arr_21 [i_10] [i_10]) ? var_6 : (arr_34 [i_10] [i_11] [i_12]))), (1803533484 >= -327293601))) == 1));
                }
            }
        }
    }
    #pragma endscop
}
