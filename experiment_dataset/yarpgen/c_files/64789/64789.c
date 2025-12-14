/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0 + 2] = (min((arr_0 [1] [i_0]), (arr_3 [i_1] [i_1] [i_1])));
                arr_6 [i_1] = ((((-127 - 1) - (arr_3 [i_0] [i_0 + 1] [i_0 + 3]))) > (arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 2]));
            }
        }
    }

    for (int i_2 = 3; i_2 < 20;i_2 += 1)
    {
        arr_9 [i_2 + 2] = (max(3, 128));
        arr_10 [i_2] = max(((((arr_8 [i_2] [i_2 - 2]) || var_6))), ((1461785305 ? 4294967290 : 4294967288)));
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                {
                    arr_19 [i_3] = (((!(20 | 1))) ? (arr_14 [i_3]) : (((((max((arr_13 [i_4]), (arr_7 [i_5] [i_4]))) > (((arr_14 [i_5]) ? var_10 : (arr_11 [19] [i_4]))))))));
                    arr_20 [i_4] = (arr_16 [i_5] [i_4] [i_3] [i_3]);
                }
            }
        }
        var_18 = (arr_11 [i_3] [i_3]);

        for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
        {
            var_19 = ((-((-(arr_8 [i_3] [i_3])))));

            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                arr_27 [i_7] [i_7] [i_3] [i_3] = (arr_11 [i_3] [i_7]);
                arr_28 [i_6] [i_7] = (arr_15 [i_3]);
                var_20 = (max(var_20, -1));
                arr_29 [i_3] [i_7] = (max((((arr_22 [i_6] [i_7] [i_7]) ? (var_17 <= 4294967288) : 2069188318)), (arr_24 [i_3] [i_6] [i_7])));
            }
        }
        for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
        {
            var_21 *= (max(((((((arr_11 [i_3] [i_3]) >= (arr_13 [i_3]))) ? (arr_16 [i_8] [i_8] [i_3] [i_3]) : (arr_22 [i_3] [i_3] [i_8])))), 9));
            var_22 = (min(3868724561, 1));
        }
        arr_32 [i_3] = ((((-(arr_17 [1] [i_3] [i_3] [i_3])))) && (((-(arr_31 [i_3])))));
        arr_33 [i_3] &= (((((~1) + 2147483647)) << (1 - 1)));
    }
    for (int i_9 = 0; i_9 < 18;i_9 += 1)
    {
        var_23 += ((((max((arr_21 [i_9]), (arr_34 [i_9])))) ? (((((arr_22 [i_9] [i_9] [i_9]) || (arr_11 [i_9] [i_9]))))) : ((+(max((arr_13 [i_9]), 42061))))));
        arr_36 [i_9] = 10787714903628481558;
        arr_37 [i_9] = ((var_4 != (arr_21 [i_9])));
    }
    #pragma endscop
}
