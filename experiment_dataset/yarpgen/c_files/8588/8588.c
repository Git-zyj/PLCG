/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = 1741126017;

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                var_14 = var_2;
                arr_10 [i_0] [i_1] [i_1] = ((+(max((min((arr_5 [3]), var_13)), var_1))));
            }
            var_15 = (((((-var_9 ? ((min(56767, 56794))) : (~62816)))) ? (!-2054889042) : (arr_6 [i_1] [i_1] [i_0])));
            var_16 = ((((!(40174 == 536868864))) ? ((var_4 ? (((1536 ? var_12 : -2814264))) : ((-2081377929 ? var_7 : var_3)))) : ((((!(((var_9 ? var_4 : 17710)))))))));
        }
        for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 9;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    {
                        arr_20 [i_0] [i_0] [i_0] [9] [9] = min(-2081377929, (min((arr_6 [6] [i_3] [i_4 - 1]), 48487)));
                        var_17 = (min((((2553841281 ? var_7 : 65535))), (((((max(var_6, var_9))) ? 28579 : (arr_4 [i_4 - 1] [i_4 + 2]))))));
                    }
                }
            }
            var_18 = (((min((max((arr_17 [10] [i_0] [10] [i_0] [2] [i_3]), var_2)), (((var_0 ? var_0 : 134217727))))) << (min(((((arr_6 [i_3] [i_0] [i_0]) >= 29395))), (arr_13 [3] [i_0])))));
            arr_21 [i_0] [i_0] [3] = (((max(((max(62816, -624426541))), (max(4172668126, var_9)))) & (((-(var_7 == var_11))))));
        }
        for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
        {
            var_19 = ((!((((var_9 ? (arr_19 [i_0] [i_0] [i_6] [i_0] [i_6]) : var_4))))));
            arr_24 [i_0] [i_0] = (((((((max(122299169, var_9))) ? var_6 : (min((arr_11 [i_0] [i_0]), 32633))))) ? (min((((377702557 == (arr_4 [i_6] [i_6])))), (max(var_10, var_9)))) : 14824));
            arr_25 [10] [i_6] = (max(((((arr_11 [i_0] [i_6]) >= var_13))), (((var_0 ? -624426541 : (arr_16 [i_0]))))));
            var_20 = var_11;
        }
        var_21 = min(((438920350 ? (1072988409 / var_1) : var_2)), (((((~(arr_11 [i_0] [5])))) & (arr_14 [i_0] [i_0]))));
    }
    for (int i_7 = 2; i_7 < 19;i_7 += 1)
    {
        arr_28 [i_7 + 1] = (((((((var_13 ? 65535 : var_10))) ? ((var_8 ? var_8 : var_8)) : (arr_26 [18] [i_7]))) >> ((-(var_6 < var_12)))));
        var_22 = (3494011909 ? var_6 : ((var_6 ? (var_0 * 14987) : (max(252614290, var_10)))));

        for (int i_8 = 1; i_8 < 21;i_8 += 1)
        {
            var_23 = max((~26089), ((2589521239 ? (~var_9) : var_5)));
            var_24 = max(((var_0 >> (((arr_26 [i_7 - 2] [i_8 - 1]) - 11506)))), (((!((max(var_9, var_5)))))));
            /* LoopNest 2 */
            for (int i_9 = 3; i_9 < 21;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 21;i_10 += 1)
                {
                    {
                        arr_37 [i_9] [i_9] [i_8] [i_9] = (((min(var_4, -1802432925)) == var_4));
                        var_25 = ((arr_30 [i_10 - 1] [i_8]) << (34449 - 34428));
                    }
                }
            }
            arr_38 [i_7] [i_7] [i_7] = ((((min((max(2147483647, var_4)), ((var_2 ? var_5 : 345733491))))) ? var_2 : ((min(var_1, ((var_13 ? var_13 : var_13)))))));
        }
    }
    var_26 = ((((((!((max(var_9, var_8))))))) < (max(var_10, (max(var_8, var_4))))));
    #pragma endscop
}
