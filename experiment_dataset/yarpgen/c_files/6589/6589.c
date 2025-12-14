/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_10 = (min(var_10, (((((min(-1949377575, var_2))) * (min((min((arr_3 [i_2] [i_0] [i_0]), var_5)), -var_8)))))));

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {

                        for (int i_4 = 1; i_4 < 14;i_4 += 1) /* same iter space */
                        {
                            var_11 = (max(var_11, 6144));
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (2968365634 % (min((arr_13 [i_0]), 1326601634)));
                        }
                        for (int i_5 = 1; i_5 < 14;i_5 += 1) /* same iter space */
                        {
                            var_12 = (min(var_12, (((-var_6 ? var_8 : (arr_16 [i_0] [i_0] [i_0]))))));
                            var_13 -= var_7;
                            arr_20 [i_1] [i_0] [1] [5] [i_5 - 1] = ((min((var_8 * 0), 1994033011)));
                            arr_21 [i_0] [i_1 - 1] [11] [i_3] [i_5 + 1] [i_2] = ((~(arr_5 [i_0 + 1] [3] [i_5 + 1])));
                        }

                        for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
                        {
                            var_14 = (min(var_14, ((((min((arr_23 [2] [i_1 + 2] [i_1 + 1] [i_1] [i_1 + 1]), (arr_16 [i_1 + 3] [i_1] [i_0 - 1])))) ? (arr_4 [i_1 + 2] [6]) : var_6))));
                            var_15 = (((arr_19 [i_6] [i_0] [i_3] [i_3] [i_2] [i_0] [i_0]) ? (min(((min(var_2, -1))), -var_3)) : ((((min((arr_6 [i_0] [i_0] [i_0 - 1] [i_0 + 1]), (arr_23 [i_0] [i_1 + 4] [1] [1] [i_1 + 4])))) ? (arr_3 [i_1] [i_2] [i_2]) : var_3))));
                        }
                        for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
                        {
                            var_16 -= (min((((((arr_4 [i_0] [12]) ? var_7 : (arr_17 [i_1 + 2]))))), (min(var_9, (arr_3 [i_1] [i_1 + 4] [i_1])))));
                            var_17 -= var_4;
                        }
                        arr_28 [11] [i_0 + 1] [11] [14] [i_0] = ((((min((arr_18 [i_0 + 1] [i_1 + 1]), (arr_25 [i_0] [i_1 + 4] [i_1 + 4] [i_0 - 1] [i_3] [i_3] [i_0 + 1])))) ? 1 : (arr_25 [i_0 + 1] [i_2] [i_1 + 2] [i_0 - 1] [i_0] [i_3] [i_3])));
                        var_18 -= (min(1, var_9));
                    }
                    var_19 -= (((min((arr_18 [12] [i_1]), 4138083465560722504)) / (arr_18 [i_1 + 3] [1])));
                }
            }
        }
    }
    var_20 = (min((((((min(4138083465560722504, var_7))) || var_9))), ((var_4 ? var_8 : var_8))));

    for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
    {
        arr_33 [i_8] = ((!(((((var_3 ? (arr_25 [i_8] [i_8] [i_8] [i_8] [6] [i_8] [i_8]) : 1))) || ((!(arr_8 [i_8] [i_8])))))));
        arr_34 [i_8] = (min((((var_3 > var_6) + (arr_25 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]))), (((arr_8 [i_8] [i_8]) * (((!(arr_8 [i_8] [i_8]))))))));
        var_21 -= var_9;
    }
    for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
    {
        arr_37 [i_9] [i_9] = (min((((-var_0 ? ((min(106, 1))) : 1291558912))), (min(((min(-902746620, 1714362725))), 18446744073709551604))));
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 10;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 10;i_11 += 1)
            {
                {
                    var_22 = (min(var_22, ((((((min(-22, (-32767 - 1))))) * (min((arr_18 [i_9] [i_10]), var_5)))))));
                    var_23 = (((-(arr_22 [i_9] [i_10] [i_11]))));
                }
            }
        }
        arr_45 [i_9] = ((-(((arr_12 [i_9] [i_9] [i_9] [i_9] [i_9] [13] [i_9]) ? (arr_12 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]) : (arr_12 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [4])))));
    }
    for (int i_12 = 0; i_12 < 1;i_12 += 1)
    {
        var_24 = (min(var_24, (((arr_25 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] [i_12]) && ((min(var_4, (arr_25 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] [i_12]))))))));
        arr_48 [9] = ((14308660608148829112 ? 1 : 13529));
    }
    var_25 = (min(var_25, (((var_4 ? (min(266261501, var_9)) : ((min(var_9, (min(var_9, var_2))))))))));
    #pragma endscop
}
