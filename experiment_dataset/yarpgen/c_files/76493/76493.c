/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76493
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_9;
    var_11 = (((min(((3146487345969696327 ? 834024543 : 2147483647)), (175457875 && -2608967882178374105)))) - var_8);

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_0 [i_0]);
        arr_3 [14] |= 230982271;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_12 = (arr_6 [i_1] [i_0 + 3]);
            var_13 = ((var_2 ? (arr_1 [i_0 + 4]) : ((var_3 ? -1050336453 : 17592186044415))));
        }
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            arr_9 [i_0] [i_0] = (arr_1 [i_0]);

            for (int i_3 = 1; i_3 < 20;i_3 += 1) /* same iter space */
            {
                arr_13 [i_3 + 1] [i_3] [i_3] [i_0] = (max((arr_7 [i_2]), -1));
                var_14 = (((+((-1828435731101642658 ? (arr_7 [i_2]) : var_2)))));
                arr_14 [i_0] [i_2] [i_3] = (arr_5 [i_0]);
            }
            /* vectorizable */
            for (int i_4 = 1; i_4 < 20;i_4 += 1) /* same iter space */
            {
                var_15 = (((((var_8 - (arr_5 [i_0]))) + 9223372036854775807)) << (((arr_1 [i_4 + 1]) - 4087394976549049871)));

                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    var_16 = (max(var_16, (arr_12 [i_5] [i_2] [i_5])));
                    arr_22 [i_0] [i_0] [i_4 + 1] [i_5] = ((0 ? ((-5842017182832456830 ? -3791360846572069330 : (arr_10 [i_0] [i_2] [i_4]))) : ((0 ? var_1 : (arr_7 [i_0 + 2])))));
                    arr_23 [i_0] = (arr_8 [i_0] [i_5]);
                    var_17 = (((arr_16 [i_0] [i_0] [i_0]) < 16321148582437534989));
                }
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    arr_27 [i_0] [i_2] [i_4] [i_0] = var_6;
                    var_18 = ((~((-1864369761 + (arr_26 [i_6] [i_2])))));
                }
                arr_28 [i_0] [i_0] [i_4] = (((arr_4 [i_0] [i_4 + 2]) ? (arr_20 [i_0] [i_0] [i_0] [i_0]) : -57203));
                var_19 = ((((((arr_12 [i_0] [i_0] [i_4]) <= 1893546115))) ^ (((!(arr_18 [i_2] [i_2] [i_2] [i_2]))))));
            }
        }
    }
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        var_20 = (arr_31 [i_7]);
        var_21 = ((var_8 ? (max(-var_6, ((var_9 ? (arr_31 [i_7]) : 1)))) : (arr_30 [i_7])));
    }
    for (int i_8 = 0; i_8 < 12;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 2; i_9 < 10;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                {

                    for (int i_11 = 0; i_11 < 12;i_11 += 1)
                    {
                        arr_44 [i_9] [i_10] = (min((((arr_16 [i_9 + 1] [i_9 + 1] [i_9 - 1]) << (((arr_16 [i_9 + 1] [i_9 - 1] [i_9 - 2]) - 5855489495566136455)))), (((3377633858 ? (arr_19 [i_8] [i_8] [i_9] [i_9] [i_9] [i_9 - 2]) : (arr_19 [i_8] [i_8] [i_9] [i_9 + 2] [i_9 + 2] [i_9 + 1]))))));
                        var_22 |= ((((min(var_4, (((8848279435855635739 ? -5 : 1)))))) || ((((!4294967295) ? (min(-668466746, 960276130)) : (arr_0 [i_8]))))));
                    }
                    for (int i_12 = 0; i_12 < 12;i_12 += 1)
                    {
                        arr_48 [i_8] [i_8] [i_9] [i_8] = (arr_41 [i_8] [i_9] [i_10]);
                        var_23 = ((((~((24861 ? (arr_34 [i_10] [i_12]) : -2143263177679574838))))) ? ((1 | ((max(var_7, (arr_12 [i_9] [i_9] [i_10])))))) : (arr_20 [i_9] [i_9] [i_9] [i_9 + 2]));
                        var_24 = (((-449821602 ? var_7 : (arr_32 [i_9 - 2]))));
                    }
                    var_25 = ((!((min((min(var_5, -8853851572143055091)), (arr_4 [i_9] [i_9]))))));
                    arr_49 [i_10] [i_9] [i_9] [i_8] = var_3;
                }
            }
        }
        var_26 = (arr_35 [i_8]);
        var_27 = 4294967293;
    }
    var_28 = ((var_6 ? ((((min(var_4, 16229))) ? var_5 : (1 / var_4))) : ((((!(var_2 && var_2)))))));
    #pragma endscop
}
