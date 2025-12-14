/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85687
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_13 = (max((arr_1 [i_0]), (((((var_6 ? (arr_0 [7]) : (arr_0 [i_0])))) ? (arr_0 [i_0]) : 2322996587216260861))));
        var_14 = arr_1 [i_0];

        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            var_15 = (var_0 & -2995836729165770092);

            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                arr_8 [i_0] [14] = (((min((arr_5 [i_0] [i_1] [i_2] [i_2]), var_8)) == ((((((var_11 ? (arr_4 [i_0] [i_0]) : (arr_3 [i_1]))) >= ((((arr_3 [i_1]) ? var_3 : 1)))))))));
                var_16 = (max((((arr_5 [i_0] [i_0] [i_0] [i_0 + 1]) ? (((var_0 == (arr_0 [i_2])))) : 1)), ((((arr_7 [i_0 + 2]) == (arr_7 [i_0 + 1]))))));
                var_17 = (max((arr_6 [i_0] [i_0]), 1982798811));
            }
            var_18 = (!(((~(((arr_1 [i_1]) * (arr_7 [i_0 + 1])))))));
        }
    }
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        var_19 = (max(var_19, (max((((arr_10 [i_3] [i_3]) & var_8)), ((max((var_6 == 22859), (max(1, (arr_9 [i_3]))))))))));
        var_20 -= arr_9 [i_3];
        var_21 = max((((var_11 && ((((arr_10 [i_3] [i_3]) ? (arr_9 [i_3]) : (arr_10 [i_3] [i_3]))))))), (((arr_9 [i_3]) % var_6)));
        var_22 *= ((((arr_11 [i_3] [i_3]) == (arr_11 [i_3] [i_3]))));
    }
    var_23 = (min(887432434, var_2));
    var_24 = max(8433653780771592722, (-1 ^ var_7));
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                {
                    arr_18 [i_5] [i_5] [i_5] [i_6] = (arr_5 [11] [11] [11] [11]);
                    var_25 = ((max(-8433653780771592722, (arr_17 [i_5] [i_5 + 3] [i_5] [i_5 + 1]))));
                    var_26 = (max(((((arr_16 [i_5 - 2] [i_5 + 1]) && 11))), 18446744073709551613));
                }
            }
        }
    }
    #pragma endscop
}
