/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_12 = var_2;

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_13 = (((((!(arr_1 [i_0])))) >= (min((arr_3 [i_0] [i_0]), ((var_11 ^ (arr_1 [11])))))));
            var_14 = (((max(-116, var_10)) <= ((-(((arr_2 [i_0] [i_0] [i_0]) / (arr_1 [i_0])))))));
        }
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_15 = ((-((211106232532992 / (arr_2 [i_0] [i_2] [i_2])))));
            var_16 = (max(var_16, (((((!(~var_1)))) << (min(1505871681, ((min(var_0, var_10)))))))));
        }
        for (int i_3 = 1; i_3 < 12;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                var_17 = ((!((!(arr_8 [i_3 + 3] [i_0] [11])))));

                for (int i_5 = 1; i_5 < 13;i_5 += 1)
                {
                    var_18 = (min((max((max(4096089442, (arr_9 [i_5] [i_3] [i_0]))), (((var_6 / (arr_2 [i_0] [i_0] [i_4])))))), (((~(((arr_0 [i_0]) * 1)))))));
                    var_19 = (max(((min((arr_6 [i_5 + 2]), (arr_6 [i_5 + 1])))), (((-(arr_2 [4] [4] [13]))))));
                }
                var_20 = (((min((arr_11 [i_3 + 2] [i_3 + 1] [i_3 + 1]), (arr_1 [i_3 + 1]))) * var_10));
                var_21 = (arr_4 [i_0] [i_0]);
                var_22 = ((0 - (min((((-(arr_7 [i_4] [i_0])))), (arr_11 [i_4] [i_4] [i_4])))));
            }
            var_23 = 725264404;
            var_24 = (((((arr_15 [i_0] [0] [14] [i_3 - 1]) << (arr_15 [i_0] [12] [i_3 + 2] [i_3]))) >> (((((arr_15 [i_3 + 1] [10] [10] [i_0]) ^ (arr_9 [i_0] [i_0] [i_3 - 1]))) - 967760016))));
        }
    }
    for (int i_6 = 2; i_6 < 9;i_6 += 1)
    {
        var_25 = var_2;
        var_26 = (min(((~((58 ? (arr_18 [0]) : var_10)))), ((-((~(arr_3 [i_6] [i_6])))))));
        var_27 = ((+((min((!65524), (!var_11))))));
        var_28 = ((((~((4096089442 << (((arr_7 [3] [i_6]) - 1272339581)))))) ^ ((max((min(var_8, (arr_3 [i_6] [i_6]))), ((246 ? var_2 : (arr_19 [i_6] [i_6]))))))));
    }
    var_29 = ((((((min(-55, 1))) ? (((-127 - 1) ? 13340 : var_11)) : (max(var_6, var_10)))) ^ ((max((var_9 <= 198877854), var_4)))));
    #pragma endscop
}
