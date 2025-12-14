/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (var_14 ? (-var_11 == var_13) : var_5);

    for (int i_0 = 3; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_16 = (((((arr_0 [i_0 - 3] [i_0]) + (arr_0 [i_0 - 1] [i_0]))) <= (((arr_0 [i_0 - 3] [i_0]) ? var_9 : (arr_0 [i_0 + 1] [i_0])))));
        arr_2 [i_0] = ((((max(-var_0, ((((arr_1 [i_0]) - 9462)))))) ? (~37486) : (max((arr_1 [i_0]), (arr_0 [i_0 + 2] [i_0])))));
    }
    for (int i_1 = 3; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_17 = (arr_1 [1]);
        arr_5 [i_1] = (max(var_6, (min(2102716976, ((0 ? 18446744073709551615 : var_2))))));
        arr_6 [i_1] = ((18446744073709551603 ? ((((min(4256519768393312275, -10))) ? -4256519768393312267 : (arr_3 [2] [i_1 + 2]))) : var_12));
        arr_7 [i_1] = var_12;
    }
    for (int i_2 = 3; i_2 < 13;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] = (max(var_5, -4256519768393312273));
        var_18 = (min(2784169850, (((!((!(arr_0 [i_2] [i_2]))))))));

        for (int i_3 = 1; i_3 < 13;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    {
                        var_19 = var_1;
                        arr_18 [i_2] [i_2] [i_4] [i_4] [i_5] [i_5] = var_3;
                    }
                }
            }
            arr_19 [4] [10] &= min((((var_5 ^ (arr_16 [i_3 + 1])))), -8630809192387150188);
            var_20 = (arr_15 [i_3] [i_3] [i_3] [6] [10]);
        }
        for (int i_6 = 2; i_6 < 12;i_6 += 1)
        {
            var_21 *= ((18446744073709551599 == (arr_8 [i_6])));
            arr_24 [i_2] [i_6] = (min(2435347158771347324, -61));
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        {
                            var_22 = -18446744073709551599;
                            var_23 = (~var_12);
                            var_24 = 17453;
                            arr_33 [i_7] [i_7] [i_7] [i_6] [i_2] [i_8] = 30645;
                        }
                    }
                }
            }
        }
        var_25 = -8630809192387150188;
    }
    #pragma endscop
}
