/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_1] = (max(((2266952222424058147 ? (arr_0 [i_0]) : var_8)), ((max(var_7, -7902356646219488991)))));

                for (int i_2 = 1; i_2 < 12;i_2 += 1) /* same iter space */
                {
                    arr_9 [i_1] [i_0] = ((((((((max(58, var_7)))) - var_12))) ? ((-7517043964866676677 - (arr_4 [i_0]))) : var_9));

                    for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
                    {
                        arr_14 [i_1] [i_2] = ((var_12 ? -58 : 1));
                        arr_15 [i_0] [7] [i_2] [7] [1] = ((((var_11 * var_13) == (!var_7))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
                    {
                        arr_18 [i_0] [i_1] [i_2] [i_4] [i_1] = (((arr_11 [i_0] [i_0] [i_0] [i_1] [i_0] [11]) ? var_3 : var_8));
                        arr_19 [i_0] [i_1] [i_0] [i_1] [6] [6] |= 58;
                        arr_20 [i_2] [i_2] [i_2] [i_0] [i_0] [i_0] = (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0]);
                    }
                    for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
                    {
                        arr_24 [i_0] [i_0] [i_0] = 26713;
                        arr_25 [i_0] [i_0] = (((!(((953638767 ? -28945 : var_8))))));
                    }
                }
                for (int i_6 = 1; i_6 < 12;i_6 += 1) /* same iter space */
                {
                    arr_29 [i_0] = var_8;
                    arr_30 [i_0] [i_1] [i_1] [i_6] = (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0]);
                }
                for (int i_7 = 1; i_7 < 12;i_7 += 1)
                {
                    arr_33 [i_0] [7] [i_0] [7] = (!((((434042316 ? 47 : 434042316)))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 10;i_9 += 1)
                        {
                            {
                                arr_39 [i_7] [1] [i_7] [i_7 - 1] [i_0] [i_7 - 1] = (max((((arr_16 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 - 1]) ? var_11 : var_12)), var_3));
                                arr_40 [i_0] [i_0] [i_1] [9] [i_0] [i_0] [1] = min(((26685 ? ((max(-59, var_12))) : (!-59))), (!var_2));
                            }
                        }
                    }
                }
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    arr_43 [i_0] [i_10] [i_10] [i_0] = ((((17505566455661476986 ? -28948 : -434042316))) / (((((var_2 ? -1345439685 : -15746))) - ((-26692 ? (arr_3 [i_0] [i_0] [i_10]) : 434042324)))));
                    arr_44 [i_10] [4] [i_10] [i_10] = ((((((6971513549698430434 ? -74 : (arr_12 [i_1] [i_1])))) ? ((max(var_2, (arr_16 [i_0] [6] [i_0] [0])))) : ((min(var_4, -26690))))));
                    arr_45 [i_10] [i_10] [i_0] = (max(var_9, (min((arr_23 [i_0] [i_0] [i_0] [i_1] [i_0] [i_10]), (arr_2 [i_0])))));
                    arr_46 [i_0] [i_1] [i_1] [i_1] = (((((!(((-676458543 ? var_6 : 7971530585765946874)))))) >> ((1378174935 ? (var_12 || 200) : 118))));

                    /* vectorizable */
                    for (int i_11 = 1; i_11 < 12;i_11 += 1)
                    {
                        arr_50 [i_0] [i_1] [i_1] [i_10] [6] [i_1] = ((77 ? var_10 : var_3));
                        arr_51 [i_11] [i_1] [i_0] [i_0] [i_1] [i_0] = ((!(arr_27 [i_11] [i_11 - 1] [i_10] [i_11])));
                    }
                }
                arr_52 [i_1] [i_0] = ((var_9 ? (((arr_8 [i_0] [1] [1]) ? 1 : (max(40349, 2146229370)))) : var_9));
            }
        }
    }
    var_14 = (!var_4);
    #pragma endscop
}
