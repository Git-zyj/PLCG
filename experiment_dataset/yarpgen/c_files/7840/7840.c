/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= ((-var_14 % ((((max(var_18, var_0)) != var_9)))));
    var_21 = (~var_12);
    var_22 += (min(((-554 - (min(3436859112, var_15)))), (((!(var_14 * var_14))))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_23 = (min(var_23, (arr_2 [i_0] [i_1])));
            var_24 = ((((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0] [i_1])))) || (arr_6 [i_1] [i_0])));
            var_25 = (min(var_25, ((((arr_1 [i_0]) ? (!-30504) : (arr_2 [i_0] [i_0]))))));
            arr_7 [i_1] = (arr_1 [i_0]);
            arr_8 [i_1] [i_0] = (arr_4 [i_0]);
        }
        /* vectorizable */
        for (int i_2 = 2; i_2 < 10;i_2 += 1)
        {
            arr_11 [i_0] [i_0] [i_0] |= (arr_10 [6] [i_2 - 1] [i_0]);
            var_26 = ((((!(arr_5 [10] [i_2] [i_2]))) ? ((var_1 >> (30503 - 30479))) : (arr_5 [i_2] [i_2 - 1] [i_2 + 2])));
            var_27 = (max(var_27, (((!(arr_6 [i_2 + 2] [i_2 + 2]))))));
        }

        /* vectorizable */
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            var_28 = ((~((~(arr_0 [4] [i_0])))));
            arr_14 [i_3] = arr_12 [3];
            var_29 *= ((!(((arr_2 [9] [i_0]) && 61303))));
            var_30 = ((!(arr_10 [i_0] [i_3] [i_3])));
            arr_15 [9] [i_0] [i_0] = (((((var_10 ? 24 : (arr_5 [i_0] [i_3] [9])))) ? (arr_6 [1] [i_3]) : (arr_0 [i_0] [i_3])));
        }
        var_31 *= ((((((((var_14 ? (arr_13 [i_0] [i_0] [i_0]) : 2694))) ? (~var_11) : (var_8 && var_9)))) || (arr_4 [i_0])));
    }
    #pragma endscop
}
