/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_13 = (~109);
                    var_14 *= 101;

                    for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
                    {
                        arr_10 [i_3] [i_1 - 1] [i_1 - 1] [i_1 + 1] [4] = ((+(max((arr_9 [i_3] [i_3] [i_2] [i_2] [i_3] [i_3]), (arr_9 [i_3] [i_2] [6] [i_3] [i_2] [i_0])))));

                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            var_15 = (8191 << (102 - 101));
                            arr_14 [i_4] [i_3] [i_2] [i_1] [i_3] [i_0] = min(((~(arr_5 [i_1 + 1] [i_1 + 1] [i_1 + 1]))), ((((max((arr_9 [i_3] [14] [i_2] [i_1 + 1] [i_1] [i_3]), -24))) ? var_4 : ((1152441057608895358 ? 122 : 602645903)))));
                        }
                        for (int i_5 = 1; i_5 < 14;i_5 += 1) /* same iter space */
                        {
                            arr_17 [1] [i_3] [i_3] [i_0] [i_0] = (min((((var_0 * (8187 / 21872)))), 14278417751507301058));
                            arr_18 [i_0] [i_0] [i_1] [i_3] [i_3] [i_3] = (!(arr_15 [i_3] [i_1] [i_2] [i_3] [i_5 + 1] [i_3]));
                            arr_19 [i_0] [i_1] [1] [i_3] [i_5] [i_5 + 1] [i_5 + 1] = var_3;
                        }
                        for (int i_6 = 1; i_6 < 14;i_6 += 1) /* same iter space */
                        {
                            var_16 = (max(var_16, (!102)));
                            var_17 = ((!(((var_8 ? -97 : 25340)))));
                            var_18 = ((~(((arr_0 [i_1 + 1]) | (arr_0 [i_1 + 1])))));
                        }

                        /* vectorizable */
                        for (int i_7 = 1; i_7 < 12;i_7 += 1)
                        {
                            arr_25 [i_0] [i_0] [i_0] [i_3] [i_0] = (~21867);
                            arr_26 [i_0] [i_3] [i_1] [i_0] [i_2] [i_3] [i_7 + 2] = var_0;
                        }
                        for (int i_8 = 3; i_8 < 13;i_8 += 1)
                        {
                            arr_29 [8] [11] [i_1] [i_3] [5] [i_3] [i_8] = ((((min((((-25367 + 2147483647) >> (43662 - 43648))), var_12))) ? (min((arr_2 [i_1 + 1] [i_1 + 1]), (arr_28 [i_0] [i_1 + 1] [i_8 - 2] [i_8] [i_8] [i_3]))) : (-700676450581223025 / 19)));
                            arr_30 [i_3] = 126;
                            var_19 = -14;
                        }
                    }
                    for (int i_9 = 0; i_9 < 16;i_9 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 16;i_10 += 1)
                        {
                            var_20 = ((~(arr_22 [i_10] [i_1] [i_1 - 1] [i_1 + 1] [i_10])));
                            arr_37 [i_9] [2] [5] [i_0] = (((arr_23 [i_10] [i_1 - 1] [i_10] [i_10] [i_1 + 1] [i_1 - 1]) != (arr_23 [i_1 - 1] [i_1 + 1] [i_10] [i_10] [i_1 - 1] [i_1 - 1])));
                        }
                        arr_38 [i_0] [i_1] [i_2] [i_1] = (((14336 * 434801800) ? (((101 ? var_2 : (131 || 51199)))) : ((-1 - (112 + 563849204262598453)))));
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 3; i_11 < 14;i_11 += 1)
                    {
                        for (int i_12 = 2; i_12 < 12;i_12 += 1)
                        {
                            {
                                var_21 = (29849 & 49607);
                                arr_44 [i_11] = (min(11324123613721128734, -700676450581223031));
                                var_22 = ((((151903964 & (arr_5 [i_1 + 1] [i_2] [i_1 + 1]))) != (min(var_1, (arr_42 [i_11])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = (~21714);
    #pragma endscop
}
