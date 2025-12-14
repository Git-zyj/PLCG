/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9765
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_20 = ((!(((-(arr_1 [i_0]))))));
        var_21 = ((121 << (16086560600475076384 - 16086560600475076381)));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_22 *= ((~(min(var_19, (arr_7 [i_1 - 1])))));
                        arr_12 [i_0] [1] [i_2] [i_2] = (var_13 ? (var_6 * 8260) : (((10143 <= (1 <= 7629)))));
                    }
                }
            }
        }
        var_23 = (max(var_23, 5453));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
    {
        var_24 *= (arr_15 [i_4]);
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            {
                                var_25 &= (((arr_14 [i_6]) ? (arr_14 [i_4]) : (arr_14 [i_4])));
                                var_26 = (max(var_26, (3510156346 | 5492799256414097516)));
                                var_27 = (((arr_17 [i_6]) % -1));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            {
                                var_28 = var_17;
                                var_29 ^= var_0;
                                var_30 = arr_28 [i_10] [i_9] [21] [i_5] [i_4] [i_4];
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_11 = 0; i_11 < 24;i_11 += 1) /* same iter space */
    {
        var_31 ^= (max(1, 8869436078481652691));
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 24;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 24;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 24;i_14 += 1)
                {
                    {
                        arr_42 [i_11] [i_12] [22] &= ((-((((8242 >> (((arr_36 [i_11] [1] [1]) - 222)))) << (((arr_38 [i_11] [i_11]) - 171))))));
                        var_32 = (((((-144 ? (9182539656773948503 - 4913343504704666899) : (((max(159, 60087))))))) <= (arr_30 [i_11] [i_11] [i_11] [i_11] [i_11])));
                        arr_43 [i_11] = (!1);
                    }
                }
            }
        }
    }
    var_33 = (min(var_14, var_15));
    #pragma endscop
}
