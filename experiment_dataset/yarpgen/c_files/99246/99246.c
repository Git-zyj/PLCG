/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99246
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = ((-9769 ? ((var_10 ? (arr_0 [i_0]) : 129)) : 41399));
        arr_3 [i_0] = (arr_1 [i_0]);
        var_11 = ((~(arr_1 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        var_12 = (arr_5 [i_1 + 1] [i_1 + 1]);
        var_13 = (((arr_4 [i_1 + 1]) || (arr_6 [i_1 + 1])));

        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_14 = (min(var_14, 53789));
            /* LoopNest 2 */
            for (int i_3 = 3; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    {
                        arr_13 [i_4] [i_4] [i_3] [i_3] [i_2] [i_1] = ((239 * (arr_11 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_3] [i_3 - 2])));
                        arr_14 [i_3] [i_2] [i_3] = ((((237 ? 108 : 209)) * (arr_7 [i_1 + 1])));
                        var_15 = (((((384 / (arr_7 [i_1])))) ? (arr_10 [i_3 - 1] [i_3]) : (((arr_6 [3]) - var_5))));
                    }
                }
            }
        }
        var_16 = ((31585 << (((~216) + 217))));
    }
    var_17 = -1;
    var_18 = ((((((0 ^ var_5) ? -23369 : (32767 || var_5)))) ? ((var_6 - (~var_2))) : (min(((59 ? var_6 : 248)), var_1))));
    var_19 = (var_8 & var_10);
    var_20 = ((var_0 ? var_5 : var_0));
    #pragma endscop
}
