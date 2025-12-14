/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94104
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [0] [0] |= ((-(4369733536870267428 == 121)));
        var_15 = (arr_1 [2] [2]);
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        arr_6 [i_1] [0] = var_7;

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 10;i_5 += 1)
                    {
                        {
                            var_16 |= 4369733536870267411;
                            var_17 ^= (((arr_0 [10]) ? var_6 : var_7));
                        }
                    }
                }
            }
            arr_18 [i_1] = var_2;
            arr_19 [i_1] = (~13838538693739215228);
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 9;i_8 += 1)
                    {
                        {
                            var_18 *= 77;
                            var_19 ^= (((arr_24 [i_8 - 3] [i_7] [i_7] [i_1 - 1]) ? (min((arr_12 [i_6]), var_5)) : (arr_24 [i_2] [i_7] [i_7] [0])));
                            arr_27 [7] [i_6] [i_6] [6] = ((-((-(arr_26 [i_8] [i_8 - 3] [i_8] [i_8 + 2] [i_8 - 2] [i_8])))));
                        }
                    }
                }
            }
        }
        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            arr_30 [0] [i_9] = ((~((~(arr_25 [i_9] [i_1 - 1] [i_9])))));
            arr_31 [i_9] = (((6144 || var_12) << (var_14 - 213)));
        }
    }
    for (int i_10 = 0; i_10 < 12;i_10 += 1)
    {
        var_20 = var_14;
        arr_35 [i_10] = var_2;
        var_21 = (arr_34 [i_10] [i_10]);
        arr_36 [i_10] [i_10] = ((-(65535 ^ 225)));
    }
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 11;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 11;i_12 += 1)
        {
            {
                arr_43 [i_11] [9] = ((+((((arr_22 [i_11]) >= (arr_10 [i_11] [i_11] [i_12]))))));
                arr_44 [i_11] [i_11] [i_11] = (arr_32 [i_11] [i_11]);
            }
        }
    }
    var_22 = var_3;
    #pragma endscop
}
