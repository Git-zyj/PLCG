/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57333
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [6] |= (((!27142) / ((((min(0, 16383))) ? 25 : 30))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_11 -= ((((-(arr_5 [i_1] [i_2]))) - (arr_5 [i_0] [i_2])));
                                arr_14 [i_1] [i_0] [i_4] = var_5;
                                arr_15 [i_2] [i_0] = (var_6 == var_1);
                                arr_16 [i_0] = 43363;
                            }
                        }
                    }
                }
            }
        }
    }
    var_12 = (((161 % 18446744073709551615) | (var_3 && -121)));
    var_13 = ((((~(min(var_9, var_2)))) & (((min(var_2, (113 <= var_8)))))));
    #pragma endscop
}
