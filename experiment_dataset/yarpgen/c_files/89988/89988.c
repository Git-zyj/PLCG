/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89988
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_0] = ((~(!-22)));
                    var_11 = ((-(arr_3 [i_0])));
                }
            }
        }
        var_12 = (((arr_6 [i_0 - 3] [i_0 + 1] [i_0 - 1] [i_0]) & (max((arr_2 [i_0]), (arr_6 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 - 1])))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                {

                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        arr_16 [i_0] = (~(arr_4 [i_3] [i_4] [8]));
                        arr_17 [i_0] [i_4] [i_3] [i_0] = (((arr_12 [i_0]) ? 6735460492506221092 : ((((arr_13 [18] [i_3] [i_4] [1]) ? (((-(arr_12 [i_0])))) : (arr_8 [i_0 - 3] [1]))))));
                    }
                    for (int i_6 = 4; i_6 < 21;i_6 += 1)
                    {
                        arr_20 [i_0] = ((-(arr_1 [i_4])));
                        arr_21 [i_0] [i_4] [i_3] [i_3] [i_0] = arr_13 [i_6 - 4] [6] [i_6] [i_6 - 4];
                        arr_22 [i_0] [i_3] = -12016578738509824634;

                        for (int i_7 = 2; i_7 < 19;i_7 += 1)
                        {
                            var_13 = (((((((!(arr_24 [21] [i_0] [i_7 + 2]))))) & var_2)));
                            var_14 = (((arr_6 [i_6 - 4] [i_0 + 1] [i_7 - 2] [0]) < ((32433 ? (arr_6 [21] [i_0 - 1] [i_7 - 2] [13]) : (arr_6 [i_7] [i_0 + 1] [i_7 - 2] [i_0])))));
                        }
                        for (int i_8 = 2; i_8 < 20;i_8 += 1) /* same iter space */
                        {
                            var_15 = (min((arr_27 [i_8 + 2] [i_8 - 1] [i_8 - 2] [i_8 - 2] [i_8 - 1]), (arr_27 [i_8 + 2] [i_8 - 1] [21] [i_8 - 2] [i_8 + 2])));
                            var_16 = (min(var_16, (arr_27 [13] [19] [18] [i_6 - 3] [12])));
                            var_17 = (1 >= var_8);
                            var_18 = (max(var_18, (arr_2 [i_4])));
                        }
                        for (int i_9 = 2; i_9 < 20;i_9 += 1) /* same iter space */
                        {
                            arr_31 [2] [i_0] [13] [i_6] [8] [i_0] [i_3] = var_2;
                            var_19 = (arr_28 [16] [i_3] [i_4] [i_4] [i_6 - 4] [i_0]);
                        }
                    }
                    for (int i_10 = 2; i_10 < 20;i_10 += 1)
                    {
                        arr_34 [i_0] [i_0] [i_4] [20] = 3001307247;
                        var_20 |= (((((-22 - var_8) > (min((arr_2 [i_4]), var_1)))) ? ((min((arr_19 [i_0] [i_0 - 1] [16]), (arr_8 [i_0 - 2] [16])))) : (((~(arr_24 [4] [i_4] [18]))))));
                        var_21 = (arr_4 [i_10 + 2] [i_4] [i_0 - 1]);
                    }
                    var_22 = (min(var_22, ((((arr_4 [i_0 - 4] [i_0 - 1] [i_0 - 1]) >> (((arr_8 [1] [i_0]) - 10702573186918782076)))))));
                    arr_35 [i_0] = ((arr_25 [i_0 - 2] [i_0 - 1] [5] [3] [i_0] [1]) <= (arr_13 [i_4] [i_3] [i_0 - 4] [i_0 - 4]));
                    var_23 = arr_15 [i_4] [i_4] [i_3] [i_0];
                }
            }
        }
    }
    var_24 *= -var_2;
    var_25 = 16857960506070622717;
    #pragma endscop
}
