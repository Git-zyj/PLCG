/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63500
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 11;i_4 += 1)
                            {
                                var_12 = ((((~(((arr_13 [i_0 + 4] [i_0 + 1] [i_0 + 2] [i_0]) ? var_1 : var_2)))) <= ((max(((min((arr_0 [i_0] [i_0]), var_7))), (arr_9 [i_1] [i_2 - 2] [i_1] [i_0]))))));
                                var_13 = var_6;
                                arr_14 [i_0 + 3] [i_1] [i_2 - 2] [i_0 + 3] [i_3] [i_3] = ((var_11 ^ (arr_11 [i_0 + 1] [i_0 + 4] [i_1] [i_2 - 1] [i_3] [i_4])));
                            }
                            var_14 = (arr_10 [i_0] [i_0 + 2] [i_1] [i_2 - 1] [i_2 - 2]);
                        }
                    }
                }
                var_15 = (~-510);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 22;i_6 += 1)
        {
            {
                var_16 = var_11;
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 22;i_8 += 1)
                    {
                        {
                            var_17 = (((((((min(2032, var_1))) ? ((((-32760 <= (arr_15 [i_5] [i_5]))))) : (((arr_25 [i_5] [i_6] [i_7] [i_8] [i_8]) ? var_11 : (arr_19 [i_8 - 1] [i_8])))))) ? (arr_20 [i_6] [i_6 + 1] [i_6]) : ((-8102751486796779911 ? 1 : -32747))));
                            var_18 = var_6;
                            arr_27 [i_5] [i_5] [i_7] [i_8] = ((+(max((arr_25 [i_5] [i_6] [i_7 + 2] [i_8 - 1] [i_7 - 1]), var_11))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 3; i_9 < 19;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        {
                            var_19 = (max((!64868), var_8));
                            var_20 = (~var_4);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 23;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 21;i_12 += 1)
                    {
                        {
                            arr_41 [i_12] = (min(var_0, var_0));
                            arr_42 [i_5] [i_12] [i_11] [i_12] = -94;
                            arr_43 [i_12] = ((var_8 ? -1 : ((8688613084421214179 * (arr_17 [i_11])))));
                            var_21 = (arr_28 [i_12] [i_12] [i_12]);
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 17;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 17;i_14 += 1)
        {
            {
                var_22 = (((max(((var_10 ? (arr_30 [i_13] [19] [i_14] [i_14]) : var_2)), (arr_48 [i_13]))) >> (var_11 / var_6)));
                /* LoopNest 3 */
                for (int i_15 = 0; i_15 < 17;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        for (int i_17 = 3; i_17 < 16;i_17 += 1)
                        {
                            {
                                var_23 = var_6;
                                var_24 ^= (arr_36 [i_13] [i_15] [i_13]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 |= (((((-(!var_7)))) ? -1991075865 : 1));
    var_26 = var_6;
    #pragma endscop
}
