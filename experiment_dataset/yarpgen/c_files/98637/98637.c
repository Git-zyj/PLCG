/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98637
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (max((min((min(4838282413578292033, var_2)), (arr_0 [i_0]))), var_5));
        var_20 = (min(var_20, ((max((!-31579), -12397)))));
        var_21 = (((((var_0 ? 77 : 0))) ? (max(((~(arr_1 [i_0] [i_0]))), ((((arr_0 [i_0]) >= -6038661794361932365))))) : -167273422));
        arr_3 [i_0] = var_2;
    }
    for (int i_1 = 2; i_1 < 14;i_1 += 1)
    {
        arr_6 [i_1] &= ((min(((var_4 ? var_9 : (arr_4 [i_1 - 1] [i_1]))), 0)));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_22 ^= (arr_8 [i_1]);
            arr_10 [3] [i_2] [3] |= (~var_3);
        }
        for (int i_3 = 1; i_3 < 14;i_3 += 1)
        {
            var_23 ^= (min((min(-13151, 452946398)), ((min((31578 || var_6), (arr_0 [i_1 - 1]))))));
            arr_13 [0] [0] [i_3] |= (min(0, ((var_1 ? 577431357 : ((2131349376 ? 17269910285304141239 : -7873))))));
        }
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            arr_17 [i_4] = ((var_16 ? 29851 : ((((min((arr_12 [i_1]), var_6)) != (((min(var_3, var_5)))))))));
            var_24 *= max(((((arr_15 [i_1] [4] [i_1 + 1]) ? var_16 : (-6212 <= 821909140040385826)))), var_2);
            arr_18 [i_4] = ((min((min(var_2, 19222)), (arr_1 [i_1 - 1] [i_4 - 1]))));
            var_25 = ((+(((arr_0 [i_4 - 1]) ? (arr_5 [i_1] [i_4]) : ((-13114 ? 3836762188 : 36028797018963967))))));
        }
        for (int i_5 = 1; i_5 < 12;i_5 += 1)
        {
            arr_21 [i_1 - 2] [i_5 + 2] [i_5] = ((-8 ? -452946414 : 1));

            /* vectorizable */
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                var_26 = (~87);
                var_27 += (((arr_14 [i_5 - 1]) ? (arr_14 [i_5 + 2]) : 22732));
            }

            /* vectorizable */
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {

                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    var_28 ^= (!13124);
                    var_29 ^= ((var_5 ? 821909140040385826 : (arr_30 [5] [5] [i_7] [i_8])));
                }
                arr_31 [i_7] [i_1 - 2] [i_7] [i_1] = ((var_8 ? var_14 : (arr_14 [i_1 - 1])));
                arr_32 [i_7] = ((var_14 ? (arr_1 [i_1] [i_1]) : (arr_23 [i_5 - 1] [i_5] [i_5])));
                var_30 = (arr_12 [i_5]);
            }
        }
    }

    for (int i_9 = 0; i_9 < 21;i_9 += 1)
    {
        var_31 = (max((min(var_19, ((3474538987731726040 ? var_5 : (arr_34 [i_9]))))), ((max(var_1, (-32767 - 1))))));
        var_32 = (max(var_32, (((((min(5097, (arr_35 [i_9] [i_9])))) ? 4669373250433523149 : ((max((arr_33 [i_9] [i_9]), (arr_34 [i_9])))))))));
        arr_36 [i_9] [i_9] = ((!((min((min(var_3, 8589410304)), ((min(31579, (arr_34 [i_9])))))))));
    }
    var_33 = (max(var_33, var_14));
    var_34 = (max(var_34, ((max((min((-1 | 12750482487840038984), (((var_0 ? var_0 : 1))))), (min(((1 ? 444255638 : 14687561769734973890)), (~0))))))));
    #pragma endscop
}
