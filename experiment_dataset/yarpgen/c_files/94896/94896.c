/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94896
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 8;i_3 += 1)
                {
                    {
                        var_11 = ((var_0 ? (arr_8 [i_0] [i_1] [i_2] [i_3]) : ((((arr_7 [i_0] [i_3]) != 1)))));
                        var_12 = ((((var_4 ? var_4 : 43456)) % (((arr_7 [i_0] [i_0]) + (arr_4 [2])))));
                        var_13 = (arr_8 [i_0] [i_1] [i_3 + 2] [i_0]);
                        arr_12 [2] &= (arr_8 [i_0] [i_1] [i_2] [i_3 + 3]);
                        var_14 += var_0;
                    }
                }
            }
            var_15 = ((!(arr_7 [i_0] [i_1])));
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_16 = (max(var_16, 47225));
            var_17 = var_7;

            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                var_18 = (((max(0, (arr_1 [i_0] [i_5])))));
                var_19 *= ((~((var_10 / ((~(arr_9 [i_0] [i_0] [i_5] [i_5])))))));
            }
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {

                for (int i_7 = 2; i_7 < 10;i_7 += 1)
                {
                    var_20 = (arr_10 [i_7] [i_4] [i_6] [i_7]);
                    var_21 = (((((!89) ? var_2 : ((var_6 ? (arr_11 [i_6] [i_6] [i_6] [i_0]) : var_7)))) != (15 && 2305843009213169664)));
                }
                arr_23 [i_0] [i_0] [i_6] = ((!(((((arr_16 [i_0] [i_0] [i_0] [5]) ? var_1 : var_4))))));
                var_22 ^= (((!0) ? ((~((max((arr_11 [i_6] [i_6] [i_4] [1]), 28044))))) : (((((arr_11 [i_0] [i_0] [i_0] [i_0]) ? var_1 : 825965056))))));
            }
        }
        arr_24 [i_0] [3] = ((var_7 ^ (((((var_10 ? var_2 : 20804)) == ((max((arr_0 [i_0]), (arr_19 [i_0] [i_0] [i_0] [i_0])))))))));
    }
    for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
    {
        arr_27 [i_8] [i_8] = var_2;
        var_23 = ((max(var_1, ((var_6 ? 1152358554653425664 : 164)))));
        arr_28 [i_8] |= ((((max(var_0, var_3))) > var_3));
    }
    for (int i_9 = 2; i_9 < 10;i_9 += 1) /* same iter space */
    {
        arr_31 [i_9 + 2] [i_9] = (arr_29 [i_9 + 3] [i_9]);
        var_24 = ((!(arr_30 [i_9])));
    }
    for (int i_10 = 2; i_10 < 10;i_10 += 1) /* same iter space */
    {
        var_25 = (arr_33 [i_10 + 4] [i_10 + 2]);
        var_26 -= ((20804 ? (arr_30 [i_10 + 3]) : ((((((arr_29 [7] [i_10]) ? 12835 : var_6)))))));
        var_27 = (((((((arr_32 [i_10] [i_10]) / -191009778185580363)))) ? ((-(arr_32 [i_10 - 2] [i_10 + 3]))) : 0));
        var_28 = (1 ? 0 : -30794);
    }
    var_29 *= var_2;
    #pragma endscop
}
