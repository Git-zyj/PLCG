/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75188
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, (arr_5 [i_1 - 1] [i_1])));
                    var_15 = var_8;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_16 [i_0 + 2] [i_2] [i_2] [i_3] [i_4] = (arr_11 [i_4] [i_3] [i_2] [18] [i_0]);
                                var_16 = (min(var_16, ((((((((max(3212999018027755532, 4213809201))) ? ((-393757589 ? 29404 : var_7)) : (((max(var_6, var_0))))))) ? ((((max(var_5, var_2))) ? ((max((arr_13 [i_0 + 1] [i_4] [i_2] [i_4]), var_0))) : ((min((arr_7 [i_0] [i_0] [i_2]), (arr_13 [i_1] [i_1 + 1] [i_1] [i_1])))))) : (((var_8 != 1) ? var_6 : ((-(arr_1 [i_1 - 1] [3]))))))))));
                            }
                        }
                    }
                }
            }
        }
        var_17 &= ((var_9 * (((((4213809195 ? 31141 : 22607))) ? (((arr_9 [i_0 + 3] [i_0] [i_0] [i_0] [19] [7]) ? (arr_13 [i_0] [i_0 - 1] [i_0] [i_0]) : 81158094)) : (!var_13)))));
        arr_17 [i_0] [i_0] = ((max(((133984700 ? 4213809195 : 836713067428482522)), 22601)));
        var_18 ^= (arr_5 [i_0] [6]);
    }
    for (int i_5 = 1; i_5 < 17;i_5 += 1) /* same iter space */
    {
        var_19 &= (((arr_11 [i_5 + 3] [i_5 + 1] [i_5] [i_5] [i_5]) == ((max((arr_0 [i_5 + 3]), (arr_4 [i_5]))))));
        var_20 = (((!(((8037087750767825359 ? -29405 : -393757589))))) ? (arr_15 [i_5] [i_5 + 1] [i_5] [i_5] [i_5 + 2]) : ((((((arr_14 [i_5] [i_5] [i_5] [i_5 + 1] [i_5]) && 0))))));
        arr_20 [i_5] = ((((min((min((arr_2 [13]), (arr_3 [2] [2] [i_5 - 1]))), 99))) ? (arr_6 [i_5 + 2]) : -var_5));
    }
    for (int i_6 = 2; i_6 < 15;i_6 += 1)
    {

        for (int i_7 = 0; i_7 < 18;i_7 += 1) /* same iter space */
        {
            var_21 = ((((max((((arr_0 [i_6]) & var_7)), ((max(var_11, (arr_7 [i_6] [i_7] [i_6 - 1]))))))) ? ((((arr_22 [i_6 + 3]) ? ((max(var_2, var_11))) : ((max((arr_7 [i_6 - 2] [i_7] [i_6 + 1]), var_2)))))) : (arr_6 [i_6 + 2])));
            var_22 = var_5;
            arr_26 [i_6] [i_6] [i_7] |= (arr_7 [i_6] [i_6] [3]);
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 18;i_8 += 1) /* same iter space */
        {
            arr_29 [i_6] [i_8] = (arr_6 [i_6 - 2]);
            var_23 = arr_24 [i_8] [i_8];
        }
        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {
            arr_32 [i_6 - 2] = ((((max(45875, (((4202219324757435763 != (arr_5 [i_9] [16]))))))) ? (((min((arr_9 [i_6] [i_6] [15] [i_9] [i_9] [i_9]), var_13)))) : (((max(var_9, var_7))))));
            arr_33 [i_6] [i_6] [i_9] |= ((max((arr_9 [i_6 + 3] [i_6 - 2] [i_6 + 3] [i_6 + 2] [i_6 + 3] [12]), (arr_21 [i_6 + 2]))));
            var_24 = -0;
        }
        var_25 += ((((((arr_4 [i_6 + 1]) ^ (arr_6 [i_6 + 1])))) <= (var_1 / 251)));
    }
    for (int i_10 = 4; i_10 < 10;i_10 += 1)
    {
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 11;i_12 += 1)
            {
                for (int i_13 = 1; i_13 < 1;i_13 += 1)
                {
                    {
                        var_26 = (max(var_12, (max(1, (arr_37 [i_13 - 1])))));
                        var_27 = ((((-(arr_35 [i_13] [i_11]))) / (arr_3 [i_13] [i_11] [i_11])));
                    }
                }
            }
        }
        var_28 = (arr_41 [i_10] [i_10] [i_10]);
        var_29 = ((max((arr_22 [i_10 - 4]), (max((arr_12 [i_10] [2]), (arr_7 [i_10] [i_10] [13]))))));
    }
    var_30 = ((4213809217 ? var_6 : var_10));
    #pragma endscop
}
