/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66658
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (-571504017 != var_2);
    var_13 = ((((((((var_4 ? var_4 : var_7))) ? 90 : var_7))) ? ((var_3 ^ (min(0, var_9)))) : 228));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_14 = (((~(var_8 || 1))) > (~18));

        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            arr_6 [i_1] [i_1] [i_1] = var_1;

            /* vectorizable */
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                var_15 = (arr_7 [i_0] [i_0] [i_2]);
                arr_9 [i_0] [i_1] [i_1] [i_1] = 20;
            }
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                arr_12 [i_1] [i_1] = ((-696676696 ? var_9 : (~2024150006)));
                arr_13 [i_1] [8] = (((var_2 + 2147483647) << (((arr_11 [i_0] [i_1] [i_3]) - 10))));
                var_16 = 194;
                var_17 = (min(var_17, -3));
            }
            var_18 = (min(814757860, var_8));
            var_19 = (min(var_7, (((((arr_4 [1] [10]) / (arr_3 [i_1] [i_0] [i_0]))) / ((min((arr_2 [i_1] [i_0] [i_0]), (arr_11 [7] [1] [4]))))))));
            var_20 = (~63);
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
        {
            arr_17 [i_4] [i_4] = (min(((((arr_5 [i_4]) ? (arr_5 [i_0]) : (arr_5 [i_4])))), (min(var_6, (arr_1 [3])))));
            arr_18 [i_4] [i_4] = (min(var_0, (((!206) ? var_6 : (min((arr_0 [i_0] [i_4]), var_1))))));
        }
    }
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        var_21 = -16;
        arr_21 [i_5] = (var_5 ? (((arr_20 [i_5]) ? 1902877022 : var_10)) : ((((((-80 ? var_5 : (arr_19 [i_5])))) && (arr_20 [i_5])))));
        var_22 = (min((!var_4), (min(((var_4 ? (arr_19 [9]) : (arr_20 [i_5]))), ((min(1, (arr_20 [i_5]))))))));
        var_23 = var_11;
        arr_22 [1] = (((!((((arr_19 [5]) ? (arr_20 [i_5]) : (arr_20 [i_5])))))) ? (((arr_19 [i_5]) | (arr_19 [4]))) : 43);
    }
    var_24 = var_5;

    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        var_25 = (min(var_25, (28 ^ -1756214675)));
        /* LoopNest 3 */
        for (int i_7 = 4; i_7 < 22;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 22;i_8 += 1)
            {
                for (int i_9 = 3; i_9 < 23;i_9 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_10 = 4; i_10 < 22;i_10 += 1)
                        {
                            arr_36 [i_10] = ((!(arr_32 [i_7 - 3] [i_8 - 1] [i_9 - 3] [i_10 - 2])));
                            arr_37 [i_6] [i_6] [i_8] [i_10] [9] = (!757650754);
                        }
                        arr_38 [i_6] [i_6] [i_7] [i_6] [i_8] [i_9] &= (arr_33 [i_6] [i_9 - 1]);
                    }
                }
            }
        }
        arr_39 [i_6] [i_6] = (((min((arr_33 [i_6] [7]), (arr_33 [i_6] [i_6]))) < (((arr_33 [i_6] [i_6]) ? (arr_33 [i_6] [i_6]) : (arr_33 [i_6] [i_6])))));
    }
    #pragma endscop
}
