/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98104
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((((max(var_9, 1858295030))) ? (((var_0 ? -21372 : var_6))) : (max(4294967295, var_10))))) ? (--18446744073709551592) : var_8));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : var_1));
        arr_3 [i_0] [i_0] = (-(((!(arr_1 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [10] = ((((!(arr_4 [i_1]))) ? (((min(((max(0, var_5))), (arr_6 [i_1] [i_1]))))) : ((((arr_6 [i_1] [i_1]) * 2436672262)))));
        arr_8 [i_1] = ((((((arr_4 [i_1]) > 1858295020))) + 1));
        arr_9 [i_1] [i_1] = (max((max(((var_5 ? 1 : var_0)), var_7)), var_8));
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 11;i_3 += 1)
            {
                {
                    arr_18 [i_1] [i_1] [i_2] = ((var_0 > (min((var_3 < var_2), (~2436672266)))));
                    arr_19 [i_1] [i_2] = (arr_13 [5] [i_2] [i_3]);
                    arr_20 [i_2] = ((var_5 < (max(var_7, (min((arr_15 [i_2]), 14310120336658960229))))));
                }
            }
        }
        arr_21 [i_1] [i_1] = ((~((56 ? (arr_5 [i_1] [i_1]) : (arr_5 [i_1] [i_1])))));
    }

    for (int i_4 = 4; i_4 < 12;i_4 += 1)
    {
        arr_25 [12] |= var_6;
        arr_26 [i_4] [i_4] = ((((((arr_23 [i_4]) ? ((((236 > (arr_11 [i_4 + 1]))))) : 14700421379348270416))) ? (((((arr_13 [9] [i_4] [i_4]) != var_1)) ? (arr_12 [i_4] [i_4] [i_4 - 1]) : (arr_16 [i_4 - 3] [i_4 - 4] [i_4 - 1] [i_4]))) : ((((((min((arr_6 [i_4] [i_4]), 1)))) <= (((arr_23 [i_4]) ^ 16384)))))));
    }
    for (int i_5 = 1; i_5 < 19;i_5 += 1)
    {
        arr_29 [13] [i_5 + 2] = ((-(((~4294967295) ? (arr_28 [i_5 + 3]) : (var_0 & var_5)))));

        for (int i_6 = 1; i_6 < 20;i_6 += 1)
        {
            arr_34 [i_5] [i_5] = var_8;
            arr_35 [i_5] = -16359;
            /* LoopNest 2 */
            for (int i_7 = 3; i_7 < 21;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 21;i_8 += 1)
                {
                    {
                        arr_41 [i_7] [i_6] [i_6] [i_7] = -1;
                        arr_42 [i_5] [i_7] [i_7] [i_7] = (max(14310120336658960248, (min((arr_31 [i_8 + 2] [i_6 + 2] [i_5 + 4]), (arr_31 [i_8 + 2] [i_6 + 1] [i_5 + 1])))));
                        arr_43 [i_5 + 3] [i_7] [5] [i_8 + 2] [i_8 + 2] = 18381;
                    }
                }
            }
            arr_44 [13] [13] [13] = var_8;
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 2; i_10 < 20;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 19;i_11 += 1)
                    {
                        {
                            arr_52 [i_5] [i_6] [i_5] [i_9] [i_5] [i_5] = (((((((min(0, (arr_51 [i_5] [i_6] [i_5] [13] [i_6])))) >= (min(var_9, 1))))) == (min((!var_6), (arr_39 [2] [i_6] [2] [i_11 + 4])))));
                            arr_53 [i_5] = var_8;
                            arr_54 [i_5 + 3] [i_6] [i_5 + 3] [i_10 + 1] [i_11 + 1] [21] = ((((arr_32 [i_6 + 2]) ? (arr_32 [i_6 + 1]) : (arr_32 [i_6 + 2]))));
                            arr_55 [i_5] [i_6] [i_9] [i_10] [i_9] [10] [i_11 + 1] = (((arr_27 [i_6 + 3] [i_5 + 3]) == ((~((~(arr_46 [i_5])))))));
                            arr_56 [i_11] [i_11] [i_10] [i_10] [i_5 + 3] [12] [i_5 + 3] = ((14310120336658960229 >= (~31377)));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 23;i_12 += 1)
        {
            arr_60 [i_12] [i_5 + 1] = (arr_30 [i_5 - 1]);
            arr_61 [i_5 + 1] [i_12] = 32768;
        }

        for (int i_13 = 4; i_13 < 21;i_13 += 1)
        {
            arr_65 [i_5 + 4] [i_5 + 4] = ((((((arr_36 [i_13 - 1] [i_5 + 2] [i_5 + 3]) ? (arr_36 [i_13 - 4] [i_5 + 1] [i_5 - 1]) : var_8))) ? (~var_4) : ((min((arr_36 [i_13 - 3] [i_5 + 4] [i_5 + 3]), (arr_36 [i_13 - 3] [i_5 + 1] [i_5 + 3]))))));
            arr_66 [i_5 + 4] [i_5 + 4] = (max(((((((arr_63 [i_5] [i_5] [i_5 + 3]) - (arr_32 [i_5])))) ? (arr_58 [17] [17] [i_13]) : (min(3972462763, var_9)))), ((((((var_1 ? (arr_51 [i_5] [i_13] [i_13] [i_13] [3]) : var_10))) && (arr_30 [i_5 + 2]))))));
            arr_67 [i_5] [i_5] [i_13] = (((arr_40 [i_5] [i_5 + 1]) / ((~(arr_28 [i_5 + 4])))));
        }
        arr_68 [9] = (((~var_9) << ((((((var_7 ? (arr_57 [i_5]) : 109))) || var_7)))));
        arr_69 [i_5] = (((!(arr_64 [i_5] [i_5 + 4]))));
    }
    var_12 = var_2;
    #pragma endscop
}
