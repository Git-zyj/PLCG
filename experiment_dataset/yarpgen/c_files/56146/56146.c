/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56146
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = ((arr_0 [i_0] [i_0]) ? ((min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))) : (min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))));

        for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] = (max((min(3088916771, 1)), 28934));
            var_17 *= var_14;
        }
        for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
        {
            arr_10 [i_0] [i_2] [i_0] = (min(var_9, (max((arr_5 [i_2]), (((arr_5 [i_0]) ? (arr_7 [i_0] [i_2] [i_2]) : 3088916771))))));

            /* vectorizable */
            for (int i_3 = 3; i_3 < 17;i_3 += 1)
            {
                var_18 = 4294967294;
                arr_13 [i_0] [i_2] [i_0] = (arr_7 [i_0] [i_3 + 4] [i_3]);
                arr_14 [i_2] [6] [i_3] |= (arr_12 [i_3 - 2] [i_3] [i_3 - 2] [i_0]);
            }
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
                {
                    arr_19 [i_0] [i_0] [i_2] [i_2] [7] [i_0] = (min((arr_7 [i_0] [i_2] [i_5]), (arr_8 [i_0] [i_0])));
                    var_19 |= var_14;
                    var_20 = ((((arr_2 [i_4] [i_0]) * var_5)));
                    var_21 = (min(((((arr_16 [i_0] [i_2] [i_4]) ^ (arr_12 [i_0] [i_2] [i_4] [i_5])))), (arr_9 [1] [i_4])));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
                {
                    arr_23 [i_0] [i_0] = ((var_11 + (arr_16 [i_0] [i_2] [1])));
                    arr_24 [4] [i_0] [i_2] [i_4] [i_4] [10] = var_3;
                }
                arr_25 [i_4] [i_0] [i_4] = (((arr_11 [i_0] [i_0] [i_0] [i_0]) > (arr_11 [i_0] [i_2] [i_4] [i_4])));
                var_22 |= (((max((arr_22 [i_4] [i_2] [i_0]), (arr_22 [1] [9] [i_4]))) ? ((65535 + ((max(var_0, (arr_18 [0] [i_2] [2] [i_2])))))) : ((~(arr_21 [i_4])))));
            }
            var_23 = (min(var_23, var_15));
        }
        arr_26 [i_0] [i_0] = ((-var_6 ? ((~(arr_20 [i_0] [i_0]))) : ((max(1067463367, var_10)))));
        arr_27 [i_0] = (((((arr_9 [i_0] [i_0]) ? (arr_9 [i_0] [i_0]) : (arr_9 [i_0] [i_0]))) << (((min(4294967294, (arr_9 [i_0] [i_0]))) - 341187124))));
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            {
                arr_35 [i_7] = (min(((((max((arr_30 [1]), (arr_28 [21] [i_8])))) ? (arr_28 [i_7] [8]) : ((-(arr_30 [7]))))), (((65535 ? (var_15 | var_15) : (arr_28 [i_7] [i_7]))))));
                arr_36 [i_7] [i_8] [i_7] = var_12;
            }
        }
    }
    var_24 += (((((((max(var_5, var_16))) ? var_11 : var_3))) ? (((((var_1 >= 1067463374) || var_11)))) : ((var_10 & ((var_4 ? var_9 : var_5))))));
    #pragma endscop
}
