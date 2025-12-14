/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/796
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -var_5;

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        arr_2 [11] = -var_8;
        var_11 = -17205863843578763580;
        arr_3 [i_0] = (((((31 || 1671826292) & ((1032338894 % (arr_0 [i_0]))))) - (((!(var_7 != var_9))))));
        var_12 = ((-((~((232 ? (arr_1 [i_0]) : var_7))))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_13 = ((((~(((arr_1 [6]) - (-9223372036854775807 - 1))))) < (((((((arr_1 [i_1]) ? (arr_1 [7]) : (arr_0 [1])))) ? (arr_6 [i_1]) : (arr_1 [i_1]))))));

        for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
        {
            var_14 = ((((1671826292 ? -14 : 26)) == -1032338906));

            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                arr_13 [i_1] [i_3] [4] [i_2] = arr_5 [i_1];
                var_15 = (((((-19622 & (arr_7 [i_1] [i_1] [6])))) || (1 || 6370160855293737744)));
            }
            /* vectorizable */
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                var_16 |= (((arr_11 [i_1] [i_2] [i_4]) % var_1));
                var_17 = (59320 && 4227025165);
            }
            /* vectorizable */
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                arr_18 [i_5] [i_2] [i_2] [i_1] = (((((((arr_1 [i_5]) + 2147483647)) << (((((arr_9 [i_1] [i_2]) + 151)) - 25)))) / (arr_9 [i_1] [14])));
                arr_19 [i_1] [10] [i_5] = (((!-1671826293) >> ((((arr_10 [i_1] [11] [11]) || 4317216289399825066)))));
            }
            var_18 -= ((-((9 | (arr_9 [13] [13])))));
        }
        for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
        {
            arr_23 [i_1] = arr_21 [4] [4] [0];
            var_19 -= (((arr_17 [i_1] [8] [i_1] [i_1]) % (arr_16 [1] [i_1] [i_1] [i_1])));
        }
    }
    var_20 |= var_3;
    var_21 = var_3;
    var_22 = var_5;
    #pragma endscop
}
