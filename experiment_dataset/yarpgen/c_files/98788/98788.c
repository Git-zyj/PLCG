/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 = (max(var_16, ((((((((var_13 < (arr_4 [i_0])))) | (6 > var_15))) + ((max((arr_3 [i_0] [i_0] [i_0]), (var_11 || 6)))))))));
                arr_5 [i_0] [i_0] [i_0] = ((-(min(65530, 0))));
                var_17 = (max(var_17, ((min((((((4294967270 ? 1 : 4294967270))) ? -1 : (max((arr_1 [i_1] [i_1]), var_15)))), var_2)))));
            }
        }
    }
    var_18 = var_12;
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 21;i_4 += 1)
            {
                {
                    arr_14 [i_4] [i_3] [i_4] [i_2] = ((((((arr_2 [i_2 + 1]) ? (arr_4 [i_3 + 1]) : (arr_2 [i_2 + 2])))) ? ((max(((0 ? 13 : 0)), ((((arr_13 [i_2]) >= var_11)))))) : (min((arr_3 [i_3 - 2] [i_3 + 1] [i_4]), (arr_7 [i_3 - 2])))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                arr_21 [i_2] [i_6] [i_2 + 2] [i_5] [i_3] [i_6] [i_3 + 1] = ((-0 != ((-(min((arr_10 [i_3] [i_4] [i_3] [i_3]), (arr_9 [i_2])))))));
                                var_19 = ((-((((min((arr_18 [i_2] [3] [i_4 - 1] [i_3] [i_6]), var_12))) + 65526))));
                            }
                        }
                    }
                    var_20 = (((((1 ? 0 : 0)) - (65535 - 6))));
                }
            }
        }
    }
    var_21 = ((((((((4294967267 ? var_0 : 65527))) ? (((0 ? var_14 : var_1))) : -var_15))) ? -5 : ((-(var_15 - var_10)))));

    /* vectorizable */
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        arr_24 [i_7] [i_7] = 65535;
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 23;i_9 += 1)
            {
                for (int i_10 = 4; i_10 < 23;i_10 += 1)
                {
                    {
                        var_22 = (arr_26 [i_7]);

                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            var_23 = (255 <= 1);
                            arr_36 [6] [6] [6] [i_10] [i_11] [i_10] [i_9] = ((var_7 != (arr_33 [i_11] [i_9] [i_9] [i_7] [i_7])));
                        }
                        arr_37 [i_7] [i_7] [i_7] [i_9] = (arr_29 [18] [i_8] [i_9 + 1] [i_10 - 2]);

                        for (int i_12 = 0; i_12 < 24;i_12 += 1) /* same iter space */
                        {
                            var_24 ^= (((arr_30 [i_7] [i_7]) + (arr_30 [i_9] [i_10 - 3])));
                            var_25 = (arr_31 [i_9 + 1] [i_9 + 1] [i_9 - 1] [i_9 + 1] [i_9 - 1] [i_9]);
                            arr_40 [i_7] [i_7] [i_9] [i_10] [i_9] = var_13;
                            var_26 = ((-(11 <= var_5)));
                        }
                        for (int i_13 = 0; i_13 < 24;i_13 += 1) /* same iter space */
                        {
                            var_27 = (arr_43 [i_7] [i_7] [i_7] [i_9] [i_7]);
                            arr_44 [i_9] = (((arr_32 [i_9] [i_9 - 1] [i_10 - 3] [i_9 - 1] [i_10 + 1] [i_10 - 2]) ? ((var_15 ? 1 : var_2)) : (!var_3)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
