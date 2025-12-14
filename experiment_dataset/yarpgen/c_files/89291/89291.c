/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 4; i_2 < 24;i_2 += 1) /* same iter space */
                {
                    arr_10 [i_1] [1] = ((((((arr_8 [i_0] [i_0] [i_0]) % (arr_0 [i_0])))) ? var_8 : (((arr_9 [i_1] [i_1]) - -6066))));
                    arr_11 [i_0] [i_1] [24] = (min((((((var_9 ? 1 : (arr_3 [i_2] [i_1])))) ? (min(var_12, var_7)) : (arr_9 [i_1 + 2] [i_1]))), (((min(-124, var_1))))));
                    arr_12 [i_1] [i_2] = var_6;
                    var_13 = (arr_8 [i_0] [i_1] [i_2]);
                    arr_13 [i_0] [i_1] [i_0] [i_0] = ((~(min(((max(var_4, 23))), 1844590951))));
                }
                for (int i_3 = 4; i_3 < 24;i_3 += 1) /* same iter space */
                {

                    for (int i_4 = 3; i_4 < 22;i_4 += 1)
                    {
                        var_14 = 6674970676544318098;
                        arr_19 [i_0] [i_1] [i_3] [i_1] = (max(((((((5791024097835102868 || (arr_17 [i_0] [i_1])))) * (arr_5 [i_4 + 3] [i_1 - 1])))), (((2147483647 ? 712713274 : (arr_2 [i_1]))))));
                    }
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        arr_23 [i_0] [i_1] [i_1] [i_5] = (((((min(38, 2735518609)))) ? ((-((var_11 ? -1844590951 : (arr_17 [i_5] [i_1]))))) : ((((!(arr_1 [i_0] [i_5])))))));
                        var_15 = (max(((((((2147483646 + (arr_15 [i_0])))) + (arr_17 [i_1 - 2] [i_1])))), ((((max((arr_0 [i_0]), 4))) ? (arr_21 [i_0] [i_3] [i_1] [i_0]) : (~var_5)))));
                        arr_24 [i_0] [i_0] [i_1] [i_3 - 4] [i_5] = (~var_3);
                        arr_25 [i_1] [i_1] [i_1 - 1] [i_1] [i_1 - 2] [i_1] = 1844590950;
                        var_16 = ((max(((var_10 ? 0 : 1844590951), (arr_20 [i_0] [i_0] [i_3] [i_0])))));
                    }
                    arr_26 [9] [i_1] [i_1] = ((!(~var_9)));

                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        var_17 = ((~((((arr_16 [i_1] [i_1] [i_3 - 2] [i_3]) && (arr_16 [i_1] [i_1] [i_3 - 1] [i_6]))))));
                        arr_30 [i_0] [i_1] [i_0] [i_6] [i_0] [i_6] = (min(((var_5 - ((((arr_28 [i_1] [i_1]) ? var_6 : 18))))), (!29533)));
                    }
                    var_18 = (min(var_18, ((max((var_6 ^ -var_3), ((~(min(46831, 3550424348)))))))));
                    arr_31 [i_1] [i_1] [i_3] [i_3] = ((562152553 || ((((8384 * var_12) ? (((29999 | (arr_15 [i_0])))) : var_4)))));
                }
                /* vectorizable */
                for (int i_7 = 4; i_7 < 24;i_7 += 1) /* same iter space */
                {
                    var_19 = (min(var_19, ((((((var_7 ? 6066 : var_10))) ? var_10 : ((1882739028 ? var_11 : 18446744073709551615)))))));
                    arr_34 [i_0] [i_1] = (1882739028 / var_12);
                }
                var_20 = ((min(var_12, ((~(arr_20 [0] [0] [i_0] [i_1]))))));
                arr_35 [i_1] [i_1] = var_6;

                for (int i_8 = 2; i_8 < 23;i_8 += 1)
                {
                    arr_38 [22] [i_1] [i_8] [i_1] &= (min((max(1, (~var_2))), (((712713274 >= (arr_32 [i_1 - 1]))))));
                    var_21 = (min(var_11, ((((!(arr_0 [i_0])))))));
                }
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    var_22 = (((((0 * (min(83610244, var_1))))) ? (min(((min(var_7, 51))), (max(-52, (arr_14 [i_0] [i_1]))))) : 1808283263));
                    var_23 = ((min((max(-9223372036854775791, (arr_0 [i_0])), (((var_11 ? -1674140717 : 31205)))))));
                    var_24 = (arr_21 [i_0] [i_0] [i_0] [i_0]);
                }
            }
        }
    }
    var_25 = (min(((-((min(0, 52))))), (((((min(7827, 2251799813685247))) == 6765732655457171670)))));
    var_26 = (((!934655958495194954) ^ var_3));
    var_27 = (var_10 ? ((min(var_2, -71))) : ((((max(var_4, 1844590951))) | -var_5)));
    #pragma endscop
}
