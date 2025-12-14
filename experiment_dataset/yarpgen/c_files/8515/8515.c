/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8515
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(((((min(var_13, var_10))) ? var_5 : var_5)), ((1 >> (((18446744073709551601 ^ 2376330601) - 18446744071333221006))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_15 = (max(((var_12 ? (arr_2 [i_1 - 1] [i_1 - 1] [i_1 + 1]) : (((max((arr_4 [i_0] [i_1] [i_2]), var_4)))))), (((arr_11 [i_2 + 1] [i_2 - 1] [i_2 - 1]) ? (arr_3 [i_2 - 1]) : (arr_11 [i_2 + 2] [i_2 - 1] [i_2 + 3])))));
                                var_16 = (-80 + 1);
                            }
                        }
                    }
                    var_17 = (((~((~(arr_8 [i_2] [i_1 + 1] [i_1] [i_1 - 1] [i_0] [i_0]))))));
                    var_18 ^= ((+(((arr_1 [i_1 - 1] [i_2]) ? 1918636711 : var_10))));
                }
            }
        }
    }
    #pragma endscop
}
