/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_2] = ((!((max((arr_5 [i_1 + 1] [i_2]), (arr_5 [i_1 - 1] [i_2]))))));
                    var_18 = (min(var_18, (((-(max((arr_5 [6] [6]), (arr_5 [6] [6]))))))));
                }
            }
        }
        arr_10 [i_0] = (((((arr_3 [i_0] [i_0]) > (arr_0 [i_0] [i_0]))) ? (max(0, -var_7)) : (((max((arr_2 [i_0]), 1018006783)) + (arr_8 [i_0])))));
        arr_11 [i_0] [i_0] = ((var_9 / (((max((arr_7 [i_0] [i_0] [i_0]), (arr_7 [i_0] [i_0] [i_0])))))));
        var_19 = ((-(arr_5 [1] [1])));
        var_20 = ((~((~(((arr_4 [i_0] [i_0]) | var_13))))));
    }
    for (int i_3 = 1; i_3 < 11;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                {
                    var_21 = (max(var_21, (arr_15 [i_5])));
                    var_22 = (max(var_22, ((((arr_5 [i_3 + 1] [i_4]) * (((((((0 ? (arr_7 [i_3] [i_3] [i_5]) : (arr_17 [i_4] [i_4])))) && ((min((arr_1 [i_3 + 1]), var_13))))))))))));
                    var_23 = 1;
                }
            }
        }
        var_24 = ((((((((arr_8 [i_3 + 1]) > (arr_12 [i_3]))) ? (((arr_7 [i_3] [i_3] [i_3 + 1]) & var_13)) : ((max((arr_3 [i_3 + 1] [i_3 + 2]), (arr_15 [i_3]))))))) ? (arr_18 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1]) : (arr_5 [i_3 + 1] [i_3])));

        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            var_25 |= (arr_2 [i_3 - 1]);
            var_26 -= var_8;
            arr_22 [i_3] = (((min((arr_12 [i_3]), ((!(arr_7 [i_3 + 1] [i_3 + 1] [i_3 + 1]))))) && (!var_11)));
        }
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            var_27 ^= (max((((arr_15 [i_7]) / (arr_14 [i_7]))), -var_12));
            var_28 = ((((((((arr_4 [i_7] [i_3 - 1]) < (arr_3 [i_3 + 2] [i_7])))))) + (arr_19 [i_3 + 2] [i_3] [i_7])));
            arr_25 [i_3] = (i_3 % 2 == zero) ? (((((((var_8 + 2147483647) << (((((arr_5 [i_3 + 1] [i_3]) + 8082197108961825626)) - 30)))) << (((((arr_8 [i_3]) * (arr_6 [i_3 + 2] [i_3]))) - 1955)))))) : (((((((var_8 + 2147483647) << (((((((arr_5 [i_3 + 1] [i_3]) + 8082197108961825626)) - 30)) - 2597866286341551136)))) << (((((((((arr_8 [i_3]) * (arr_6 [i_3 + 2] [i_3]))) - 1955)) + 615)) - 20))))));
        }
        var_29 -= (((((max(var_15, (arr_13 [i_3 + 2] [i_3]))) + var_2)) >> (((((arr_20 [i_3 + 1] [i_3 + 1] [i_3 + 1]) ? (max((arr_13 [i_3] [i_3]), (arr_2 [i_3 + 1]))) : (((-(arr_24 [i_3 - 1] [12])))))) - 180))));

        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            var_30 = ((((arr_17 [i_3 - 1] [i_3]) || ((1018006783 > (arr_17 [i_3 - 1] [i_3]))))));
            var_31 = (min(var_31, ((((!-127) ? ((min((arr_20 [i_3 + 1] [i_8] [i_8]), 17))) : (((min((arr_28 [i_3] [i_3 + 2] [i_8]), (arr_27 [i_3] [i_8]))))))))));
        }
    }
    var_32 |= var_7;
    #pragma endscop
}
