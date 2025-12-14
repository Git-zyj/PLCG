/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64461
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 4294967295;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_1 + 1] [6] [i_0] = ((4294967295 ? 21 : 0));
                arr_6 [7] = var_8;
            }
        }
    }

    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        var_19 |= ((((min(84, 21))) ? (max((arr_4 [i_2] [i_2]), var_1)) : ((((!(arr_1 [i_2])))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {
                    var_20 = ((((arr_4 [i_2] [i_3]) ? 4294967295 : 33292288)));
                    arr_14 [i_2] [i_3] [i_4] = (max(167, (((!(!21))))));
                }
            }
        }
    }
    for (int i_5 = 1; i_5 < 9;i_5 += 1)
    {
        arr_17 [i_5 - 1] [i_5] = (arr_3 [i_5] [i_5 + 1]);
        arr_18 [i_5] [i_5] = (min((var_2 ^ 0), (((!(arr_3 [i_5] [i_5 - 1]))))));

        /* vectorizable */
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            var_21 = var_15;
            arr_22 [2] = (!4294967275);
        }
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            var_22 += ((-9 <= (min((arr_1 [i_5 + 1]), (arr_15 [i_5 + 2] [i_5 - 1])))));

            /* vectorizable */
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 7;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 9;i_10 += 1)
                    {
                        {
                            var_23 ^= var_15;
                            var_24 = (arr_30 [i_10] [i_9] [9] [i_10] [i_10 + 1]);
                            arr_32 [i_5] [i_5] [i_8] [i_9 - 1] [i_8] [i_9] = (arr_26 [i_5] [i_7] [i_8] [i_7]);
                        }
                    }
                }
                var_25 = (((arr_27 [i_5 + 2] [i_7] [i_8]) % ((70 ? (arr_25 [i_5] [i_7] [i_8]) : (arr_3 [i_8] [3])))));
            }
        }
        for (int i_11 = 2; i_11 < 8;i_11 += 1)
        {
            arr_35 [i_5] [i_11 + 1] = (min((max((arr_3 [i_5 + 1] [i_11 - 1]), (arr_3 [i_5 - 1] [i_11 - 2]))), (((((min(var_12, -4))) > ((max(63, var_3))))))));
            arr_36 [i_5 + 1] = ((((((arr_16 [i_5 + 1] [i_5 + 2]) && (arr_16 [i_5 + 1] [i_5 + 1])))) >> (-896214205952343982 - 54)));
            arr_37 [i_5] [i_5] [i_5] &= (((arr_0 [i_5]) <= -896214205952343975));
        }
    }
    /* LoopNest 3 */
    for (int i_12 = 1; i_12 < 19;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 21;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 21;i_14 += 1)
            {
                {
                    var_26 = (min(((max(var_15, ((!(arr_44 [i_12 + 1] [i_12 + 1] [i_12 + 1] [i_12])))))), 15341063723638141339));
                    var_27 = (((~0) != -12));
                }
            }
        }
    }
    #pragma endscop
}
