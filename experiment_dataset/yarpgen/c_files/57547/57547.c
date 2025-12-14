/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_15 = (max(var_15, ((((max((arr_0 [i_0 + 2]), (arr_0 [i_1]))) <= ((min(28, 37702106))))))));
                arr_7 [i_0] [i_0] [i_0 + 3] = (arr_3 [i_0 + 1]);
                arr_8 [i_0] [i_1] [i_1] = ((~((~(arr_5 [i_0] [i_0] [i_0])))));
                var_16 ^= (max(5017755072124685042, (((88 == -110) ? ((9223372036854775807 ? -8290 : 36028797018959872)) : (((((arr_6 [i_0] [i_1] [i_1]) <= -19190752))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 8;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 7;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 4; i_4 < 9;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        {
                            arr_19 [i_2] = var_9;
                            arr_20 [i_2] [i_2] [i_2] [i_2] = ((((~(arr_17 [i_2] [i_3] [i_2] [1] [i_4] [i_5]))) == (~8285)));

                            /* vectorizable */
                            for (int i_6 = 2; i_6 < 8;i_6 += 1) /* same iter space */
                            {
                                arr_23 [i_2] [i_3 - 1] [i_3 - 1] [i_5] |= -1210263739;
                                arr_24 [i_3] [i_4 + 1] [i_5] = ((((((arr_22 [i_2] [i_2] [i_2] [i_5] [i_2]) != (arr_13 [i_2] [i_2] [i_2] [2])))) != (var_6 / var_4)));
                                arr_25 [i_2] [i_3] [i_3] [i_5] = 152;
                            }
                            for (int i_7 = 2; i_7 < 8;i_7 += 1) /* same iter space */
                            {
                                var_17 -= 0;
                                arr_30 [i_2] [9] [i_2] [i_2] = (max((max(22821, (min(1, 2438189257880986773)))), (((var_9 || (((11 ? (arr_0 [i_5]) : -31458))))))));
                                arr_31 [i_2] [i_2] [i_4 - 1] [i_2] [i_7] = (((((var_6 | (13918 ^ -31459)))) | (((((37356 ? (arr_14 [i_2 - 2] [i_3 - 2] [i_4 + 1] [i_5]) : var_12))) ? (min(-20, var_10)) : (3157875954 | var_13)))));
                            }
                            arr_32 [i_2 - 2] [5] [i_2 - 2] [i_5] [i_2 - 2] [i_3] = (((((arr_0 [i_2]) || (((var_13 << (((arr_9 [i_3] [i_3]) - 4310640245664148812))))))) ? (-32767 - 1) : (min((-89 * -29058), ((var_10 ? var_9 : 2))))));
                            var_18 ^= ((((min(var_5, -53))) < (min(var_1, -1570522250))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        {
                            var_19 = ((-1358319003 == ((253 ? ((min(var_10, var_14))) : (arr_9 [i_3 - 1] [i_9])))));
                            arr_39 [i_2] [i_8] [3] [i_9] [i_3] [i_3] = ((~(arr_0 [i_3])));
                        }
                    }
                }
                var_20 ^= (max(16, (((arr_13 [i_2] [i_2] [i_2] [i_2 - 2]) ? var_14 : (arr_13 [i_2 - 2] [i_3] [i_2 - 2] [i_2 - 1])))));
                arr_40 [i_2 + 2] [i_2] [i_3 - 2] &= ((((30 * (arr_36 [i_2 + 2] [i_3] [i_2 + 2]))) * 33569));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            {
                arr_46 [i_10] = 2583104716;
                arr_47 [i_10] [i_10] = ((~(max((arr_43 [i_10] [1] [i_11]), (-2147483647 - 1)))));
                arr_48 [i_10] = (((min(var_0, (~63)))) < (min((((-(arr_41 [i_10] [1])))), (min((arr_44 [i_10] [i_10]), var_3)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_12 = 1; i_12 < 15;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 16;i_13 += 1)
        {
            {
                var_21 = (arr_49 [i_13]);
                arr_53 [14] [i_13] = ((var_9 ? ((((!(arr_50 [4]))))) : (var_8 / -1321674383)));
            }
        }
    }
    #pragma endscop
}
