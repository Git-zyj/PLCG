/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_18 = ((var_11 + 1227092174278331577) ? (max(-10370784224209848784, (((~(arr_5 [i_0] [i_1 + 2])))))) : var_6);
                var_19 ^= ((8195224690832743780 ? (min(-781782257559714894, (arr_5 [i_0 - 1] [i_0 - 1]))) : (arr_1 [i_0 + 1])));
            }
        }
    }
    var_20 = ((!(var_6 / var_0)));
    var_21 ^= -32315;
    var_22 = ((min((!1), (~0))) < (min(((min(1, 32334))), ((var_16 ? 1 : var_2)))));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 16;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_23 ^= (((((-32334 != (arr_10 [i_2] [i_5 - 2] [18])))) < -7));
                                var_24 = -90;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 1;i_8 += 1)
                        {
                            {
                                arr_28 [i_7 - 3] [i_3] [i_7 - 3] [i_2] [i_8 - 1] [i_7] = (max(((((arr_26 [i_2] [i_2] [i_2] [i_2] [i_8 - 1]) & var_1))), var_16));
                                var_25 = ((((!(arr_12 [i_2] [i_3 - 4] [i_4 + 2])))));
                                var_26 = var_13;
                                var_27 ^= var_6;
                                var_28 = ((~(arr_14 [i_8 - 1] [i_2] [i_2] [i_2] [i_2] [i_2])));
                            }
                        }
                    }
                    arr_29 [i_2] [i_2] = (((!((max(var_16, 5395090340591035035))))));
                    var_29 += (max((arr_10 [i_2] [i_2] [10]), ((9 ? (arr_11 [i_2] [8]) : var_14))));
                }
            }
        }
    }
    #pragma endscop
}
