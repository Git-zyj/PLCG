/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81882
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((min(var_9, (min(127, 7852))))) ? ((((max(7872, 7872))) << (var_7 - 87))) : (max((!var_7), (max(var_5, 1020385676))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = 18446744073709551615;
        arr_3 [i_0] [i_0] = ((-35 ? (var_9 - 6882207504390395354) : (var_0 ^ 119)));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_13 = (arr_13 [i_1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1]);
                                var_14 -= -7863;
                            }
                        }
                    }
                    var_15 ^= (arr_5 [i_0] [i_1 - 1] [i_2]);
                }
            }
        }
    }
    #pragma endscop
}
