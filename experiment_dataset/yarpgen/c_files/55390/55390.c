/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55390
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [11] = (((min(var_12, 5787357761439567987)) ^ (((arr_2 [i_1 + 2] [i_1 + 1]) ? (arr_2 [i_1 - 2] [i_1 + 2]) : (arr_2 [i_1 + 2] [i_1 - 2])))));
                    arr_8 [i_2] [i_1] = var_7;
                }
            }
        }
    }
    var_13 = ((-5787357761439567988 ? (var_11 - var_11) : ((((var_12 ? var_2 : var_9)) ^ 0))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 13;i_4 += 1)
        {
            {
                var_14 ^= (!5787357761439567987);

                /* vectorizable */
                for (int i_5 = 1; i_5 < 13;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            {
                                arr_26 [i_3] [i_6] [i_5] [i_4] [i_3] = 1;
                                arr_27 [i_7] [i_3] [i_5] [i_5] [i_4] [i_3] = 5787357761439567987;
                                var_15 = 1;
                                var_16 = var_6;
                            }
                        }
                    }
                    arr_28 [i_5] [i_4] [i_5] [i_5] = ((8021726113395476904 ? ((4890665428931185516 ? 0 : 1911426648177885494)) : (4890665428931185516 >= -1840918295)));

                    for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
                    {
                        var_17 ^= (arr_22 [i_3] [i_4 + 1] [i_5] [i_8]);
                        arr_31 [i_5] [i_5] = (-2147483647 - 1);
                        arr_32 [i_3] [13] [i_5] [i_5] [i_8] [i_8] = 224;
                        var_18 = (arr_14 [i_3] [i_3]);
                    }
                    for (int i_9 = 0; i_9 < 14;i_9 += 1) /* same iter space */
                    {
                        var_19 = (max(var_19, (!var_1)));
                        var_20 = (var_6 % var_6);
                    }
                    for (int i_10 = 0; i_10 < 14;i_10 += 1) /* same iter space */
                    {
                        var_21 += (arr_10 [i_3]);
                        arr_39 [3] [3] [i_5] [i_5] [i_5] = (arr_16 [i_3] [i_4] [i_4] [i_10]);
                        var_22 = (min(var_22, (!255)));
                    }
                }
            }
        }
    }
    #pragma endscop
}
