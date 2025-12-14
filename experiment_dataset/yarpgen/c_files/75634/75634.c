/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (~var_5);

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_5 [i_0] = (~1);
            var_21 = 1315;
        }
        /* vectorizable */
        for (int i_2 = 2; i_2 < 16;i_2 += 1)
        {
            var_22 |= 1;
            var_23 = ((~(arr_7 [i_0 + 1])));

            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                arr_13 [i_0] [i_2] [i_0] = (!var_14);

                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    var_24 ^= var_13;
                    arr_16 [i_0 + 1] = (arr_7 [i_0 + 1]);
                    arr_17 [i_0] [i_2 + 1] [i_3] [i_4] = (arr_1 [i_4]);
                }
            }
        }
        arr_18 [i_0 + 1] &= ((((max((arr_2 [i_0 + 1]), (arr_11 [i_0 + 1] [i_0 + 1] [i_0 + 1])))) ? ((((((1 ? var_10 : 1)) == (~1))))) : (min((arr_14 [i_0] [1] [i_0 + 1] [i_0 + 1] [i_0] [i_0]), var_17))));
    }
    for (int i_5 = 1; i_5 < 19;i_5 += 1)
    {
        var_25 = 45;
        arr_22 [i_5] = ((~(min(var_12, (arr_20 [i_5 - 1])))));
        var_26 = (min((((arr_20 [i_5]) ? (!1) : ((1 ? 59 : 1)))), ((((min(-3758, var_17))) | (~1)))));
        var_27 = ((198 ? (((arr_21 [i_5 - 1] [i_5]) ? (arr_21 [i_5 - 1] [i_5]) : var_10)) : (((((18093187927679287801 ? -29 : 25)) < ((max(1, var_12))))))));
    }
    for (int i_6 = 3; i_6 < 22;i_6 += 1) /* same iter space */
    {
        arr_26 [i_6] [8] = ((-((min(var_2, (arr_24 [i_6 + 3] [i_6 - 3]))))));
        var_28 &= (((arr_23 [i_6 - 3]) ? ((min(-21723, (arr_23 [i_6])))) : (((~23) & (((min(-5827, 1))))))));
        var_29 *= ((((min((min(12555318136195608897, var_10)), (~21736)))) ? (!18109) : ((((1 && 128) && (((1 ? (arr_24 [i_6] [i_6 + 2]) : var_1))))))));
    }
    for (int i_7 = 3; i_7 < 22;i_7 += 1) /* same iter space */
    {
        arr_29 [i_7] = var_12;
        arr_30 [i_7] = (max(1, 1));

        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            arr_35 [i_7] = ((+((((arr_27 [i_7 - 2]) || 32)))));
            var_30 &= (arr_32 [i_7] [i_8]);
        }
        for (int i_9 = 0; i_9 < 25;i_9 += 1) /* same iter space */
        {
            arr_38 [i_7] = ((min((min(103, 12)), (((6342239512666178491 > (arr_23 [i_7])))))));
            arr_39 [i_9] [i_7] [i_7] = (min(((~(arr_28 [i_7 - 2]))), (arr_33 [i_7 + 3] [i_7] [i_7])));
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 25;i_10 += 1) /* same iter space */
        {
            arr_42 [8] = (arr_34 [i_7 + 3] [i_7 - 3] [i_7 - 1]);
            var_31 = (arr_33 [i_7 + 3] [i_7 + 1] [i_7 + 1]);
            arr_43 [20] [i_10] = 29801;
            arr_44 [i_7] [i_10] = ((var_13 ? var_4 : ((var_10 ? var_14 : 149))));
        }
    }
    var_32 = var_0;
    var_33 = ((!((((101 != var_3) ? ((min(var_7, 2540))) : var_19)))));
    var_34 = var_17;
    #pragma endscop
}
