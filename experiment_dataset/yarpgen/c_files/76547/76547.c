/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= var_11;

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_20 = (max(var_20, ((((((-5720670527087211958 - (((127 ? var_10 : (-127 - 1))))))) ? var_11 : ((var_17 ? ((var_0 ? var_1 : var_2)) : 125805744)))))));
        arr_4 [i_0] = (((11 - var_4) ? (min((arr_2 [i_0]), ((var_3 ? var_18 : var_0)))) : (arr_1 [i_0] [i_0])));
        arr_5 [i_0] [i_0] &= 62;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = (9223372036854775807 >= -126);
        var_21 ^= ((-126 ? 21503 : var_6));
        arr_9 [i_1] = var_18;

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            var_22 -= (1 % -111);
            arr_14 [i_1] [i_1] [i_1] = 84;
            arr_15 [i_2] [i_2] = (arr_13 [i_2]);
        }
        for (int i_3 = 3; i_3 < 9;i_3 += 1)
        {
            var_23 = (arr_6 [i_1]);
            var_24 = (min(var_24, (((-(arr_10 [i_3 - 3] [i_3 - 3]))))));
            var_25 &= 4223;
            arr_18 [i_1] [i_3] [i_3 + 1] = ((125 ? (-127 - 1) : 65505));
        }
    }
    for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            var_26 = (((arr_6 [i_4]) ? var_7 : 118));
            var_27 = (max(var_27, (var_1 + var_18)));
            arr_25 [i_5] [i_4] = -var_13;
        }
        arr_26 [i_4] = ((((((arr_0 [i_4] [i_4]) ? 1676966668 : (min(var_17, var_8))))) >= (((216172782113783808 ? (arr_0 [i_4] [i_4]) : (arr_3 [i_4]))))));
        var_28 = (max(var_28, (((var_7 / ((max(-119, 16777215))))))));
        var_29 *= (min((((arr_2 [i_4]) ? (arr_17 [i_4]) : var_17)), (arr_20 [i_4])));
        var_30 = 21517;
    }
    #pragma endscop
}
