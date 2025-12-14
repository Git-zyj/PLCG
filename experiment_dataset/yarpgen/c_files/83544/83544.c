/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83544
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_1 * var_13);
    var_21 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (arr_1 [i_0]);
                var_22 = (((((14403 ^ (arr_3 [i_0] [i_1])))) ? ((~(arr_3 [i_1] [i_0]))) : (max(223, 8160))));

                for (int i_2 = 4; i_2 < 13;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_1] [i_2] [i_2] = var_1;
                                var_23 = ((((((!8084) ? (!209949665) : (arr_10 [i_4] [i_0] [i_3] [i_0] [i_0] [i_0])))) ? (arr_8 [i_2] [i_2] [i_2] [i_3] [i_4]) : (arr_13 [i_0] [i_2 - 1] [i_4])));
                            }
                        }
                    }
                    arr_15 [i_0] [i_0] [i_2] = ((!(!-8140)));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 14;i_6 += 1)
                        {
                            {
                                arr_23 [i_1] &= ((!(arr_10 [i_0] [i_1] [i_0] [i_2] [i_5] [i_6])));
                                arr_24 [i_2] [i_1] = ((-1504990634 ? 43 : 57500));
                            }
                        }
                    }
                    var_24 = ((((-62 + (arr_13 [i_1] [i_1] [i_1])))) ? var_10 : (243083840 - 8139));
                }
                for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
                {

                    /* vectorizable */
                    for (int i_8 = 1; i_8 < 11;i_8 += 1)
                    {
                        arr_31 [i_7] [i_1] = ((212 >= (arr_21 [i_7] [i_1] [i_7] [i_8] [i_8 + 1])));
                        var_25 += 9223372036854775807;
                    }
                    arr_32 [i_7] = 212;
                    var_26 = (((((var_5 > (arr_12 [i_0] [i_1] [i_7])))) >= (arr_9 [i_0] [i_7] [i_7] [i_7])));
                }
                for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
                {

                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        var_27 -= ((((arr_21 [i_10] [i_1] [i_0] [i_0] [i_9]) == 24914)));
                        var_28 = 24909;
                    }
                    var_29 = ((((178932032 >= (arr_20 [i_1] [i_1] [i_1] [i_1] [i_0]))) ? 61 : 8133));
                    arr_39 [i_0] [i_0] [i_1] [i_0] = ((var_2 >= (max((arr_0 [i_0] [i_1]), (~var_3)))));
                }
            }
        }
    }
    #pragma endscop
}
