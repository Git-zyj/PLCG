/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((~(((!(1 / var_9))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            arr_5 [1] [i_0] [i_1] = (arr_1 [i_1 + 1] [i_1 + 1]);
            arr_6 [i_1] = -5348;
            var_20 = ((~(arr_2 [i_1 + 1] [i_1 + 1] [i_1 + 2])));
            arr_7 [i_0] [i_1 + 2] = 6397451015982223953;
            arr_8 [i_0] = (((arr_4 [i_0] [i_0] [i_1 + 3]) && (arr_1 [i_1] [i_1 + 2])));
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            arr_11 [i_0] [i_0] [i_2] = (((((((-24618 | (arr_3 [i_0] [i_0])))) != 1854616205005457220)) ? ((1 * (arr_3 [1] [1]))) : (arr_3 [i_0] [i_2])));
            var_21 = 5327;
            var_22 ^= ((((((arr_10 [i_0] [i_0] [i_0]) == -5317))) <= ((((5323 && (arr_10 [i_0] [3] [i_0]))) ? var_16 : var_4))));
            arr_12 [i_2] = 18435375920540017738;
        }
        /* LoopNest 3 */
        for (int i_3 = 3; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    {

                        for (int i_6 = 1; i_6 < 23;i_6 += 1)
                        {
                            var_23 = 9477;
                            var_24 = ((!((((arr_19 [i_0] [i_3] [i_4] [i_5] [i_0] [i_5] [i_6 + 1]) << (arr_19 [i_0] [i_3] [i_3] [i_4] [i_4] [i_4] [i_6 + 1]))))));
                            var_25 = ((5348 || (arr_2 [i_0] [i_3 - 3] [i_4])));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
                        {
                            var_26 = (max(var_26, (((21938 <= (arr_2 [i_0] [i_3] [i_3 + 1]))))));
                            arr_23 [i_7] [i_5] [i_5] [i_5] [i_3] [i_0] [i_0] = (((arr_0 [i_5] [i_4]) <= (arr_14 [i_3 - 2])));
                            var_27 = 38823;
                        }
                        for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
                        {
                            var_28 = ((((arr_21 [i_0] [i_3 - 3] [i_5]) * -8333)));
                            arr_27 [i_5] [i_3 - 2] [i_4] [i_5] [i_8] = -8311;
                            arr_28 [i_0] [2] [i_5] [i_4] [i_4] [i_5] [i_8] = ((-5317 * (!1)));
                            arr_29 [i_8] [0] [i_5] [11] [i_5] [i_0] [i_0] = ((~((3409534674 * ((((arr_26 [i_0] [i_8] [i_5] [i_4] [i_3] [i_0] [i_0]) * 1)))))));
                        }
                        for (int i_9 = 1; i_9 < 20;i_9 += 1)
                        {
                            var_29 = (arr_13 [i_3 - 2]);
                            var_30 = (!1);
                        }
                        arr_32 [i_0] [i_3] [i_4] [i_5] |= ((((arr_10 [1] [i_0] [i_0]) ? (arr_30 [4] [i_3 - 3] [i_0] [i_0] [i_0]) : (arr_10 [1] [i_3] [i_3]))) > ((((!(arr_15 [i_0] [13]))))));
                    }
                }
            }
        }
        var_31 = ((((-110 & -5317) | (var_7 & var_17))) & ((((var_10 | 1) | (106 | 7877)))));
        var_32 = (((2136 ^ (arr_4 [i_0] [i_0] [i_0]))));
        var_33 = ((!(((!635756671072268100) != (62 <= 18)))));
    }
    var_34 = -1;
    #pragma endscop
}
