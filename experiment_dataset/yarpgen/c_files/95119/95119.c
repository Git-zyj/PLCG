/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95119
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_11 = (min(var_11, (arr_0 [i_0])));
        var_12 += ((((-1181 | 13835058055282163712) ? 2544472856081666228 : var_5)));
        arr_2 [i_0] = var_3;
        arr_3 [i_0] [i_0 + 1] = -2897580588992792158;
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_13 = (arr_5 [i_1] [i_1]);

        for (int i_2 = 2; i_2 < 9;i_2 += 1)
        {
            var_14 = -3493069509616005381;

            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                var_15 |= (min(((var_3 ? 2544472856081666228 : -17764887)), ((2280628093378752057 ? var_5 : (arr_5 [i_2 + 2] [i_3])))));
                arr_12 [i_1] = arr_7 [i_3];
                arr_13 [i_3] [i_1] [i_1] = 3122879867;

                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    arr_16 [i_1] [i_1] [3] = 9959618110766630048;
                    var_16 |= (arr_4 [i_4]);
                }
                var_17 = ((((min((min((-2147483647 - 1), (arr_11 [i_2] [i_1]))), var_2))) ? (((arr_7 [i_3]) | (arr_15 [1] [i_2 - 1] [i_1] [i_3]))) : var_1));
            }
            for (int i_5 = 1; i_5 < 10;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        {
                            var_18 = -922763761128715623;
                            var_19 = 9223372036854775802;
                            var_20 += ((((((arr_21 [i_2] [i_2 + 2] [i_2 + 2] [i_5 - 1] [i_5] [i_5 + 1]) ? (arr_21 [i_1] [i_1] [i_2 - 1] [i_5 - 1] [i_1] [i_5 - 1]) : var_8))) ? 2857663997653179867 : (((var_5 ? (arr_21 [i_1] [i_1] [i_2 + 2] [i_5 + 1] [i_5 - 1] [i_5 - 1]) : (arr_22 [2] [i_2 + 1] [i_2 + 2] [4] [i_5 - 1]))))));
                        }
                    }
                }
                var_21 = ((((var_6 ? var_1 : (((var_1 ? -6538744750453482355 : -4867211214428582633)))))) ? (((arr_4 [i_2 - 1]) ? (arr_5 [i_2] [i_5 - 1]) : -18546)) : (((!(arr_21 [i_1] [i_1] [i_1] [i_1] [i_2] [i_5])))));
            }
            arr_28 [i_1] [i_1] [2] |= var_6;
        }
        for (int i_8 = 3; i_8 < 9;i_8 += 1)
        {
            var_22 = (arr_10 [i_1] [i_1] [i_1]);
            var_23 = (((~2) ? -var_4 : (((~(arr_10 [i_1] [i_1] [i_1]))))));
            var_24 = (arr_10 [i_1] [10] [i_1]);
            var_25 *= 922763761128715622;
        }
    }
    for (int i_9 = 2; i_9 < 17;i_9 += 1)
    {
        var_26 = (min(var_26, var_10));
        var_27 = (min((arr_32 [i_9 + 2]), ((var_6 ? (arr_31 [i_9 + 2]) : (arr_0 [i_9 - 1])))));
    }
    var_28 = max(var_3, var_7);
    var_29 = var_9;
    #pragma endscop
}
