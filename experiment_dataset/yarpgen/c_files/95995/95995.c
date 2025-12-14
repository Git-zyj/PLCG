/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95995
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = max(65, ((-47 % (~var_0))));
    var_14 = 215;
    var_15 = var_1;
    var_16 = (min((((!((min(-96, 0)))))), ((191 ? 215 : 1))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_17 = ((((var_0 < (arr_1 [5]))) ? ((-(arr_2 [i_0]))) : (arr_1 [i_0])));

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            arr_5 [i_0] [i_0] [i_1] = ((!(((181 ? (arr_2 [i_1]) : (arr_2 [i_0]))))));

            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                var_18 += ((~(arr_6 [i_0 - 1] [i_2] [i_2] [i_2])));
                arr_9 [i_0] [i_0] [i_0] = (1 ? 2532881639 : -26492);
            }
        }
    }
    for (int i_3 = 2; i_3 < 17;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 2; i_4 < 16;i_4 += 1)
        {
            var_19 &= (min(((-var_12 ? (~3207790173) : var_8)), ((((((var_10 ? (arr_13 [11]) : (arr_8 [i_3] [i_4] [i_4 + 1])))) >= (arr_2 [i_3 + 2]))))));
            arr_15 [i_3] = ((var_5 * (((!(arr_8 [i_3] [5] [i_3]))))));
        }
        var_20 = (max(65535, 0));
        var_21 = (max(var_21, ((((((max(149, (arr_14 [i_3] [i_3]))) >> (((~1) + 6)))) | (arr_10 [15]))))));
        arr_16 [i_3] [i_3] = (arr_8 [i_3] [11] [i_3 - 2]);
    }
    for (int i_5 = 2; i_5 < 17;i_5 += 1) /* same iter space */
    {
        var_22 = (((~var_10) & ((1970533575 ? 0 : -96))));
        arr_19 [i_5] = ((var_2 ^ (((-(min(3577214112, 1)))))));
        arr_20 [1] = arr_13 [i_5];
    }
    #pragma endscop
}
