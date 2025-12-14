/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93696
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_4 ? (max(((292562706 ? var_0 : var_0)), var_14)) : (((var_2 ? 16981 : var_15)))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((!(!var_12)));
        var_19 = (max(var_19, ((((((arr_1 [i_0] [i_0]) > (arr_1 [i_0] [i_0]))) ? 62295 : (((((~(arr_1 [i_0] [i_0]))) > ((min(var_17, (arr_0 [4]))))))))))));
        var_20 = (max(var_20, ((min((max((arr_1 [i_0] [i_0]), 9042659844178644162)), (((!(arr_1 [i_0] [i_0])))))))));
        arr_3 [i_0] = var_4;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_21 = ((((2590894591071179881 ? 292562703 : var_5))) ? ((var_1 ? (arr_1 [i_1] [i_1]) : var_5)) : (arr_4 [i_1]));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    {
                        var_22 = ((-(arr_15 [i_2] [i_3 - 1] [i_3] [i_3] [i_4])));
                        var_23 = (max(var_23, (((4081 + (arr_10 [1] [1] [i_3 - 1] [i_3 - 1]))))));
                        arr_16 [i_4] [i_3 - 1] [i_2] [i_2] [i_1] = ((~(arr_13 [i_2] [i_2] [i_3 - 1] [i_4] [i_2])));
                        var_24 |= (((arr_9 [9] [i_3 - 1] [i_3 - 1]) ? (arr_9 [i_3] [i_3 - 1] [i_3]) : 3));
                        arr_17 [i_2] = (arr_1 [i_3 - 1] [i_3 - 1]);
                    }
                }
            }
        }
        var_25 = (max(var_25, (((46509 + (arr_0 [16]))))));
        var_26 = ((!((!(arr_14 [i_1] [i_1] [i_1] [i_1])))));
    }
    var_27 = 13319200476774866094;
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 9;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                {
                    arr_26 [i_5 - 1] = ((((-9223372036854775807 - 1) ? 802782592986214035 : -88)));
                    var_28 = (arr_9 [i_7] [i_6] [i_5 - 1]);
                    arr_27 [i_5] [i_5 - 1] [i_6] [i_7] = ((+(min((arr_10 [i_5 + 1] [i_5 - 1] [i_5 - 1] [i_5 - 1]), 53739))));
                }
            }
        }
    }
    var_29 = (max(var_29, (((((~(min(1091834071, 1099511627775)))) > var_6)))));
    #pragma endscop
}
