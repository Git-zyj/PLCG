/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75901
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_10;
    var_12 = var_10;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_13 |= (((var_9 && var_7) / (((arr_1 [i_0]) ? (arr_1 [i_0]) : -9001))));
        var_14 = -4535;
        arr_4 [i_0] [1] = (arr_2 [i_0]);
        var_15 = (((((~(~-451698633)))) ? ((((((0 ? 7 : 242))) && (arr_0 [i_0] [i_0])))) : var_7));

        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            arr_7 [i_1] = ((((min((-2080 >= var_1), var_9))) ? (((arr_2 [i_1]) ? (~18446744073709551615) : 0)) : (arr_2 [i_0])));
            arr_8 [i_1] = 7;
        }
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        var_16 = (249 % 255);
        /* LoopNest 3 */
        for (int i_3 = 3; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 14;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 13;i_5 += 1)
                {
                    {
                        arr_19 [i_2] [i_3] [i_2] [i_2] [i_5 - 1] [i_5] = ((max((6 | 128), (arr_11 [i_3 - 3]))));
                        var_17 = (arr_16 [i_2] [i_2]);
                    }
                }
            }
        }
    }
    #pragma endscop
}
