/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58933
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 9937782961401153723;
    var_19 = -var_15;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            arr_6 [i_0] [i_0] = ((!(~-10943)));
            arr_7 [i_0] = (((arr_1 [i_1 + 2]) * 248));
        }
        arr_8 [i_0] [i_0] = (((((((max((arr_1 [i_0]), (arr_5 [i_0] [i_0])))) ? (arr_0 [i_0] [i_0]) : (((8 ? 1 : -11712)))))) && ((!(((1073741823 ? 4276735552009444033 : (arr_4 [0] [i_0] [i_0]))))))));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            var_20 = ((~((-88 ? 250 : 131166095528797951))));
            arr_12 [i_0] [i_2] [9] = ((-88 <= (((arr_11 [i_0] [i_2] [i_2]) ? (arr_1 [i_0]) : (arr_0 [7] [i_2])))));
            arr_13 [i_0] [i_0] = ((~(arr_9 [i_0] [i_2] [i_2])));
        }
        for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
        {
            var_21 = ((!(arr_15 [i_0])));
            arr_16 [i_0] = (((arr_11 [5] [i_3] [6]) == -4381));
            var_22 = (((1 & ((-2147483642 ? 18446744073709551615 : -1766389291)))));
        }
        for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
        {
            var_23 = (arr_10 [i_0] [i_4] [i_0]);

            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                arr_22 [i_0] [i_0] [i_5] [i_5] = (arr_5 [i_4] [i_4]);
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 8;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        {
                            arr_27 [i_0] [i_0] [i_4] [i_6] [i_7] [i_4] [i_5] = (((((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0]))) >> (((arr_9 [i_0] [i_0] [i_5]) - 137))));
                            arr_28 [i_5] [i_4] [i_5] [i_6] [i_0] = (arr_21 [i_7]);
                        }
                    }
                }
            }
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                var_24 = (arr_29 [6] [9] [i_8] [8]);
                arr_31 [i_0] [i_4] = (((arr_14 [i_0]) + ((((min((arr_30 [i_0] [i_0] [i_8] [i_0]), 88))) ? (arr_30 [i_0] [i_8] [i_0] [i_8]) : (arr_18 [i_0] [0] [i_0])))));
                arr_32 [i_0] [3] [i_4] = (min(((~(arr_5 [i_8] [i_4]))), (((~(arr_1 [i_0]))))));
                arr_33 [i_0] [i_0] [i_8] = 5309353980281161210;
                var_25 = ((!(((+(((arr_20 [i_0] [i_4]) ? 1 : (arr_4 [1] [i_0] [i_8]))))))));
            }
            for (int i_9 = 2; i_9 < 7;i_9 += 1)
            {
                arr_36 [i_9] [i_9] [i_0] = 182;
                arr_37 [i_0] [i_4] [5] [i_4] = ((4383 == ((((1669593993 ? -103 : -4381))))));
            }
        }
        arr_38 [i_0] [i_0] = 1766389291;
    }
    #pragma endscop
}
