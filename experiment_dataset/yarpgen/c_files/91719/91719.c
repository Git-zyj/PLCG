/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            var_17 += (arr_4 [i_0] [i_1] [i_0]);
            var_18 = (max(var_18, ((((((~(arr_2 [i_1 - 1] [i_1 + 1])))) ? ((~(arr_2 [i_1 + 2] [i_1]))) : (arr_2 [i_1 + 1] [i_1]))))));
            var_19 = var_15;
            var_20 = ((~((((~(arr_0 [i_0]))) & (~1)))));

            /* vectorizable */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                var_21 = (min(var_21, ((((arr_0 [i_0]) >= ((((!(arr_3 [i_2] [i_0]))))))))));
                var_22 = ((1 ? -1 : ((1 ? 1 : 1023))));
                var_23 += ((((((arr_5 [18] [i_1 + 2] [18]) >= (arr_0 [i_2])))) >= (((arr_4 [i_0] [i_1 + 3] [i_2]) - (arr_3 [i_0] [i_0])))));

                for (int i_3 = 1; i_3 < 19;i_3 += 1)
                {
                    var_24 = ((arr_9 [i_3 - 1] [i_3 - 1] [i_3 + 2] [i_3 - 1] [i_3]) & ((var_11 ? (arr_7 [i_0] [i_2] [i_1 + 2]) : (arr_1 [i_0] [1]))));
                    var_25 = (max(var_25, ((((-(arr_4 [2] [2] [i_3])))))));
                    arr_11 [i_0] [0] |= ((((((arr_6 [i_0] [i_1 + 2] [i_2] [i_1 + 2]) ? var_14 : var_9))) ? (arr_4 [i_0] [i_1 - 1] [i_1 - 1]) : var_13));
                }
            }
            for (int i_4 = 4; i_4 < 19;i_4 += 1)
            {
                arr_16 [1] |= (arr_14 [i_1]);
                var_26 -= var_14;
            }
            /* vectorizable */
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                var_27 ^= ((((((!(arr_14 [i_0]))))) != var_10));
                arr_20 [i_5] [i_1] [i_1 + 3] [18] = ((!(((var_1 * (arr_0 [i_0]))))));
            }
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                arr_23 [i_0] [i_1 - 1] [i_6] [i_6] = 29;
                var_28 ^= ((((((arr_13 [i_6] [8] [i_0] [i_0]) ? var_1 : (arr_6 [i_0] [i_6] [i_0] [i_6]))) * (arr_6 [i_0] [14] [i_0] [14]))));
            }
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            arr_27 [i_7] [i_0] = var_5;
            var_29 = (arr_6 [i_0] [4] [i_7] [i_7]);
            var_30 = (((arr_25 [i_7] [i_7] [i_7]) ? ((((arr_25 [i_0] [i_0] [i_0]) <= (arr_25 [i_7] [i_7] [i_0])))) : (!var_1)));
        }
        var_31 = (min(var_31, (((((!(arr_14 [i_0]))))))));
    }
    for (int i_8 = 0; i_8 < 15;i_8 += 1)
    {
        arr_30 [i_8] &= var_14;
        var_32 = (min(var_32, ((max(((var_0 ? (arr_15 [i_8] [i_8] [i_8]) : (9718583677890704830 + 1))), (((1 ? -115 : 1051402853))))))));
        var_33 = (min(var_33, (((~(arr_29 [i_8] [i_8]))))));
    }
    var_34 = (max(var_34, ((((((8479457734992146382 ? (max(9718583677890704830, 1073741823)) : (((-5495813636917717741 ? 8412238090845454793 : 3243564421)))))) && var_2)))));
    #pragma endscop
}
