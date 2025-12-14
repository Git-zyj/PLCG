/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74094
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= (min((min(var_10, (~var_12))), var_3));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            arr_6 [i_0] = var_3;
            arr_7 [i_0] [i_0] = ((-1 ^ (arr_3 [i_0])));
            arr_8 [i_0] [i_0] = ((var_12 ? 8093034899506017207 : (arr_3 [i_0])));
            arr_9 [i_0] = (((arr_0 [i_0]) ? 2540143097 : 13416128497246617202));
        }
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            var_17 = (arr_4 [i_2]);
            arr_12 [i_2] [i_0] [i_0] = ((-(arr_10 [i_0] [14])));
        }
        for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
        {
            arr_15 [i_0] [8] [i_0] = (4 ? (arr_2 [i_0]) : (1 | 3310867682));
            arr_16 [i_0] = 16777216;
        }
        for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
        {
            var_18 = (min(var_18, (~var_11)));
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 17;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    {
                        var_19 = ((~(arr_5 [i_4] [i_0])));
                        arr_23 [i_0] [i_4] [i_4] [i_4] [i_5] [i_0] = (var_5 % 3844209544349267458);
                    }
                }
            }
            arr_24 [i_4] [i_4] [i_0] = ((((((arr_17 [i_0]) ? var_14 : 1))) < (((arr_20 [i_4]) ? var_12 : (arr_5 [i_0] [i_0])))));
            var_20 &= (1 / var_0);
        }
        arr_25 [i_0] = ((((!(arr_22 [i_0] [i_0] [i_0] [i_0]))) ? ((var_1 >> (((arr_21 [i_0]) + 6144146119212098295)))) : (((arr_19 [i_0]) - 2763506514))));
        arr_26 [12] [i_0] &= 1531460777;
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            for (int i_8 = 3; i_8 < 15;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 17;i_9 += 1)
                {
                    {
                        var_21 = (((arr_17 [i_0]) + ((((arr_1 [i_8]) ? (arr_2 [i_0]) : var_11)))));

                        for (int i_10 = 0; i_10 < 19;i_10 += 1)
                        {
                            arr_39 [i_0] [i_9] [i_0] = (arr_3 [i_0]);
                            var_22 = (min(var_22, -7555153731915251709));
                            arr_40 [i_10] [i_0] [i_0] [i_0] [i_0] = (((-4 != var_3) ? (arr_21 [i_0]) : (((((arr_10 [i_0] [2]) == (arr_28 [1] [i_8 + 3])))))));
                        }
                        var_23 = (max(var_23, ((((arr_38 [i_8 + 2] [i_9 - 1] [i_9 - 1] [10] [i_9 - 1] [i_9 + 2] [18]) ^ ((((arr_2 [14]) ^ 2763506513))))))));
                    }
                }
            }
        }
        arr_41 [i_0] = ((arr_29 [i_0] [i_0] [i_0]) != ((((!(arr_36 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
    }
    for (int i_11 = 0; i_11 < 19;i_11 += 1) /* same iter space */
    {
        arr_46 [i_11] = ((var_13 ? ((min((10 || var_5), var_13))) : (min(var_3, (45414 | 57153)))));
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 0;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 19;i_14 += 1)
                {
                    {
                        arr_56 [i_11] [i_14] [i_13] [i_14] [18] |= (((min(2763506514, 194)) | (min((((arr_47 [i_14] [i_13] [i_14]) ? var_14 : var_2)), (arr_34 [i_14])))));
                        arr_57 [i_11] [0] [i_12] [i_11] [i_14] = ((!((((arr_14 [i_12 + 1] [i_12 + 1]) ? (arr_47 [i_12] [13] [i_13]) : (((arr_28 [i_13] [13]) * 0)))))));
                    }
                }
            }
        }
    }
    var_24 = (((45414 | 1) & (min(var_1, var_3))));
    var_25 *= ((((~(var_13 ^ var_14))) >= var_2));
    var_26 = ((var_10 - var_5) ^ (45421 < var_10));
    #pragma endscop
}
