/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((!((min(var_3, var_2)))))) << (var_2 - 4608464572713410189)));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 12;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = (((arr_0 [i_0 - 1]) || (arr_0 [i_0 - 1])));
        arr_3 [i_0] [i_0] = (((arr_1 [i_0 - 1] [i_0]) ? (arr_0 [i_0 - 1]) : var_5));
        arr_4 [i_0] = (arr_1 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 12;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1 + 1] [6] = arr_6 [i_1];

        for (int i_2 = 2; i_2 < 12;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    {
                        var_14 = (((arr_10 [i_1 + 1]) / (arr_12 [i_1] [i_1 + 1])));
                        arr_17 [i_2] = (((arr_5 [i_3 + 2]) != 13386));
                        arr_18 [i_1] [i_1] [i_3] [i_4] [i_2] [i_3] = (!13386);
                    }
                }
            }

            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                arr_22 [i_1] [i_2] [6] = (arr_16 [2] [2]);
                arr_23 [i_2] = (arr_5 [i_5]);
                arr_24 [i_5] [i_5] [i_5] [8] = 195;

                for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
                {
                    var_15 = (((((arr_27 [12]) & var_4))) ? ((var_7 ? 0 : var_6)) : var_10);
                    arr_28 [i_2] = ((!(arr_14 [i_1 + 1] [2])));
                    arr_29 [i_6] [i_5] [i_1] [i_2] [i_1] = (-134217728 != 7);
                }
                for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
                {
                    arr_32 [i_1 + 1] [i_2] [8] [i_7] = (((((~(arr_8 [i_1] [5] [5])))) ? (((-(arr_30 [i_1])))) : var_2));
                    arr_33 [i_1] [i_1 - 1] [i_1] [i_1] [i_1 - 1] [i_1] = (var_0 - var_0);
                    arr_34 [i_5] = 0;
                }
                arr_35 [i_1] [9] [i_2 + 1] [i_5] = ((-(((arr_15 [i_1] [i_2 + 1] [i_5] [i_5] [i_1]) ? (arr_26 [i_1] [i_1] [i_1 + 1]) : var_3))));
            }
        }
        var_16 = (arr_5 [i_1 - 1]);
    }
    var_17 = 65509;
    /* LoopNest 2 */
    for (int i_8 = 2; i_8 < 21;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 24;i_9 += 1)
        {
            {
                arr_42 [i_8] [i_8] [i_8 - 1] = 12289941468968099864;
                arr_43 [i_8 + 1] [21] [3] = ((((((arr_36 [i_8 + 1]) | (arr_36 [i_8 + 3])))) ? (((arr_36 [i_8 + 3]) | (arr_36 [i_8 + 3]))) : ((~(arr_41 [i_8 + 1] [22])))));
                arr_44 [i_8] [i_9] = (((((arr_36 [i_8 + 3]) ? (arr_36 [i_8]) : 4779936617052711872))) ? (arr_36 [i_9]) : ((min((arr_36 [i_9]), (arr_36 [i_8 + 3])))));
                arr_45 [i_8] [i_9] = ((((min(var_2, (((~(arr_38 [i_8 + 2] [i_8]))))))) ? ((((arr_39 [i_9] [2] [i_8]) ? 3970550651 : (((max((arr_40 [i_8] [i_8 + 3] [i_8]), (arr_38 [i_8] [i_9])))))))) : (((~70) ? (((31289 << (((arr_38 [3] [3]) - 21701))))) : (max(var_2, 10564988351625145757))))));
                arr_46 [i_8] [i_8] = ((arr_37 [i_8 + 3] [i_8 + 3]) > (arr_41 [i_8 - 2] [i_8 - 2]));
            }
        }
    }
    #pragma endscop
}
