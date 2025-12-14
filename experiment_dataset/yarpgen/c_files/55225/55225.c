/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
        {
            var_19 = (min(var_19, 2565536169653153353));
            arr_4 [i_1] &= (((~(arr_3 [i_0] [i_1] [i_0]))));
            var_20 -= ((((arr_1 [i_1] [i_1]) >> (((arr_2 [i_0] [i_0]) - 3577575493)))));
        }
        for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                var_21 = (((((min(-28646, (arr_8 [i_0] [i_2] [i_0] [i_0])))) ? (arr_0 [i_0] [i_2]) : var_2)));
                var_22 = (min(var_22, ((((((+((-755165883 ? (arr_10 [i_2] [12] [i_2]) : (arr_5 [i_3])))))) ? (min(((~(arr_3 [i_0] [i_2] [i_3]))), ((max(229, var_5))))) : 28653)))));
            }
            var_23 = (max(var_23, ((((arr_9 [i_0] [i_2] [2]) ? (min((arr_5 [i_2]), 18400289420011558653)) : 65535)))));
        }
        for (int i_4 = 1; i_4 < 16;i_4 += 1)
        {
            var_24 += (((~(arr_12 [i_0]))));
            var_25 -= (70368475742208 >= 46454653697992963);
            var_26 = (((arr_12 [i_0]) ? (min((((arr_1 [i_0] [i_4]) ? var_16 : 1683626286236111745)), (arr_11 [i_0] [i_4 + 1]))) : ((((((max((arr_13 [i_0]), var_18))) || ((((arr_3 [i_0] [i_0] [i_0]) ? 1564749367 : (arr_2 [i_0] [i_4]))))))))));
            var_27 = (min(var_27, ((max(((((arr_7 [i_4] [i_4 + 1] [i_4 + 1]) || (arr_7 [i_4] [i_4 - 1] [i_0])))), ((~(arr_2 [i_4 - 1] [i_4 + 1]))))))));
            var_28 = (min(var_28, ((((((((min(755165860, 469762048))) ? (min(2, 28662)) : (((min(-28640, 24993))))))) ? (((arr_10 [14] [i_4 + 1] [14]) ? (arr_8 [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_4 - 1]) : (arr_8 [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_4 - 1]))) : (max(((-(arr_8 [i_0] [i_0] [i_0] [i_0]))), ((max((arr_0 [8] [8]), (arr_2 [2] [i_0])))))))))));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            arr_17 [i_0] = (((arr_2 [i_0] [i_5]) || (arr_2 [i_0] [i_5])));
            var_29 = (max(var_29, -28634));
            var_30 = (arr_7 [i_0] [i_5] [i_5]);
            var_31 = 755165874;
        }
        var_32 = min(((((((~(arr_0 [i_0] [i_0])))) ? 65535 : 1389))), ((-(arr_10 [i_0] [i_0] [i_0]))));
    }
    var_33 = ((!((((var_3 % var_10) ? ((var_11 ? var_13 : 18400289420011558634)) : (((var_15 ? var_11 : var_2))))))));
    var_34 = var_9;

    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        arr_20 [i_6] = (((arr_16 [i_6]) ? ((((arr_1 [i_6] [i_6]) ? 1 : (arr_1 [i_6] [i_6])))) : (min((arr_1 [i_6] [i_6]), (arr_2 [i_6] [i_6])))));
        arr_21 [i_6] [i_6] = ((+(((arr_16 [i_6]) ? (arr_10 [i_6] [i_6] [i_6]) : (arr_16 [i_6])))));
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 10;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 10;i_8 += 1)
            {
                {
                    var_35 -= -14;
                    var_36 = (min(var_36, var_16));
                }
            }
        }
    }
    #pragma endscop
}
