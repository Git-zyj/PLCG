/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_6 ? (((~617285710) ? var_0 : ((var_1 >> (-20728 + 20738))))) : (((-2093162830 == -8108942676414711161) ? var_6 : var_7))));
    var_11 = (min(((var_4 >> (var_1 - 733904704))), var_0));

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_12 = (((((arr_2 [i_0]) - (max(var_3, var_0)))) + ((-(arr_2 [i_0])))));

        /* vectorizable */
        for (int i_1 = 2; i_1 < 17;i_1 += 1) /* same iter space */
        {
            var_13 &= (((arr_4 [i_0] [i_0] [i_1]) < ((((arr_2 [i_1]) ? var_1 : (arr_3 [i_1]))))));
            var_14 = ((-(arr_1 [i_1 + 1] [i_0 + 1])));
            /* LoopNest 3 */
            for (int i_2 = 4; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 19;i_4 += 1)
                    {
                        {
                            var_15 = (arr_5 [i_0]);
                            var_16 *= -var_0;
                            var_17 = (((arr_11 [i_0 + 1] [i_1] [i_1 + 2] [i_0 + 1]) || (arr_11 [4] [i_1 + 2] [i_1 + 1] [i_1])));
                            var_18 = (max(var_18, (((arr_13 [i_4 + 1] [i_1 - 1] [9]) ? (arr_13 [i_4 - 1] [i_1 + 3] [i_2]) : (arr_13 [i_4 - 1] [i_1 + 3] [1])))));
                            var_19 = (((arr_4 [3] [3] [i_4]) / var_2));
                        }
                    }
                }
            }
        }
        for (int i_5 = 2; i_5 < 17;i_5 += 1) /* same iter space */
        {
            var_20 = (min(var_20, (((min((((var_9 ? 1 : (arr_16 [i_0] [i_0 + 1] [i_5]))), -5260308261838443510)))))));
            var_21 = (((((~(arr_15 [i_0 + 1])))) ? (max(var_0, (arr_15 [i_0 + 1]))) : (max((arr_15 [i_0 + 1]), (arr_15 [i_0 + 1])))));
        }
        for (int i_6 = 2; i_6 < 17;i_6 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                var_22 = (-9223372036854775801 ? var_2 : -2093162830);
                var_23 = (!var_3);
                var_24 = (((arr_17 [i_0] [i_7]) ? (arr_0 [i_0 + 1]) : var_6));
                var_25 = ((((~(arr_0 [i_0]))) & var_3));
            }
            var_26 = (min(var_26, ((min(1, -1212690534898566606)))));

            for (int i_8 = 1; i_8 < 1;i_8 += 1)
            {
                var_27 = ((min((((!(arr_10 [i_0 + 1] [i_0] [i_0] [i_6 + 1] [i_6] [i_0])))), (arr_13 [i_8 - 1] [i_8 - 1] [i_8 - 1]))));
                var_28 = (i_0 % 2 == 0) ? ((((min((arr_8 [i_0 + 1]), 1212690534898566610)) << ((((((-2093162831 ? (arr_9 [i_0]) : var_3)) << (((((arr_7 [i_0]) << (((arr_22 [18] [i_8] [i_8] [i_0]) - 5384044460655859453)))) - 1294295503)))) - 5226495))))) : ((((min((arr_8 [i_0 + 1]), 1212690534898566610)) << ((((((((((-2093162831 ? (arr_9 [i_0]) : var_3)) << (((((((arr_7 [i_0]) << (((arr_22 [18] [i_8] [i_8] [i_0]) - 5384044460655859453)))) - 1294295503)) + 426249502)))) - 5226495)) + 5187928)) - 21)))));
            }
            var_29 = ((((min((arr_19 [i_0] [17] [i_0]), var_2))) || ((max((arr_0 [i_0 + 1]), var_1)))));
        }
    }
    var_30 = (((((21818 ? var_0 : (2660 - 6612958134115240150)))) ? -873682315 : (max(var_9, -2093162806))));
    #pragma endscop
}
