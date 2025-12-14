/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_8 [i_1 - 1] [i_2] = ((arr_7 [i_0] [i_1 + 1] [i_2] [i_2]) ? (var_17 >= var_16) : ((-(arr_3 [i_1 + 1]))));
                    var_19 = var_14;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_20 = (max(var_20, 7957564949453034979));
                                var_21 -= (((1 ? (((arr_14 [5] [8] [i_2] [i_3] [i_4]) ? var_11 : 4078247069)) : -var_7)) % (arr_6 [i_0] [1] [i_1 - 1]));
                                arr_15 [3] [i_1] [i_2] [i_3] [i_4] &= 17;
                                var_22 = var_6;
                                arr_16 [i_0 + 1] [i_1] [i_2] [i_3] [i_4] = ((1 ? 15 : -5));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 4; i_5 < 13;i_5 += 1)
                    {
                        var_23 ^= 11;

                        for (int i_6 = 4; i_6 < 13;i_6 += 1) /* same iter space */
                        {
                            arr_21 [i_0] [i_1] [i_5] [i_2] [i_1] [11] = (((~-7240) % 1));
                            arr_22 [i_0] [i_5] = var_10;
                            var_24 = (min(var_24, (((var_15 ? 9223372036854775789 : var_16)))));
                        }
                        for (int i_7 = 4; i_7 < 13;i_7 += 1) /* same iter space */
                        {
                            arr_26 [i_5] [i_5 - 4] [i_2] [i_5] [2] [i_5] = (((((var_3 % (arr_17 [i_1 - 1])))) ? 1 : (!var_5)));
                            arr_27 [i_0 + 1] [i_1] [i_2] [i_5] [i_5] = (((arr_20 [i_0 + 1] [i_1 - 1] [i_2] [i_5 - 1] [i_5]) >= (arr_25 [i_7] [i_5] [i_2] [i_2] [i_1] [i_0] [i_0])));
                            arr_28 [i_2] [i_2] [0] [i_7 - 4] &= (((1 ? var_2 : 1)));
                        }
                    }
                }
            }
        }
    }
    var_25 = (var_10 | 11);
    #pragma endscop
}
