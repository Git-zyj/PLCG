/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77837
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 93;
        var_18 = (((((max(28052, var_14))) ? (105 != 72) : (((arr_0 [i_0]) ? var_6 : 103)))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] &= ((105 ? 118 : 65530));
                        arr_11 [i_3] [i_3 - 1] [i_2] [i_3 - 1] = var_1;
                    }
                }
            }
        }
    }
    for (int i_4 = 1; i_4 < 6;i_4 += 1)
    {
        var_19 = var_10;
        arr_14 [i_4] = min(-215390101, -7462906328062958617);
    }
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        var_20 = (min((((arr_16 [i_5] [i_5]) ? 123 : 0)), (-13257 > 44)));
        var_21 = (max(var_21, ((((16383 << (63 - 56))) + ((((((-(arr_15 [i_5])))) > ((1774300126 << (var_1 - 4195473641))))))))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        arr_20 [9] = ((var_17 ? (arr_6 [i_6] [i_6] [i_6]) : (arr_3 [i_6] [i_6])));
        arr_21 [i_6] [i_6] = (arr_9 [i_6] [20] [20] [i_6]);
        var_22 |= ((((var_16 ? 4046493700 : var_3))) / ((var_7 ? var_1 : var_14)));
    }
    var_23 = var_10;

    for (int i_7 = 2; i_7 < 20;i_7 += 1)
    {
        arr_24 [i_7 + 1] = -var_0;
        arr_25 [i_7] [10] = (min((min((arr_3 [i_7] [i_7 - 1]), (arr_3 [i_7] [i_7 - 2]))), (((arr_3 [i_7 - 1] [i_7 - 2]) ? var_6 : (arr_3 [i_7 - 2] [i_7 + 1])))));

        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            arr_29 [i_8] = (max(5756, 1));
            arr_30 [i_8] [i_7] = (((7844285821928371256 - -26658) * (arr_9 [4] [i_8] [i_8] [i_7 - 1])));
        }
        /* vectorizable */
        for (int i_9 = 1; i_9 < 19;i_9 += 1)
        {

            for (int i_10 = 1; i_10 < 17;i_10 += 1)
            {
                var_24 |= -1;
                var_25 = ((-2 ? (-2147483622 == var_1) : var_2));
                arr_35 [i_10] [i_9] [19] [i_10 + 2] = (arr_34 [i_9]);
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 21;i_11 += 1)
                {
                    for (int i_12 = 2; i_12 < 20;i_12 += 1)
                    {
                        {
                            var_26 = (((arr_31 [i_9 - 1] [i_7 - 2]) ^ (arr_31 [i_9 - 1] [i_7 - 2])));
                            var_27 = (29 ? (arr_31 [i_7 + 1] [i_10 + 3]) : (arr_39 [i_12 - 1] [3] [i_10] [i_9 - 1] [i_9 - 1] [i_7 + 1] [i_7 - 1]));
                            arr_42 [i_12] [i_11] [i_9] [i_9] [i_7 - 1] = ((var_13 ? (arr_1 [i_12 - 2]) : (arr_1 [i_12 - 2])));
                            var_28 = (13257 / 29);
                        }
                    }
                }
            }
            for (int i_13 = 0; i_13 < 21;i_13 += 1)
            {
                arr_45 [i_13] [i_9] [i_9] [i_7] = ((var_12 ? var_4 : (arr_6 [i_13] [i_9 + 1] [i_7 - 1])));
                var_29 = ((((((arr_9 [10] [i_9] [i_9] [i_7 + 1]) > 163)))) > ((413219124 ? (arr_39 [i_7] [i_9 + 1] [i_7] [i_13] [i_9] [i_9] [i_7 - 1]) : (arr_3 [i_7] [i_7 - 1]))));
                var_30 *= ((-13247 ? 45 : -41));
            }
            var_31 = 2505987561;
            var_32 |= (1702399337 ? -45 : 210);
        }
        var_33 = 85;
    }
    #pragma endscop
}
