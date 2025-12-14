/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1 - 1] [i_2] = -2854536124957715025;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_16 [6] [6] [i_0] [i_3] [6] = (((!32754) ? 11049 : 2431040837));
                                arr_17 [i_0] [i_0] [i_0] [i_3] [i_3] = ((+(((arr_4 [i_0] [i_0]) ? (-471369377 >= var_17) : (~var_14)))));
                                var_20 -= (((((arr_12 [8] [4] [i_2] [8] [i_2] [8]) == ((-44971923 ? (arr_2 [i_1] [i_2]) : var_0)))) ? (((((var_7 ? 18 : -44971933))) & (9822432379892454574 | 11064))) : -42));
                            }
                        }
                    }
                    var_21 = (min(var_21, ((((((arr_4 [6] [i_1 - 1]) ? (arr_4 [8] [i_1 - 1]) : -64)) % (arr_7 [i_1 + 1] [i_1 - 1] [10]))))));
                }
            }
        }
    }
    var_22 = (min((min(44971923, 14823379371527688909)), ((((((var_12 ? -24 : var_13))) ? (var_8 >> 1) : (max(var_16, var_2)))))));
    var_23 = (min((!4001789787278303317), var_1));
    var_24 = (min(var_24, (~var_2)));
    #pragma endscop
}
