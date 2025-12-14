/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92267
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((~(max(-var_0, var_4))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (max(var_14, -32745));
        var_19 = 1819160325;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 7;i_2 += 1)
        {
            var_20 = -var_7;
            var_21 = (max(var_21, (((arr_8 [i_2 + 3] [i_2 + 2] [i_2 + 3]) ? (arr_8 [i_2 + 1] [i_2 - 1] [i_2 + 2]) : (arr_6 [i_2 + 2] [i_2 - 2])))));
            var_22 |= ((((((0 ? 1 : (arr_6 [i_2 + 1] [i_2 - 2]))) + 2147483647)) >> (((arr_6 [i_2 + 1] [i_2 - 1]) + 29636))));
            var_23 = ((3961495593 + ((var_4 ? (arr_4 [i_1] [i_2 + 2]) : var_5))));
            var_24 = (((((((arr_1 [i_1]) ? var_15 : 1850240114)) + 9223372036854775807)) >> (var_8 - 12085)));
        }
        var_25 = ((((~(arr_7 [i_1] [i_1]))) ^ var_4));
        var_26 -= (((arr_7 [i_1] [i_1]) ? 11781640862444381791 : (arr_7 [i_1] [i_1])));
        var_27 -= (arr_4 [i_1] [i_1]);
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                {
                    arr_17 [i_5] [i_3] [i_3] = -1571091433;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 16;i_7 += 1)
                        {
                            {
                                var_28 = ((((((((arr_14 [i_7] [i_7 - 1] [i_7 - 2]) + 2147483647)) >> (((arr_14 [i_7 - 3] [i_7 + 1] [i_7 - 3]) + 155))))) ? (((!(arr_14 [i_7] [i_7 - 1] [i_7 - 1])))) : (((arr_14 [i_7] [i_7 + 2] [i_7 - 3]) ? (arr_14 [i_7] [i_7 + 1] [i_7 - 1]) : (arr_14 [i_7 - 1] [i_7 - 1] [i_7 - 1])))));
                                arr_24 [i_3] [i_3] [i_3] [i_3] [i_3] = var_11;
                            }
                        }
                    }
                }
            }
        }
        var_29 = arr_19 [i_3] [i_3];
    }
    for (int i_8 = 0; i_8 < 22;i_8 += 1)
    {
        var_30 = (max(((((((arr_26 [i_8]) ? var_10 : (arr_25 [i_8])))) ? 4294967295 : (((max((arr_26 [i_8]), (arr_26 [i_8]))))))), ((((arr_25 [i_8]) ? (arr_25 [i_8]) : var_9)))));
        var_31 &= (((((-(arr_25 [i_8])))) ? (arr_25 [i_8]) : ((-(arr_25 [i_8])))));
        var_32 = (min(var_32, ((max((((~(((arr_25 [i_8]) >> (333471703 - 333471677)))))), (max((((var_10 >> (arr_26 [i_8])))), (1718270323418132 >> var_1))))))));
        /* LoopNest 2 */
        for (int i_9 = 2; i_9 < 19;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 22;i_10 += 1)
            {
                {
                    var_33 ^= (arr_30 [i_8] [i_8] [i_8] [i_8]);
                    var_34 -= (((((((6272492693147666661 << (((arr_25 [i_8]) - 3019))))) ? (arr_31 [i_10] [i_8] [i_8]) : (arr_27 [i_9 - 2] [i_9 + 3]))) >> (1819160325 - 1819160323)));
                }
            }
        }
    }
    var_35 &= ((var_9 ? ((var_7 ? ((var_7 ? var_13 : var_13)) : var_1)) : var_17));
    #pragma endscop
}
