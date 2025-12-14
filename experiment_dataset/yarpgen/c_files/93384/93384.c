/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0]);
        var_17 = (min(var_17, (((((-(arr_0 [i_0])))) ? (((arr_1 [1]) ? (arr_1 [16]) : (arr_0 [i_0]))) : ((~(arr_1 [6])))))));
        arr_3 [i_0] = (arr_1 [i_0]);

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 0;i_4 += 1)
                    {
                        {
                            var_18 = (arr_10 [15] [15] [15] [15]);
                            var_19 += (((((~(arr_8 [i_0] [i_2] [i_2])))) ? (((arr_6 [i_2]) ? (arr_13 [i_0] [i_1] [i_4] [i_2]) : (arr_12 [i_0] [i_1] [i_2] [i_3] [i_3] [i_3] [i_4]))) : (arr_7 [i_2] [i_3] [12] [i_2])));
                            var_20 |= (((arr_0 [i_1]) ? ((17580 ? 12503 : 40830)) : -24716));
                        }
                    }
                }
            }
            var_21 = (arr_8 [12] [i_0] [i_0]);
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            arr_17 [i_0] = (((arr_12 [i_0] [13] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_16 [i_0] [i_5]) : (arr_16 [i_5] [i_5])));

            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                arr_22 [i_0] [i_5] [i_0] = ((((!(arr_4 [i_5] [15]))) ? (((arr_14 [i_0] [i_0] [i_0] [i_5] [i_5] [i_5]) ? (arr_9 [i_6]) : (arr_20 [i_0] [17] [i_0] [i_0]))) : (((arr_21 [8] [i_0]) ? (arr_15 [i_0]) : (arr_5 [i_5] [i_0])))));
                arr_23 [1] [i_0] [i_0] = (((((arr_15 [i_6]) ? (arr_9 [i_5]) : (arr_6 [i_0])))) ? (arr_19 [6] [i_5]) : (arr_16 [i_0] [i_0]));
                arr_24 [i_0] [4] [i_0] = ((!((!(arr_19 [i_5] [i_0])))));
            }
            arr_25 [i_0] [1] [i_0] = (arr_19 [i_0] [15]);
            arr_26 [i_0] = (((arr_7 [i_0] [i_5] [i_5] [i_0]) ? (((arr_13 [i_0] [2] [i_0] [i_0]) ? (arr_8 [i_0] [i_0] [i_0]) : (arr_14 [i_5] [i_0] [i_5] [i_0] [i_0] [i_0]))) : (arr_8 [i_5] [i_0] [i_0])));
        }
        arr_27 [i_0] = ((((((arr_16 [i_0] [i_0]) ? (arr_21 [i_0] [i_0]) : (arr_1 [i_0])))) ? ((~(arr_11 [i_0] [15] [i_0] [i_0]))) : 2245));
    }
    var_22 ^= var_16;
    var_23 += var_13;
    var_24 = (max(var_24, var_3));
    var_25 = var_3;
    #pragma endscop
}
