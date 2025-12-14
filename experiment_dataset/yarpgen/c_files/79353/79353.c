/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79353
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= (var_2 | var_14);

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_20 |= var_18;
        var_21 = ((((!(arr_1 [i_0 + 1] [i_0 - 1])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_22 = ((+(((arr_3 [i_2]) / var_4))));
            var_23 ^= (((arr_6 [21] [i_2] [i_1]) / (arr_6 [i_1] [i_2] [i_2])));
        }
        var_24 = (((arr_5 [i_1]) <= var_3));
        arr_10 [i_1] = ((((!(arr_8 [20] [i_1] [2])))));
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
    {
        var_25 = (min(var_25, ((((min(var_14, var_15)) % (arr_13 [17]))))));
        var_26 |= ((var_2 * (((arr_7 [i_3] [21] [i_3]) ? (arr_7 [i_3] [i_3] [i_3]) : var_0))));
        var_27 = ((((arr_9 [i_3]) ? (~var_11) : (arr_4 [i_3]))));
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
    {
        var_28 = (955393904 ? 0 : ((((var_0 ? 0 : 18446744073709551615)))));

        for (int i_5 = 3; i_5 < 21;i_5 += 1) /* same iter space */
        {
            var_29 = (min(var_29, ((min(var_5, var_18)))));
            var_30 = (!var_13);
            var_31 &= (((((var_12 | var_5) <= -var_4)) ? ((((!(arr_17 [i_4] [i_5]))))) : var_13));
        }
        for (int i_6 = 3; i_6 < 21;i_6 += 1) /* same iter space */
        {
            arr_20 [18] [18] = ((+((((arr_6 [i_4] [i_6 + 1] [i_4]) < (arr_18 [i_6] [i_6 + 2]))))));
            arr_21 [i_6] [i_6] [i_4] = 7116159821936572652;
        }
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            var_32 = (arr_18 [i_4] [i_7]);
            var_33 = ((~(((arr_23 [i_4] [i_7] [i_7]) ? ((1321299345 ? 15 : 7726)) : -var_11))));
        }
    }
    var_34 = (max(var_34, (((((((var_6 & 7) ? 40249 : ((0 ? var_12 : var_8))))) ? -var_9 : (!4294967294))))));
    #pragma endscop
}
