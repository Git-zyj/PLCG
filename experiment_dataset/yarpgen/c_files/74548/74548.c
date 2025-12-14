/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74548
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;
    var_16 *= var_14;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_17 ^= var_13;
        arr_3 [i_0] = ((((max((arr_2 [i_0]), (max(799054278, var_3))))) ? var_1 : (((min(var_10, var_5))))));
        arr_4 [i_0] = (min((arr_0 [i_0]), ((-2366931378585845024 ? 0 : 1))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        {
                            arr_16 [i_5] [i_2] [i_3] [i_1] [i_2] [i_1] = 1;
                            var_18 = (min(var_18, var_12));
                        }
                    }
                }
                arr_17 [i_3] [i_1] = var_9;
                arr_18 [i_1] [i_1] [i_3] = (((arr_12 [i_1] [i_1] [i_1] [10] [i_1] [i_1]) ? var_3 : var_4));
            }
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                var_19 = (max(var_19, var_14));
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 12;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        {
                            var_20 = (max(var_20, ((((arr_10 [i_7 - 1] [i_2] [4]) ? var_11 : var_3)))));
                            var_21 = (max(var_21, (((1 ? 1 : 127)))));
                            arr_27 [i_1] [i_2] [i_6] [i_8] [i_8] = ((!(((var_4 ? var_10 : 1)))));
                        }
                    }
                }
            }
            var_22 = (min(var_22, (((var_13 ? (arr_25 [i_1] [i_1] [i_2]) : (arr_22 [i_1] [i_1] [i_1] [i_1] [i_1]))))));
        }
        var_23 |= (min(15636963215925157624, 56));
        var_24 = (min(var_24, (((-var_4 % ((var_3 ? var_9 : (arr_19 [i_1] [1] [i_1]))))))));
        var_25 = (min(var_25, 867225823520339740));

        /* vectorizable */
        for (int i_9 = 1; i_9 < 1;i_9 += 1)
        {
            var_26 = var_2;
            var_27 |= ((!(arr_8 [i_1])));
            var_28 = var_3;
            var_29 |= var_13;
        }
    }
    for (int i_10 = 2; i_10 < 16;i_10 += 1)
    {
        var_30 &= var_0;
        var_31 = (min(var_31, 15318));
    }
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 25;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 25;i_12 += 1)
        {
            {
                arr_36 [i_12] [i_11] [i_11] = (((((~(arr_32 [i_11])))) ? (((arr_33 [i_11]) / (arr_33 [i_12]))) : (((arr_32 [i_11]) % 1))));
                var_32 = ((var_12 >= ((var_3 ? var_14 : ((~(arr_32 [i_11])))))));
            }
        }
    }
    #pragma endscop
}
