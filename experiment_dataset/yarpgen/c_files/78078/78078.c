/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78078
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_14 = ((10447 * (!4739800055237071436)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_15 = 15386384189629639085;
                                arr_14 [i_3] [i_1] [i_2] [1] [i_4] [i_4] [i_3] = ((((((arr_8 [i_0] [i_0] [i_0]) & var_5))) == (((arr_10 [i_0] [i_1] [i_2] [i_3] [8]) ^ (arr_5 [i_0] [i_4 - 1])))));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
                    {
                        arr_17 [1] [1] [i_2] [i_5] = (~var_12);
                        var_16 = (~-20);
                        var_17 = (arr_3 [i_2]);
                    }
                    for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
                    {

                        for (int i_7 = 1; i_7 < 10;i_7 += 1)
                        {
                            var_18 = (arr_21 [i_7 - 1] [i_7] [i_7 - 1] [i_7 - 1] [i_7 - 1]);
                            arr_25 [i_0] [10] [i_2] [i_6] [10] &= (!var_6);
                            arr_26 [i_0] [i_1] [i_7] [1] [3] = -var_11;
                        }
                        for (int i_8 = 1; i_8 < 9;i_8 += 1) /* same iter space */
                        {
                            var_19 = ((((((((arr_23 [i_0] [i_1] [i_1]) && var_11))) + var_4)) + (((!(arr_22 [i_8 + 2] [i_8 - 1] [i_8 - 1] [i_8 + 2] [i_8] [i_8]))))));
                            var_20 = ((!(arr_5 [i_8 - 1] [i_1])));
                            var_21 = ((!(!var_6)));
                            var_22 *= ((-(((!(arr_21 [i_0] [i_1] [i_8 + 1] [i_6] [i_8]))))));
                            var_23 = 8897079639911351651;
                        }
                        for (int i_9 = 1; i_9 < 9;i_9 += 1) /* same iter space */
                        {
                            var_24 = var_8;
                            var_25 &= (arr_30 [i_9 + 1] [i_9 + 2] [i_9 - 1] [i_9] [i_9 + 1]);
                            var_26 = (arr_19 [i_6] [3] [1]);
                            arr_32 [10] [i_9] [i_2] [i_6] [i_9 + 2] = (~var_0);
                        }
                        for (int i_10 = 1; i_10 < 9;i_10 += 1) /* same iter space */
                        {
                            var_27 = (!-2147483647);
                            var_28 = (min(var_28, var_3));
                            var_29 = ((-(arr_33 [i_10 + 2] [i_2] [i_2] [5] [9])));
                        }
                        var_30 = (max(var_30, 8897079639911351650));
                        var_31 = ((!((var_8 < (arr_20 [i_0] [i_6] [i_2] [i_6] [i_2])))));
                    }
                    arr_36 [6] [i_1] [i_2] = var_0;
                }
            }
        }
    }
    var_32 = var_0;
    #pragma endscop
}
