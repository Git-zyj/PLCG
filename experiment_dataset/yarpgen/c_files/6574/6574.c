/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6574
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (+-1363344447);

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0 + 1] = ((-(arr_0 [i_0 + 1])));
        arr_4 [i_0] = 52476;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            arr_11 [i_1] [i_1] [i_1] = (arr_6 [i_1]);

            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                var_18 = (((arr_6 [i_2]) ? (arr_6 [i_1]) : (arr_6 [i_1])));
                var_19 = (max(var_19, ((((arr_6 [12]) > 13059)))));
                var_20 = (max(var_20, ((156 / (var_15 & var_12)))));
                var_21 = (~var_3);
            }
            for (int i_4 = 1; i_4 < 20;i_4 += 1)
            {
                var_22 = ((~(arr_5 [i_4 - 1])));
                arr_19 [i_4] [i_4] = -var_8;
            }
        }
        for (int i_5 = 1; i_5 < 18;i_5 += 1)
        {
            var_23 = var_7;
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    {
                        var_24 = (max(var_24, ((((arr_12 [i_1]) ? (arr_18 [i_5] [i_5]) : ((-(arr_26 [i_1]))))))));
                        var_25 ^= var_1;
                        var_26 = (arr_8 [i_5 + 3]);
                    }
                }
            }
        }
        arr_28 [i_1] = (!8403676442243517968);
    }
    var_27 = -18446744073709551615;
    var_28 = max(var_12, (max(6489534653417800562, 240)));

    for (int i_8 = 1; i_8 < 12;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 10;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                {
                    var_29 = (arr_12 [i_8 + 1]);
                    var_30 = (min(var_30, ((min(((~((var_4 ? var_5 : 571556241878159896)))), (min(-127, (min(125, var_5)))))))));
                }
            }
        }
        arr_37 [i_8 + 1] = (-((min(1576341039366281670, (arr_34 [i_8 + 1] [i_8] [i_8 + 1] [i_8])))));
    }
    #pragma endscop
}
