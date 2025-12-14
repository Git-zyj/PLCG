/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            var_20 |= 3238629183097712951;
            var_21 = 1;
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_22 = var_7;
            var_23 = arr_2 [i_0];

            for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
            {
                var_24 = (arr_2 [i_3]);
                var_25 |= var_9;
                var_26 = ((((!(arr_0 [i_2])))));
            }
            for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
            {
                var_27 -= (!-3238629183097712958);
                var_28 = ((~(((!(arr_0 [i_2]))))));
            }
            for (int i_5 = 3; i_5 < 19;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 20;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 20;i_7 += 1)
                    {
                        {
                            var_29 = (arr_13 [i_0] [i_2] [i_5] [i_6]);
                            var_30 = (!(((-3238629183097712962 ? var_0 : var_17))));
                            var_31 = -1716961032880768931;
                            var_32 = (max(var_32, (((-(arr_20 [i_7 - 1] [i_6 - 1] [i_5 - 3] [i_5] [i_5]))))));
                        }
                    }
                }
                var_33 ^= ((((((~(arr_10 [i_2] [i_2] [i_5] [i_5]))) + 2147483647)) >> (((arr_0 [i_2]) ? (arr_10 [10] [12] [i_0] [i_0]) : 3238629183097712957))));
            }
        }
        for (int i_8 = 0; i_8 < 21;i_8 += 1) /* same iter space */
        {
            var_34 = (min(var_34, (arr_23 [i_0] [i_8] [i_0 - 3])));
            var_35 *= var_12;
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 21;i_9 += 1) /* same iter space */
        {
            var_36 = var_18;
            var_37 &= (((arr_11 [i_0 + 1] [i_0 - 2] [i_0 - 3]) ? (arr_11 [i_0 - 3] [i_0 - 3] [i_0 - 3]) : var_9));
            var_38 &= (((arr_7 [6] [i_9]) | var_16));
            var_39 = (arr_2 [i_0 - 2]);

            for (int i_10 = 0; i_10 < 21;i_10 += 1)
            {
                var_40 = (min(var_40, (arr_12 [i_0] [i_0] [i_9] [i_9])));

                for (int i_11 = 0; i_11 < 21;i_11 += 1)
                {
                    var_41 = (var_2 == -3238629183097712951);
                    var_42 = ((305612852 ? (arr_9 [i_0 - 1] [i_0 - 2]) : (arr_9 [i_0 - 1] [i_0 - 3])));
                }
                for (int i_12 = 0; i_12 < 21;i_12 += 1)
                {
                    var_43 = (((arr_25 [i_0] [i_0] [i_10]) >> (((arr_20 [i_0 - 2] [i_12] [i_10] [i_12] [i_0]) - 18395))));
                    var_44 &= ((((((arr_31 [i_9]) >> (((arr_22 [i_10]) - 63633))))) ? (arr_33 [i_0 - 3] [i_0 + 1] [i_0 + 1] [2]) : (var_2 >> 1)));
                }
                for (int i_13 = 0; i_13 < 21;i_13 += 1)
                {
                    var_45 = (((arr_10 [i_0] [i_0] [i_0 - 3] [i_0]) ? (arr_10 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0]) : (arr_10 [i_0] [i_0] [i_0 - 1] [i_0])));
                    var_46 = (arr_0 [17]);
                }
                var_47 = ((!((((arr_1 [i_0] [i_9]) ? -1 : -3238629183097712951)))));
            }
        }
        var_48 |= (((((var_14 ? (arr_9 [i_0 - 1] [i_0 - 1]) : -1716961032880768937))) ? (min(((max((arr_30 [i_0] [4] [i_0] [i_0]), var_2))), (~-35))) : (((arr_4 [i_0]) ? ((((arr_11 [i_0] [i_0] [i_0]) == 3238629183097712935))) : var_11))));
        var_49 -= (((arr_11 [i_0] [i_0] [i_0]) ^ (arr_2 [i_0])));
        var_50 -= ((((max((((arr_3 [i_0] [i_0]) ? (arr_37 [i_0]) : (arr_9 [i_0] [i_0]))), 0))) ? (((((min((arr_27 [i_0] [1]), var_4))) ? 190 : 0))) : (((arr_17 [i_0] [i_0] [i_0] [i_0]) ? var_1 : (arr_12 [i_0] [i_0 - 3] [i_0] [0])))));
    }
    var_51 *= 105;
    var_52 &= var_2;
    #pragma endscop
}
