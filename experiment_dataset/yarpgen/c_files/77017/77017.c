/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77017
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_6 [i_0] = (arr_1 [i_0] [i_0]);
            arr_7 [i_0] [i_1] = (((arr_1 [i_0] [i_0]) ? (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))) : (arr_1 [i_1] [i_0])));
        }
        arr_8 [i_0] = ((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : 11256006833464882995)));
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_15 = (((((((57 ? 6800 : 78)) | 131071))) ? (((min((arr_9 [i_2]), (arr_9 [i_2]))))) : -7175927281703865429));
        arr_12 [i_2] = (arr_11 [i_2]);
        var_16 = (arr_10 [i_2]);
        arr_13 [17] = (max(7175927281703865419, (((-131072 ? (((arr_11 [i_2]) ^ 235)) : (arr_10 [i_2]))))));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_17 [i_3] [i_3] = (((((arr_11 [i_3]) ^ (arr_11 [i_3])))) ? 9843389293043542089 : (-9223372036854775807 - 1));
        arr_18 [i_3] = (131072 > (((max((arr_3 [i_3]), (arr_3 [i_3]))))));
    }
    var_17 -= (min(var_2, 177));
    var_18 = ((var_0 + ((((((var_5 ? -32 : 131063))) ? var_8 : ((var_3 ? var_11 : var_2)))))));

    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        arr_22 [6] = (arr_11 [i_4]);

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_19 = (((((min((arr_10 [i_4]), (arr_10 [i_5]))))) + (min((arr_21 [i_4]), 9223372036854775807))));

            for (int i_6 = 4; i_6 < 23;i_6 += 1)
            {
                var_20 &= (arr_20 [i_4]);
                var_21 = ((((arr_11 [i_6 - 4]) * (arr_11 [i_6 - 1]))));

                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    arr_32 [i_4] [i_5] [i_6 - 4] = 1;
                    arr_33 [i_4] [i_5] [15] = (arr_11 [i_4]);
                }
            }
            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                arr_36 [i_4] [i_5] [i_8] = (arr_28 [i_4] [i_5] [i_5] [i_8] [12]);
                arr_37 [i_4] [0] [i_4] [i_4] = (((arr_9 [i_8]) ? (arr_24 [i_8] [i_4]) : (((min((arr_35 [i_4] [i_5] [i_8] [i_4]), (arr_35 [i_8] [i_5] [i_4] [i_4])))))));
                arr_38 [i_4] [i_5] = (4316624171960670915 ^ -116750897);
            }
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                arr_42 [i_9] [i_5] [i_4] = (min(6800, (((arr_30 [i_9] [i_9] [i_5] [i_4]) ? (arr_30 [i_5] [i_5] [i_9] [i_9]) : 20))));
                arr_43 [i_4] [12] [1] = (((-131072 || -7323883990348220918) ^ 7175927281703865413));
                arr_44 [i_5] = (((arr_34 [i_4] [i_5]) ? (arr_34 [i_5] [i_9]) : (arr_34 [i_4] [i_4])));
            }
        }
        /* vectorizable */
        for (int i_10 = 1; i_10 < 21;i_10 += 1)
        {
            var_22 = (arr_9 [i_10 - 1]);
            arr_47 [i_4] [i_10] [i_10 + 1] = 131064;
            var_23 = -1907426938;
            var_24 -= (arr_40 [i_10 - 1] [i_4]);
        }
        arr_48 [i_4] = 131082;
    }
    #pragma endscop
}
