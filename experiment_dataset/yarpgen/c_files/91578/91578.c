/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= ((((var_7 > (var_14 || var_8))) ? ((var_1 ? var_9 : (((var_2 + 2147483647) << (var_12 - 28394))))) : ((29 ? 27 : 29))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_17 = var_10;
        var_18 = (max(var_18, ((-(((((arr_0 [i_0]) <= var_12))))))));
        var_19 = (((250 % 72) ^ (arr_0 [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 23;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_2] [i_3] [i_2] [i_3] [i_2] = (((arr_2 [i_2] [i_3]) / var_2));
                        var_20 = (((arr_3 [i_1]) ? (arr_7 [i_1] [i_2] [i_3]) : (arr_7 [i_1] [i_1] [i_0])));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        var_21 = ((-(var_9 & 5)));
        var_22 = ((((255 ? 245 : (arr_11 [i_4]))) * 7844842));
    }
    var_23 = (var_4 || var_3);

    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        var_24 = ((((((((arr_15 [i_5] [i_5]) - var_5)) + 9223372036854775807)) >> (((arr_15 [i_5] [i_5]) - 95)))));
        var_25 = (((((arr_14 [i_5] [i_5]) ? var_7 : (arr_14 [i_5] [i_5]))) & (arr_14 [i_5] [i_5])));

        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 24;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 23;i_9 += 1)
                    {
                        {
                            var_26 = ((arr_19 [i_9 - 1]) ? (((((arr_19 [i_9 + 2]) > (arr_16 [i_9 + 1]))))) : (((arr_19 [i_9 + 2]) ? var_0 : 4)));
                            var_27 = var_8;
                        }
                    }
                }
            }

            for (int i_10 = 0; i_10 < 25;i_10 += 1)
            {
                arr_29 [i_5] [i_5] [i_6] [i_10] = (arr_19 [i_10]);
                arr_30 [i_10] = ((((((((-9197632276405289080 || (arr_15 [i_5] [i_5])))) % ((50010 ? 227 : var_15))))) < (arr_26 [i_5] [i_10] [i_5] [i_5])));
                var_28 = 393508667;
                arr_31 [i_5] [i_10] [i_10] = (((arr_24 [i_6]) != var_3));
                var_29 = (((~90) > (arr_23 [i_5])));
            }
            var_30 = (var_10 << ((((arr_24 [i_6]) && (arr_24 [i_5])))));
            var_31 = (arr_21 [i_5] [i_6] [i_5] [i_6]);
        }
    }
    for (int i_11 = 1; i_11 < 15;i_11 += 1)
    {
        var_32 = (min(var_32, ((((!var_8) || ((((((arr_2 [i_11 - 1] [i_11 + 1]) + 2147483647)) >> (var_15 - 28447)))))))));
        var_33 = var_13;
    }
    #pragma endscop
}
