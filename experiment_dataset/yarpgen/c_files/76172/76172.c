/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76172
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((max(52, -var_7))) ? var_13 : (max(var_8, var_2))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_19 = (((~9) == (min((arr_4 [i_0 + 1]), (arr_1 [i_1])))));
                            arr_13 [i_2] [i_2] [i_2] [i_3] |= -1844182319;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 4; i_5 < 15;i_5 += 1)
                    {
                        {
                            var_20 = (min(var_20, ((((max((var_17 * 34), -13)) >> (((((arr_2 [i_5 - 1]) ? (((arr_6 [i_4] [i_0] [i_4]) ? (arr_9 [i_0] [i_1]) : var_9)) : 34145)) - 173)))))));

                            for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
                            {
                                var_21 = var_13;
                                var_22 = (((((arr_20 [i_0] [i_1] [i_5]) ? (arr_2 [i_0 - 1]) : (arr_12 [i_1]))) < (~-943661065225591823)));
                                var_23 = ((var_6 ? (~var_9) : (((max((arr_6 [i_5 - 1] [i_1] [i_0 - 1]), (arr_1 [i_1])))))));
                            }
                            for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
                            {
                                var_24 ^= 0;
                                arr_25 [i_0] [1] [i_1] [i_5] [i_7] = (arr_3 [i_1] [i_1] [i_4]);
                                var_25 ^= (((var_13 ^ var_17) ? (31410 & 34145) : (arr_14 [i_0 - 1] [i_0 + 1] [i_0] [i_0 - 1])));
                            }
                            for (int i_8 = 0; i_8 < 16;i_8 += 1) /* same iter space */
                            {
                                arr_29 [i_1] [i_1] [11] [7] [i_5] [1] [i_8] = (((arr_9 [i_0 + 1] [i_0 + 1]) < (arr_9 [i_0 + 1] [i_0 + 1])));
                                var_26 = var_10;
                                var_27 = max((arr_0 [i_4] [i_8]), 0);
                            }

                            for (int i_9 = 0; i_9 < 16;i_9 += 1)
                            {
                                var_28 *= (max(12619727022119414105, 1721215230));
                                arr_32 [i_0] [i_1] [i_1] [i_1] [i_9] = var_2;
                                var_29 ^= ((~((0 ? (arr_28 [i_5] [i_1] [i_4] [i_1] [10] [i_5]) : var_13))));
                                var_30 = (min(var_30, 23));
                            }
                            for (int i_10 = 0; i_10 < 16;i_10 += 1)
                            {
                                var_31 = var_2;
                                var_32 = (max(var_32, ((min((max((var_12 * 20), 17)), (~35479))))));
                            }
                        }
                    }
                }
                var_33 = ((((~(arr_16 [i_0] [i_0 + 1] [5] [i_0]))) << (((((arr_0 [i_0 - 1] [i_0 + 1]) ? var_11 : var_9)) - 63498))));
            }
        }
    }
    #pragma endscop
}
