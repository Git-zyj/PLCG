/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min((min(65535, ((1844123792 ? 175 : 65052723223403117)))), (var_1 / 505)));
    var_11 = (max((~10071615465256819211), 505));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 3; i_2 < 9;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_12 = (((((arr_8 [3] [i_3] [i_2] [i_0] [i_0]) ^ (arr_2 [i_0] [i_0])))) ? 28 : 482);
                                var_13 = (min(var_13, ((((((arr_6 [i_0] [i_1]) && var_5)) && (arr_5 [i_2 - 2] [i_0] [i_0] [i_2 - 2]))))));
                                var_14 = 64;
                                var_15 = var_2;
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        var_16 = ((255 ? 227 : 8123));
                        var_17 = -var_3;
                        arr_13 [i_1] [i_1] [i_2 - 3] [i_5] = (arr_1 [i_0] [i_0]);

                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            var_18 = (((((12763391406713122107 ? (arr_12 [i_0] [1] [i_0] [i_0]) : (arr_11 [4] [4] [i_0])))) ? (arr_16 [i_6] [i_1] [1]) : (arr_1 [i_1] [i_2 - 2])));
                            var_19 = (71 || var_8);
                            arr_17 [i_0] [i_1 - 1] [5] [i_5] [i_1] = ((((arr_4 [i_0]) || (arr_12 [i_0] [i_0] [i_0] [i_0]))) ? (arr_8 [3] [i_5] [11] [i_1 - 3] [i_0]) : ((1 ? 1 : var_4)));
                        }
                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            var_20 -= 12486265460174333265;
                            var_21 = (min(var_21, ((((((32640 ? 14126 : 11523))) ? ((((arr_0 [i_0]) ? 25 : 15))) : (arr_19 [i_2 - 2] [i_1 - 1] [i_2] [i_1 - 3] [i_7] [i_0]))))));
                            var_22 += ((13795637818073504844 ? 32766 : 1));
                        }
                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            arr_24 [i_1] [i_1] = (arr_3 [i_1]);
                            var_23 += ((!(!0)));
                        }
                    }
                    for (int i_9 = 2; i_9 < 12;i_9 += 1)
                    {
                        arr_28 [i_0] [i_1] = (192 == var_3);
                        arr_29 [i_0] [i_1 - 2] [i_1] [12] = ((252 ^ (arr_15 [i_2] [i_2] [i_1] [i_1 - 2] [i_0])));
                    }
                    var_24 = (min(var_24, ((!((((arr_5 [i_2 + 1] [i_0] [i_0] [i_0]) ? var_4 : (arr_19 [i_2 - 1] [i_1 - 3] [i_2 + 1] [i_2 + 1] [i_0] [i_2 - 1]))))))));
                    var_25 = (-(arr_20 [i_2 + 4] [i_2 + 1] [11] [i_2 + 1] [i_2]));
                }
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 11;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 11;i_11 += 1)
                    {
                        {
                            arr_36 [i_0] [i_1 - 3] [i_0] [i_11] [i_1] [i_1 - 1] = (var_0 * 0);
                            arr_37 [i_1] [8] [i_1] [i_1 - 3] = ((((~(~54012)))) ? ((max((arr_12 [i_10] [i_10 + 2] [i_10 + 2] [i_11 + 1]), 1))) : (arr_20 [i_0] [i_1] [i_0] [i_11] [i_11]));
                        }
                    }
                }
            }
        }
    }
    var_26 = (var_4 ^ var_6);
    #pragma endscop
}
