/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93051
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (arr_0 [i_0] [i_0]);
        var_16 = ((((((arr_1 [i_0]) ? (arr_2 [i_0]) : ((((!(arr_2 [i_0])))))))) ? (max(((300472130 ? -1 : (arr_1 [9]))), ((max((arr_2 [i_0]), 1))))) : (((((arr_2 [i_0]) && (arr_2 [i_0])))))));
    }
    for (int i_1 = 2; i_1 < 18;i_1 += 1)
    {
        var_17 = (min(var_17, 12));
        arr_7 [i_1] [11] = var_10;
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    {
                        var_18 = 300472124;
                        arr_17 [i_1] [i_2] [i_3] [i_1] [1] = -20;

                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            arr_21 [i_4] [i_1] [i_1] [i_4] [i_4] = ((((((arr_14 [i_1] [i_2 + 3] [i_1] [1] [i_2 + 3]) ? (arr_14 [i_1] [i_3] [i_1] [i_4] [i_5]) : (arr_14 [i_1] [i_2] [i_1] [13] [i_5])))) + (max(var_4, (arr_14 [11] [i_2] [i_1] [i_4] [i_5])))));
                            var_19 |= (+-120813677);
                        }
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            arr_25 [i_1] = -300472108;
                            var_20 += ((~((15527892050074447955 ? 124 : -19))));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_21 = (max(var_21, -125));
                            var_22 = ((arr_23 [i_2 + 2] [i_1 + 2]) >> (27175 - 27154));
                            var_23 *= (-var_10 / -67108863);
                            var_24 = (((~-20) ? (~var_8) : 300472118));
                        }
                        var_25 *= (~-300472131);
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 3; i_8 < 13;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 16;i_10 += 1)
                {
                    for (int i_11 = 2; i_11 < 15;i_11 += 1)
                    {
                        {
                            var_26 = (min(var_26, 4014137073853749313));
                            var_27 *= ((((var_4 ? (!38360) : (arr_12 [11] [i_9] [i_10]))) / var_7));
                        }
                    }
                }
                var_28 = (arr_16 [i_8] [i_9] [i_9]);
            }
        }
    }
    #pragma endscop
}
