/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7630
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_8 [i_3] [i_1] [i_1] [i_0] = (((((arr_7 [i_0] [i_1] [i_1] [i_1]) ? 37849 : 3123363317))));
                            var_19 = ((1171603963 ? (arr_5 [i_1]) : ((((((arr_1 [i_0]) ? 1 : 1171603994)))))));

                            for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
                            {
                                var_20 = (min(var_20, 4347820210005032787));
                                var_21 = (arr_9 [i_1] [i_1] [i_1] [i_3 - 2] [i_1]);
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                            {
                                arr_15 [3] [i_3] [11] = ((77 ? 0 : (((arr_11 [18] [i_1] [i_2]) ? (arr_9 [i_0] [i_1] [i_2] [i_3] [i_5]) : 13728060692773879104))));
                                arr_16 [i_0] [i_1] [i_2] [i_2] [i_2] [i_3] [i_5] = ((134730991 ? 190 : (arr_2 [i_0] [i_1] [i_1])));
                                var_22 = (arr_3 [i_0]);
                                var_23 = (((((9494 ? -101 : 1))) ? 56042 : 1154591486));
                            }
                            for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                            {
                                var_24 = (arr_12 [i_6]);
                                var_25 *= (arr_11 [i_0] [i_2] [i_3]);
                                arr_20 [i_0] [i_1] [i_6] = 30037684;
                            }
                            for (int i_7 = 0; i_7 < 20;i_7 += 1)
                            {
                                var_26 = (min(var_26, (arr_12 [i_0])));
                                var_27 &= ((-1828147465 ? -4491530095399620878 : 101));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 20;i_10 += 1)
                        {
                            {
                                var_28 = -89028831;
                                var_29 ^= ((arr_24 [i_10]) ? (((1588402638 ? 764874362 : (arr_26 [i_9] [15] [i_1] [i_0])))) : (arr_19 [i_0] [i_0] [i_0] [i_0] [1] [i_0] [i_0]));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 4; i_11 < 19;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        {
                            arr_39 [i_0] [18] [i_11] [i_12] = (arr_27 [i_0] [i_0] [i_0]);
                            var_30 = 1;
                            var_31 = 12055;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_13 = 4; i_13 < 16;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 20;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 20;i_15 += 1)
                        {
                            {
                                arr_49 [i_0] [i_14] [i_13 + 1] [i_1] [i_0] |= 92;
                                var_32 = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_16 = 0; i_16 < 21;i_16 += 1)
    {
        for (int i_17 = 0; i_17 < 21;i_17 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 21;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 21;i_19 += 1)
                    {
                        {
                            arr_62 [20] [i_17] [i_17] [i_19] [i_16] = (arr_54 [i_16]);
                            arr_63 [i_16] [i_17] [i_18] [i_19] = ((2819856182 ? ((((((arr_51 [i_16]) ? (arr_51 [3]) : -1589378446))) ? (((arr_59 [i_16] [i_18] [i_19]) ? 65 : (arr_52 [i_16] [i_17] [i_17]))) : (arr_53 [i_18]))) : (arr_59 [i_19] [i_18] [i_16])));
                            var_33 = (((1828816223 ? 3058524795085142359 : (arr_58 [i_19] [i_19] [i_18] [i_17] [i_16]))));
                            arr_64 [i_16] &= 2819856185;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_20 = 0; i_20 < 21;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 21;i_21 += 1)
                    {
                        for (int i_22 = 1; i_22 < 20;i_22 += 1)
                        {
                            {
                                var_34 = 2146655955;
                                var_35 = 1;
                                var_36 = (arr_51 [i_17]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
