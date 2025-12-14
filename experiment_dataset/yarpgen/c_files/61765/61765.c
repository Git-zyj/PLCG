/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61765
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_17;
    var_20 = ((((min(var_4, var_1))) ? ((((var_16 ? var_15 : var_17)))) : (var_3 > var_14)));

    for (int i_0 = 1; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_21 = (max(var_21, -1473347160464605106));
        var_22 = var_14;

        /* vectorizable */
        for (int i_1 = 1; i_1 < 19;i_1 += 1) /* same iter space */
        {
            var_23 = (28489 ? (var_18 != var_6) : ((var_0 ? var_8 : (arr_0 [i_1 + 3]))));
            var_24 |= ((arr_1 [i_0 + 1] [i_1 - 1]) ? var_6 : ((-5361809155126487056 ? 230 : -9223372036854775800)));
        }
        for (int i_2 = 1; i_2 < 19;i_2 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_3 = 1; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        {
                            arr_17 [i_5] [i_2] [i_2] [i_0] = min((min(9043504258574260932, (arr_11 [i_0 - 1] [i_2 + 1]))), ((min((arr_11 [12] [2]), 26003))));
                            var_25 += (3174048111157310599 ^ 255);
                            var_26 = (arr_0 [i_0]);
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 19;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    {
                        var_27 = (max(var_27, (((((((arr_6 [i_0] [i_0 + 1]) ? (arr_6 [i_7] [i_0 - 1]) : (arr_6 [10] [i_0 - 1])))) ? (((var_6 * (arr_21 [i_7] [i_6 + 3] [i_2 + 4] [i_2 + 4])))) : -9223372036854775803)))));
                        arr_23 [i_2] [i_2] = ((((min((min(var_12, 7078058651636371438)), (min(511, 9223372036854775795))))) * ((233 * (arr_14 [i_0] [i_2 + 1] [i_2] [i_6] [i_2 + 1])))));
                        var_28 = (max(var_28, (((+((((var_4 & 1) != ((672988396 >> (arr_2 [i_7])))))))))));
                        arr_24 [i_2] [1] [15] [i_2] = (arr_4 [i_2] [18] [i_2]);
                        var_29 = (((((-(arr_1 [i_2 + 3] [i_0 + 1])))) ? (arr_22 [i_0] [i_2 + 2] [22] [0] [i_7]) : (((((((arr_18 [18] [i_2] [i_6] [i_6]) & var_9))) ? (-364671270 | 53620) : (min(12331, var_14)))))));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_8 = 3; i_8 < 21;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 21;i_9 += 1)
                {
                    {
                        arr_29 [9] [i_2 - 1] [9] [i_2] = -4368;
                        var_30 = (var_12 ? ((var_11 ? (arr_15 [i_9 - 1] [1] [i_8 - 1] [i_2] [i_2] [i_0 + 1]) : ((min(23845, -2056566297045140128))))) : ((((37 != ((min(57, -20369))))))));
                    }
                }
            }
        }
        for (int i_10 = 1; i_10 < 19;i_10 += 1) /* same iter space */
        {
            arr_33 [i_0] [i_10] = (var_12 - 7078058651636371441);

            for (int i_11 = 0; i_11 < 23;i_11 += 1)
            {
                var_31 = 1;
                var_32 = (((-6297575654281695892 ? 62 : -8818309635895566990)) & (arr_9 [i_0 + 1] [i_10 + 2] [i_10 + 2]));
                var_33 = (69 % 759747538);
            }
            var_34 += (((arr_25 [i_0 - 1]) ? ((var_11 ? (arr_19 [i_0] [i_10] [i_10 + 4]) : -19294)) : (min((~var_1), (((arr_32 [i_0]) ? -8818309635895566998 : 31))))));
        }
    }
    for (int i_12 = 1; i_12 < 22;i_12 += 1) /* same iter space */
    {
        var_35 = (max(var_35, ((min(60, (((5429024212986268375 ? 15 : -2056566297045140150))))))));
        var_36 |= (((((var_11 + (arr_6 [i_12 - 1] [i_12 - 1])))) || (1 * 20582)));
    }
    /* vectorizable */
    for (int i_13 = 1; i_13 < 22;i_13 += 1) /* same iter space */
    {
        var_37 = (((40916 ? 1 : 13017719860723283225)));
        arr_40 [i_13] = ((!(var_2 | var_13)));
    }
    for (int i_14 = 0; i_14 < 17;i_14 += 1)
    {
        var_38 = ((var_7 ? ((((arr_7 [i_14] [i_14] [i_14]) ? ((min(var_18, (arr_15 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14])))) : ((max(1, (arr_16 [i_14] [i_14] [i_14] [i_14]))))))) : (((arr_32 [i_14]) ? (max((arr_30 [i_14] [1]), var_1)) : (((11 ? var_17 : (arr_32 [i_14]))))))));
        arr_44 [i_14] [i_14] = ((max((((arr_21 [i_14] [i_14] [i_14] [i_14]) ? var_10 : 17493208957932004806)), var_0)));
        var_39 = (((((1 ? var_10 : (arr_39 [i_14] [i_14])))) ? (((arr_2 [i_14]) ? var_14 : (arr_5 [i_14]))) : 0));
    }
    #pragma endscop
}
