/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            var_13 = var_7;
            var_14 = 66;
            var_15 = (max(var_15, (((((max(var_11, (((-9223372036854775807 - 1) ? var_8 : var_0))))) ? (arr_1 [i_1]) : (((((var_2 ? var_5 : (arr_3 [17])))) ? var_3 : var_4)))))));
        }
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            arr_10 [1] [1] = (arr_7 [i_0]);

            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                arr_13 [i_0] [i_2] [i_2] [i_2] = min((((var_10 ? (arr_0 [7] [i_2]) : (arr_7 [i_0])))), ((var_2 ? (var_11 * var_2) : -var_5)));

                /* vectorizable */
                for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
                {
                    var_16 = (max(var_16, var_5));
                    var_17 = ((31475 << (arr_2 [i_0] [i_0])));
                }
                for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
                {
                    var_18 = (max(var_18, (((((((var_10 != (var_3 / var_7))))) < (max(var_5, (189 == 1073741823))))))));
                    var_19 += (arr_11 [i_0] [i_2]);
                }
                arr_19 [i_0] [i_2] [i_3] = ((var_10 ? (arr_7 [15]) : ((-(arr_11 [i_0] [i_2])))));
            }
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                var_20 ^= ((-18070 ? (228 * 63) : ((max(var_11, var_4)))));
                arr_23 [i_0] [i_0] [i_6] &= (~-18053);
                arr_24 [i_2] = (((((((max(var_6, 5857431970991403063)) >= var_11)))) * (max(var_5, var_12))));
            }
        }
        for (int i_7 = 2; i_7 < 17;i_7 += 1)
        {
            arr_28 [i_7] [15] [i_0] = ((((((4515 * 2432062961) ? ((min(var_7, var_7))) : (arr_27 [10])))) ? var_2 : (((var_1 ? (((arr_6 [i_0] [i_7 - 1] [i_7 - 1]) ? var_7 : var_4)) : (arr_27 [i_7 - 2]))))));

            for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
            {
                var_21 = (var_8 * var_9);
                arr_32 [i_8] [0] = ((((arr_7 [i_8]) ? var_1 : (max((arr_15 [i_0] [i_7 + 1] [i_8] [i_7] [i_8]), (arr_6 [i_0] [i_7] [9]))))));
                arr_33 [12] [i_7] [12] = (((arr_16 [7] [7] [0] [i_7 - 2] [i_7 + 2]) ? var_10 : (min((((arr_12 [i_0] [15] [i_0]) ? var_9 : (arr_21 [12]))), var_1))));
            }
            for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
            {
                var_22 = (max(var_22, ((min(((min(var_10, var_11))), var_0)))));
                var_23 = (arr_20 [i_0] [i_0] [i_9]);

                for (int i_10 = 0; i_10 < 19;i_10 += 1)
                {
                    var_24 &= ((-(((arr_20 [i_0] [i_7] [i_9]) ? (max((arr_9 [i_0]), var_12)) : var_2))));
                    arr_41 [i_0] [i_0] [i_7] [i_9] [i_10] = 24965;
                }
            }
        }
        arr_42 [i_0] = var_1;
        var_25 = (((((arr_26 [i_0]) + (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
    }
    for (int i_11 = 0; i_11 < 19;i_11 += 1) /* same iter space */
    {
        arr_45 [i_11] = ((!(arr_11 [i_11] [i_11])));
        arr_46 [i_11] [i_11] &= (arr_3 [i_11]);
        var_26 = (arr_1 [i_11]);
        arr_47 [1] [i_11] = (arr_5 [i_11]);
        var_27 ^= (min(((~((1 ? -4516 : 43)))), ((var_5 ? (arr_36 [i_11] [1] [i_11] [4]) : 255))));
    }
    var_28 = (max(var_7, ((var_0 ? var_4 : (((var_4 ? var_10 : var_3)))))));
    var_29 ^= var_0;
    #pragma endscop
}
