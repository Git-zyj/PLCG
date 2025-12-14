/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74181
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((65520 ? 7342833161446944765 : var_15) <= -3)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = ((+((+((((arr_1 [i_0] [i_0]) <= (arr_0 [i_0]))))))));
        var_21 = (arr_1 [1] [i_0]);
        arr_3 [i_0] [i_0] = (arr_0 [i_0]);
        var_22 = (min(var_22, (((6 ? 4294967281 : 7)))));
        var_23 = (min(var_23, ((-((((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0] [i_0])))) ? ((~(arr_0 [i_0]))) : ((-(arr_0 [i_0])))))))));
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        arr_6 [i_1] = (arr_5 [i_1]);
        var_24 |= (+-7342833161446944766);

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_25 = arr_7 [i_2] [i_1];
            var_26 = (arr_7 [i_1] [i_2]);
            var_27 = ((((((arr_5 [i_1]) ? (arr_1 [3] [i_1]) : (arr_1 [i_2] [i_2])))) ? (arr_8 [i_2] [i_2]) : (((-22545 ? 22524 : -11161)))));
        }
        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            var_28 = ((!((!((((arr_8 [i_1] [i_1]) % (arr_10 [i_1] [i_1] [i_1]))))))));
            arr_12 [i_1] [i_1] = ((-(arr_4 [i_1])));
        }
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            arr_16 [i_4] [i_1] = (((arr_4 [i_1]) >= (arr_11 [1] [i_1])));
            arr_17 [i_1] [i_1 + 1] [i_1 + 1] = ((((-13 ? 18446744073709551611 : 34)) / (arr_8 [i_1] [i_1])));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 13;i_7 += 1)
                    {
                        {
                            var_29 = (min(var_29, (arr_0 [i_1])));
                            arr_28 [i_1 - 1] [i_1] [i_1] [i_1 - 1] [i_1] = (((3 ? 0 : 13)));
                            arr_29 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_7] = ((33357 ? 1653472993 : 65529));
                            arr_30 [i_7] [i_6] [i_1] [i_4] [i_1] = (arr_4 [i_6]);
                        }
                    }
                }
            }
            arr_31 [i_1] [10] [i_1] = ((-((~(((arr_9 [i_4 - 1]) ? (arr_8 [i_4] [i_4]) : (arr_7 [i_1] [i_4])))))));
        }
    }
    #pragma endscop
}
