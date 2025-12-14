/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57821
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_18 ^= 17307713590203021509;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_0] [i_0] [i_2] [10] |= ((((33844 ? (max(7621289633111739125, 3594286070)) : (min(9223372036854767616, 12597398444223149558)))) >> ((((65535 ? (arr_11 [i_3 + 1]) : 1335187351)) - 18116888396219616982))));
                                arr_15 [4] [4] [10] [i_3 + 1] [i_2] [i_2] [i_2] &= (((!1468826022265588123) ? ((((!(((var_10 >> (var_4 - 150)))))))) : (((max(var_14, 1139030483506530107)) / ((min(3594286070, 3594286070)))))));
                            }
                        }
                    }
                    arr_16 [i_1] &= var_0;
                    var_19 = (max(var_19, (((!(((63101 ? (arr_3 [i_2 + 2] [i_2 + 3]) : var_8))))))));
                    arr_17 [10] [i_1] [i_1] [10] = (((min((arr_12 [i_2 + 1] [i_1] [i_1] [i_1] [8]), (~632377418))) != (((((!var_11) && var_7))))));
                }
            }
        }
        arr_18 [i_0] &= 1024;
        var_20 = (!7127);
        arr_19 [i_0] |= (min((((((~(arr_7 [i_0] [i_0] [1] [i_0]))) != 220))), (768082581 | 2434)));
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
    {
        var_21 = (-(arr_11 [i_5]));
        var_22 -= ((min(0, var_9)));
        var_23 += (min((var_9 - 68719476735), -10719963618352921463));
        var_24 = var_1;
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 17;i_6 += 1)
    {
        var_25 = (((arr_24 [i_6 - 1]) == (var_11 / 2177989730)));
        var_26 = (((((arr_24 [i_6 - 1]) ? (arr_22 [i_6]) : 2785575137)) | (arr_23 [i_6])));
    }
    var_27 = (((((0 ? -545460846592 : var_6))) ? (max(((max(64609, var_3))), (16977918051443963492 | -19108))) : (2391492243 / var_8)));
    var_28 = (((((var_0 ? (var_7 * 63102) : -var_2))) || var_1));
    #pragma endscop
}
