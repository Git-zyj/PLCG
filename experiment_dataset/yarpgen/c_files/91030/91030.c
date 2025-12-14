/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((min(var_2, (min(var_15, var_2))))) ? (~var_12) : 9223372036854775807));
    var_18 = ((((min(((var_7 ? var_4 : var_3)), 2147483520))) || (((((var_1 + 2147483647) << (((var_5 + 271518012) - 12))))))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0] = 670405149;
        arr_5 [i_0] = ((((((!(-9223372036854775807 - 1))) ? ((((!(arr_1 [i_0]))))) : (((arr_2 [i_0] [1]) ^ 1)))) * 1));
        var_19 += (670405149 ? ((((min(670405149, (arr_2 [i_0] [0])))) ? ((((arr_2 [i_0] [i_0]) <= (arr_0 [i_0])))) : (arr_2 [i_0] [i_0]))) : ((((11041319299581780303 * (arr_0 [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
        {
            arr_10 [i_2] = ((!(arr_3 [i_1])));
            arr_11 [i_2] = (0 <= 131070);
            var_20 = (((1 * 670405153) ? 1 : (((arr_6 [6]) ? (arr_0 [i_2]) : (arr_2 [i_1] [14])))));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 4; i_5 < 9;i_5 += 1)
                    {
                        {
                            var_21 *= (arr_9 [i_3]);
                            var_22 = ((((!(arr_12 [i_1] [i_1]))) ? 670405158 : (((arr_1 [i_2]) ? 131070 : (arr_1 [i_2])))));
                        }
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
        {
            var_23 = ((((((arr_8 [i_1] [i_6]) ? 1 : (arr_1 [i_6])))) ? (!1) : (((arr_13 [i_1] [i_1] [i_6] [0]) ? (arr_6 [i_1]) : (arr_1 [i_6])))));
            var_24 = (arr_6 [i_6]);

            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                var_25 = (arr_21 [i_7] [i_1] [i_1]);
                var_26 = -99;
            }
            var_27 = ((((((arr_13 [i_1] [i_1] [i_6] [i_6]) ? 131070 : (arr_6 [i_6])))) ? (((arr_20 [i_1] [i_6]) ? (arr_14 [i_6] [i_1]) : (arr_13 [i_1] [i_1] [i_1] [i_6]))) : (arr_13 [1] [1] [1] [i_6])));
        }
        arr_23 [i_1] = ((-670405158 ? ((~(arr_3 [i_1]))) : ((((arr_12 [i_1] [i_1]) - 1424)))));

        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            arr_26 [i_8] [i_1] = (arr_17 [i_8] [i_8] [i_8] [i_1] [i_1]);
            arr_27 [i_1] = ((((((arr_13 [i_1] [i_8] [i_8] [i_8]) ? (arr_22 [i_1] [i_8]) : (arr_18 [i_1] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])))) <= (arr_6 [i_1])));
            arr_28 [i_1] [3] = (((!16) == (arr_14 [i_1] [i_8])));
            var_28 = ((-27384 * (!43)));
        }
    }
    var_29 = ((((1 ^ (~32756)))) ? ((min(((max(var_14, var_9))), ((5619122811572938260 ? var_9 : var_11))))) : ((-493 ? ((3924804822 ? 991201076884829444 : var_1)) : 121)));
    #pragma endscop
}
