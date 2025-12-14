/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67067
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 4; i_2 < 22;i_2 += 1)
                {
                    var_19 = var_7;
                    var_20 += (((arr_6 [i_0 + 1] [i_1 + 1] [i_1 - 1] [i_2 + 2]) < (arr_6 [i_0 + 1] [i_1 + 1] [i_1 - 1] [i_2 + 1])));
                    arr_7 [i_1] = (((arr_3 [i_0 + 1]) ? (var_15 * var_0) : var_14));
                    var_21 = var_18;
                }
                for (int i_3 = 3; i_3 < 21;i_3 += 1)
                {
                    var_22 = max(114, 0);
                    var_23 = 58;
                }
                var_24 = (max((min((((32 << (((-856870164222440979 + 856870164222441007) - 22))))), (arr_0 [i_0] [i_0]))), var_5));
                var_25 = (max(var_25, (((var_0 ? ((var_16 - (arr_4 [i_0] [i_0] [i_0]))) : ((((((max(192, 29978)))) > ((~(arr_2 [i_0] [20])))))))))));
            }
        }
    }

    for (int i_4 = 1; i_4 < 17;i_4 += 1)
    {
        var_26 = 17799616404020712178;
        var_27 -= (~795995277);
    }
    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {
        var_28 = 500008760;
        var_29 = (((arr_9 [i_5] [10] [i_5 - 1]) ? -59085 : (min(-5597477299504212796, 0))));
    }
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        arr_17 [i_6] &= ((((((var_9 - var_1) + (arr_0 [i_6] [i_6])))) ? ((max(-28015, 238))) : 1435644447));
        arr_18 [i_6] = (arr_6 [i_6] [i_6] [i_6] [i_6]);
    }
    var_30 = (max(252, ((var_5 ? 17 : var_4))));
    /* LoopNest 2 */
    for (int i_7 = 4; i_7 < 7;i_7 += 1)
    {
        for (int i_8 = 3; i_8 < 9;i_8 += 1)
        {
            {
                var_31 -= 6662404561209350446;

                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    arr_28 [i_7] [i_7] [i_8] [i_9] = ((!(~1)));

                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        var_32 = ((!((max(var_11, 6452)))));
                        var_33 = (min(var_33, (min((arr_30 [i_7 - 1] [i_7 + 1] [i_8 - 3] [i_8 - 1]), (16670 >= 1)))));
                        var_34 = (!18446744073709551615);
                    }
                    var_35 = (max((5419942286431761490 == 42), 20989));
                    arr_33 [i_9] = 0;
                }
                for (int i_11 = 0; i_11 < 10;i_11 += 1) /* same iter space */
                {
                    var_36 = (!3588786150562270170);
                    var_37 = 8809;
                    arr_37 [i_8] [i_8] = (!100);
                    var_38 += (arr_26 [i_11] [i_7] [i_7] [i_7]);
                }
                for (int i_12 = 0; i_12 < 10;i_12 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_13 = 1; i_13 < 7;i_13 += 1)
                    {
                        for (int i_14 = 2; i_14 < 8;i_14 += 1)
                        {
                            {
                                var_39 = var_2;
                                arr_46 [i_7] [i_7] [i_13] [i_7] [i_7] = 184;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_15 = 2; i_15 < 7;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 10;i_16 += 1)
                        {
                            {
                                var_40 = (arr_27 [i_16] [i_8] [i_8] [i_8]);
                                arr_51 [i_12] [i_12] [i_16] = 59068;
                            }
                        }
                    }
                    var_41 = (min(var_41, (((min((arr_39 [i_12] [i_7] [i_7]), 6853510866975530652))))));

                    for (int i_17 = 1; i_17 < 9;i_17 += 1)
                    {
                        var_42 = ((var_13 ? ((37295 >> (((arr_31 [i_7 - 2] [i_8] [i_8 - 3] [i_7 - 2]) + 1263615570)))) : (((18446744073709551615 >= ((max(var_17, (arr_34 [i_7] [i_7] [i_7])))))))));
                        var_43 -= (max((((arr_4 [i_7] [i_7] [i_7]) ^ (max(17284420794692630807, 39570)))), (min(var_17, var_6))));
                        var_44 = (51432 + 18446744073709551615);
                    }
                }
                for (int i_18 = 1; i_18 < 9;i_18 += 1)
                {
                    var_45 = ((min(var_9, 1)));
                    var_46 = (min(var_46, 2));
                    var_47 = ((~(!-22)));
                }
            }
        }
    }
    #pragma endscop
}
