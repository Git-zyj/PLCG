/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99490
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_13 ^= 104;
        arr_2 [i_0] = (((arr_0 [i_0] [i_0]) ? 63 : (arr_1 [i_0])));
        arr_3 [i_0] = (arr_0 [4] [i_0]);
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            var_14 = (((-1052097593 ^ 47) ? ((max(47, (~47)))) : ((-4349734708837789796 ? 122 : 1073127515))));
            var_15 = (min(var_15, 14697782386888596717));
            arr_8 [i_2] = (arr_5 [1]);
        }
        var_16 = ((((((arr_4 [i_1]) < (arr_1 [i_1])))) < 114));
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {

        for (int i_4 = 2; i_4 < 15;i_4 += 1)
        {
            var_17 = (((arr_13 [i_4 + 1] [i_4 + 1]) < -1));
            var_18 = (min(var_18, var_2));
            var_19 += (1 < 15);
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            var_20 = ((!((-2 < (arr_17 [i_3])))));
            var_21 = (arr_11 [i_3] [i_3]);
        }
        arr_19 [i_3] = (arr_12 [i_3] [12] [12]);
    }
    var_22 = (max(var_22, 33853));
    var_23 &= (min(2643122312586108637, 33853));
    var_24 = var_8;
    #pragma endscop
}
