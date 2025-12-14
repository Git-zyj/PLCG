/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66662
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += 2147483647;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0 - 1] = (((arr_1 [i_0]) / (arr_2 [i_0 + 2])));
        var_18 = (((arr_2 [i_0 + 3]) ? 697734439 : (arr_2 [i_0 + 1])));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
        {
            arr_10 [i_1] [1] = 1;
            var_19 = 1120111033332807084;
        }
        for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
        {
            var_20 &= (min((((arr_7 [i_1] [i_3] [i_3]) + (arr_7 [i_1] [i_1] [i_3]))), var_8));

            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                var_21 = (min(var_21, ((((-1 + 2147483647) >> (((max((((-2147483629 ^ (arr_4 [i_3])))), ((8388607 % (arr_9 [8] [6]))))) - 2212823557)))))));
                var_22 = max(8064, 32767);
            }
            for (int i_5 = 3; i_5 < 18;i_5 += 1)
            {
                var_23 = (((!1) && (arr_16 [i_3] [i_5 + 1])));
                var_24 = (((((var_1 ? ((min(1, (arr_5 [i_1])))) : var_4))) && (arr_17 [i_5 - 2] [i_5] [i_5 - 1])));

                for (int i_6 = 3; i_6 < 19;i_6 += 1)
                {
                    arr_21 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] &= 67108860;
                    var_25 = (max(var_25, (((((max((((var_7 ? 8068 : var_5))), (((arr_12 [i_1]) ? (arr_12 [i_3]) : (arr_9 [i_5] [i_6])))))) ? (((arr_14 [i_5 - 2] [i_5] [i_5 + 1] [i_5 - 2]) ? (18230 / 1) : (arr_11 [i_1]))) : (((151 << ((((4294967295 - (arr_14 [5] [13] [1] [i_6]))) - 4294967291))))))))));
                }
                for (int i_7 = 1; i_7 < 20;i_7 += 1)
                {
                    arr_24 [i_1] [2] [i_7 - 1] [i_3] &= 255;
                    var_26 += min((((18446744073709551610 >= ((18446744073709551615 ? var_14 : 1606839396884195068))))), (((arr_6 [i_5 - 3] [i_5 - 1] [i_5 + 1]) ? (((arr_9 [i_1] [i_1]) ? var_1 : 6)) : ((min(0, 138))))));
                    var_27 = -2147483619;
                }
                arr_25 [i_5] [7] [i_5] = (arr_12 [i_1]);
            }
        }
        var_28 = (min(var_28, ((((arr_22 [i_1]) / (arr_22 [i_1]))))));
        var_29 = (max(var_29, (((32767 ? -2147483629 : 32767)))));
        arr_26 [18] = (max(1, (((arr_23 [i_1] [i_1] [18] [i_1] [i_1] [i_1]) ? 32767 : (arr_17 [i_1] [i_1] [i_1])))));
    }
    var_30 = var_12;
    #pragma endscop
}
