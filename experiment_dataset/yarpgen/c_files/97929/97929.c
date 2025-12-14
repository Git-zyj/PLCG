/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97929
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (!(((-var_5 + (8673172731487289602 + 1026163319)))));
    var_11 = (((((-(!var_2)))) * var_3));
    var_12 += (!var_6);

    /* vectorizable */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0] = arr_1 [i_0];
        arr_5 [9] = var_7;
        arr_6 [i_0] = (((arr_0 [i_0 + 3] [i_0 + 2]) == (arr_0 [i_0 + 3] [i_0 - 1])));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_9 [i_1] = var_0;

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_13 = (((((~(arr_0 [i_2] [i_2])))) >= ((+(((arr_11 [i_2] [1] [3]) ? var_0 : (arr_7 [i_1] [i_2])))))));
            var_14 = (arr_1 [i_2]);
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            arr_15 [8] = (((arr_10 [i_1] [11]) == (arr_12 [i_1] [i_1])));
            var_15 = (((arr_13 [i_3] [i_3] [i_1]) % (arr_11 [i_1] [i_1] [i_1])));
            var_16 *= ((var_9 >> (((arr_0 [2] [i_3]) - 1028962459))));
            /* LoopNest 2 */
            for (int i_4 = 2; i_4 < 12;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 0;i_5 += 1)
                {
                    {
                        arr_22 [i_4] [i_3] [i_4] [1] = (--7894216380538969997);

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_17 -= ((-(arr_10 [i_4 - 1] [i_5 + 1])));
                            var_18 = -1026163320;
                        }
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            arr_27 [i_1] [i_1] [i_4] [i_5] [i_7] = (arr_12 [i_1] [i_1]);
                            arr_28 [i_1] [i_1] [i_7] [9] [i_4] [i_1] [i_4] = (((((!(arr_14 [6] [i_1] [i_1])))) * (~-1026163322)));
                        }
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            arr_31 [i_8] [i_8] [i_8] [i_4] [6] [3] = ((~(arr_21 [i_4] [i_4 + 2] [i_4] [i_4])));
                            arr_32 [i_4] [i_3] = (arr_25 [i_5] [i_5 + 1] [i_4] [i_4] [2] [6]);
                        }
                        arr_33 [i_5] [i_4] [i_4] [i_4 + 2] [i_4] [3] = arr_14 [i_5] [1] [i_1];
                        var_19 = arr_7 [i_1] [i_1];
                    }
                }
            }
        }
    }
    #pragma endscop
}
