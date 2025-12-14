/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_12;
    var_18 = (max(var_18, ((((max((-1550441301 / var_2), var_1)) * var_16)))));

    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((+(((arr_1 [i_0 - 3] [i_0]) ^ var_6))));
        var_19 = (max(var_19, ((max((((arr_1 [i_0 - 2] [i_0 + 2]) / (arr_1 [i_0 - 2] [i_0 - 1]))), (((arr_1 [i_0 - 3] [i_0 + 1]) ^ var_12)))))));
    }
    for (int i_1 = 3; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_20 *= ((~(min((var_12 | 4294967295), -32763))));
        arr_8 [i_1] = ((-(!var_8)));
        arr_9 [i_1] = (((min(var_1, (arr_6 [i_1] [i_1]))) % (min((((var_13 + 2147483647) >> (907 - 878))), -10888))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                {
                    arr_14 [i_3] |= ((((((arr_12 [i_1 + 1] [i_1 - 1]) ? var_7 : (arr_12 [i_1 - 1] [i_1 - 2])))) ? ((((arr_13 [i_1 - 1] [i_1 - 2] [i_1 + 1]) & (arr_13 [i_1 - 1] [i_1 - 2] [i_1 - 2])))) : (max((arr_12 [i_1 - 1] [i_1 - 1]), 1546642664666679763))));
                    var_21 = (max((min((((arr_10 [i_2] [i_1]) + var_5)), (!var_8))), ((-32762 + (arr_5 [i_1])))));
                }
            }
        }
        arr_15 [i_1] = ((!((min((var_13 * var_1), (-32750 % 21867))))));
    }
    for (int i_4 = 3; i_4 < 18;i_4 += 1) /* same iter space */
    {
        arr_18 [2] [i_4] &= ((((((arr_17 [i_4 - 2]) & (arr_7 [i_4 - 3] [i_4])))) ? ((var_3 + (arr_17 [i_4 + 1]))) : (min((arr_17 [i_4 - 3]), (arr_17 [i_4 + 1])))));
        /* LoopNest 3 */
        for (int i_5 = 4; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 17;i_7 += 1)
                {
                    {
                        var_22 = (var_3 == var_15);
                        var_23 = (min(var_23, (((var_12 > (min(((-32763 ? var_7 : 1429765220)), (((arr_20 [i_4]) | (arr_5 [i_6]))))))))));
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_8 = 1; i_8 < 7;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 8;i_10 += 1)
            {
                {
                    arr_34 [0] [i_8] [i_10 + 2] = ((((((arr_32 [i_8] [i_9] [i_10]) ? (!var_5) : (var_10 != var_6)))) ? ((6271901774645759401 * (((var_7 != (arr_29 [i_8] [i_9])))))) : ((max((arr_13 [i_8 + 2] [i_8 + 2] [i_10 + 1]), (arr_24 [i_10] [i_8] [i_10]))))));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 10;i_11 += 1)
                    {
                        for (int i_12 = 2; i_12 < 7;i_12 += 1)
                        {
                            {
                                var_24 = (min((arr_11 [i_8 - 1] [i_12 + 2] [i_12 - 1]), (arr_11 [i_8 - 1] [i_12 - 2] [i_12])));
                                arr_40 [i_12] [i_12] [i_8] [2] [i_8] [i_12] [i_8] |= (max((((arr_24 [i_8] [i_12] [8]) / ((-32741 ? -32741 : var_4)))), ((((((~var_2) + 2147483647)) >> (!var_14))))));
                                var_25 += (((~-1073741824) ? (((8332 % var_8) ? 905 : (((arr_39 [i_8] [i_8] [i_8] [i_8]) ? 6271901774645759401 : (arr_30 [i_10]))))) : var_12));
                                var_26 = (min((!var_4), -6271901774645759401));
                            }
                        }
                    }
                }
            }
        }
    }
    var_27 = ((var_13 ? (((var_0 - var_2) % (var_0 * var_4))) : ((((-var_4 > (((min(var_9, 2810))))))))));
    #pragma endscop
}
