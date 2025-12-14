/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93728
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((var_0 + 2147483647) << (((((min((min(var_14, 248)), var_4)) + 865303317)) - 9))));

    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = (((max(var_15, -8646498745800263726))));

        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            var_17 ^= (-32767 - 1);

            /* vectorizable */
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                arr_7 [i_0 + 2] [i_1] [i_0] = (-((((arr_3 [i_0 - 2] [i_0]) != (arr_5 [i_0] [i_1] [i_0])))));
                var_18 = (max(var_18, 1));
            }
            /* vectorizable */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                var_19 ^= (arr_1 [i_0]);
                var_20 = (((~var_6) & var_2));
            }
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                var_21 = ((((max((~201701728), (((var_13 || (arr_0 [i_1]))))))) ? ((((arr_9 [i_1] [i_4]) >> (64 - 63)))) : -902256497636530090));
                var_22 = (!((((var_13 ? (arr_4 [i_0] [i_1] [i_4]) : 6688316442938791969)) > (((min(-27613, (arr_11 [i_0] [i_0 + 1] [i_0] [i_0]))))))));
            }
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_23 -= ((-(arr_14 [8] [8] [i_5])));
            arr_15 [i_0] = ((((((arr_3 [i_0] [4]) && 9))) <= (((!(arr_11 [i_0] [i_5] [i_0] [i_0]))))));
        }
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            var_24 = (~(((var_11 > (~8274)))));
            arr_18 [6] [i_0] = (((!((max(8274, 70))))));
            arr_19 [i_0] [12] = max(((1008806316530991104 ? (var_1 && var_1) : 1)), ((((arr_17 [i_0] [i_0]) && ((var_13 < (arr_9 [i_0] [8])))))));
        }
        var_25 |= -21;
        arr_20 [i_0] = (min(59033, (min((-32767 - 1), (((var_10 > (arr_10 [7] [i_0] [i_0]))))))));
    }
    var_26 &= (min((max((max(3593403055, var_0)), var_15)), (32764 % var_14)));
    var_27 += ((~(((var_11 != var_14) ? var_7 : (1 ^ var_2)))));
    #pragma endscop
}
