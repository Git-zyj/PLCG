/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76005
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_5 [i_1] [i_1] &= 2300388727;
            var_18 = ((var_16 ? 226 : (((arr_2 [i_0 - 1] [i_0 - 1]) / (arr_0 [i_0])))));
        }
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            arr_9 [i_0] [7] = (arr_4 [i_0] [i_2] [i_0]);
            arr_10 [i_0] [i_2] [i_0] = (arr_0 [i_0]);
            arr_11 [i_2] [i_0] [i_2] = 227;
            arr_12 [i_0] = (arr_8 [i_0]);
        }
        var_19 = (max(var_19, (arr_6 [i_0] [i_0])));
        var_20 = var_13;
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
    {
        var_21 = ((((max(3451317404, var_16))) ? ((81 ? 43806 : var_15)) : 37));
        arr_16 [i_3] = (max((arr_13 [i_3]), (arr_13 [i_3])));
        arr_17 [i_3] = (arr_14 [i_3] [i_3]);
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
    {
        var_22 = 43782;
        arr_20 [i_4] = (min((((225 ? (arr_13 [0]) : (arr_13 [12])))), (arr_13 [8])));
    }
    for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
    {
        var_23 = 188;
        arr_25 [i_5] [i_5] = ((30 ? (arr_13 [2]) : (((arr_22 [i_5] [i_5]) ^ (-2147483647 - 1)))));
    }
    var_24 *= 4294967295;
    #pragma endscop
}
