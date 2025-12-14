/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((~(min((max(4064, var_10)), (var_2 / 1126942986)))));
    var_14 = -1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_15 = ((((((arr_4 [i_0] [i_1] [i_4 - 1]) + 2147483647)) >> (((arr_4 [i_0] [i_1] [i_0]) + 16845)))));
                                var_16 = max(((((((arr_10 [i_3] [i_1] [i_1]) || var_8))) - (min(379693170, (arr_15 [i_0] [i_0] [2] [i_0] [i_0]))))), 379693170);
                                var_17 = (arr_0 [11] [2]);
                            }
                        }
                    }
                    var_18 = (((max(-379693170, (arr_15 [3] [i_1] [i_1] [i_2 - 3] [i_2 - 3]))) != ((-((var_1 ? (arr_2 [i_2]) : 1))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_19 = (((arr_7 [i_0] [i_1] [i_2 - 3] [i_5]) % (((arr_16 [i_0] [i_1] [i_2] [i_5] [i_6]) - (arr_2 [i_6 - 1])))));
                                var_20 = (((max((1475858011663111302 % -24579), (max((arr_9 [i_0] [i_1] [i_1] [i_5]), 2677800933184944517)))) != var_7));
                                var_21 = (max((min((arr_5 [i_0] [i_1] [i_0]), (arr_0 [i_0] [i_0]))), (max(((max(33, (arr_10 [i_0] [i_0] [i_0])))), (arr_18 [i_6 - 1] [i_1] [i_2 + 2])))));
                            }
                        }
                    }
                    var_22 = ((((min(32577, 1866851121))) ? (max((arr_10 [i_0] [i_0] [i_2 + 2]), (arr_10 [5] [i_1] [i_2 + 2]))) : var_5));
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 11;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            {
                                arr_28 [i_0] [i_1] [i_2 - 1] [7] [i_8] = ((-24579 >= (max(18446744073709420544, -2677800933184944517))));
                                arr_29 [i_0] [i_2 + 1] [i_7 - 1] = ((-(((arr_14 [6]) << (((min(var_4, var_1)) + 4763621223409788093))))));
                                var_23 = (min(var_23, (24569 * 255)));
                                arr_30 [0] [i_7 + 1] [i_7] [0] [i_7 - 2] [0] [i_7 + 1] = -24579;
                                arr_31 [i_0] [i_1] [i_1] [i_1] [i_0] [9] = (((-1 < var_3) ? ((((var_5 ? 48 : 5619584950936320038)) / -2147483633)) : (((379693173 ? -379693173 : 379693170)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = (max(2268764814002518531, var_11));
    #pragma endscop
}
