/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            var_20 = (min(var_20, (((!(((-(arr_4 [i_1] [i_0] [i_0])))))))));
            var_21 = (max(var_21, (((min(131479577, (~0)))))));
            arr_5 [i_0] [i_0] [i_0] = (max(((((((arr_3 [i_0] [i_1] [i_0]) == (arr_1 [i_0] [i_1])))) >> ((max(var_0, var_11))))), (((arr_2 [i_0 + 1]) ? (arr_2 [i_0 + 1]) : (arr_2 [i_0 - 1])))));
            var_22 = arr_1 [4] [i_0 + 1];
        }
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            var_23 = ((((arr_1 [i_3] [i_5]) ? (arr_1 [i_0] [2]) : (~var_3))));
                            var_24 = 39;
                        }
                        for (int i_6 = 3; i_6 < 12;i_6 += 1)
                        {
                            arr_19 [i_0 + 1] [i_0] [i_0] [i_0] = (i_0 % 2 == zero) ? ((((max((!-9223372036854775792), (((arr_13 [i_0] [i_2] [i_3] [i_4] [i_6 + 1]) / (arr_10 [i_0] [i_0] [i_3]))))) >> (((((((1345094186 ? (arr_9 [i_0] [i_0] [i_0 + 1] [i_0]) : (arr_2 [i_2])))) ? (max((arr_15 [i_0] [i_0] [i_4 - 1] [3]), (arr_14 [i_0] [1] [i_3] [i_0] [i_6]))) : (arr_17 [i_6 - 1] [i_4 - 1] [i_6 + 1] [i_4]))) - 31867))))) : ((((max((!-9223372036854775792), (((arr_13 [i_0] [i_2] [i_3] [i_4] [i_6 + 1]) / (arr_10 [i_0] [i_0] [i_3]))))) >> (((((((((1345094186 ? (arr_9 [i_0] [i_0] [i_0 + 1] [i_0]) : (arr_2 [i_2])))) ? (max((arr_15 [i_0] [i_0] [i_4 - 1] [3]), (arr_14 [i_0] [1] [i_3] [i_0] [i_6]))) : (arr_17 [i_6 - 1] [i_4 - 1] [i_6 + 1] [i_4]))) - 31867)) - 1647765212)))));
                            var_25 = (max(var_10, ((~((min((arr_14 [i_0] [i_2] [i_3] [i_4] [i_6]), (arr_17 [i_2] [i_3] [i_4] [i_6]))))))));
                            var_26 = (min(var_6, (min(23588, 10985800954812296472))));
                            var_27 &= ((!((((max((arr_18 [1] [i_6] [i_6 - 3]), (arr_13 [i_2] [i_2] [i_2] [i_2] [i_2])))) || (arr_4 [i_2] [i_4] [i_6])))));
                            var_28 = (min(var_28, (((!(((arr_15 [i_6] [i_2] [i_2] [i_0]) >= (arr_2 [i_0 + 1]))))))));
                        }
                        var_29 = (((!167579424) || (((var_15 * (((91 != (arr_13 [i_0] [i_0] [i_0] [i_0 + 1] [i_0 + 1])))))))));
                    }
                }
            }
        }
        var_30 -= ((127 ? (arr_10 [i_0 + 1] [12] [i_0 + 1]) : ((~(arr_10 [i_0 + 1] [6] [i_0 + 1])))));
        var_31 -= (min(var_3, (((!((min(108, -1))))))));
        var_32 = ((((((131479577 ? -8 : -127)) - (!-39)))) ? ((((max(2147483647, 1)) / (arr_3 [i_0] [i_0] [i_0])))) : (((arr_10 [i_0] [i_0] [i_0]) / (arr_18 [i_0 - 1] [i_0] [i_0 - 1]))));
    }
    for (int i_7 = 1; i_7 < 12;i_7 += 1) /* same iter space */
    {
        arr_22 [i_7] [i_7] = (((((arr_3 [i_7 - 1] [i_7 + 1] [i_7 - 1]) % (arr_17 [i_7] [i_7] [i_7 - 1] [i_7]))) | 500812988));
        var_33 = ((((max((arr_3 [i_7] [i_7] [i_7]), (max(1873991331, var_13))))) || (((-(arr_6 [i_7] [4]))))));
        arr_23 [i_7] = (((arr_9 [i_7] [i_7] [i_7] [i_7]) ? 65535 : (105 % 84)));
        arr_24 [i_7] = (!((max(66, 1048574))));
        var_34 = 1;
    }
    var_35 = ((var_9 ? ((min(var_19, var_4))) : (((!var_11) ? (-1575246541 >= 7) : (max(var_10, 0))))));
    #pragma endscop
}
