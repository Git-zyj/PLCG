/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63607
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_6;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_14 = (((!602401341) & -56));
        arr_3 [1] = ((min(var_3, 12)));

        /* vectorizable */
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            var_15 |= (arr_1 [7] [i_1]);
            var_16 += (~80);
            var_17 = -86;
        }
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            var_18 &= (max(((-82 ? 2857806470519544585 : (24305 <= 15588937603190007030))), ((((arr_2 [i_2]) + 1)))));
            var_19 = (max(((13324 * (arr_2 [i_0]))), (((arr_1 [i_0] [i_2]) | -0))));
            var_20 = min(((((arr_7 [i_0] [i_2]) <= var_0))), (arr_7 [11] [i_2]));
            var_21 = (((~(max(1, var_1)))));
        }
        var_22 = (max(((((max((arr_0 [i_0] [i_0]), 5)) == 41245))), (((((~var_2) + 2147483647)) << ((2243556903 ? (arr_4 [i_0] [i_0] [10]) : -83))))));
    }
    var_23 = (~2857806470519544574);
    var_24 = (max((min(15588937603190007012, (~0))), var_3));
    #pragma endscop
}
