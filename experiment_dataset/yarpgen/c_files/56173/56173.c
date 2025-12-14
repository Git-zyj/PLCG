/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_16 *= var_3;
        arr_3 [i_0] = (((arr_2 [i_0]) ? (min((arr_1 [i_0]), (arr_0 [i_0] [i_0]))) : (arr_0 [i_0] [i_0])));
        arr_4 [i_0] [i_0] = (var_2 ? ((((18446744073709551606 ? 18446744073709551615 : 2147483647)) - (arr_1 [i_0]))) : (max(((max((arr_0 [i_0] [i_0 - 2]), var_7))), (arr_2 [i_0]))));
        arr_5 [i_0] = ((!((max(1, (max((arr_1 [i_0]), var_8)))))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_17 = arr_1 [i_1];
        var_18 &= (arr_7 [i_1]);
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        arr_11 [1] [i_2] = (18014398509465600 < 18446744073709551599);

        for (int i_3 = 2; i_3 < 9;i_3 += 1)
        {
            arr_14 [i_2] = (arr_9 [i_3]);
            var_19 = (arr_6 [i_3] [i_2]);
            arr_15 [i_2] = ((1 >= ((4611686018427387903 ? (arr_6 [i_3 + 1] [i_3 - 2]) : (arr_6 [i_3 + 1] [4])))));
        }
        /* vectorizable */
        for (int i_4 = 3; i_4 < 8;i_4 += 1)
        {

            for (int i_5 = 3; i_5 < 6;i_5 += 1)
            {
                arr_22 [i_2] [i_2] [i_4] [i_5 + 3] = (((arr_6 [i_2] [i_2]) ? 255 : var_11));
                arr_23 [i_2] [i_4 + 2] [i_2] [7] = 1;
            }
            arr_24 [i_2] = var_11;
            var_20 = (13638718733166916497 ? (arr_18 [i_2] [i_4 + 1]) : var_15);
        }
        var_21 = (max(var_21, var_11));
        arr_25 [i_2] = ((max((max(var_15, 357661802764610)), (!1))) * (arr_16 [i_2] [i_2]));
    }
    var_22 = var_7;
    var_23 = (min(var_23, ((max(1, 0)))));
    #pragma endscop
}
