/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73729
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_17 += ((~(((var_5 >= (arr_2 [i_0] [i_0]))))));
        arr_3 [i_0] &= (((arr_1 [i_0]) - (((arr_0 [i_0]) ? (arr_2 [i_0] [i_0]) : -16028))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_18 = (max(var_18, var_3));
        arr_7 [i_1] = ((-(((arr_6 [i_1] [i_1]) ? ((3531 ? (arr_6 [8] [8]) : (arr_6 [i_1] [i_1]))) : ((var_1 ? (arr_1 [i_1]) : (arr_2 [i_1] [i_1])))))));
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {

        /* vectorizable */
        for (int i_3 = 4; i_3 < 21;i_3 += 1)
        {
            arr_12 [i_2] = (((((32767 | (arr_9 [i_2])))) ? (arr_10 [i_2] [i_2] [i_2]) : var_10));
            arr_13 [i_2] = (((arr_8 [i_2]) ? (arr_8 [i_2]) : var_8));
            arr_14 [i_2] [i_3] = (((((var_14 ? 0 : var_6))) ? (arr_11 [i_3 + 3] [i_3 - 3]) : (((arr_11 [24] [i_3]) + 11))));
        }
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            arr_19 [i_2] = (((((((max((arr_18 [i_4] [i_2]), -1))) ? -var_11 : ((max((arr_8 [i_2]), (arr_10 [i_4] [7] [i_2]))))))) ? (max((arr_15 [i_2]), ((-12544 ? (arr_10 [i_2] [i_2] [12]) : (arr_16 [i_2] [i_4]))))) : ((((max(-19683, -1370))) ? ((min(var_5, 30518))) : var_8))));
            var_19 ^= arr_18 [i_2] [i_4];
            arr_20 [i_2] [i_2] = (min(((((arr_15 [i_2]) || (arr_15 [i_2])))), (((arr_10 [i_2] [i_2] [i_4]) ? -22303 : (arr_16 [i_4] [i_4])))));
            arr_21 [i_4] |= ((((((((7957 ? (arr_8 [i_4]) : var_9))) ? (((arr_10 [i_2] [i_2] [i_4]) ? var_15 : (arr_11 [i_2] [23]))) : 24773))) ? (((!((max((arr_15 [i_4]), -22284)))))) : (9 != 1023)));
        }
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            var_20 = arr_18 [i_5] [i_2];
            var_21 = arr_17 [i_2] [i_2];
        }
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            arr_28 [i_2] = (((arr_17 [i_2] [i_2]) ? (((arr_27 [i_2] [i_6]) ? var_3 : -32757)) : (((arr_22 [21] [i_2] [i_2]) ? -1 : (var_9 * 15872)))));
            arr_29 [i_2] [i_6] [i_6] = arr_8 [i_2];
            arr_30 [i_2] = ((((min((arr_23 [i_2] [i_2] [i_6]), (arr_25 [i_6])))) <= (-32767 - 1)));
        }
        var_22 -= (((min((max(var_9, var_5), -1)))));
    }
    var_23 = (max(((-23988 ? 126 : ((var_12 ? 16614 : var_7)))), (((min(6388, -121))))));
    var_24 = (-32767 - 1);
    #pragma endscop
}
