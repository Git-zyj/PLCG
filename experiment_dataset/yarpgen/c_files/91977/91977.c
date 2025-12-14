/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91977
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= (var_1 & var_10);
    var_13 = (min(var_13, (((((((min(var_8, var_6))) ^ ((var_2 ? -2073460985058341564 : var_10)))) <= var_9)))));
    var_14 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_15 = min((arr_6 [i_0] [i_0 - 1] [i_0 + 1] [i_0 + 2]), (arr_6 [i_0] [i_0 + 1] [i_0 + 1] [i_0]));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_14 [13] [i_4] [10] = (arr_1 [i_0 + 3] [i_1 + 4]);
                                var_16 = (min(var_16, (arr_2 [14])));
                                var_17 *= (((((((arr_7 [i_0] [i_1] [i_2] [i_3]) ? var_3 : var_2)))) != (arr_12 [i_0] [i_1] [i_4])));
                            }
                        }
                    }
                    var_18 -= (min((((((29316 ? (arr_6 [11] [i_1] [i_1] [i_0]) : 6165)) > (var_8 && var_10)))), (min((((3509957856615644424 >= (arr_1 [1] [i_2])))), var_2))));
                }
            }
        }
    }
    #pragma endscop
}
