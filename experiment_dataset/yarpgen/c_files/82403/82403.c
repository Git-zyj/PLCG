/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82403
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(-3, var_12));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_18 -= (arr_3 [i_0]);
        var_19 *= 111;
        var_20 = (max(var_20, -1562174667));

        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            var_21 = (max((max((max((arr_0 [1]), 1)), 1)), (arr_5 [i_0] [i_1])));
            var_22 += (min((arr_4 [i_0] [8] [i_1]), ((+(((arr_2 [1] [i_0]) / 1558337231))))));
            var_23 = (max((min(1, (arr_0 [i_0]))), ((((0 ? 16 : (arr_6 [i_1] [12])))))));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_24 *= 1;
                            var_25 -= var_4;
                        }
                    }
                }
            }
            arr_17 [i_0] [i_2] [i_2] |= 4;
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
        {
            var_26 = arr_12 [i_0] [i_6] [6];
            var_27 += ((~(arr_1 [i_0] [i_6])));
            var_28 |= (arr_8 [i_0] [i_0]);
        }
        for (int i_7 = 1; i_7 < 13;i_7 += 1)
        {
            var_29 = (arr_20 [8]);
            var_30 -= (arr_21 [i_7]);
            arr_23 [i_0] [i_0] [i_7] = ((0 ? (arr_20 [i_0]) : ((max((!-437), ((17 ? var_10 : (arr_7 [i_0]))))))));
        }
        arr_24 [i_0] = ((47786 ? -1 : (max(((min((arr_5 [i_0] [i_0]), var_16))), (arr_12 [8] [i_0] [6])))));
    }
    for (int i_8 = 0; i_8 < 18;i_8 += 1)
    {
        var_31 -= ((~(arr_25 [i_8])));
        var_32 = ((-(min(-52, 1))));

        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {
            var_33 |= (min(-1402086836, ((((min(26, 0))) ? ((max(var_10, var_15))) : (!182)))));
            var_34 += (arr_28 [i_9] [i_9] [i_9]);
            arr_30 [i_8] [i_9] = (!var_10);
            var_35 -= ((~(min(((4294967286 ? var_16 : 0)), 4))));
            arr_31 [i_9] &= (!4294967295);
        }

        for (int i_10 = 2; i_10 < 17;i_10 += 1)
        {
            arr_34 [16] [i_10] [i_8] = (arr_32 [i_8]);
            /* LoopNest 2 */
            for (int i_11 = 3; i_11 < 17;i_11 += 1)
            {
                for (int i_12 = 3; i_12 < 16;i_12 += 1)
                {
                    {
                        var_36 = 51;
                        arr_42 [i_8] [i_10] [3] [i_12] [i_12] [i_12 - 1] = ((!((min(((min((arr_39 [i_8] [i_10] [i_11] [i_12]), 86))), (max(29, (arr_27 [i_10]))))))));
                        var_37 &= 11;
                    }
                }
            }
        }
    }
    #pragma endscop
}
