/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= min(var_1, ((max(66846720, -21405))));
    var_15 = var_4;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_16 = (arr_1 [i_0] [i_0]);

        /* vectorizable */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_17 += var_3;
            var_18 = ((((0 ? var_9 : (arr_1 [5] [i_1])))) ? 0 : (arr_2 [i_1]));

            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                arr_8 [i_0] [i_0] [i_0] = ((19 ^ (arr_5 [i_0] [i_1] [i_2] [i_2])));

                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    var_19 = (arr_0 [i_3]);
                    arr_12 [9] [9] [16] [17] [i_0] = ((!((var_9 <= (arr_10 [i_0] [i_3])))));
                    var_20 = (((arr_9 [i_0] [1] [i_2] [6]) - var_4));
                }
                var_21 = var_7;
                arr_13 [i_0] [i_1] [2] [i_2] = (((19074 | 46461) ? var_10 : -2147483635));
                var_22 = (((((arr_5 [i_0] [i_0] [i_0] [i_0]) >= var_5)) ? ((var_5 ? var_13 : 9)) : (arr_2 [i_0])));
            }
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                var_23 = (!-5738616048337090371);
                arr_16 [i_0] [i_0] [i_0] [i_0] = ((17 ? (arr_5 [i_0] [i_0] [12] [i_0]) : (5738616048337090370 <= 65535)));
                var_24 = 46461;
                arr_17 [i_0] [i_1] [i_4] [i_0] = ((~(arr_2 [16])));
            }
            for (int i_5 = 3; i_5 < 17;i_5 += 1)
            {
                arr_20 [i_0] = 115;
                var_25 = 64080;
                var_26 = 46483;
                arr_21 [i_5] [i_5] [i_1] [i_0] = ((arr_4 [i_5] [i_5 + 1] [i_0]) ? 1 : (arr_15 [i_5] [i_5 - 1]));
            }
            var_27 = (arr_6 [i_0] [i_0] [i_1]);
        }
        arr_22 [i_0] = 20;
        var_28 = (min(var_28, (((+(min(((((arr_9 [8] [i_0] [i_0] [i_0]) < (arr_11 [i_0] [i_0] [i_0] [i_0])))), (((arr_10 [i_0] [i_0]) ? var_1 : var_5)))))))));
        var_29 += ((((((min(2410668783, var_10)) ^ -38082))) >= ((var_2 ? (max(-3687494898699784449, var_6)) : (!var_12)))));
    }
    for (int i_6 = 1; i_6 < 17;i_6 += 1)
    {
        var_30 += (((((60 ? var_13 : var_12))) >= (((max(var_8, (arr_23 [i_6])))))));
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 16;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 17;i_9 += 1)
                {
                    {
                        var_31 = (arr_19 [i_6 + 1] [i_7] [i_8] [i_9 + 2]);
                        arr_32 [i_6] [i_6] [2] [i_8] [i_6] [17] = ((((max(4398045462528, 1455))) ? 14641 : (((max(4, 57344))))));
                        var_32 = (arr_25 [i_9 + 1] [13]);
                        arr_33 [5] [i_7] [i_7] [5] = (arr_18 [i_6] [i_7] [i_8] [i_9]);
                        arr_34 [i_9 + 2] [i_6] [8] [i_6] [i_6] = (arr_29 [i_9 - 1] [i_8] [i_7] [i_6 + 2]);
                    }
                }
            }
        }
    }
    var_33 = ((max(-var_0, -var_8)));
    var_34 = min(917691000, 2935583112);
    #pragma endscop
}
