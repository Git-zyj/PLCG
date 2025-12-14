/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85659
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_18 |= (max(((-1 || ((max(var_13, (arr_1 [i_0] [i_0])))))), (((var_4 ? var_8 : (arr_1 [13] [i_0]))))));
        arr_2 [i_0] = (max((((!(arr_0 [i_0])))), (arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_19 = var_1;
        var_20 = (max(18446744073709551615, (arr_3 [i_1])));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
    {
        var_21 = ((-var_7 ? (max((arr_4 [i_2]), (arr_4 [i_2]))) : (min((arr_7 [i_2]), (arr_1 [i_2] [i_2])))));
        var_22 += ((170 ? (max(var_13, var_0) : (0 - var_14))));
        arr_10 [i_2] [i_2] = ((-(arr_6 [i_2])));
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
    {
        arr_13 [i_3] = ((((arr_11 [i_3]) ? (arr_3 [i_3]) : ((var_4 % (arr_11 [i_3]))))));
        var_23 += (((((max(var_1, var_8)) >> (var_9 - 4853128386052595892)))) ? (arr_4 [17]) : (((~(arr_12 [i_3] [i_3])))));
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        for (int i_5 = 4; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 4; i_6 < 24;i_6 += 1)
            {
                {
                    var_24 = (max(var_24, (var_3 + var_16)));
                    var_25 = (min(var_25, (((+((max((arr_19 [22] [i_6]), var_15))))))));
                    arr_23 [i_4] [i_6] [i_6] = (((arr_18 [16]) ? (((((((var_14 ? var_10 : var_4))) || var_7)))) : ((~(arr_22 [i_6 - 3] [i_5 - 3] [i_6 + 1])))));
                    arr_24 [i_6] [i_5] [20] = var_13;
                    var_26 -= -1;
                }
            }
        }
    }
    var_27 *= ((var_5 ? (max(536870784, ((var_2 << (((var_16 + 2505) - 20)))))) : (min(var_4, (min(var_5, (-9223372036854775807 - 1)))))));
    #pragma endscop
}
