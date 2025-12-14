/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99077
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_15 = (!1386541236968452266);
                            var_16 ^= ((((min(-var_4, ((var_7 ? 1386541236968452266 : var_11))))) ? ((1386541236968452266 ? 1386541236968452271 : -1386541236968452259)) : var_2));
                            arr_8 [i_0] [i_1] [i_0] [i_0] = (((-1386541236968452241 < (((min(86, -32765)))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 18;i_6 += 1)
                        {
                            {
                                arr_19 [2] [i_1] [i_4] [0] [i_6 + 2] &= (arr_0 [i_0] [i_0]);
                                arr_20 [i_0] [i_1] [i_1] [i_1] [4] [i_6] |= ((1386541236968452266 < ((min((!var_0), (((arr_1 [i_4]) && (arr_13 [i_0] [15] [i_4] [15] [i_6]))))))));
                                arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [13] = (~-1386541236968452259);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 19;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 18;i_8 += 1)
                    {
                        {
                            arr_29 [i_0] [i_0] [i_7 + 1] [i_8] = var_14;
                            var_17 = (~var_0);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 1;i_10 += 1)
                    {
                        {
                            var_18 ^= ((-3950828098435979213 ? 6038402767851010410 : 4037));
                            var_19 = -9223372036854775807;
                            var_20 ^= var_9;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 21;i_11 += 1)
                {
                    for (int i_12 = 3; i_12 < 20;i_12 += 1)
                    {
                        {
                            arr_42 [18] [18] &= ((max(var_7, 1587457029)));
                            var_21 *= ((14607355548872773906 ? (!var_9) : ((~(arr_14 [i_0])))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_13 = 0; i_13 < 24;i_13 += 1)
    {
        for (int i_14 = 3; i_14 < 21;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 24;i_15 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 24;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 24;i_17 += 1)
                        {
                            {
                                var_22 &= ((0 ? 0 : 0));
                                var_23 = (max(var_23, ((((arr_47 [i_15] [i_14 - 3] [i_15] [i_13]) << (((((~(arr_46 [i_13] [i_14 + 3] [i_13])))) - 15607858593677350311)))))));
                                arr_53 [i_16] [i_15] = ((((min(((0 ? 2707510267 : (arr_50 [22] [i_15] [i_13] [i_13]))), -53))) ? (!var_12) : ((0 ? -3706721310097587069 : 254))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 24;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 24;i_19 += 1)
                        {
                            {
                                arr_59 [i_15] [i_14] [i_15] [i_15] [i_18] [i_18] [i_19] = var_2;
                                arr_60 [i_13] [i_14] [i_14] [i_15] [i_18] [i_18] [i_19] = (((((-(!53152)))) ? ((-((max(var_13, var_9))))) : var_2));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
