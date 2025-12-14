/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76219
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_18 |= (max(173, 11));
        arr_2 [i_0] = (min((max((13277 + var_17), (arr_1 [i_0 - 1]))), ((min(((-8043303063366284116 ? (arr_1 [i_0]) : (arr_0 [i_0]))), 0)))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 = ((2147483647 ? 65535 : 18446744073709551612));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_20 += (min(var_17, 18446744073709551605));
                                var_21 += (arr_15 [0] [9] [i_4] [i_4 + 3] [20]);
                                arr_17 [i_0 - 1] [11] [i_2] [i_0] [i_0 + 1] [i_0] = (max(var_3, (min((arr_12 [i_1] [i_1] [i_1] [8] [i_1 - 3]), (((arr_12 [i_0] [i_0] [11] [i_0] [i_0 - 1]) ? var_12 : -1))))));
                                var_22 ^= var_11;
                            }
                        }
                    }
                    arr_18 [i_0 - 1] [i_1 - 1] [i_2] |= ((var_16 ? 1 : var_0));
                }
            }
        }
    }
    for (int i_5 = 1; i_5 < 11;i_5 += 1) /* same iter space */
    {
        var_23 *= ((((min((((var_8 ? var_1 : (arr_14 [i_5 + 1])))), ((var_11 ? (arr_19 [i_5]) : var_17))))) ? (((+((((arr_9 [i_5] [i_5] [i_5]) >= (arr_5 [i_5 + 2] [i_5]))))))) : (min(-1, ((var_1 ? 18446744073709551612 : var_1))))));
        var_24 = (max(12, 18446744073709551596));
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 12;i_7 += 1)
            {
                {
                    var_25 = 190;
                    var_26 = (max((((arr_6 [i_5 + 2] [i_5 - 1] [i_7 - 1]) ? -8 : (arr_6 [i_5] [i_5 + 1] [i_7 - 1]))), ((max(41118, (arr_24 [i_5] [i_5 + 2] [i_7 - 1]))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 10;i_9 += 1)
                        {
                            {
                                var_27 += var_7;
                                arr_32 [i_9] [i_8] [12] [i_6] [i_5] = var_17;
                            }
                        }
                    }
                }
            }
        }
        var_28 = (((((-25 ? var_1 : var_17)))) ? ((((arr_29 [i_5] [i_5] [i_5 + 2] [i_5 + 2] [i_5] [i_5]) ? (arr_29 [12] [0] [i_5] [i_5 - 1] [i_5] [10]) : (arr_14 [i_5 - 1])))) : (((0 ^ 940753700) % (32076 ^ -3738312196085341829))));
    }
    /* vectorizable */
    for (int i_10 = 1; i_10 < 11;i_10 += 1) /* same iter space */
    {
        var_29 = (max(var_29, 44787));
        var_30 = (max(var_30, (25 != -1)));
        var_31 = 56;
        var_32 += var_6;
    }
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 15;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            {
                arr_40 [i_11] [i_12] [i_11] = (((arr_38 [i_12] [i_12]) < ((((arr_38 [i_11] [i_12]) ? var_3 : var_11)))));
                arr_41 [i_11] [1] = max(((((arr_10 [10]) ? (arr_36 [i_11]) : 16384))), ((((min(106, var_6))) ? (((((arr_15 [12] [i_11] [i_11] [i_11] [i_12]) >= (arr_38 [i_11] [i_11]))))) : (max(13, 22)))));
            }
        }
    }
    #pragma endscop
}
