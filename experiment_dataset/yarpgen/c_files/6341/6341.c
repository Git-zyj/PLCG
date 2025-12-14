/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((19 ? 695265789 : -23113));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_21 = ((((((-23113 + 2147483647) >> (127 - 96)))) ? (arr_5 [i_0]) : 2474914694));

                /* vectorizable */
                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    var_22 = (4506676681536990861 ^ 587730919);

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_23 = (min(var_23, var_19));
                        arr_13 [i_0] [i_1] [i_2] [i_3] = 6;
                    }
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        var_24 ^= var_13;
                        arr_18 [i_1] [i_1] [i_2] [4] = ((((1 | (arr_9 [i_4] [i_2 + 2] [i_0] [i_0])))) ^ (587730919 ^ 4112026829));
                    }

                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        var_25 = ((((((arr_0 [i_0] [i_0]) ? 0 : (arr_9 [i_5] [i_2 + 1] [i_1] [i_0])))) ? (((arr_19 [i_0] [i_0] [i_0] [i_5] [i_0]) - (arr_12 [i_1] [i_2] [i_1]))) : var_7));
                        var_26 = ((1251268784 >> (((((arr_0 [i_0] [i_1]) ? var_10 : var_14)) - 1080083452))));
                        var_27 -= ((((((arr_12 [i_1] [i_5] [7]) ? -12641 : var_14))) ? var_15 : ((var_10 ? var_12 : 52))));
                    }
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        arr_25 [i_0] [i_1] [i_2] [i_6] = ((((((arr_15 [6] [i_1] [i_2] [9]) ? (arr_22 [i_0] [i_0] [i_1] [i_1] [13] [16]) : var_7))) ? ((((arr_5 [i_1]) >= 71))) : (var_7 && var_5)));
                        var_28 = (((((arr_16 [i_0] [i_0] [i_0] [14]) ? var_10 : var_0)) / (arr_10 [i_0])));
                    }
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        arr_29 [i_0] [i_0] [i_0] = (((((var_12 ^ (arr_8 [i_1] [i_2] [7])))) ? var_14 : (((arr_27 [i_7] [i_2]) ? var_5 : 239))));

                        for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
                        {
                            var_29 = (min(var_29, ((((((arr_15 [i_7] [i_7] [i_0] [i_0]) ? (arr_19 [i_0] [i_1] [i_2] [4] [i_8]) : 262142)) * (((arr_21 [i_0]) | (arr_14 [0] [i_1] [9] [i_1] [12]))))))));
                            arr_32 [3] [i_1] [i_2 - 1] [i_7] [i_8] = (((arr_30 [i_0] [i_0] [i_0] [i_7] [12] [i_8]) << (((19345 >= (arr_16 [i_0] [i_0] [i_0] [i_7]))))));
                        }
                        for (int i_9 = 0; i_9 < 17;i_9 += 1) /* same iter space */
                        {
                            var_30 &= ((((((arr_1 [i_7]) >> (((arr_20 [i_0] [4]) - 16733583767038409241))))) ? (arr_11 [i_0] [i_2] [i_9] [i_0]) : ((((arr_11 [i_0] [i_0] [i_9] [12]) >= var_1)))));
                            arr_35 [i_7] = 185;
                            var_31 ^= var_14;
                            var_32 ^= (-80 * 4294705158);
                        }
                    }
                    var_33 = (((var_18 - (arr_2 [i_2]))) / 221);
                }
                for (int i_10 = 2; i_10 < 14;i_10 += 1)
                {
                    arr_40 [i_0] [i_1] [i_10] [i_10] = 1877473244959695932;
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 17;i_12 += 1)
                        {
                            {
                                var_34 = ((((var_19 ^ ((var_15 | (arr_2 [i_12]))))) >> ((((194696521 ^ (0 & 1))) - 194696512))));
                                var_35 = (arr_26 [i_0] [i_1] [i_10 - 2] [i_0] [i_12]);
                                arr_46 [i_0] [i_12] = 4294705153;
                                var_36 = (max(var_36, var_3));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_13 = 0; i_13 < 17;i_13 += 1)
                {
                    var_37 ^= ((((185 / (arr_28 [i_13] [i_0] [i_0]))) - 135));
                    var_38 = ((3894294010 ? (((0 ? 3541692747 : var_7))) : 11256825022587345522));
                }
                var_39 = (min(var_39, 1877473244959695940));
            }
        }
    }
    var_40 *= (-7141 && 112);
    #pragma endscop
}
