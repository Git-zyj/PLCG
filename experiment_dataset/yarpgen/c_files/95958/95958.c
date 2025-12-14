/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 9356344838524563241;
    var_17 = ((((var_10 ? ((max(var_0, 3143380828))) : (min(var_3, var_7))))) ? (min(((var_9 ? var_13 : var_0)), ((var_15 ? var_12 : var_9)))) : (((var_10 >> (var_13 - 4902173949177414207)))));
    var_18 = 1;

    for (int i_0 = 1; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_19 = (max((arr_0 [i_0 + 1]), (((var_10 ^ -18622) ? ((min(var_6, 1))) : ((var_1 | (arr_1 [i_0])))))));
        var_20 = ((((738231438361473752 ? 17708512635348077873 : 28))));
        var_21 |= min(((17708512635348077873 ? (min(1, 17708512635348077849)) : 218)), var_11);

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                var_22 = (!var_11);
                arr_9 [i_2] [i_0] [i_0 + 1] = var_0;
                var_23 = ((!(arr_4 [i_0 + 1])));
                var_24 = (min(var_24, ((((!var_13) ? (arr_5 [1] [i_2]) : var_7)))));
                var_25 = var_7;
            }
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_26 += (((!var_12) == (((!var_5) ? ((((arr_3 [i_0 - 1]) ? (arr_12 [i_4] [18] [i_4] [i_4]) : var_0))) : (max(var_7, var_5))))));
                        var_27 = ((~(max(9908267819680407762, (!-8)))));
                        var_28 = (min(var_28, (((~((((((var_13 << (var_11 - 3762723668219087927)))) || ((max(17708512635348077872, (arr_0 [i_3]))))))))))));
                    }
                }
            }
            arr_16 [i_0] = ((+(((((var_10 ? (arr_2 [i_0] [i_1]) : var_6))) ? (13874059148908775474 + 1) : 1))));
            arr_17 [i_0 + 2] [12] |= (min(252, 252));
        }
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            var_29 = ((((max(((max((arr_2 [i_0] [i_5]), 1))), (var_0 % var_11)))) ? ((((var_1 || var_15) ? (((arr_11 [i_0] [i_0] [i_0] [i_0 + 2]) ? var_6 : (arr_11 [i_0 + 3] [i_0] [i_5] [i_5]))) : (((arr_4 [i_5]) ? var_3 : var_8))))) : (((arr_2 [i_0] [i_0 - 1]) | (max((arr_13 [i_0]), var_12))))));
            var_30 = (arr_7 [i_0] [i_0 + 4] [i_0] [i_0]);
        }
        /* vectorizable */
        for (int i_6 = 1; i_6 < 22;i_6 += 1)
        {
            var_31 = (((((16633 ? (arr_0 [i_0 - 1]) : var_2))) ? (arr_8 [i_6 + 3] [i_0]) : var_13));
            var_32 *= (((arr_1 [0]) ? (arr_15 [i_0 + 4] [i_6] [i_6 + 2] [i_6 + 1]) : var_5));
            arr_24 [i_0 + 2] [i_0] = var_12;
        }
    }
    for (int i_7 = 1; i_7 < 21;i_7 += 1) /* same iter space */
    {
        var_33 = ((!((((arr_3 [i_7 + 3]) ? ((min(255, -65997807))) : (min(17708512635348077849, var_13)))))));

        /* vectorizable */
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            var_34 = (max(var_34, 0));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 25;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 22;i_10 += 1)
                {
                    {
                        var_35 = ((~(arr_31 [i_10 - 1] [i_9] [i_8])));
                        arr_37 [14] [i_8] [i_9] [i_9] |= ((arr_33 [i_7 + 2] [i_7 + 4] [i_7 + 2] [i_7 + 4]) + ((~(arr_8 [i_8] [i_8]))));
                        arr_38 [i_10] [i_9] [i_8] [i_10] = (~var_15);
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_11 = 1; i_11 < 22;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    {
                        arr_45 [i_7] [i_8] [i_11] [i_11] = ((var_1 | (((arr_29 [i_11]) ? (arr_14 [i_11]) : var_7))));
                        var_36 = (((((var_14 ? (arr_23 [i_12]) : (arr_11 [i_7 + 3] [i_11] [i_7 + 2] [i_7])))) ? var_13 : ((var_5 ? var_6 : var_0))));
                    }
                }
            }
        }
        var_37 = ((!((min(((var_2 ? 2987540146107574271 : var_6)), var_0)))));
    }
    /* vectorizable */
    for (int i_13 = 1; i_13 < 21;i_13 += 1) /* same iter space */
    {
        var_38 = (((((arr_22 [24] [i_13 + 1] [i_13]) ? var_1 : var_5))) ? (((!(arr_21 [12])))) : var_3);
        var_39 = ((6200216995979938757 ? var_1 : var_13));
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 14;i_14 += 1)
    {
        var_40 = (9 - var_10);
        arr_53 [i_14] [i_14] = (arr_31 [i_14] [i_14] [i_14]);
    }
    var_41 = max((((~54) ? var_8 : ((var_15 ? var_5 : var_3)))), -29015);
    #pragma endscop
}
