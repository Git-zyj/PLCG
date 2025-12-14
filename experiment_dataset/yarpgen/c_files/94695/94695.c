/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_0] [4] [i_0] = 1;
                var_17 = var_0;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_18 = 2677;
                            arr_12 [i_0] [i_1] [10] [i_0] = ((-(min((2182886169775421007 - 16263857903934130598), ((((arr_7 [i_0] [i_0]) + var_6)))))));
                        }
                    }
                }
                var_19 = (arr_7 [i_0] [i_0]);
                var_20 = (((((((-8645426063424400381 ? var_3 : var_9)) < -119))) | (1 && -1214154541)));
            }
        }
    }
    var_21 = var_10;
    var_22 = var_6;
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 15;i_5 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        {
                            var_23 = 1214154536;
                            var_24 = ((1326 ? 125 : 1));
                            arr_21 [i_4] [i_4] [i_5] [i_7] [i_4] [i_4] = (min(94, ((((2677 || (arr_19 [11] [i_6] [i_5]))) ? (min((arr_19 [i_6] [i_5] [i_6]), 4741710186080544873)) : (arr_15 [i_4] [i_5])))));
                            var_25 = (min((arr_14 [i_5 - 1] [i_5 + 1]), (((~(arr_20 [11] [i_5 - 1]))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        {
                            arr_26 [i_8] [i_8] [i_5 - 2] = ((~(max((((~(arr_20 [i_5] [i_8])))), (((arr_19 [i_4] [i_8] [15]) ? 210 : var_8))))));
                            arr_27 [i_8] [i_8] [i_5] [i_8] = ((~(arr_22 [i_5] [i_5] [i_5 - 1])));
                            var_26 = (((14818492028790990922 >> (1006254627 - 1006254604))));
                            var_27 = ((((max((1 + var_5), 57302))) || ((!((min(5768141343188989205, var_12)))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 12;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 15;i_11 += 1)
                    {
                        {
                            var_28 = (((var_2 / ((((arr_31 [2] [i_4] [i_5] [i_5] [4] [i_11]) ? (arr_23 [i_4] [12] [i_10 + 2] [i_10]) : 0))))) / ((((arr_15 [i_5 - 2] [i_10 + 2]) / (arr_28 [i_5 - 1] [i_10 + 3] [6] [i_11 + 1])))));
                            var_29 = (((((4192875024391482804 + 10599533165692308231) ? ((((28 < (arr_33 [1] [2] [i_5] [i_4]))))) : (~0))) - (arr_24 [i_4] [i_5] [i_10] [i_11])));
                            var_30 = (min(var_30, (((~(((1 && (arr_24 [i_4] [i_5] [i_5] [7])))))))));
                            var_31 = (((arr_23 [i_5] [i_5 - 2] [i_5] [i_5]) < 7847210908017243398));
                        }
                    }
                }
                var_32 = (arr_28 [1] [6] [i_5] [10]);
            }
        }
    }
    #pragma endscop
}
