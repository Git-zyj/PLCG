/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81335
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_16 = (((arr_2 [i_0]) + (arr_2 [i_0])));
        var_17 = ((-(32768 / 39851)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = 1637037476054700248;
        var_18 = (arr_1 [i_1]);
    }

    /* vectorizable */
    for (int i_2 = 2; i_2 < 13;i_2 += 1) /* same iter space */
    {
        var_19 = (18324806034513689751 ? 15 : 144);
        var_20 = (((arr_8 [i_2 + 3]) ^ (arr_6 [i_2 + 1])));
    }
    for (int i_3 = 2; i_3 < 13;i_3 += 1) /* same iter space */
    {
        arr_13 [i_3] = ((((((arr_2 [12]) ? 18446744073709551581 : (((var_4 ? (arr_11 [i_3]) : var_4)))))) ? (arr_4 [i_3 - 2]) : ((min(var_1, 0)))));
        arr_14 [12] |= ((((max(1570823375, (((4294967295 ? var_10 : 14)))))) ? (min(((((arr_8 [i_3]) >= (arr_3 [i_3])))), ((var_10 ? (arr_10 [i_3] [i_3]) : (arr_6 [i_3]))))) : (~var_5)));
        var_21 += (((((1437470689413217305 && (arr_0 [i_3 - 1])))) > ((max((arr_2 [i_3 - 2]), (arr_0 [i_3 - 1]))))));
        var_22 = (arr_8 [i_3]);
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 13;i_4 += 1) /* same iter space */
    {
        arr_19 [7] = ((3211268298 >= (((~(arr_0 [i_4]))))));
        var_23 = var_5;
        var_24 += ((var_4 << (((arr_17 [i_4 - 1]) - 1966396922))));
    }
    var_25 = (!var_13);
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 23;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 24;i_6 += 1)
        {
            {
                var_26 += -var_10;
                var_27 = (max(var_27, var_3));
            }
        }
    }
    #pragma endscop
}
