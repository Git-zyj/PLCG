/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70023
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_10 = (arr_2 [i_0]);
                arr_6 [i_0] = ((-(((arr_1 [i_0] [i_0 - 1]) - (arr_3 [i_0])))));
                arr_7 [i_1] [i_0] = (min((((-(arr_1 [i_0] [i_0])))), var_6));
                var_11 = var_8;
                arr_8 [i_0] [20] [i_0] = arr_2 [i_0];
            }
        }
    }
    var_12 = var_6;

    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        var_13 = arr_1 [12] [12];
        arr_12 [i_2] = (18446744073709551615 * 7610957244086977256);
        arr_13 [i_2] = 0;
        var_14 = (arr_11 [i_2] [i_2]);
        arr_14 [i_2] [i_2] = var_8;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        arr_17 [i_3] = (arr_4 [i_3]);
        var_15 = ((((arr_5 [i_3]) * (arr_0 [i_3] [i_3]))));
        var_16 = (!11);
    }
    for (int i_4 = 1; i_4 < 1;i_4 += 1)
    {
        var_17 = ((((min(1, (arr_20 [i_4 - 1])))) > (((arr_2 [8]) * var_4))));
        arr_21 [i_4] = (arr_4 [i_4 - 1]);
        arr_22 [11] [i_4] = ((((((780532758 >> (((arr_3 [10]) - 90))))) ? (arr_4 [i_4 - 1]) : ((max(32337, 1))))));
    }
    var_18 = var_6;
    #pragma endscop
}
