/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98554
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = (((((((!(arr_1 [3]))) ? 20 : -1))) ? ((((~(arr_1 [i_0]))) - ((((arr_0 [8] [i_0 + 2]) <= -114))))) : ((((arr_0 [i_0] [6]) >= -13611)))));
        arr_4 [i_0] = ((+((((arr_0 [i_0 - 1] [i_0 + 1]) >= (arr_0 [i_0 + 1] [i_0 + 1]))))));
        var_16 = (min(var_16, (arr_2 [i_0] [i_0 - 2])));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 11;i_3 += 1)
            {
                {
                    var_17 = arr_7 [i_1];
                    arr_12 [7] = ((!((((arr_11 [i_1] [i_1] [i_3 - 2]) / 13611)))));
                    var_18 += 4609434218613702656;
                }
            }
        }

        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            var_19 = ((min((((arr_13 [i_4] [i_1] [i_1]) ? (arr_5 [i_1] [i_4]) : (arr_11 [i_4] [9] [i_1]))), (arr_1 [i_4]))));
            arr_16 [i_1] [i_4] = ((((((arr_9 [i_1] [i_4]) << (((arr_5 [i_1] [i_1]) - 87))))) ? (arr_15 [i_4]) : ((((13837309855095848960 >= (arr_0 [i_1] [i_4])))))));
            var_20 = (max(830667213, 99));
            arr_17 [i_4] [i_4] = ((max((arr_1 [i_1]), (min((arr_9 [i_1] [9]), (arr_14 [i_1] [i_4]))))) - ((((((arr_7 [i_1]) - (arr_1 [i_4])))) - (max(13611, (arr_14 [i_4] [i_4]))))));
            arr_18 [i_1] [i_4] [i_4] = (((((arr_2 [i_1] [i_1]) ^ -7)) >> ((((max(13837309855095848960, (arr_10 [i_4] [i_1] [i_1] [i_1]))) <= (((arr_14 [i_1] [i_1]) - (arr_15 [i_4]))))))));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
        {

            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                var_21 = (arr_11 [i_1] [i_5] [i_6]);
                arr_25 [i_5] = 11428889445987681911;
            }
            var_22 = ((-(9934921997970106541 >= 5)));
            arr_26 [i_1] [i_1] [i_5] = (((arr_8 [i_1] [i_5] [i_5]) <= ((((arr_10 [i_5] [i_5] [i_5] [i_1]) ? (arr_24 [i_1] [i_1] [i_1]) : (arr_1 [i_1]))))));
        }
        for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
        {
            var_23 = (arr_15 [i_1]);
            var_24 = ((!(arr_2 [i_1] [i_7])));
            var_25 = (((((arr_22 [i_1] [i_7] [i_1]) ? (arr_0 [i_1] [i_1]) : (arr_22 [i_1] [i_1] [i_1])))) + (((((arr_22 [2] [i_7] [i_1]) ^ 8511822075739445065)) & ((((arr_27 [10] [i_7] [10]) ? (arr_24 [i_1] [i_1] [i_7]) : (arr_11 [i_1] [i_7] [10])))))));
        }
        for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
        {
            arr_33 [i_8] = ((!((((arr_28 [i_1] [i_1]) + (arr_28 [i_1] [i_8]))))));

            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                var_26 = ((((~(arr_23 [i_1] [i_1] [i_1])))));
                var_27 = (((-1 + 13614) && (((~-13599) && (((13622 >> (1577119877 - 1577119859))))))));
            }
        }
        arr_36 [i_1] = (((((arr_5 [i_1] [i_1]) + ((-(arr_1 [i_1]))))) != (((((21 ^ (arr_6 [7])))) ? ((max(13612, -1))) : (arr_28 [i_1] [i_1])))));
        arr_37 [i_1] = (max((((13837309855095848946 & 1433097526) ^ 13614)), (arr_29 [i_1] [5] [i_1])));
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 15;i_10 += 1)
    {
        var_28 = (arr_38 [i_10]);
        arr_40 [i_10] = 13837309855095848969;
    }
    var_29 *= 288229276640083968;
    #pragma endscop
}
