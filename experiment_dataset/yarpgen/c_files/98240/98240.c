/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_12 = 236;
        arr_2 [i_0] = (((((-(arr_0 [i_0] [i_0 + 2])))) & (arr_1 [i_0] [i_0 - 1])));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_13 = 6718;
            var_14 = (max((max((arr_0 [i_0] [i_0 + 2]), -1781300546)), ((((105 ? (arr_0 [4] [i_1]) : var_9))))));
        }
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_15 = var_3;
            arr_9 [i_2] = 255;
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 10;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 0;i_4 += 1)
        {
            {
                var_16 -= ((((min(var_0, (-2147483647 - 1))) != 249)));
                arr_15 [i_3] [i_4] [i_3] = (((((arr_10 [i_3 - 1]) ^ (arr_10 [i_3 - 1]))) << ((((var_6 ? (arr_1 [i_3 - 1] [i_4 + 1]) : (arr_7 [i_4 + 1]))) - 3440871143))));
            }
        }
    }
    var_17 = (((~2147483647) & (((((-124 ? -1219446350 : -536870912)) >= -3061)))));
    #pragma endscop
}
