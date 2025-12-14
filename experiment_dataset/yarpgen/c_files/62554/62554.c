/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62554
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (53657987 / 15);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    var_18 |= ((((((arr_4 [i_2 - 2] [1] [i_2 - 2]) ? (arr_4 [i_2 - 2] [4] [i_2 - 1]) : 9415))) ? (((arr_4 [i_2 + 1] [8] [i_2 - 2]) ? (arr_4 [i_2 + 2] [2] [i_2 + 1]) : (arr_4 [i_2 - 1] [14] [i_2 + 1]))) : (arr_4 [i_2 + 2] [14] [i_2 - 2])));
                    var_19 = var_2;
                }
            }
        }
        var_20 = (((max(((-(arr_2 [i_0]))), (var_3 && 9430))) == (((((9453 ? 1997 : -9430))) ? (((!(arr_2 [i_0])))) : var_12))));
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
    {
        var_21 = ((((((0 ? var_6 : (arr_10 [i_3]))))) ^ (((arr_9 [i_3] [i_3]) * ((max(var_12, (arr_9 [i_3] [i_3]))))))));
        var_22 = -4241309307;
        var_23 *= (~53658006);
        var_24 = (min(var_24, (min((arr_9 [i_3] [i_3]), ((~(((var_4 > (arr_9 [i_3] [i_3]))))))))));
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
    {
        var_25 = (min((arr_12 [i_4]), 4241309301));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                {
                    var_26 = (arr_18 [i_6] [i_5] [i_5] [i_4]);
                    var_27 = (max((max((arr_11 [i_4]), var_10)), (!22806)));
                    var_28 = ((118 % (((-5521367806939206643 && (arr_9 [i_4] [i_5]))))));
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        var_29 = (max((arr_13 [i_7]), 9430));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 0;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 20;i_9 += 1)
            {
                {
                    var_30 = ((((((-(arr_20 [i_7])))) + 42730)));

                    for (int i_10 = 2; i_10 < 21;i_10 += 1)
                    {

                        for (int i_11 = 3; i_11 < 21;i_11 += 1)
                        {
                            var_31 = (((1 && 1078456582) > ((((arr_33 [i_7]) > ((var_5 ? (arr_30 [i_11 - 3] [i_11] [11] [i_7]) : 0)))))));
                            var_32 = ((((((arr_18 [0] [i_10 + 1] [i_9] [i_8 + 1]) + ((max(33129, 255)))))) - (((arr_24 [i_7] [13]) ? (arr_29 [i_7] [i_9 + 2] [8] [i_11 - 3]) : (arr_29 [i_10 - 1] [i_8] [i_10 - 1] [i_8 + 1])))));
                        }
                        var_33 = (13961 ? var_0 : 22784);
                        var_34 = (min(1, 4));
                    }
                    for (int i_12 = 0; i_12 < 22;i_12 += 1)
                    {

                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 22;i_13 += 1)
                        {
                            var_35 = ((-9454 || (arr_25 [i_7] [i_13] [i_9 - 2] [i_12])));
                            var_36 = 1;
                            var_37 = (((var_10 ? 177 : (arr_29 [i_12] [i_12] [i_9 - 2] [i_8 + 1]))));
                        }
                        var_38 -= (max(((((3543889184 ? 13970 : 17934)) / var_0)), 46470));

                        for (int i_14 = 0; i_14 < 22;i_14 += 1)
                        {
                            var_39 = 4210740218;
                            var_40 = ((((max(9223372036854775807, (((-(arr_36 [i_14] [i_12] [i_9] [i_7] [i_7]))))))) ? ((-(arr_31 [i_8 + 1] [6] [12]))) : 1));
                        }
                    }
                    var_41 = (arr_39 [i_7] [i_8] [i_7] [i_7] [i_7]);
                }
            }
        }
    }
    #pragma endscop
}
