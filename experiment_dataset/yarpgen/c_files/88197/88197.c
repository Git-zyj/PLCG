/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 13;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_18 = ((+((var_16 ? (~var_15) : var_7))));
            var_19 = (min(var_19, (((~((max((arr_2 [i_0 - 3]), (arr_2 [i_0 - 3])))))))));
            var_20 = (min(((max(var_13, (arr_0 [i_0 + 1] [i_0 + 1])))), (((arr_3 [i_0] [i_0 - 3]) ? (arr_3 [i_0] [i_0 - 1]) : var_10))));
            var_21 = arr_2 [i_0];
        }
        for (int i_2 = 3; i_2 < 10;i_2 += 1)
        {

            for (int i_3 = 4; i_3 < 12;i_3 += 1)
            {
                var_22 = (((arr_1 [i_0 - 2]) ? 7907039626986738308 : 1));
                var_23 = ((((((arr_8 [i_2 - 1] [i_3]) ? 31 : (arr_8 [i_2 + 4] [i_2 + 4])))) ? (~10539704446722813309) : ((227 >> (7907039626986738316 - 7907039626986738311)))));
                var_24 = (min(var_24, -24247));
            }
            arr_12 [i_0] = (arr_9 [i_0] [i_2] [i_0] [i_2 + 1]);
            arr_13 [13] = ((-24269 ? 0 : 1));
            arr_14 [i_0] [i_0] = ((-((var_5 << ((((min((arr_3 [i_0] [13]), var_11))) + 1439))))));
        }
        var_25 = ((((min(2, (min(211, 2945121727069385919))))) && (~11112862345601854026)));
    }
    for (int i_4 = 3; i_4 < 13;i_4 += 1) /* same iter space */
    {

        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            var_26 = (min(var_26, (((var_4 ? (arr_11 [i_4] [i_5] [i_5]) : (arr_8 [i_4 - 3] [i_4 - 3]))))));
            var_27 = (min(7907039626986738322, 7882873332705179224));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 11;i_7 += 1)
                {
                    {
                        var_28 -= var_10;

                        /* vectorizable */
                        for (int i_8 = 2; i_8 < 11;i_8 += 1)
                        {
                            var_29 = var_5;
                            var_30 = (max(var_30, (arr_25 [i_8 + 3] [i_8] [i_7 - 1] [i_4 - 3])));
                        }
                        for (int i_9 = 0; i_9 < 14;i_9 += 1) /* same iter space */
                        {
                            var_31 *= (min((((arr_32 [i_4 - 1] [i_5]) ? (arr_6 [i_5] [i_6] [i_6]) : (arr_21 [i_4] [i_4] [0]))), (((((((arr_33 [i_4] [i_4] [i_4] [1] [i_4 - 2] [i_4 + 1] [7]) ? var_10 : var_5))) ? var_5 : (arr_27 [i_4] [0] [i_4 - 2] [13] [6]))))));
                            var_32 = ((max((((!(arr_17 [i_5] [i_5]))), var_0))));
                            arr_34 [i_4 - 2] [i_5] [i_6] [i_4 - 2] = (((~var_10) + (-92 | var_17)));
                            var_33 = ((var_8 ^ (arr_29 [i_4 - 3] [1])));
                        }
                        for (int i_10 = 0; i_10 < 14;i_10 += 1) /* same iter space */
                        {
                            var_34 = (min(var_34, (((-(arr_1 [4]))))));
                            var_35 *= ((var_8 ? 57 : var_1));
                            arr_39 [i_4] [i_4 - 1] [6] [6] [i_4] = (!10539704446722813321);
                        }
                        for (int i_11 = 0; i_11 < 14;i_11 += 1) /* same iter space */
                        {
                            var_36 *= ((((arr_21 [i_4 - 2] [i_4 - 2] [i_4 - 1]) || ((min(6076681124019170781, (arr_30 [i_5] [4] [i_5] [i_5] [12])))))));
                            arr_42 [i_4] [2] [i_5] [2] [12] [i_7 + 3] [i_11] = (arr_16 [i_4 + 1]);
                            var_37 = var_0;
                        }
                        var_38 = (min(var_38, (arr_10 [i_7] [i_4 - 1] [i_7 + 1])));
                    }
                }
            }
        }
        var_39 = (max(var_39, (((arr_16 [i_4 - 1]) ^ (((arr_2 [i_4 - 1]) ? var_7 : (arr_2 [i_4 - 1])))))));

        for (int i_12 = 0; i_12 < 14;i_12 += 1)
        {
            var_40 &= (((arr_17 [i_4 - 1] [i_12]) / var_3));

            for (int i_13 = 1; i_13 < 12;i_13 += 1)
            {

                for (int i_14 = 1; i_14 < 12;i_14 += 1)
                {

                    for (int i_15 = 0; i_15 < 14;i_15 += 1)
                    {
                        arr_57 [i_4] [i_4] [13] [i_13] [i_13] [i_14 + 2] [i_13] = (arr_8 [i_14] [i_4]);
                        var_41 = ((1705812534418142310 ? (!var_1) : (arr_10 [4] [4] [i_14])));
                    }
                    var_42 = (min(((~(arr_28 [i_13] [i_13] [i_13 + 1] [i_13 + 2] [i_13 + 2] [i_13 - 1]))), (arr_28 [i_4] [i_12] [i_13 + 2] [i_14 - 1] [i_12] [i_12])));
                }
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 14;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 14;i_17 += 1)
                    {
                        {
                            var_43 = 4294967278;
                            arr_63 [i_13] [7] [13] [0] [6] [5] [11] = (min(((~(arr_33 [i_4] [i_12] [i_4] [i_16] [i_17] [i_4 - 1] [i_17]))), ((min(var_8, (!var_15))))));
                        }
                    }
                }
            }
            for (int i_18 = 2; i_18 < 11;i_18 += 1)
            {
                var_44 = 0;
                var_45 = (min(var_45, ((max((((var_1 ? 85 : var_7))), (max(var_6, var_4)))))));
            }
            var_46 = (arr_21 [i_4] [i_12] [i_12]);
        }
        for (int i_19 = 3; i_19 < 11;i_19 += 1)
        {
            /* LoopNest 2 */
            for (int i_20 = 1; i_20 < 12;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 14;i_21 += 1)
                {
                    {
                        arr_73 [i_20] = (max(var_12, (((!(arr_26 [i_4] [i_4 - 1] [i_4] [i_4 - 2] [i_4]))))));
                        arr_74 [i_4] [i_4] [i_20] [i_20] = (((((min(var_5, (arr_20 [i_21]))))) << (42400 - 42379)));
                    }
                }
            }
            var_47 += (~var_10);
            var_48 = (min(var_48, ((((((arr_54 [i_19] [i_4] [8] [i_4 - 3] [i_4] [i_4]) >= (!var_5))) ? (!-1508407849) : var_15)))));
            var_49 = var_9;
        }
    }
    /* LoopNest 2 */
    for (int i_22 = 4; i_22 < 17;i_22 += 1)
    {
        for (int i_23 = 0; i_23 < 18;i_23 += 1)
        {
            {

                for (int i_24 = 0; i_24 < 18;i_24 += 1)
                {
                    var_50 *= var_10;
                    arr_83 [i_22 - 3] [i_22 - 2] = ((-((9424267454439486875 ? 16347232335947780661 : (arr_80 [i_24] [i_23] [i_24] [i_23])))));
                }
                var_51 = (min(var_51, ((((((max((arr_81 [i_22 - 2] [i_22 - 2] [i_22] [i_22 - 2]), (-32767 - 1)))) ? var_17 : (arr_78 [i_22 + 1] [i_22 - 2] [i_22 - 1])))))));
                var_52 = ((-(arr_79 [10] [i_22])));
                var_53 += ((~(((arr_81 [i_22 + 1] [i_23] [9] [17]) ? (arr_77 [i_22]) : (arr_81 [i_22 + 1] [i_22] [2] [i_22 - 2])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_25 = 0; i_25 < 21;i_25 += 1)
    {
        for (int i_26 = 0; i_26 < 1;i_26 += 1)
        {
            {
                arr_89 [i_25] [i_25] [i_26] = ((((!(arr_87 [i_26] [i_26])))));
                var_54 *= (min(((min(var_7, (((var_6 > (arr_87 [i_25] [i_25]))))))), var_15));
                var_55 ^= var_12;
                var_56 ^= var_16;
            }
        }
    }
    var_57 = (~var_15);
    #pragma endscop
}
