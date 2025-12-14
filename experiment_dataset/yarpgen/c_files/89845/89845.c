/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= var_7;
    var_11 *= (~2200902533);

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_12 *= ((2200902542 ? 11 : 3));

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            arr_5 [i_1] [i_0] = (~2094064766);
            var_13 = (min(var_13, var_5));
        }
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_14 = (min(var_14, ((((((var_4 ? (((!(-2147483647 - 1)))) : (!37)))) ? var_4 : (min(-1, -36)))))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 11;i_4 += 1)
                {
                    {
                        var_15 *= ((((~(arr_7 [2] [i_2]))) <= (((2094064754 - (arr_11 [4] [i_0] [i_3] [4]))))));

                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            var_16 *= ((!((min(30720, (arr_6 [i_0] [i_0] [i_3]))))));
                            var_17 -= (((30720 ? 15 : (arr_8 [i_2] [i_4 + 3]))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
