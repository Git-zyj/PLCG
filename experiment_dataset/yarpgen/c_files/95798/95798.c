/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95798
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_15 = (((arr_1 [i_0 + 2]) ? var_5 : (min(-1069710969, var_5))));
        arr_2 [i_0] = (((arr_1 [i_0 - 1]) == var_10));
        arr_3 [i_0] = -8298855858893847752;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_0] [i_0 + 1] [i_0] = ((+((var_14 ? (((arr_4 [i_0] [i_0]) >> (var_10 - 2012685511))) : 65525))));
                    arr_12 [i_0] [1] [i_0] = ((var_6 ? ((((arr_7 [i_2 + 1] [i_2 - 2] [i_2 - 2]) % var_1))) : var_0));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_16 = (max(var_16, 8298855858893847771));
                                var_17 *= 8298855858893847752;
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = (min(var_18, var_4));
    #pragma endscop
}
