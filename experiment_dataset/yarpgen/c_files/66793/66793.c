/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66793
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (((max((var_11 < -5), var_5))))));

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_15 = ((((((arr_1 [i_0 + 1]) < (arr_1 [i_0])))) < (((arr_2 [i_0 - 2] [0]) & ((~(arr_0 [i_0 + 1])))))));
        var_16 = ((max((arr_0 [i_0 + 1]), (arr_0 [i_0 + 1]))));
        var_17 = (arr_2 [i_0 - 1] [i_0 + 1]);

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_18 = -13322;

            /* vectorizable */
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                var_19 = (arr_3 [i_2]);

                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    var_20 = ((-((((arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1]) < var_9)))));
                    arr_10 [i_3] [14] [14] [14] [i_3] [i_0 + 1] = (arr_1 [2]);
                    arr_11 [i_0] [i_0] [i_0] [i_0 + 1] [i_0 - 2] [i_0] &= (0 < -1708261628);
                    var_21 = (((((arr_7 [i_2] [i_2] [i_2] [4]) < (arr_8 [i_0] [i_0] [i_0] [4] [2]))) ? (arr_4 [i_0] [i_1] [i_2]) : 52));
                }
                arr_12 [i_0] = (((arr_9 [i_0] [i_0 + 1] [i_0 - 2] [i_0] [i_0] [i_0 + 1]) < ((((arr_9 [i_0] [i_1] [i_1] [i_1] [i_1] [i_2]) < 1)))));
                var_22 ^= (arr_4 [i_0 - 2] [i_0 - 2] [i_0 - 2]);
            }
        }
        /* vectorizable */
        for (int i_4 = 3; i_4 < 13;i_4 += 1) /* same iter space */
        {
            arr_15 [i_0] = (112 < 0);
            var_23 = (min(var_23, var_12));

            for (int i_5 = 1; i_5 < 14;i_5 += 1)
            {
                arr_20 [i_0] [i_0] = arr_9 [i_0] [i_4] [7] [7] [i_5 + 1] [i_4];
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 13;i_7 += 1)
                    {
                        {
                            var_24 = (min(var_24, (((2087106670 < (!var_2))))));
                            var_25 |= (arr_14 [i_0 - 1]);
                            var_26 = var_12;
                            var_27 = (min(var_27, (arr_17 [i_7 + 1] [i_5 - 1] [i_4] [i_4 - 2])));
                            arr_26 [i_0 + 1] [12] [i_5] [i_4 + 1] = ((-(arr_14 [i_0 + 1])));
                        }
                    }
                }
            }
            for (int i_8 = 0; i_8 < 15;i_8 += 1)
            {
                arr_29 [i_0 - 1] [i_0 - 1] [i_8] = (arr_8 [i_0] [i_4] [i_4] [i_8] [i_8]);
                arr_30 [i_0] [i_0] [i_4 + 2] [i_8] = (((arr_23 [i_0 + 1] [i_0 + 1]) < (((!(arr_17 [i_0] [i_0] [i_0] [i_8]))))));
            }
            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                arr_35 [i_0] [i_0] = (arr_1 [i_9]);
                arr_36 [i_0 - 2] [i_0 - 2] = 1;
            }
        }
        for (int i_10 = 3; i_10 < 13;i_10 += 1) /* same iter space */
        {
            var_28 -= (((3788906767139047958 < 1) ? (arr_13 [i_10 - 3]) : (arr_31 [i_0] [i_0] [i_0] [i_0 - 1])));
            var_29 -= ((((1 < (arr_21 [i_0] [i_0] [i_0] [i_0])))));
        }
    }
    #pragma endscop
}
