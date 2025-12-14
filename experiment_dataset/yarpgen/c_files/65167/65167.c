/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65167
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, var_13));
    var_16 = ((((max(3, ((var_1 ? var_1 : var_3))))) ? (~-78) : (max(var_9, var_5))));
    var_17 = var_7;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_4 [i_0] = ((var_14 ^ (((2251799813685247 != (arr_2 [i_0] [i_0]))))));

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 13;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_1] [i_2] [i_3 + 1] [i_3 - 1] |= ((((((arr_1 [i_1]) ? (arr_1 [i_3 - 1]) : (min((arr_9 [i_0] [i_1] [i_2] [2]), (arr_1 [i_0])))))) ? (((-(arr_10 [i_3 + 1] [i_3 + 1] [i_3] [i_3 - 1])))) : (((arr_8 [i_3] [i_3 + 1] [i_3 - 1] [i_3 + 1]) << (((arr_8 [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_3 + 1]) - 1166666195))))));
                        var_18 -= (((-65 ^ 1344930800) != (arr_6 [i_3 + 1])));
                        var_19 = 78;

                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            arr_15 [i_4] [i_1] [i_2] [i_1] [i_4] [i_0] [9] = ((((((!((((arr_2 [i_0] [i_0]) + (arr_11 [i_0] [i_1] [i_2] [i_2])))))))) / ((~(((arr_10 [i_0] [i_1] [i_2] [i_4]) ? (arr_2 [i_1] [i_3]) : (arr_3 [i_1])))))));
                            var_20 = ((((~(arr_11 [i_0] [i_3 + 1] [i_2] [i_2])))) & (((arr_9 [i_2] [i_3 + 1] [i_2] [i_4]) * 0)));
                            arr_16 [4] [i_1] [i_1] [i_1] [2] [i_2] = ((((((21327 / (arr_6 [i_3]))) == ((-1792492147 ? var_3 : 121)))) && (((-(arr_8 [3] [i_3 + 1] [i_2] [13]))))));
                        }
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            var_21 &= (arr_2 [i_5] [i_2]);
                            var_22 = (((((+((1792492146 >> (((arr_14 [i_0] [i_1] [i_1] [i_2] [i_2] [i_5]) - 16385))))))) ? (124 / 84) : (arr_13 [i_0] [i_1] [i_3 - 1] [i_0] [i_5])));
                        }
                    }
                }
            }
            var_23 = ((!((min((((arr_9 [i_0] [i_0] [i_1] [i_0]) ? -78 : 1)), 151)))));
        }
        for (int i_6 = 1; i_6 < 13;i_6 += 1)
        {
            arr_21 [i_0] [i_6] [i_6] = (arr_5 [i_0] [13] [i_0]);
            arr_22 [i_0] [i_0] [i_6 + 1] |= ((((arr_19 [i_6] [i_6] [i_6 + 1]) ? (arr_19 [i_0] [i_6] [i_6 + 1]) : (arr_19 [i_0] [i_6] [i_6 + 1]))) % ((((arr_11 [i_0] [i_6] [i_0] [i_0]) | ((-28051 ? (arr_18 [i_0] [i_0] [i_0]) : (arr_3 [i_6])))))));
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 3; i_7 < 20;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 21;i_9 += 1)
            {
                {
                    var_24 = 1;
                    var_25 = (max(var_25, ((max((arr_25 [i_9]), (((4294967295 && (arr_26 [i_9] [i_8])))))))));
                }
            }
        }
    }
    #pragma endscop
}
