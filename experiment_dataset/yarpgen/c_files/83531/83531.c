/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83531
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, ((((-43 ? 16380 : 1))))));

    for (int i_0 = 1; i_0 < 13;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_18 = (min(var_18, ((max(((min((arr_3 [i_2]), (arr_1 [i_0 - 1] [i_2])))), (max(7106, ((var_6 + (arr_1 [i_0] [i_1]))))))))));
                    arr_11 [i_0] = max(0, 6);
                }
            }
        }

        for (int i_3 = 1; i_3 < 10;i_3 += 1)
        {
            var_19 = (max(var_19, (arr_0 [i_0])));
            var_20 = ((-2404509961714412725 ? 768 : -2404509961714412725));
        }
    }
    for (int i_4 = 1; i_4 < 13;i_4 += 1) /* same iter space */
    {
        arr_18 [i_4] = (~-22);

        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            var_21 = (min((((8497 && -21137) <= ((((arr_20 [i_4 + 1]) != (arr_17 [i_4] [i_4])))))), ((!(arr_1 [i_4 + 1] [i_4 + 1])))));
            var_22 -= (3248147382424045134 < 16320);
        }
        /* vectorizable */
        for (int i_6 = 2; i_6 < 13;i_6 += 1)
        {
            var_23 = (((10 * 18446744073709551615) ? ((var_13 ? 11 : var_9)) : (arr_1 [i_4] [i_6 + 1])));
            arr_24 [i_4] [i_4] = (~(arr_9 [i_6 - 1] [i_6 - 1] [0]));
        }
        var_24 = var_10;
        var_25 = (min(var_25, (((1 || (arr_6 [i_4] [i_4]))))));
    }
    for (int i_7 = 1; i_7 < 11;i_7 += 1)
    {
        var_26 = ((((((arr_8 [i_7 + 1] [i_7] [i_7] [i_7 - 1]) ^ 2147418112))) >= ((-25141 ? 18446744073709551614 : 1))));
        var_27 -= ((((((((arr_9 [i_7 - 1] [i_7 + 3] [i_7 + 3]) ? (arr_19 [i_7]) : var_10))) ? var_12 : (var_1 - var_5))) << 1));

        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {

            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {

                /* vectorizable */
                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    var_28 -= 18446744073709551605;
                    arr_37 [i_8] [i_8] [i_8] = (arr_5 [i_7 + 3] [3] [i_10]);
                }
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    var_29 -= (((arr_26 [i_7 + 3] [i_8]) & (min((arr_5 [i_7 + 1] [i_8] [i_9]), (arr_5 [i_7] [i_8] [i_9])))));
                    var_30 -= (min((((var_2 || ((var_0 <= (arr_28 [i_9])))))), ((((!(arr_10 [i_7] [i_9] [i_9] [i_11]))) ? (var_13 ^ 12176) : 1))));
                    arr_41 [i_7] [i_7] [i_7] [i_11] [i_7] [i_7] = (min(((-(arr_36 [i_7] [i_7 + 3] [i_7 + 3] [5] [i_7]))), (arr_19 [i_7])));
                }
                var_31 -= (0 / 14288);
                arr_42 [10] [10] [10] [10] = ((((max(((max(1, (arr_35 [i_9] [i_9] [i_9])))), (min(-1843818805, var_12))))) ? (min(7, -1053746571)) : (~-1008843322)));
            }
            var_32 = (((((var_11 ? (230 >= -1) : (arr_28 [i_7 + 2])))) || (((((((arr_15 [10] [1]) ? (arr_32 [i_8] [i_8]) : (arr_20 [i_7])))) ? var_14 : (arr_38 [i_7] [i_7] [i_7] [i_7] [i_7] [11]))))));
            var_33 = (~var_14);
        }
        for (int i_12 = 3; i_12 < 10;i_12 += 1)
        {
            arr_45 [i_7 + 2] = (((((arr_28 [i_7 + 2]) ? -18446744073709551607 : (arr_44 [i_7 + 2] [i_7 + 1] [i_12 - 3])))) ? (arr_39 [i_12]) : ((~(arr_8 [i_7] [i_7 + 1] [i_12 - 2] [i_7 + 1]))));
            var_34 = (min(var_34, ((((min((!224), 20)) >> (min(11, 2139095040)))))));
            arr_46 [i_7 + 3] = var_5;
        }
        arr_47 [i_7] [i_7] = ((!(((((arr_9 [i_7] [1] [i_7]) ? (arr_16 [i_7]) : (arr_43 [i_7] [i_7] [i_7 - 1])))))));
    }
    var_35 -= (var_5 / var_10);
    #pragma endscop
}
