/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56705
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            var_11 = (max(var_11, ((((arr_2 [2] [i_1 - 1] [i_0 + 1]) ? (arr_2 [i_0] [i_0] [i_0]) : 7499730017003146901)))));
            var_12 = (-2007421063 & 1402180867);
            arr_5 [i_0] = (((arr_0 [i_0 - 1]) ? (arr_4 [i_0 + 2]) : (arr_0 [i_1 - 1])));
            arr_6 [i_1] = (((arr_3 [i_0 + 1] [i_0 - 1] [11]) ? (2032 & 10947014056706404715) : 62));
            arr_7 [i_0] [1] [i_0] = ((10947014056706404689 ? 21550 : (!3)));
        }
        arr_8 [i_0] = (!((min(759533454703262391, 1))));
        arr_9 [i_0 + 2] = ((((((((arr_2 [i_0] [i_0 - 1] [2]) ? 250 : (arr_1 [i_0 + 1]))) - ((min(134, var_2)))))) ? (min(((77 * (arr_4 [i_0 + 1]))), (max(78, -8)))) : var_1));
    }
    var_13 = var_7;
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                var_14 = (max(var_14, 255));
                var_15 = (min(var_15, (((7499730017003146907 << ((((var_9 ? ((min(250, (arr_10 [12])))) : var_6)) + 13048)))))));
            }
        }
    }
    #pragma endscop
}
