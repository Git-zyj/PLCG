/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92953
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [4] [i_0] = (max((max(39561, 0)), ((max((((-11830 + (arr_0 [i_0])))), (1 + var_8))))));
        var_12 = 1413937843717971215;
        var_13 = var_3;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] [i_1] = (!(arr_1 [i_1] [i_1]));
        var_14 = ((5916 ? ((18446744073709551598 ? (arr_1 [i_1] [i_1]) : var_6)) : ((((arr_3 [i_1] [i_1]) ? 2725107404 : (arr_0 [i_1]))))));
        var_15 = ((~((8257399472634582013 ? 63396 : var_6))));
        var_16 = (-899054763 && 966687278);
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
    {
        var_17 = 0;

        /* vectorizable */
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            var_18 = (((((arr_9 [i_3] [10] [i_3]) ? (arr_1 [1] [i_3]) : 255)) >> (!var_8)));
            var_19 = var_5;
        }
        for (int i_4 = 1; i_4 < 16;i_4 += 1)
        {
            var_20 = arr_11 [i_2] [i_4];
            arr_17 [i_4] = (((arr_10 [12] [12]) ? (~var_11) : (((arr_4 [i_4] [i_4 + 1]) ? ((max(var_0, var_0))) : (arr_4 [i_4 - 1] [10])))));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 0;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 15;i_6 += 1)
                {
                    {
                        var_21 = (max(var_21, ((max((arr_7 [i_6 + 2]), (((arr_14 [i_6 + 2] [i_4 - 1] [8]) ? (min(var_3, (arr_6 [i_2]))) : 8257399472634582013)))))));
                        var_22 = ((((min(((var_2 ? 18446744073709551610 : var_3)), (1 / 68)))) ? (((arr_14 [3] [i_4] [i_6 - 1]) ? 32754 : ((min((arr_4 [i_2] [i_6 - 1]), var_6))))) : (min((max((arr_13 [i_2] [0] [3]), (arr_15 [i_2] [3]))), -126))));
                        var_23 = (((((((min((arr_22 [i_2] [1] [i_5] [i_6]), 32760))) ? (!4294967285) : (max(var_2, var_8))))) * ((-(min((arr_14 [i_6] [i_5] [i_2]), 47969))))));
                        var_24 = ((min(var_4, 18446744073709551613)));
                    }
                }
            }
        }
        for (int i_7 = 4; i_7 < 14;i_7 += 1)
        {
            arr_25 [i_2] [8] [i_7] = ((((max(10792162946654292592, var_10))) ? ((max(0, -30765))) : (arr_13 [i_7] [i_7 + 3] [i_7])));

            /* vectorizable */
            for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_9 = 3; i_9 < 15;i_9 += 1)
                {
                    for (int i_10 = 3; i_10 < 16;i_10 += 1)
                    {
                        {
                            arr_35 [i_2] [i_7] [i_8] [i_7] [14] &= (((arr_10 [i_10 + 1] [5]) + (arr_29 [i_7] [i_10 - 2] [i_8])));
                            arr_36 [i_9] = var_4;
                            var_25 = (((arr_20 [i_7 + 2] [i_7] [i_10 - 2]) | (arr_13 [i_7 + 1] [i_9 - 3] [i_10 + 1])));
                        }
                    }
                }
                var_26 = (max(var_26, ((((var_3 ? 12622809586202548641 : (arr_6 [i_2])))))));
            }
            for (int i_11 = 0; i_11 < 17;i_11 += 1) /* same iter space */
            {
                arr_39 [i_7] = min(((86733050259556353 * (arr_23 [i_7 - 3] [i_7 + 1] [i_7 - 2]))), (((var_0 % (arr_23 [i_7 - 3] [i_7 - 3] [i_7 - 4])))));
                var_27 = (max(var_27, (arr_19 [i_2] [i_2] [i_2])));

                /* vectorizable */
                for (int i_12 = 4; i_12 < 15;i_12 += 1)
                {
                    var_28 = (min(var_28, 1774710344684818572));
                    arr_42 [i_2] [i_2] [i_2] = (((arr_21 [i_12 - 3] [i_7 - 4] [i_7 - 1] [11]) ? 124 : var_9));
                }
                /* vectorizable */
                for (int i_13 = 0; i_13 < 17;i_13 += 1)
                {
                    var_29 = (max(var_29, ((((arr_10 [0] [0]) >> (37128 - 37122))))));
                    arr_45 [i_7 + 1] [13] = ((47969 ? (arr_0 [i_13]) : var_10));
                    arr_46 [15] = (((arr_3 [i_7 - 1] [i_7 + 1]) ? 3790237332 : 18446744073709551615));
                }
            }
            /* vectorizable */
            for (int i_14 = 0; i_14 < 17;i_14 += 1) /* same iter space */
            {
                arr_49 [i_2] [i_7] [i_2] = arr_16 [i_2] [14];
                arr_50 [1] [i_7 - 3] [i_14] = ((+((((arr_28 [5] [5] [5]) || var_11)))));
            }
            arr_51 [i_2] [i_2] [i_2] = ((!((((var_7 && (arr_16 [i_2] [i_7]))) || ((((arr_7 [15]) ? -26790 : var_8)))))));
        }
    }
    var_30 = var_4;
    var_31 = ((var_8 ? ((-15968 ? 17192 : -4270349949114179246)) : (((((max(var_0, 63))) ? var_5 : (-32513 != 274933591))))));
    var_32 = ((((max(7654581127055259011, var_3))) ? (((!var_7) ? (max(3828816931, -16273)) : var_1)) : var_9));
    var_33 = var_7;
    #pragma endscop
}
