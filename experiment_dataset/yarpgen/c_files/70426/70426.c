/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70426
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_16 = ((76 % (((((arr_0 [i_0] [i_0]) ? var_12 : -1719758436))))));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_17 -= (min(-1719758436, 1719758421));
            arr_7 [i_1] [i_1] = 65534;
            var_18 = ((+((var_4 ? (arr_0 [i_0] [i_0]) : (((var_3 ? 1872924325 : var_4)))))));
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_19 ^= (-12200124572869938933 && -2308238507998995792);
                            var_20 = (((((arr_2 [i_4 + 1]) < (arr_2 [i_5])))) + (min(-96, (-2147483647 - 1))));
                            var_21 += (~1);
                            arr_19 [7] [i_5] [i_5] [i_5] [19] [i_0] = 25;
                            var_22 = (min(var_22, (arr_15 [i_4] [i_4] [i_4] [i_4] [i_4 - 1] [6])));
                        }
                    }
                }
                arr_20 [i_0] [i_2] = (((((-var_14 + 9223372036854775807) << (((arr_3 [i_2]) + 1735471490)))) > var_5));
            }
            /* vectorizable */
            for (int i_6 = 1; i_6 < 19;i_6 += 1)
            {
                var_23 = (~var_13);
                arr_24 [17] [17] [4] = (((((var_10 ? var_0 : (arr_5 [1] [i_0])))) && (arr_2 [i_0])));
            }
            for (int i_7 = 2; i_7 < 19;i_7 += 1)
            {
                var_24 = (max(var_24, ((max(((var_2 ? (arr_15 [i_0] [i_7] [i_7] [i_0] [i_0] [i_7]) : ((((var_10 + 9223372036854775807) << (((arr_12 [i_7 - 2] [i_7 - 2] [i_7] [16]) - 44871))))))), (~1))))));

                for (int i_8 = 2; i_8 < 19;i_8 += 1)
                {
                    arr_30 [i_8] = min((!var_15), (!var_0));
                    var_25 = (min(-2147483634, -240));
                    arr_31 [i_0] [i_2] [i_0] [i_8] = (arr_18 [i_0] [i_2] [i_0] [i_0]);
                    var_26 = (max(var_26, ((min(((max((arr_14 [i_0] [i_7 - 1] [i_7 - 1] [i_8 + 1]), (arr_13 [i_8] [i_7 - 2] [i_2] [i_2] [i_0])))), (max(var_13, ((max((arr_13 [i_0] [i_2] [i_2] [i_2] [i_8]), -26599))))))))));
                }
                var_27 = (min(var_27, (((((((-(arr_21 [i_0] [i_0] [i_0])))) ? (((-(arr_27 [18] [i_0] [i_2] [i_7 + 1])))) : (arr_6 [i_7] [i_7])))))));
                var_28 -= ((((-4291621428496191268 || (((-7979084512852270401 ? 1719758428 : -7407711400664847381)))))));
                var_29 = -2147483622;
            }
            arr_32 [i_2] [i_2] [i_0] = (min((arr_1 [i_0] [i_0]), ((var_3 * ((1167967823 ? 34871 : 73))))));
        }
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 10;i_9 += 1)
    {

        for (int i_10 = 0; i_10 < 10;i_10 += 1)
        {

            for (int i_11 = 1; i_11 < 9;i_11 += 1)
            {
                var_30 = (min(var_30, (arr_37 [i_10] [i_10])));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 10;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        {
                            var_31 = 9223372036854775807;
                            var_32 = (max(var_32, -0));
                        }
                    }
                }
                arr_43 [i_9] [i_10] [i_11] [i_11] = (arr_13 [i_11 - 1] [i_11] [i_11 - 1] [i_11] [i_11 - 1]);
            }
            var_33 = arr_5 [2] [i_9];
        }
        var_34 = (arr_13 [i_9] [19] [i_9] [4] [i_9]);
    }
    for (int i_14 = 0; i_14 < 1;i_14 += 1)
    {
        var_35 = (arr_8 [i_14]);
        var_36 += (((((-1719758423 ? -1719758409 : ((var_6 << (-3968 + 3973)))))) ? 18286 : ((18295 ? (~var_1) : (((min(219, (arr_4 [8])))))))));
    }
    var_37 = 1;
    var_38 = ((var_13 ^ ((((var_7 ? var_9 : var_7)) << (var_10 + 5346412521946194980)))));
    #pragma endscop
}
