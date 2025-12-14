/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8278
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_2;
    var_21 += var_17;
    var_22 = (((((max(var_7, var_15))) ? var_15 : var_16)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 23;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = (arr_6 [i_2 - 1] [i_1] [13]);
                    var_23 = (min(var_23, (arr_3 [i_0] [8])));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 4; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_6 = 3; i_6 < 23;i_6 += 1)
                    {
                        var_24 = (arr_16 [i_3] [13] [i_3 - 3] [i_6 - 3] [i_3] [i_6]);

                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_25 |= var_12;
                            var_26 &= (((arr_15 [i_3 - 3]) - var_12));
                        }
                        for (int i_8 = 3; i_8 < 23;i_8 += 1)
                        {
                            var_27 = 65;
                            var_28 -= 216;
                        }
                        for (int i_9 = 0; i_9 < 25;i_9 += 1) /* same iter space */
                        {
                            var_29 = ((arr_15 [i_3 - 1]) ? (arr_15 [i_3 - 2]) : var_17);
                            var_30 -= (!32767);
                            var_31 = (max(var_31, (arr_10 [4] [i_3 + 3])));
                            arr_28 [i_3] [i_3] [i_4] [i_4] [i_3] [i_6 - 3] [8] = ((~(arr_24 [i_6 + 2] [i_3 - 3] [4] [i_3 - 2] [i_3])));
                        }
                        for (int i_10 = 0; i_10 < 25;i_10 += 1) /* same iter space */
                        {
                            var_32 &= ((!(arr_18 [18] [i_3 + 3] [i_3 - 4])));
                            arr_33 [i_3] [i_4] [i_4] [i_4] [i_4] = -1991;
                            var_33 = (arr_22 [i_3 + 2] [i_3 - 3] [i_5] [i_6 - 1] [i_6 - 3] [i_10]);
                        }
                        var_34 = (max(var_34, (arr_9 [i_6 + 2] [i_3 - 1])));
                        var_35 = (max(var_35, (arr_15 [i_3 + 2])));
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        arr_37 [i_3] [i_4] [i_5] [14] &= (arr_35 [i_3 + 3] [i_3 + 3] [1] [i_11]);
                        var_36 *= var_18;
                    }
                    for (int i_12 = 1; i_12 < 24;i_12 += 1)
                    {
                        arr_40 [i_5] [i_5] [i_3] [i_4] [i_4] = ((var_11 ^ ((18014398509481983 ? (((arr_32 [i_3] [i_3] [i_5] [i_3] [i_3]) >> (64 - 59))) : 146))));
                        var_37 -= (max(((var_1 - (arr_38 [i_3 + 3] [i_4] [i_5] [i_3 + 3]))), ((max((arr_38 [i_3 - 1] [i_3 + 1] [i_12 + 1] [i_12 + 1]), var_14)))));
                    }
                    arr_41 [i_3 + 3] [i_3 + 3] [i_3] = var_11;
                }
            }
        }
    }
    #pragma endscop
}
