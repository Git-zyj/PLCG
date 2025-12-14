/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81184
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= var_4;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_15 = (min(var_15, ((((3047160883 ? 28487 : 1977422281086316675))))));
        arr_3 [i_0] = arr_2 [i_0];
    }
    for (int i_1 = 4; i_1 < 22;i_1 += 1)
    {
        var_16 ^= ((min(212, (arr_4 [i_1]))));
        var_17 = (18446744073709551589 * -1880970482498474291);
        var_18 |= 43;

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                var_19 = (min(((((var_2 ? 51841 : (arr_9 [i_1 + 2] [i_1]))))), (((arr_4 [i_3]) ? 18446744073709551589 : (arr_10 [i_1] [i_1] [i_1] [i_1])))));
                var_20 = (max(((max((arr_8 [i_1 - 2] [i_1 - 2] [i_1 - 1]), 102959349))), ((56 ? (((225 ? -24 : 5736))) : (arr_4 [i_3])))));
            }

            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                var_21 = ((((min(-121, (arr_13 [i_1 - 1] [i_1 + 2] [i_1 + 2])))) ? (((arr_6 [i_1 - 4]) ? (arr_6 [i_1 + 2]) : (arr_9 [i_1 + 2] [i_1 + 1]))) : (((arr_6 [i_1 - 2]) ? (arr_6 [i_1 + 3]) : (arr_13 [i_1 + 1] [i_1 + 2] [18])))));
                arr_15 [i_2] = 59822;
                arr_16 [i_1] [i_2] [i_4] = (((arr_9 [i_1] [1]) - (min(5736, ((var_6 ? (arr_12 [i_1] [i_2] [i_4] [21]) : (arr_4 [i_1])))))));
                arr_17 [i_2] = (((((((min(-2, (arr_12 [i_1] [i_1] [i_2] [i_4])))) ? (((arr_11 [i_1] [i_1]) ? var_12 : (arr_8 [i_1 - 2] [i_1 + 2] [7]))) : (((!(arr_7 [i_1]))))))) ? 20326 : (arr_14 [i_1] [i_2] [15] [i_4])));
            }
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                var_22 *= (((((5736 ? (((arr_18 [i_1]) ? var_6 : (arr_5 [18] [i_2]))) : 194))) ? (min((arr_13 [i_1] [i_1 - 1] [i_1 - 1]), (arr_9 [i_1 - 3] [i_1 - 4]))) : (max(((var_2 ? (arr_8 [i_1] [i_1] [i_1]) : -8684857)), (arr_14 [i_1 + 2] [i_1 - 3] [i_1 - 3] [i_1 - 2])))));
                arr_20 [i_1] = ((((min(2563395967, 36476)))));
                arr_21 [i_2] [i_2] [i_2] = (((65500 ? -28 : ((~(arr_4 [i_1]))))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 21;i_7 += 1)
                    {
                        {
                            var_23 = (max(var_23, ((((arr_5 [2] [i_1 - 4]) ? (arr_8 [i_2] [i_2] [i_6]) : (max((((arr_26 [i_5]) ? 5713 : var_6)), ((min(80, 198))))))))));
                            var_24 -= 591128208;
                        }
                    }
                }
            }
            arr_29 [i_1 - 1] [i_1 - 1] [i_2] = (min((!var_8), (min(((min(87, -2610))), 0))));
            var_25 = (((((var_7 ? ((199 ? (arr_25 [i_2] [i_2] [i_1] [i_1] [12]) : var_2)) : ((((var_7 == (arr_11 [i_1 + 3] [i_2])))))))) ? (min(591128199, 1731571329)) : -1522818999));
            var_26 = (max(var_26, (((-18513 ? 0 : (arr_7 [i_2]))))));
        }
    }
    #pragma endscop
}
