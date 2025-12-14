/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87299
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_11 = (min(-var_3, (min(2563843447, 1))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                arr_8 [i_0] = -80;

                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    var_12 = ((1 + (arr_0 [i_0] [i_1])));
                    var_13 = ((var_0 ? var_0 : (arr_2 [i_0])));
                    arr_11 [i_0] [i_0] [i_2] [i_3] [i_2] [i_0] = (((arr_5 [i_1]) && var_1));
                    var_14 &= (0 * -2210730647920622029);
                }
            }
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                var_15 = 11940;
                var_16 = (max(var_16, (((~(arr_2 [i_0]))))));
            }
            for (int i_5 = 1; i_5 < 12;i_5 += 1)
            {
                arr_18 [i_5] [i_5] = var_8;
                var_17 = (max(var_17, ((((((var_10 ? (arr_9 [i_0] [i_1] [i_1] [i_5]) : 119))) && (((var_1 ? var_7 : var_7))))))));
                var_18 -= var_3;
            }
            var_19 = (((arr_1 [i_1]) * var_4));
            var_20 ^= var_10;
            arr_19 [i_0] = var_10;
        }
    }
    for (int i_6 = 1; i_6 < 22;i_6 += 1)
    {
        var_21 = ((((min(0, var_0))) ? ((((!(arr_20 [i_6]))) ? (((((arr_22 [i_6]) + 2147483647)) >> (var_8 - 23526))) : ((var_7 ? var_9 : (-127 - 1))))) : ((((min(16591241759282949738, 53810)) > ((((arr_21 [i_6]) ? -123 : var_1))))))));
        var_22 = (min(var_22, ((min(((~(arr_20 [4]))), (min(var_4, (arr_21 [12]))))))));
        arr_23 [i_6] [i_6] = (((-9223372036854775807 - 1) ? (((-127 - 1) + var_10)) : var_5));
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    {
                        arr_34 [i_6] = ((~((~(~var_4)))));
                        arr_35 [i_6] [i_7] [i_8] [i_9] [1] [i_7] &= var_0;
                    }
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 11;i_10 += 1)
    {
        arr_40 [i_10] [1] |= (((((var_2 * var_4) / ((var_10 ? -83 : -31727))))) ? ((min(var_9, 18446744073709551604))) : (((arr_32 [1] [i_10]) - ((38 - (arr_9 [i_10] [i_10] [i_10] [i_10]))))));
        var_23 = (min((min(var_10, (63169 && 274877906880))), ((!((max(var_8, var_8)))))));
    }
    var_24 -= ((((min(var_5, ((min(var_5, var_5)))))) ? 12391 : var_2));
    #pragma endscop
}
