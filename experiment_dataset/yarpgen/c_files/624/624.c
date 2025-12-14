/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/624
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_12 [i_2] [i_4 + 1] = ((255 ? (((var_7 | (arr_1 [i_4 + 1])))) : ((1 ? (arr_4 [i_1 + 1] [i_1 + 2] [i_1 - 1]) : (arr_4 [i_1 - 1] [i_1 + 1] [i_1])))));
                                var_17 = var_13;
                                var_18 = ((((min(var_3, ((((arr_3 [i_4] [i_4]) - (arr_2 [i_0]))))))) ? ((((var_16 >= (arr_1 [i_0]))))) : (((!(arr_3 [i_0] [i_4 - 1]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 9;i_6 += 1)
                        {
                            {
                                arr_19 [i_2] [i_1] [i_2] [i_2] = (((arr_6 [i_0] [i_0] [i_2] [i_5]) ? (!var_5) : (((229 * var_10) - (max(var_4, (arr_6 [i_2] [i_2] [i_2] [i_2])))))));
                                var_19 |= (((-(arr_14 [i_1 - 1]))));
                                var_20 = ((((min((arr_10 [i_6 + 3] [i_6 + 3] [i_2] [i_5] [i_6] [i_5]), 3606736853819641159))) ? (max((((arr_9 [i_0] [i_0] [i_2] [i_5] [i_6] [i_6 + 2] [i_0]) ^ (arr_1 [5]))), (((var_10 ? 255 : var_10))))) : (((~(~var_7))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 2; i_7 < 18;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        {
                            var_21 *= (arr_28 [i_7] [i_8] [i_8] [i_10] [i_9]);
                            arr_30 [i_7 - 1] [i_8] = var_15;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_11 = 3; i_11 < 18;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 19;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 17;i_13 += 1)
                        {
                            {
                                var_22 &= ((((max(var_11, var_12))) || ((min(var_14, (arr_25 [i_7 - 1] [i_11 - 2] [i_13 + 2]))))));
                                arr_38 [i_11] [i_11] [i_11] [i_12] [i_13] = (arr_24 [i_7] [i_7] [i_11]);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 19;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 19;i_15 += 1)
                    {
                        {
                            var_23 = (min((arr_40 [i_8] [i_14] [i_14]), ((((arr_22 [i_7 + 1] [i_7 - 1]) * (arr_22 [i_7 + 1] [i_7 - 2]))))));
                            arr_44 [i_7] [i_8] [i_14] [i_14] = var_4;
                            arr_45 [i_7 + 1] [i_14] = var_0;
                            arr_46 [i_7] [i_14] [i_14] [i_15] = (1 >= 1);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
