/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77193
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_9 [i_0] [10] [i_1] [i_0] = ((!(((250 ^ ((16 ? (arr_1 [i_1] [i_0]) : (arr_6 [i_0] [2] [i_0]))))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        arr_12 [i_0] [16] [7] [1] [i_0] [i_0] = ((((!(arr_7 [i_0] [i_0]))) ? 207895304 : (arr_5 [i_0])));
                        arr_13 [i_0] [i_1] = ((-(((36459 > (arr_4 [i_3] [i_2]))))));
                    }
                    arr_14 [i_0] [i_0] = (min(23564, 241));
                    arr_15 [i_0] = (5413 ? 43173 : 29077);
                    arr_16 [i_2] [i_0] = arr_1 [6] [i_2];
                }
            }
        }
    }
    var_15 -= ((~(!14)));
    var_16 = var_8;
    #pragma endscop
}
