/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((~239) > -239));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_13 = ((166 != (2037458054044706209 != 0)));
                var_14 = (((((arr_1 [i_0] [i_1]) <= (arr_1 [i_1] [i_1]))) ? (arr_5 [18]) : ((0 ? (((min(1, 21)))) : ((~(arr_3 [i_0] [i_0])))))));
                var_15 = 38222;
                var_16 &= ((~(((3175013105493858470 | 27332) ? (arr_4 [i_0] [i_1]) : -77))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            {

                for (int i_4 = 3; i_4 < 16;i_4 += 1)
                {
                    arr_12 [i_2] [i_3] [i_2] |= (((((48 * 16) * -159)) * (max((((arr_10 [i_2]) ? (arr_4 [i_3] [i_4 - 3]) : (arr_6 [i_2] [i_3]))), (min(var_3, 14872))))));
                    arr_13 [i_2] [14] [i_4] [i_4] = arr_0 [i_3];
                }
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    var_17 = (max(var_17, (((max(255, 1))))));
                    arr_16 [i_2] [i_3] [i_5] = var_8;
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 16;i_7 += 1)
                    {
                        {
                            arr_23 [i_7] [3] [i_6] [i_6] = (!1);
                            var_18 = (min(((1 >> (1364870184366931332 - 1364870184366931302))), (((~83) * (!240)))));
                            arr_24 [i_2] [i_7] [i_7] = (arr_21 [i_2] [i_6] [i_6] [i_7] [i_3] [i_2]);
                        }
                    }
                }
            }
        }
    }
    var_19 |= ((((((var_7 ? var_2 : 255)) ? (min(17081873889342620284, var_0)) : 1))));
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 25;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 25;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 25;i_10 += 1)
            {
                {
                    var_20 = ((((arr_26 [i_8]) | (arr_31 [i_10] [i_8] [i_8]))));

                    for (int i_11 = 3; i_11 < 23;i_11 += 1)
                    {
                        var_21 = 239;
                        arr_36 [4] [i_10] [i_9] = (((arr_31 [i_8] [i_9] [i_11]) ? 96 : (((((var_2 ? 14879 : var_8))) ? ((11 ? var_1 : 1419267348508783552)) : ((((-2147483647 - 1) ? var_5 : 6394)))))));
                    }
                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 25;i_12 += 1)
                    {
                        var_22 = ((((1410617580 ? (arr_35 [i_8] [i_8] [20] [i_12]) : (arr_34 [i_8] [i_9] [i_10] [i_12] [i_12]))) + (arr_38 [i_8] [i_8] [i_8] [i_8])));
                        var_23 = (arr_30 [i_8] [i_9] [i_10] [i_8]);
                        var_24 = (min(var_24, (((((!(arr_33 [i_12] [i_10] [i_9] [1] [i_8]))) ? ((17081873889342620283 ? (arr_26 [i_9]) : (arr_25 [i_8] [i_10]))) : (var_4 * 16382))))));
                    }
                    arr_39 [i_10] [i_10] [i_9] [i_8] = (((((-(arr_25 [i_9] [i_10])))) || (0 == var_3)));
                    var_25 = (((1 * var_3) ? (-28216 < 8380416) : ((59428 ? -7404390066669501003 : 255))));
                    arr_40 [8] [i_9] [i_9] [i_9] = (((~(arr_25 [i_9] [i_9]))));
                }
            }
        }
    }
    #pragma endscop
}
