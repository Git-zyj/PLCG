/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((((-169 ? ((max(var_5, (arr_0 [i_0])))) : (arr_0 [i_0])))) ? (~2335792436) : 18446744073709551615));
        var_19 = ((+(((arr_2 [i_0]) / (arr_1 [i_0])))));
        arr_4 [8] [8] = 201;
        var_20 = (max(var_20, ((((((var_15 || var_12) ? (arr_2 [i_0]) : ((((arr_2 [i_0]) && var_2))))) << (((!(((arr_2 [i_0]) <= var_13))))))))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_21 = (min(32692, (arr_6 [i_1])));

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            arr_10 [i_1] = ((+(((15202 * var_16) / ((min(104, 513207230)))))));
            arr_11 [i_1] = (arr_1 [i_1]);
        }
        /* vectorizable */
        for (int i_3 = 2; i_3 < 9;i_3 += 1)
        {
            var_22 -= ((-((-(arr_12 [i_1] [i_1] [i_1])))));
            arr_15 [i_1] [i_3 + 1] = (((arr_12 [i_3 - 1] [i_3 + 1] [i_3 - 2]) ? ((((arr_12 [i_1] [i_1] [i_3 + 2]) >= 748))) : (!-931625757)));
            arr_16 [i_1] [i_3] = ((15778005472063137664 ? (arr_13 [1] [i_1] [i_3 - 2]) : var_1));
            var_23 = (((-23173 + 2147483647) << (arr_13 [i_3 - 1] [i_3 - 1] [9])));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    {
                        var_24 -= ((!(var_13 - var_14)));
                        arr_22 [i_1] [i_1] [i_1] [i_1] [i_4] = 32767;
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 9;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 7;i_8 += 1)
            {
                {
                    var_25 = (((((arr_13 [i_7] [i_8] [i_7 - 1]) ? 70 : (arr_13 [i_6] [i_6] [i_7 - 1]))) == ((((arr_13 [i_6] [0] [i_7 + 1]) && (arr_13 [i_8 + 2] [2] [i_7 + 1]))))));
                    arr_30 [i_7] = (((((+((12602 ? (arr_13 [i_6] [3] [i_8 + 2]) : var_11))))) ? ((((max(var_6, var_11))) ? (((arr_5 [i_6]) ? var_3 : (-127 - 1))) : (((0 ? 68 : 2147483647))))) : var_6));
                }
            }
        }
    }
    var_26 = 85;
    #pragma endscop
}
