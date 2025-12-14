/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_0] [i_0] [i_0] [i_2] = 16984;
                            arr_12 [i_0] [i_2] [i_3 - 1] = ((-1 ? (((~(arr_9 [i_2 + 2] [i_3 - 1] [i_3] [i_3 + 1] [i_3] [i_3 - 2])))) : var_8));
                            arr_13 [i_1] [i_2 + 1] [i_2] = 1915643255878713783;
                        }
                    }
                }
                var_10 = (((~(-32767 - 1))));
                var_11 -= ((min((arr_6 [i_0]), var_6)));
                var_12 += (28567 || -10474);
            }
        }
    }
    var_13 = var_1;
    var_14 -= (3968 >> var_2);
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 8;i_5 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 6;i_7 += 1)
                    {
                        {
                            arr_28 [i_4] [i_5] [i_4] [i_7] [i_4] = ((var_2 & ((((arr_24 [i_7] [i_7 + 3] [i_7 - 1] [i_5 + 2] [i_5 + 2] [i_5 + 2]) >= ((~(arr_1 [i_7]))))))));
                            var_15 = (min(var_15, (arr_23 [i_4] [i_6] [i_6])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 8;i_8 += 1)
                {
                    for (int i_9 = 4; i_9 < 7;i_9 += 1)
                    {
                        {
                            var_16 = var_1;
                            arr_35 [6] [i_5] = (max((arr_33 [i_8] [i_8 - 2] [i_8] [i_5] [i_4]), ((((arr_15 [i_8]) + var_4)))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 9;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 8;i_11 += 1)
                    {
                        {
                            var_17 = 48551;
                            arr_43 [i_4] [2] [2] [i_4] [i_4] [i_4] = -56;
                            arr_44 [i_4] [i_5] [i_10] [i_10] = (-4907065340683627047 / -4907065340683627047);
                            arr_45 [i_4] [i_5 + 1] [i_10] [i_5 + 1] = (~var_7);
                            arr_46 [i_4] [i_4] [i_10 + 1] [i_11] = -239878038485442210;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 10;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 10;i_13 += 1)
                    {
                        {
                            arr_54 [i_12] &= (arr_6 [i_4]);
                            arr_55 [i_4] [i_5] [i_5] [i_12] [1] [i_13] = ((((((-107 ? -1 : (arr_6 [i_4])))) ^ 2158809118)));
                            var_18 -= (arr_7 [i_5 - 1] [i_5 - 1] [i_12] [i_4]);
                            var_19 += (arr_3 [i_4]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
