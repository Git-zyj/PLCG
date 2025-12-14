/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80734
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (arr_0 [5]);
                arr_5 [i_0] [i_1] = var_1;
                arr_6 [i_0] [i_1] [i_0] = 2016;
                var_19 = ((+((((arr_1 [12]) > -1840286674201180047)))));
            }
        }
    }
    var_20 = (min(var_20, ((var_16 % (min(((2942680002333476804 ? 31 : 12569605957862858876)), var_8))))));

    /* vectorizable */
    for (int i_2 = 2; i_2 < 20;i_2 += 1)
    {
        arr_10 [i_2 + 1] = var_9;

        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            var_21 = ((1841728328 ? 213 : ((var_18 ? 67108863 : (arr_9 [i_3] [i_3])))));
            var_22 = (min(var_22, var_3));
            var_23 = (max(var_23, (1818923221 > 10992)));
            arr_14 [i_2] = var_1;
        }
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            arr_18 [i_4] [i_4] [i_4] = ((32 ? 808988680300510464 : 4294967282));
            /* LoopNest 3 */
            for (int i_5 = 1; i_5 < 19;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        {
                            var_24 = var_5;
                            var_25 = (min(var_25, ((((arr_11 [i_2 - 2]) ? (arr_17 [i_7] [i_5 + 3] [i_5 + 1]) : (arr_7 [i_2] [i_2 - 2]))))));
                        }
                    }
                }
            }
            var_26 = ((var_1 != (arr_13 [i_2 - 1])));
        }
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            arr_27 [i_2] = 12475286713905825174;
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 22;i_10 += 1)
                {
                    {
                        var_27 = 19770;

                        for (int i_11 = 0; i_11 < 22;i_11 += 1)
                        {
                            var_28 = var_11;
                            var_29 = (((arr_16 [i_10] [8] [i_10]) + (arr_25 [i_2] [i_2 - 2])));
                            var_30 = (min(var_30, (arr_30 [20] [4] [20] [i_10] [1] [1])));
                            var_31 = (((arr_19 [i_2 + 1] [i_2 + 1]) ? var_0 : (((var_5 ? var_13 : (arr_15 [i_11]))))));
                        }
                    }
                }
            }
            arr_36 [i_2 - 2] = var_13;
        }
        var_32 = (arr_19 [i_2 - 2] [i_2 - 1]);
    }
    var_33 = var_0;
    var_34 = ((max((6905596740678830547 && 6905596740678830547), (252 >= var_17))));
    #pragma endscop
}
