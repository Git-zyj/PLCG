/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73626
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 1145839567295730599;
    var_21 = ((!(((var_13 ? var_15 : 4063708043)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_22 &= (!11514179868195861777);
                var_23 &= (((((((arr_3 [i_0] [i_1]) ? (arr_0 [i_0]) : (arr_4 [i_0] [i_1]))))) ? ((((!(arr_1 [i_1]))))) : var_6));
                arr_5 [i_0] [i_0 + 1] [i_0] = (((((min(var_17, (arr_0 [i_1]))))) == 137522469));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            var_24 = (max(var_24, (((-11 ? var_0 : var_18)))));
            var_25 = (((arr_2 [i_2] [i_3]) & ((var_1 ? (arr_9 [i_3] [8] [i_3]) : 1))));
        }
        for (int i_4 = 1; i_4 < 13;i_4 += 1)
        {
            arr_13 [4] &= (~var_17);
            var_26 *= (-(arr_11 [i_4 + 1] [i_2 - 1]));
        }
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            arr_18 [i_2] [i_2 - 1] [i_2] = ((!(18204735042211156853 <= 52679)));
            var_27 = ((-((15 ? var_2 : -7852911804328851561))));
            var_28 -= var_2;
        }

        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {

            for (int i_7 = 1; i_7 < 11;i_7 += 1)
            {
                arr_23 [i_2] = ((((arr_14 [i_2]) ? 23479 : (arr_6 [i_2] [i_7]))));
                arr_24 [i_2] = 7;

                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    arr_29 [i_2] [i_7] [i_6] [i_2] = ((var_12 ? (arr_12 [i_6] [i_7]) : 536870911));
                    var_29 = (max(var_29, ((((arr_20 [i_2 - 1] [i_7] [i_7 - 1]) ^ var_14)))));
                    arr_30 [i_2] [8] [i_6] [i_6] [10] [i_8] |= (arr_17 [i_2 - 1]);
                    arr_31 [i_2] [i_2] [i_7 - 1] = (!536870901);
                    var_30 = ((11 ? 8796901575916552348 : 65513));
                }
            }
            var_31 = ((((((!(arr_0 [i_2 - 1]))))) == 0));
        }
        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            arr_34 [i_2] [i_2] = 8191;
            arr_35 [i_2] [i_2] [1] = (((16384 & var_4) ? (21 == var_17) : var_3));
            var_32 = (-(arr_33 [i_2] [i_9]));
        }
        arr_36 [i_2] [i_2] = (~(arr_1 [i_2]));
    }
    #pragma endscop
}
