/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76832
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_12 = arr_10 [4] [0] [i_2] [i_2];
                                arr_15 [i_4] [i_1] [i_2] [10] [i_2] = (arr_13 [i_1] [i_2] [i_2] [i_3 + 2] [i_4]);
                            }
                        }
                    }
                    var_13 *= (!10763758717715740872);
                }
            }
        }
        arr_16 [i_0] [i_0] = ((~(((!(arr_9 [18] [i_0] [i_0] [i_0]))))));
    }
    var_14 = (-46 ^ 10763758717715740872);
    var_15 = ((-((6984651933440177822 ? 1524269921 : 10763758717715740894))));
    #pragma endscop
}
