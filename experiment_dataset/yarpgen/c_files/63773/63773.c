/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63773
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_19 = -1981888736;
        var_20 -= (~1863496988);
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                {
                    arr_8 [1] [i_3] [i_3] = (arr_4 [i_1]);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            {
                                arr_14 [i_3] [i_3] = ((((var_2 ? (((min(var_17, (arr_6 [i_3] [i_3] [3]))))) : 3676999326175429594)) > (((-(arr_9 [i_1] [i_1]))))));
                                arr_15 [i_3] = ((!((max(var_14, (arr_6 [i_3] [i_3] [i_4]))))));
                            }
                        }
                    }
                    arr_16 [i_3] [i_3] [i_3] [13] = ((1981888735 >> (((((((134217728 ? var_9 : (arr_7 [i_1] [i_2] [i_3])))) ? var_4 : (arr_2 [i_3]))) - 54))));
                }
            }
        }
        var_21 = (arr_9 [i_1] [i_1]);
        arr_17 [15] [i_1] = ((-(max(var_12, (arr_11 [2] [10] [i_1] [i_1] [i_1])))));
        arr_18 [i_1] = ((max((max(2647240373845897465, 134217704)), (var_14 | -102))) != ((max(-1337396120, ((min(var_16, var_18)))))));
        var_22 = (max((arr_3 [i_1]), (((255 ? -438598733 : 3)))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        arr_21 [8] = 4160749569;
        var_23 = (arr_1 [i_6] [i_6]);
        var_24 = 6795910910084277871;
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        arr_24 [i_7] [13] = (((arr_20 [i_7]) ? (arr_1 [i_7] [i_7]) : var_6));
        var_25 = ((var_3 ? 3696034992 : (arr_2 [i_7])));
        var_26 = (max(var_26, ((((-9223372036854775807 - 1) == (arr_2 [15]))))));
        var_27 = (((arr_9 [i_7] [i_7]) ? 1863496990 : var_17));
    }
    var_28 = (min(((((((32 ? 438598734 : 2431470311))) ? 163 : 1))), (((var_1 * 14377105392590168317) / var_7))));
    var_29 = var_6;
    var_30 = (max(var_30, var_11));
    #pragma endscop
}
