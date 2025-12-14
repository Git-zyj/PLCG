/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7698
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= (((((((var_14 <= var_4) != ((max(var_4, var_7))))))) <= ((var_12 ? (min(var_12, var_15)) : var_1))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            var_19 |= (arr_1 [i_0]);

            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                var_20 -= (min((((!(arr_6 [i_0] [i_0] [i_0])))), ((((((arr_6 [11] [i_1] [i_2]) ? (arr_6 [i_0] [5] [4]) : (arr_0 [i_0])))) ? (arr_2 [i_1] [i_2 + 2] [i_2 + 2]) : (arr_1 [i_1 - 1])))));

                for (int i_3 = 4; i_3 < 16;i_3 += 1)
                {
                    var_21 ^= (((var_10 | 4096) ? (((min(1, (arr_8 [i_1] [i_2 + 3] [i_3]))))) : var_9));
                    var_22 = ((!((max(((((arr_6 [i_0] [i_1] [i_2]) ? (arr_6 [i_0] [9] [i_3]) : (arr_8 [i_0] [i_1 + 1] [2])))), 524287)))));
                }

                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    var_23 &= var_2;
                    var_24 = (((((arr_3 [i_2 + 2] [i_2 + 2] [i_1 - 1]) & (arr_2 [i_2 + 1] [i_2 + 1] [5]))) - (min((arr_2 [i_2 + 2] [i_1] [8]), (arr_3 [i_2 - 1] [i_2 - 1] [i_1 - 1])))));
                    arr_12 [i_2 + 3] [0] [i_2] = var_2;
                }
                var_25 ^= (((((var_15 >> ((min(1, var_5)))))) != (arr_11 [i_1 - 1] [12] [i_1 - 1] [i_1 - 1])));
            }
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                var_26 = ((~(arr_0 [i_1 + 1])));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        {
                            var_27 = ((var_0 == (arr_17 [i_7])));
                            arr_20 [i_0] [i_1 - 1] [i_5] [i_0] [i_7] = (max(((max((arr_18 [i_0] [i_1 - 1] [i_5] [i_7] [i_0]), (arr_18 [i_0] [i_0] [i_0] [i_7] [i_0])))), (arr_14 [i_0] [i_0] [i_0])));
                        }
                    }
                }
                arr_21 [i_0] [1] = (arr_2 [i_0] [7] [3]);
            }
        }
        var_28 = (max((((arr_6 [i_0] [i_0] [i_0]) != (arr_6 [i_0] [i_0] [19]))), (((arr_0 [i_0]) <= (((min(-32763, (arr_19 [i_0] [i_0] [i_0] [i_0])))))))));
        var_29 = (((max((7 ^ var_4), (((-(arr_6 [i_0] [i_0] [i_0])))))) * ((((!1) ? ((min(65535, (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0])))) : var_8)))));
    }
    var_30 = (max((((((var_16 ? var_15 : var_5))) && var_15)), 1));
    #pragma endscop
}
