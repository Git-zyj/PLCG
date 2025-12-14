/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5956
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_20 = (max(var_20, (((2147483647 << (((min(((16422 ? var_1 : var_19)), (var_16 != 16422))) - 1)))))));
                var_21 ^= (((arr_2 [i_0 + 1]) + ((var_7 ? ((var_2 ? 49113 : (-9223372036854775807 - 1))) : (((var_9 ? -506836761 : var_1)))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        var_22 = 809857770;

        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {

            /* vectorizable */
            for (int i_4 = 4; i_4 < 22;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 22;i_6 += 1)
                    {
                        {
                            var_23 = (((var_6 >= 4294967295) << (49114 - 49090)));
                            var_24 = ((!(((0 ? -1859749321 : -1859749321)))));
                        }
                    }
                }
                var_25 = ((~(((arr_13 [i_2] [i_2]) ? var_8 : (arr_14 [i_2] [i_2] [i_2] [4])))));
            }
            arr_19 [i_3] = (((0 ? 0 : 16422)));
            var_26 = -1859749321;
        }
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 19;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    {
                        arr_27 [i_2] [15] [1] [i_7] [i_2] [1] = 15230;
                        var_27 = (((((arr_9 [i_2] [i_7] [i_8 + 3]) >> (((arr_9 [i_2] [i_7] [i_8 + 3]) - 2366891123)))) & (((max(0, (arr_14 [i_2] [i_7] [i_8 + 3] [i_7])))))));
                    }
                }
            }
            var_28 &= ((((((~var_7) ^ 3238292957))) ? 2138875643 : (min(((0 ? var_13 : 0)), ((min(65535, (arr_18 [i_7] [6] [i_2] [i_2] [i_2]))))))));
            /* LoopNest 2 */
            for (int i_10 = 3; i_10 < 21;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 23;i_11 += 1)
                {
                    {
                        arr_33 [i_7] [i_7] = ((max((-2147483647 - 1), 0)));
                        arr_34 [i_7] [i_10] [21] [i_7] = var_4;
                    }
                }
            }
            arr_35 [i_7] = ((min((0 * 0), var_18)));
        }
        arr_36 [i_2] = (((((var_19 ? -1 : (arr_30 [16] [i_2] [16] [22])))) ? (((var_3 ? (arr_30 [i_2] [i_2] [i_2] [12]) : (arr_26 [17] [i_2] [i_2] [i_2] [3] [i_2])))) : (arr_30 [1] [i_2] [i_2] [1])));
    }
    for (int i_12 = 1; i_12 < 1;i_12 += 1)
    {
        arr_40 [15] = (min((min((var_16 ^ var_0), (var_0 ^ 0))), (~var_18)));
        var_29 = 514921554;
    }
    /* LoopNest 2 */
    for (int i_13 = 3; i_13 < 9;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 12;i_14 += 1)
        {
            {

                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {
                    var_30 = (min(var_30, -3861441290414990069));
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 12;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 12;i_17 += 1)
                        {
                            {
                                arr_55 [11] [i_14] [11] [5] [i_13] [i_15] = min((1859749321 << 0), 1859749321);
                                arr_56 [1] [i_16] [i_16] [i_13] [1] [i_14] [1] = (max((min(7240898860557413171, (arr_47 [i_14] [i_14] [i_14] [i_13 + 3]))), ((((((35 ? 0 : 1))) ? (((1 ? var_16 : var_11))) : ((-(arr_11 [i_13] [i_13] [i_13]))))))));
                            }
                        }
                    }
                }
                arr_57 [i_13] [i_13] = (arr_24 [i_13] [13]);
            }
        }
    }
    #pragma endscop
}
